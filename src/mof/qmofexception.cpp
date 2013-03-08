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

#include "qmofexception.h"
#include "qmofexception_p.h"

#include <QtMof/QMofElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofExceptionPrivate::QMofExceptionPrivate() :
    elementInError(0),
    objectInError(0)
{
}

QMofExceptionPrivate::~QMofExceptionPrivate()
{
}


QMofException::QMofException(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofExceptionPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofException::QMofException(QMofExceptionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QMofException::~QMofException()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofException
// ---------------------------------------------------------------

QString QMofException::description() const
{
    // This is a read-write attribute

    Q_D(const QMofException);
    return d->description;
}

void QMofException::setDescription(QString description)
{
    // This is a read-write attribute

    Q_D(QMofException);
    if (d->description != description) {
        d->description = description;
    }
}

QMofElement *QMofException::elementInError() const
{
    // This is a read-write attribute

    Q_D(const QMofException);
    return d->elementInError;
}

void QMofException::setElementInError(QMofElement *elementInError)
{
    // This is a read-write attribute

    Q_D(QMofException);
    if (d->elementInError != elementInError) {
        d->elementInError = elementInError;
    }
}

QMofElement *QMofException::objectInError() const
{
    // This is a read-write attribute

    Q_D(const QMofException);
    return d->objectInError;
}

void QMofException::setObjectInError(QMofElement *objectInError)
{
    // This is a read-write attribute

    Q_D(QMofException);
    if (d->objectInError != objectInError) {
        d->objectInError = objectInError;
    }
}

void QMofException::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("description")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("description")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("description")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("description")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("description")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("description")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("elementInError")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("elementInError")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("elementInError")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("elementInError")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("elementInError")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("elementInError")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("objectInError")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("objectInError")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("objectInError")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("objectInError")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("objectInError")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofException")][QString::fromLatin1("objectInError")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofexception.cpp"

