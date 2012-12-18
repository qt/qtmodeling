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
    return d_ptr->propertyInfos.uniqueKeys().size();
}

int QMetaWrappedObject::propertyCount() const
{
    return d_ptr->propertyInfos.count();
}

int QMetaWrappedObject::propertyCount(int groupIndex) const
{
    return d_ptr->propertyInfos.count(d_ptr->propertyInfos.uniqueKeys().at(groupIndex));
}

const QMetaPropertyInfo &QMetaWrappedObject::property(int index) const
{
    QMultiMap<QString, QMetaPropertyInfo>::const_iterator i = d_ptr->propertyInfos.constBegin();
    return *(i+index);
}

const QMetaPropertyInfo &QMetaWrappedObject::property(int groupIndex, int index) const
{
    QMultiMap<QString, QMetaPropertyInfo>::const_iterator i = d_ptr->propertyInfos.find(d_ptr->propertyInfos.uniqueKeys().at(groupIndex));
    return *(i+index);
}

int QMetaWrappedObject::indexOfProperty(const char *name) const
{
    int i = 0;
    foreach (const QMetaPropertyInfo &propertyInfo, d_ptr->propertyInfos.values()) {
        if (propertyInfo == name)
            return i;
        ++i;
    }
    return -1;
}

int QMetaWrappedObject::indexOfGroup(const char *name) const
{
    return d_ptr->propertyInfos.uniqueKeys().lastIndexOf(QString::fromLatin1(name));
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
        for (int i = metaObject->propertyOffset(); i < propertyCount; ++i) {
            propertyInfo.metaProperty = metaObject->property(i);
            int index;
            if ((index = d_ptr->propertyInfos.values().indexOf(propertyInfo)) != -1)
                d_ptr->propertyInfos.remove(QString::fromLatin1(metaObject->className()), propertyInfo);
            d_ptr->propertyInfos.insertMulti(QString::fromLatin1(metaObject->className()), propertyInfo);
        }
    }
}

QT_END_NAMESPACE_QTWRAPPEDOBJECTS

