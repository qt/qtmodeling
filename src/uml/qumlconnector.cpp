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

#include "qumlconnector.h"
#include "qumlconnector_p.h"

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlConnectorEnd>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlConnectorPrivate::QUmlConnectorPrivate() :
    type(0)
{
}

QUmlConnectorPrivate::~QUmlConnectorPrivate()
{
}

/*!
    \class QUmlConnector

    \inmodule QtUml

    \brief A delegation connector is a connector that links the external contract of a component (as specified by its ports) to the realization of that behavior. It represents the forwarding of events (operation requests and events): a signal that arrives at a port that has a delegation connector to one or more parts or ports on parts will be passed on to those targets for handling. An assembly connector is a connector between two or more parts or ports on parts that defines that one or more parts provide the services that other parts use.Specifies a link that enables communication between two or more instances. This link may be an instance of an association, or it may represent the possibility of the instances being able to communicate because their identities are known by virtue of being passed in as parameters, held in variables or slots, or because the communicating instances are the same instance. The link may be realized by something as simple as a pointer or by something as complex as a network connection. In contrast to associations, which specify links between any instance of the associated classifiers, connectors specify links between instances playing the connected parts only.
 */

QUmlConnector::QUmlConnector(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlFeature(*new QUmlConnectorPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlConnector::QUmlConnector(QUmlConnectorPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlFeature(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlConnector::~QUmlConnector()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlConnector
// ---------------------------------------------------------------

/*!
    Indicates the kind of connector. This is derived: a connector with one or more ends connected to a Port which is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly.
 */
QtUml::ConnectorKind QUmlConnector::kind() const
{
    // This is a read-only derived attribute

    qWarning("QUmlConnector::kind: to be implemented (this is a derived attribute)");

    return QtUml::ConnectorKind(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlConnector
// ---------------------------------------------------------------

/*!
    A connector may be redefined when its containing classifier is specialized. The redefining connector may have a type that specializes the type of the redefined connector. The types of the connector ends of the redefining connector may specialize the types of the connector ends of the redefined connector. The properties of the connector ends of the redefining connector may be replaced.
 */
QSet<QUmlConnector *> QUmlConnector::redefinedConnectors() const
{
    // This is a read-write association end

    Q_D(const QUmlConnector);
    return d->redefinedConnectors;
}

void QUmlConnector::addRedefinedConnector(QUmlConnector *redefinedConnector)
{
    // This is a read-write association end

    Q_D(QUmlConnector);
    if (!d->redefinedConnectors.contains(redefinedConnector)) {
        d->redefinedConnectors.insert(redefinedConnector);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedConnector));
    }
}

void QUmlConnector::removeRedefinedConnector(QUmlConnector *redefinedConnector)
{
    // This is a read-write association end

    Q_D(QUmlConnector);
    if (d->redefinedConnectors.contains(redefinedConnector)) {
        d->redefinedConnectors.remove(redefinedConnector);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedConnector));
    }
}

/*!
    The set of Behaviors that specify the valid interaction patterns across the connector.
 */
QSet<QUmlBehavior *> QUmlConnector::contracts() const
{
    // This is a read-write association end

    Q_D(const QUmlConnector);
    return d->contracts;
}

void QUmlConnector::addContract(QUmlBehavior *contract)
{
    // This is a read-write association end

    Q_D(QUmlConnector);
    if (!d->contracts.contains(contract)) {
        d->contracts.insert(contract);
    }
}

void QUmlConnector::removeContract(QUmlBehavior *contract)
{
    // This is a read-write association end

    Q_D(QUmlConnector);
    if (d->contracts.contains(contract)) {
        d->contracts.remove(contract);
    }
}

/*!
    An optional association that specifies the link corresponding to this connector.
 */
QUmlAssociation *QUmlConnector::type() const
{
    // This is a read-write association end

    Q_D(const QUmlConnector);
    return d->type;
}

void QUmlConnector::setType(QUmlAssociation *type)
{
    // This is a read-write association end

    Q_D(QUmlConnector);
    if (d->type != type) {
        d->type = type;
    }
}

/*!
    A connector consists of at least two connector ends, each representing the participation of instances of the classifiers typing the connectable elements attached to this end. The set of connector ends is ordered.
 */
QList<QUmlConnectorEnd *> QUmlConnector::ends() const
{
    // This is a read-write association end

    Q_D(const QUmlConnector);
    return d->ends;
}

void QUmlConnector::addEnd(QUmlConnectorEnd *end)
{
    // This is a read-write association end

    Q_D(QUmlConnector);
    if (!d->ends.contains(end)) {
        d->ends.append(end);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(end));
    }
}

void QUmlConnector::removeEnd(QUmlConnectorEnd *end)
{
    // This is a read-write association end

    Q_D(QUmlConnector);
    if (d->ends.contains(end)) {
        d->ends.removeAll(end);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(end));
    }
}

void QUmlConnector::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("kind")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("kind")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("kind")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates the kind of connector. This is derived: a connector with one or more ends connected to a Port which is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("kind")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("kind")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("kind")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("redefinedConnectors")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("redefinedConnectors")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("redefinedConnectors")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A connector may be redefined when its containing classifier is specialized. The redefining connector may have a type that specializes the type of the redefined connector. The types of the connector ends of the redefining connector may specialize the types of the connector ends of the redefined connector. The properties of the connector ends of the redefining connector may be replaced.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("redefinedConnectors")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("redefinedConnectors")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("redefinedConnectors")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("contracts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("contracts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("contracts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of Behaviors that specify the valid interaction patterns across the connector.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("contracts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("contracts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("contracts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("type")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("type")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("type")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional association that specifies the link corresponding to this connector.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("type")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("type")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("type")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("ends")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("ends")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("ends")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A connector consists of at least two connector ends, each representing the participation of instances of the classifiers typing the connectable elements attached to this end. The set of connector ends is ordered.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("ends")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("ends")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnector")][QString::fromLatin1("ends")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlFeature::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlconnector.cpp"

