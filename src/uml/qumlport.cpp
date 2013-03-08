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

#include "qumlport.h"
#include "qumlport_p.h"

#include <QtUml/QUmlProtocolStateMachine>
#include <QtUml/QUmlInterface>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlPortPrivate::QUmlPortPrivate() :
    isConjugated(false),
    isBehavior(false),
    isService(true),
    protocol(0)
{
}

QUmlPortPrivate::~QUmlPortPrivate()
{
}

/*!
    \class QUmlPort

    \inmodule QtUml

    \brief A port has an associated protocol state machine.A port is a property of a classifier that specifies a distinct interaction point between that classifier and its environment or between the (behavior of the) classifier and its internal parts. Ports are connected to properties of the classifier by connectors through which requests can be made to invoke the behavioral features of a classifier. A Port may specify the services a classifier provides (offers) to its environment as well as the services that a classifier expects (requires) of its environment.
 */

QUmlPort::QUmlPort(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlProperty(*new QUmlPortPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlPort::QUmlPort(QUmlPortPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlProperty(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlPort::~QUmlPort()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlPort
// ---------------------------------------------------------------

/*!
    Specifies the way that the provided and required interfaces are derived from the Port’s Type. The default value is false.
 */
bool QUmlPort::isConjugated() const
{
    // This is a read-write attribute

    Q_D(const QUmlPort);
    return d->isConjugated;
}

void QUmlPort::setConjugated(bool isConjugated)
{
    // This is a read-write attribute

    Q_D(QUmlPort);
    if (d->isConjugated != isConjugated) {
        d->isConjugated = isConjugated;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isConjugated");
}

void QUmlPort::unsetConjugated()
{
    setConjugated(false);
    Q_D(QUmlPort);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isConjugated"));
}

/*!
    Specifies whether requests arriving at this port are sent to the classifier behavior of this classifier. Such ports are referred to as behavior port. Any invocation of a behavioral feature targeted at a behavior port will be handled by the instance of the owning classifier itself, rather than by any instances that this classifier may contain.
 */
bool QUmlPort::isBehavior() const
{
    // This is a read-write attribute

    Q_D(const QUmlPort);
    return d->isBehavior;
}

void QUmlPort::setBehavior(bool isBehavior)
{
    // This is a read-write attribute

    Q_D(QUmlPort);
    if (d->isBehavior != isBehavior) {
        d->isBehavior = isBehavior;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isBehavior");
}

void QUmlPort::unsetBehavior()
{
    setBehavior(false);
    Q_D(QUmlPort);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isBehavior"));
}

/*!
    If true indicates that this port is used to provide the published functionality of a classifier; if false, this port is used to implement the classifier but is not part of the essential externally-visible functionality of the classifier and can, therefore, be altered or deleted along with the internal implementation of the classifier and other properties that are considered part of its implementation.
 */
bool QUmlPort::isService() const
{
    // This is a read-write attribute

    Q_D(const QUmlPort);
    return d->isService;
}

void QUmlPort::setService(bool isService)
{
    // This is a read-write attribute

    Q_D(QUmlPort);
    if (d->isService != isService) {
        d->isService = isService;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isService");
}

void QUmlPort::unsetService()
{
    setService(true);
    Q_D(QUmlPort);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isService"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlPort
// ---------------------------------------------------------------

/*!
    References an optional protocol state machine which describes valid interactions at this interaction point.
 */
QUmlProtocolStateMachine *QUmlPort::protocol() const
{
    // This is a read-write association end

    Q_D(const QUmlPort);
    return d->protocol;
}

void QUmlPort::setProtocol(QUmlProtocolStateMachine *protocol)
{
    // This is a read-write association end

    Q_D(QUmlPort);
    if (d->protocol != protocol) {
        d->protocol = protocol;
    }
}

/*!
    References the interfaces specifying the set of operations and receptions that the classifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of interfaces used by the type of the port and its supertypes. If isConjugated is true, it is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface.
 */
QSet<QUmlInterface *> QUmlPort::required() const
{
    // This is a read-only derived association end

    qWarning("QUmlPort::required: to be implemented (this is a derived associationend)");

    return QSet<QUmlInterface *>(); // change here to your derived return
}

/*!
    References the interfaces specifying the set of operations and receptions that the classifier offers to its environment via this port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface. If isConjugated is true, it is derived as the union of the sets of interfaces used by the type of the port and its supertypes.
 */
QSet<QUmlInterface *> QUmlPort::provided() const
{
    // This is a read-only derived association end

    qWarning("QUmlPort::provided: to be implemented (this is a derived associationend)");

    return QSet<QUmlInterface *>(); // change here to your derived return
}

/*!
    A port may be redefined when its containing classifier is specialized. The redefining port may have additional interfaces to those that are associated with the redefined port or it may replace an interface by one of its subtypes.
 */
QSet<QUmlPort *> QUmlPort::redefinedPorts() const
{
    // This is a read-write association end

    Q_D(const QUmlPort);
    return d->redefinedPorts;
}

void QUmlPort::addRedefinedPort(QUmlPort *redefinedPort)
{
    // This is a read-write association end

    Q_D(QUmlPort);
    if (!d->redefinedPorts.contains(redefinedPort)) {
        d->redefinedPorts.insert(redefinedPort);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlProperty *>(this))->addRedefinedProperty(qwrappedobject_cast<QUmlProperty *>(redefinedPort));
    }
}

void QUmlPort::removeRedefinedPort(QUmlPort *redefinedPort)
{
    // This is a read-write association end

    Q_D(QUmlPort);
    if (d->redefinedPorts.contains(redefinedPort)) {
        d->redefinedPorts.remove(redefinedPort);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlProperty *>(this))->removeRedefinedProperty(qwrappedobject_cast<QUmlProperty *>(redefinedPort));
    }
}

void QUmlPort::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the way that the provided and required interfaces are derived from the Port’s Type. The default value is false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether requests arriving at this port are sent to the classifier behavior of this classifier. Such ports are referred to as behavior port. Any invocation of a behavioral feature targeted at a behavior port will be handled by the instance of the owning classifier itself, rather than by any instances that this classifier may contain.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isService")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isService")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isService")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true indicates that this port is used to provide the published functionality of a classifier; if false, this port is used to implement the classifier but is not part of the essential externally-visible functionality of the classifier and can, therefore, be altered or deleted along with the internal implementation of the classifier and other properties that are considered part of its implementation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isService")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isService")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("isService")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("protocol")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("protocol")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("protocol")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References an optional protocol state machine which describes valid interactions at this interaction point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("protocol")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("protocol")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("protocol")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("required")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("required")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("required")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the interfaces specifying the set of operations and receptions that the classifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of interfaces used by the type of the port and its supertypes. If isConjugated is true, it is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("required")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("required")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("required")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("provided")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("provided")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("provided")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the interfaces specifying the set of operations and receptions that the classifier offers to its environment via this port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface. If isConjugated is true, it is derived as the union of the sets of interfaces used by the type of the port and its supertypes.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("provided")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("provided")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("provided")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A port may be redefined when its containing classifier is specialized. The redefining port may have additional interfaces to those that are associated with the redefined port or it may replace an interface by one of its subtypes.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlProperty::redefinedProperties");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlProperty::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlPort::addRedefinedProperty(QWrappedObjectPointer<QUmlPort> redefinedPort)
{
    addRedefinedPort(redefinedPort);
}

void QUmlPort::removeRedefinedProperty(QWrappedObjectPointer<QUmlPort> redefinedPort)
{
    removeRedefinedPort(redefinedPort);
}

QT_END_NAMESPACE

#include "moc_qumlport.cpp"

