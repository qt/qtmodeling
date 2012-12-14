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

int QMetaWrappedObject::propertyCount() const
{
    return d_ptr->propertyInfos.size();
}

void QMetaWrappedObject::handleWrappedObjectProperties(const QWrappedObject *wrappingObject, QStringList &visitedClasses) const
{
    const QMetaObject *metaObject = wrappingObject->metaObject();
    QMetaWrappedObjectPrivate::PropertyInfo propertyInfo;
    while (metaObject && !visitedClasses.contains(QString::fromLatin1(metaObject->className()))) {
        visitedClasses << QString::fromLatin1(metaObject->className());
        propertyInfo.propertyWrappedObject = wrappingObject;
        propertyInfo.wasChanged = false;
        int propertyCount = metaObject->propertyCount();
        for (int i = metaObject->propertyOffset(); i < propertyCount; ++i) {
            propertyInfo.metaProperty = metaObject->property(i);
            d_ptr->propertyInfos << propertyInfo;
        }
        metaObject = metaObject->superClass();
    }
    foreach (QWrappedObject *wrappedObject, wrappingObject->wrappedObjects())
        handleWrappedObjectProperties(wrappedObject, visitedClasses);
}

QT_END_NAMESPACE_QTWRAPPEDOBJECTS

