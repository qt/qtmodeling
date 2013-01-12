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

#include "qport.h"
#include "qport_p.h"

#include <QtUml/QProtocolStateMachine>
#include <QtUml/QInterface>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QPortPrivate::QPortPrivate() :
    isConjugated(false),
    isBehavior(false),
    isService(true),
    protocol(0)
{
}

QPortPrivate::~QPortPrivate()
{
}

/*!
    \class QPort

    \inmodule QtUml

    \brief A port has an associated protocol state machine.A port is a property of a classifier that specifies a distinct interaction point between that classifier and its environment or between the (behavior of the) classifier and its internal parts. Ports are connected to properties of the classifier by connectors through which requests can be made to invoke the behavioral features of a classifier. A Port may specify the services a classifier provides (offers) to its environment as well as the services that a classifier expects (requires) of its environment.
 */

QPort::QPort(QWrappedObject *wrapper, QWrappedObject *parent) :
    QProperty(*new QPortPrivate, wrapper, parent)
{
    setPropertyData();
}

QPort::QPort(QPortPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QProperty(dd, wrapper, parent)
{
    setPropertyData();
}

QPort::~QPort()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPort
// ---------------------------------------------------------------

/*!
    Specifies the way that the provided and required interfaces are derived from the Port’s Type. The default value is false.
 */
bool QPort::isConjugated() const
{
    // This is a read-write attribute

    Q_D(const QPort);
    return d->isConjugated;
}

void QPort::setConjugated(bool isConjugated)
{
    // This is a read-write attribute

    Q_D(QPort);
    if (d->isConjugated != isConjugated) {
        d->isConjugated = isConjugated;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isConjugated");
}

void QPort::unsetConjugated()
{
    setConjugated(false);
    Q_D(QPort);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isConjugated"));
}

/*!
    Specifies whether requests arriving at this port are sent to the classifier behavior of this classifier. Such ports are referred to as behavior port. Any invocation of a behavioral feature targeted at a behavior port will be handled by the instance of the owning classifier itself, rather than by any instances that this classifier may contain.
 */
bool QPort::isBehavior() const
{
    // This is a read-write attribute

    Q_D(const QPort);
    return d->isBehavior;
}

void QPort::setBehavior(bool isBehavior)
{
    // This is a read-write attribute

    Q_D(QPort);
    if (d->isBehavior != isBehavior) {
        d->isBehavior = isBehavior;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isBehavior");
}

void QPort::unsetBehavior()
{
    setBehavior(false);
    Q_D(QPort);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isBehavior"));
}

/*!
    If true indicates that this port is used to provide the published functionality of a classifier; if false, this port is used to implement the classifier but is not part of the essential externally-visible functionality of the classifier and can, therefore, be altered or deleted along with the internal implementation of the classifier and other properties that are considered part of its implementation.
 */
bool QPort::isService() const
{
    // This is a read-write attribute

    Q_D(const QPort);
    return d->isService;
}

void QPort::setService(bool isService)
{
    // This is a read-write attribute

    Q_D(QPort);
    if (d->isService != isService) {
        d->isService = isService;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isService");
}

void QPort::unsetService()
{
    setService(true);
    Q_D(QPort);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isService"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QPort
// ---------------------------------------------------------------

/*!
    References an optional protocol state machine which describes valid interactions at this interaction point.
 */
QProtocolStateMachine *QPort::protocol() const
{
    // This is a read-write association end

    Q_D(const QPort);
    return d->protocol;
}

void QPort::setProtocol(QProtocolStateMachine *protocol)
{
    // This is a read-write association end

    Q_D(QPort);
    if (d->protocol != protocol) {
        d->protocol = protocol;
    }
}

/*!
    References the interfaces specifying the set of operations and receptions that the classifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of interfaces used by the type of the port and its supertypes. If isConjugated is true, it is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface.
 */
QSet<QInterface *> QPort::required() const
{
    // This is a read-only derived association end

    qWarning("QPort::required: to be implemented (this is a derived associationend)");

    return QSet<QInterface *>(); // change here to your derived return
}

/*!
    References the interfaces specifying the set of operations and receptions that the classifier offers to its environment via this port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface. If isConjugated is true, it is derived as the union of the sets of interfaces used by the type of the port and its supertypes.
 */
QSet<QInterface *> QPort::provided() const
{
    // This is a read-only derived association end

    qWarning("QPort::provided: to be implemented (this is a derived associationend)");

    return QSet<QInterface *>(); // change here to your derived return
}

/*!
    A port may be redefined when its containing classifier is specialized. The redefining port may have additional interfaces to those that are associated with the redefined port or it may replace an interface by one of its subtypes.
 */
QSet<QPort *> QPort::redefinedPorts() const
{
    // This is a read-write association end

    Q_D(const QPort);
    return d->redefinedPorts;
}

void QPort::addRedefinedPort(QPort *redefinedPort)
{
    // This is a read-write association end

    Q_D(QPort);
    if (!d->redefinedPorts.contains(redefinedPort)) {
        d->redefinedPorts.insert(redefinedPort);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QProperty *>(this))->addRedefinedProperty(qwrappedobject_cast<QProperty *>(redefinedPort));
    }
}

void QPort::removeRedefinedPort(QPort *redefinedPort)
{
    // This is a read-write association end

    Q_D(QPort);
    if (d->redefinedPorts.contains(redefinedPort)) {
        d->redefinedPorts.remove(redefinedPort);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QProperty *>(this))->removeRedefinedProperty(qwrappedobject_cast<QProperty *>(redefinedPort));
    }
}

void QPort::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the way that the provided and required interfaces are derived from the Port’s Type. The default value is false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isConjugated")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether requests arriving at this port are sent to the classifier behavior of this classifier. Such ports are referred to as behavior port. Any invocation of a behavioral feature targeted at a behavior port will be handled by the instance of the owning classifier itself, rather than by any instances that this classifier may contain.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isBehavior")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isService")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isService")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isService")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true indicates that this port is used to provide the published functionality of a classifier; if false, this port is used to implement the classifier but is not part of the essential externally-visible functionality of the classifier and can, therefore, be altered or deleted along with the internal implementation of the classifier and other properties that are considered part of its implementation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isService")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isService")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("isService")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("protocol")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("protocol")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("protocol")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References an optional protocol state machine which describes valid interactions at this interaction point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("protocol")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("protocol")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("protocol")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("required")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("required")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("required")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the interfaces specifying the set of operations and receptions that the classifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of interfaces used by the type of the port and its supertypes. If isConjugated is true, it is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("required")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("required")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("required")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("provided")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("provided")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("provided")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the interfaces specifying the set of operations and receptions that the classifier offers to its environment via this port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface. If isConjugated is true, it is derived as the union of the sets of interfaces used by the type of the port and its supertypes.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("provided")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("provided")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("provided")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A port may be redefined when its containing classifier is specialized. The redefining port may have additional interfaces to those that are associated with the redefined port or it may replace an interface by one of its subtypes.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QProperty::redefinedProperties");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPort")][QString::fromLatin1("redefinedPorts")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QProperty::setPropertyData();
}

// Overriden methods for subsetted properties

void QPort::addRedefinedProperty(QWrappedObjectPointer<QPort> redefinedPort)
{
    addRedefinedPort(redefinedPort);
}

void QPort::removeRedefinedProperty(QWrappedObjectPointer<QPort> redefinedPort)
{
    removeRedefinedPort(redefinedPort);
}

#include "moc_qport.cpp"

QT_END_NAMESPACE_QTUML

