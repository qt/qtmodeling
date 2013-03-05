/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

#include "qinstancevalue.h"
#include "qinstancevalue_p.h"

#include <QtUml/QInstanceSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QInstanceValuePrivate::QInstanceValuePrivate() :
    instance(0)
{
}

QInstanceValuePrivate::~QInstanceValuePrivate()
{
}

/*!
    \class QInstanceValue

    \inmodule QtUml

    \brief An instance value is a value specification that identifies an instance.
 */

QInstanceValue::QInstanceValue(QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(*new QInstanceValuePrivate, wrapper, parent)
{
    setPropertyData();
}

QInstanceValue::QInstanceValue(QInstanceValuePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QInstanceValue::~QInstanceValue()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInstanceValue
// ---------------------------------------------------------------

/*!
    The instance that is the specified value.
 */
QInstanceSpecification *QInstanceValue::instance() const
{
    // This is a read-write association end

    Q_D(const QInstanceValue);
    return d->instance;
}

void QInstanceValue::setInstance(QInstanceSpecification *instance)
{
    // This is a read-write association end

    Q_D(QInstanceValue);
    if (d->instance != instance) {
        d->instance = instance;
    }
}

void QInstanceValue::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QInstanceValue")][QString::fromLatin1("instance")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QInstanceValue")][QString::fromLatin1("instance")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QInstanceValue")][QString::fromLatin1("instance")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The instance that is the specified value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QInstanceValue")][QString::fromLatin1("instance")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QInstanceValue")][QString::fromLatin1("instance")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QInstanceValue")][QString::fromLatin1("instance")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QValueSpecification::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qinstancevalue.cpp"

