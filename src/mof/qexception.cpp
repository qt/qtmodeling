/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qexception.h"
#include "qexception_p.h"

#include <QtMof/QElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtMof
{

QExceptionPrivate::QExceptionPrivate() :
    elementInError(0),
    objectInError(0)
{
}

QExceptionPrivate::~QExceptionPrivate()
{
}


QException::QException(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QExceptionPrivate, wrapper, parent)
{
    setPropertyData();
}

QException::QException(QExceptionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QException::~QException()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QException
// ---------------------------------------------------------------

QString QException::description() const
{
    // This is a read-write attribute

    Q_D(const QException);
    return d->description;
}

void QException::setDescription(QString description)
{
    // This is a read-write attribute

    Q_D(QException);
    if (d->description != description) {
        d->description = description;
    }
}

QElement *QException::elementInError() const
{
    // This is a read-write attribute

    Q_D(const QException);
    return d->elementInError;
}

void QException::setElementInError(QElement *elementInError)
{
    // This is a read-write attribute

    Q_D(QException);
    if (d->elementInError != elementInError) {
        d->elementInError = elementInError;
    }
}

QElement *QException::objectInError() const
{
    // This is a read-write attribute

    Q_D(const QException);
    return d->objectInError;
}

void QException::setObjectInError(QElement *objectInError)
{
    // This is a read-write attribute

    Q_D(QException);
    if (d->objectInError != objectInError) {
        d->objectInError = objectInError;
    }
}

void QException::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("description")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("description")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("description")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("description")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("description")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("description")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("elementInError")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("elementInError")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("elementInError")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("elementInError")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("elementInError")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("elementInError")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("objectInError")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("objectInError")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("objectInError")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("objectInError")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("objectInError")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QException")][QString::fromLatin1("objectInError")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qexception.cpp"

