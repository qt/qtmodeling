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

#include "qumlconnectorend.h"
#include "qumlconnectorend_p.h"

#include "qumlconnectableelement_p.h"

#include <QtUml/QUmlProperty>
#include <QtUml/QUmlConnectableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlConnectorEndPrivate::QUmlConnectorEndPrivate() :
    role(0),
    partWithPort(0)
{
}

QUmlConnectorEndPrivate::~QUmlConnectorEndPrivate()
{
}

/*!
    \class QUmlConnectorEnd

    \inmodule QtUml

    \brief A connector end is an endpoint of a connector, which attaches the connector to a connectable element. Each connector end is part of one connector.
 */

QUmlConnectorEnd::QUmlConnectorEnd(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlMultiplicityElement(*new QUmlConnectorEndPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlConnectorEnd::QUmlConnectorEnd(QUmlConnectorEndPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlMultiplicityElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlConnectorEnd::~QUmlConnectorEnd()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlConnectorEnd
// ---------------------------------------------------------------

/*!
    The connectable element attached at this connector end. When an instance of the containing classifier is created, a link may (depending on the multiplicities) be created to an instance of the classifier that types this connectable element.
 */
QUmlConnectableElement *QUmlConnectorEnd::role() const
{
    // This is a read-write association end

    Q_D(const QUmlConnectorEnd);
    return d->role;
}

void QUmlConnectorEnd::setRole(QUmlConnectableElement *role)
{
    // This is a read-write association end

    Q_D(QUmlConnectorEnd);
    if (d->role != role) {
        // Adjust opposite property
        if (d->role)
            (qwrappedobject_cast<QUmlConnectableElementPrivate *>(d->role->d_func()))->removeEnd(this);

        d->role = role;

        // Adjust opposite property
        if (role)
            (qwrappedobject_cast<QUmlConnectableElementPrivate *>(role->d_func()))->addEnd(this);
    }
}

/*!
    Indicates the role of the internal structure of a classifier with the port to which the connector end is attached.
 */
QUmlProperty *QUmlConnectorEnd::partWithPort() const
{
    // This is a read-write association end

    Q_D(const QUmlConnectorEnd);
    return d->partWithPort;
}

void QUmlConnectorEnd::setPartWithPort(QUmlProperty *partWithPort)
{
    // This is a read-write association end

    Q_D(QUmlConnectorEnd);
    if (d->partWithPort != partWithPort) {
        d->partWithPort = partWithPort;
    }
}

/*!
    A derived association referencing the corresponding association end on the association which types the connector owing this connector end. This association is derived by selecting the association end at the same place in the ordering of association ends as this connector end.
 */
QUmlProperty *QUmlConnectorEnd::definingEnd() const
{
    // This is a read-only derived association end

    qWarning("QUmlConnectorEnd::definingEnd: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QUmlConnectorEnd::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("role")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("role")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("role")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The connectable element attached at this connector end. When an instance of the containing classifier is created, a link may (depending on the multiplicities) be created to an instance of the classifier that types this connectable element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("role")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("role")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("role")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlConnectableElement::end");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("partWithPort")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("partWithPort")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("partWithPort")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates the role of the internal structure of a classifier with the port to which the connector end is attached.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("partWithPort")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("partWithPort")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("partWithPort")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("definingEnd")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("definingEnd")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("definingEnd")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A derived association referencing the corresponding association end on the association which types the connector owing this connector end. This association is derived by selecting the association end at the same place in the ordering of association ends as this connector end.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("definingEnd")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("definingEnd")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectorEnd")][QString::fromLatin1("definingEnd")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlMultiplicityElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlconnectorend.cpp"

