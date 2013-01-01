/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtWrappedObjects module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmetawrappedobject.h"
#include "qmetawrappedobject_p.h"
#include "qwrappedobject_p.h"

#include <QtWrappedObjects/QWrappedObject>
#include <QtCore/QMetaObject>
#include <QtCore/QStringList>
#include <QtCore/QStack>

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS

QMetaWrappedObjectPrivate::QMetaWrappedObjectPrivate()
{
}

QMetaWrappedObjectPrivate::~QMetaWrappedObjectPrivate()
{
}

QMetaWrappedObject::QMetaWrappedObject(QWrappedObject *wrappedObject)
    : d_ptr(new QMetaWrappedObjectPrivate)
{
    initialize(wrappedObject);
}

QMetaWrappedObject::QMetaWrappedObject(QMetaWrappedObjectPrivate &dd, QWrappedObject *wrappedObject)
    : d_ptr(&dd)
{
    initialize(wrappedObject);
}

void QMetaWrappedObject::initialize(QWrappedObject *wrappedObject)
{
    d_ptr->q_ptr = this;
    d_ptr->wrappedObject = wrappedObject;

    QStringList visitedClasses;
    handleWrappedObjectProperties(d_ptr->wrappedObject, visitedClasses);
}

QMetaWrappedObject::~QMetaWrappedObject()
{
    delete d_ptr;
}

int QMetaWrappedObject::propertyGroupCount() const
{
    return d_ptr->propertyGroupInfos.count();
}

int QMetaWrappedObject::propertyCount() const
{
    return d_ptr->propertyInfos.count();
}

int QMetaWrappedObject::propertyCount(int groupIndex) const
{
    return (groupIndex < d_ptr->propertyGroupInfos.count() - 1) ?
               d_ptr->propertyGroupInfos[groupIndex+1].second - d_ptr->propertyGroupInfos[groupIndex].second
               :
               d_ptr->propertyInfos.count() - d_ptr->propertyGroupInfos[groupIndex].second;
}

QMetaPropertyInfo &QMetaWrappedObject::property(int index) const
{
    QList<QMetaPropertyInfo>::iterator i = d_ptr->propertyInfos.begin();
    return *(i+index);
}

QMetaPropertyInfo &QMetaWrappedObject::property(int groupIndex, int index) const
{
    QList<QMetaPropertyInfo>::iterator i = d_ptr->propertyInfos.begin();
    return *(i+d_ptr->propertyGroupInfos[groupIndex].second+index);
}

int QMetaWrappedObject::indexOfProperty(const char *name) const
{
    QList<QMetaPropertyInfo>::const_iterator iend = d_ptr->propertyInfos.constEnd();
    for (QList<QMetaPropertyInfo>::const_iterator i = d_ptr->propertyInfos.constBegin(); i < iend; ++i)
        if (*i == name)
            return i-d_ptr->propertyInfos.constBegin();
    return -1;
}

int QMetaWrappedObject::indexOfGroup(const char *name) const
{
    QList<QPair<QString, int>>::const_iterator iend = d_ptr->propertyGroupInfos.constEnd();
    for (QList<QPair<QString, int>>::const_iterator i = d_ptr->propertyGroupInfos.constBegin(); i < iend; ++i)
        if (i->first == QString::fromLatin1(name))
            return i-d_ptr->propertyGroupInfos.constBegin();
    return -1;
}

void QMetaWrappedObject::handleWrappedObjectProperties(const QWrappedObject *wrappingObject, QStringList &visitedClasses) const
{
    foreach (QWrappedObject *wrappedObject, wrappingObject->wrappedObjects())
        handleWrappedObjectProperties(wrappedObject, visitedClasses);

    const QMetaObject *metaObject = wrappingObject->metaObject();
    QStack<const QMetaObject *> metaObjects;
    while (metaObject) {
        metaObjects.push(metaObject);
        metaObject = metaObject->superClass();
    }
    QMetaPropertyInfo propertyInfo;
    while (!metaObjects.isEmpty()) {
        metaObject = metaObjects.pop();
        if (visitedClasses.contains(QString::fromLatin1(metaObject->className())))
            continue;
        visitedClasses << QString::fromLatin1(metaObject->className());
        propertyInfo.propertyMetaObject = metaObject;
        propertyInfo.propertyWrappedObject = const_cast<QWrappedObject *>(wrappingObject);
        propertyInfo.wasChanged = false;
        int propertyCount = metaObject->propertyCount();
        if (propertyCount - metaObject->propertyOffset() > 0)
            d_ptr->propertyGroupInfos << QPair<QString, int>(QString::fromLatin1(metaObject->className()), d_ptr->propertyInfos.size());
        for (int i = metaObject->propertyOffset(); i < propertyCount; ++i) {
            propertyInfo.metaProperty = metaObject->property(i);
            int index;
            if ((index = d_ptr->propertyInfos.indexOf(propertyInfo)) != -1) {
                d_ptr->propertyInfos.removeAll(propertyInfo);
                QList<QPair<QString, int>>::iterator iend = d_ptr->propertyGroupInfos.end();
                for (QList<QPair<QString, int>>::iterator i = d_ptr->propertyGroupInfos.begin(); i < iend; ++i)
                   if (i->second > index)
                       i->second--;
            }
            d_ptr->propertyInfos << propertyInfo;
        }
    }
}

QT_END_NAMESPACE_QTWRAPPEDOBJECTS

