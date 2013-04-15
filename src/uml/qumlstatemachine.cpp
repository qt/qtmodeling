/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlstatemachine.h"
#include "qumlstatemachine_p.h"

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRegion>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStateMachinePrivate::QUmlStateMachinePrivate()
{
}

QUmlStateMachinePrivate::~QUmlStateMachinePrivate()
{
}

/*!
    \class QUmlStateMachine

    \inmodule QtUml

    \brief State machines can be used to express the behavior of part of a system. Behavior is modeled as a traversal of a graph of state nodes interconnected by one or more joined transition arcs that are triggered by the dispatching of series of (event) occurrences. During this traversal, the state machine executes a series of activities associated with various elements of the state machine.
 */

QUmlStateMachine::QUmlStateMachine(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlBehavior(*new QUmlStateMachinePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlStateMachine::QUmlStateMachine(QUmlStateMachinePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlBehavior(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlStateMachine::~QUmlStateMachine()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStateMachine
// ---------------------------------------------------------------

/*!
    The state machines of which this is an extension.
 */
QSet<QUmlStateMachine *> QUmlStateMachine::extendedStateMachines() const
{
    // This is a read-write association end

    Q_D(const QUmlStateMachine);
    return d->extendedStateMachines;
}

void QUmlStateMachine::addExtendedStateMachine(QUmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (!d->extendedStateMachines.contains(extendedStateMachine)) {
        d->extendedStateMachines.insert(extendedStateMachine);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlBehavior *>(this))->addRedefinedBehavior(qwrappedobject_cast<QUmlBehavior *>(extendedStateMachine));
    }
}

void QUmlStateMachine::removeExtendedStateMachine(QUmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (d->extendedStateMachines.contains(extendedStateMachine)) {
        d->extendedStateMachines.remove(extendedStateMachine);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlBehavior *>(this))->removeRedefinedBehavior(qwrappedobject_cast<QUmlBehavior *>(extendedStateMachine));
    }
}

/*!
    The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.
 */
QSet<QUmlPseudostate *> QUmlStateMachine::connectionPoints() const
{
    // This is a read-write association end

    Q_D(const QUmlStateMachine);
    return d->connectionPoints;
}

void QUmlStateMachine::addConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (!d->connectionPoints.contains(connectionPoint)) {
        d->connectionPoints.insert(connectionPoint);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(connectionPoint));

        // Adjust opposite property
        connectionPoint->setStateMachine(this);
    }
}

void QUmlStateMachine::removeConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (d->connectionPoints.contains(connectionPoint)) {
        d->connectionPoints.remove(connectionPoint);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(connectionPoint));

        // Adjust opposite property
        connectionPoint->setStateMachine(0);
    }
}

/*!
    References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.
 */
QSet<QUmlState *> QUmlStateMachine::submachineStates() const
{
    // This is a read-write association end

    Q_D(const QUmlStateMachine);
    return d->submachineStates;
}

void QUmlStateMachine::addSubmachineState(QUmlState *submachineState)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (!d->submachineStates.contains(submachineState)) {
        d->submachineStates.insert(submachineState);

        // Adjust opposite property
        submachineState->setSubmachine(this);
    }
}

void QUmlStateMachine::removeSubmachineState(QUmlState *submachineState)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (d->submachineStates.contains(submachineState)) {
        d->submachineStates.remove(submachineState);

        // Adjust opposite property
        submachineState->setSubmachine(0);
    }
}

/*!
    The regions owned directly by the state machine.
 */
QSet<QUmlRegion *> QUmlStateMachine::regions() const
{
    // This is a read-write association end

    Q_D(const QUmlStateMachine);
    return d->regions;
}

void QUmlStateMachine::addRegion(QUmlRegion *region)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (!d->regions.contains(region)) {
        d->regions.insert(region);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(region));

        // Adjust opposite property
        region->setStateMachine(this);
    }
}

void QUmlStateMachine::removeRegion(QUmlRegion *region)
{
    // This is a read-write association end

    Q_D(QUmlStateMachine);
    if (d->regions.contains(region)) {
        d->regions.remove(region);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(region));

        // Adjust opposite property
        region->setStateMachine(0);
    }
}

/*!
    The operation LCA(s1,s2) returns an orthogonal state or region which is the least common ancestor of states s1 and s2, based on the statemachine containment hierarchy.
 */
QUmlNamespace *QUmlStateMachine::LCA(const QUmlState *s1, const QUmlState *s2) const
{
    qWarning("QUmlStateMachine::LCA: operation to be implemented");
    Q_UNUSED(s1);
    Q_UNUSED(s2);

    return 0; // change here to your derived return
}

/*!
    The query ancestor(s1, s2) checks whether s1 is an ancestor state of state s2.
 */
bool QUmlStateMachine::ancestor(const QUmlState *s1, const QUmlState *s2) const
{
    qWarning("QUmlStateMachine::ancestor: operation to be implemented");
    Q_UNUSED(s1);
    Q_UNUSED(s2);

    return bool(); // change here to your derived return
}

/*!
    The query isConsistentWith() specifies that a redefining state machine is consistent with a redefined state machine provided that the redefining state machine is an extension of the redefined state machine: Regions are inherited and regions can be added, inherited regions can be redefined. In case of multiple redefining state machines, extension implies that the redefining state machine gets orthogonal regions for each of the redefined state machines.
 */
bool QUmlStateMachine::isConsistentWith(const QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlStateMachine::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a statemachine are properly related to the redefinition contexts of the specified statemachine to allow this element to redefine the other. The containing classifier of a redefining statemachine must redefine the containing classifier of the redefined statemachine.
 */
bool QUmlStateMachine::isRedefinitionContextValid(const QUmlStateMachine *redefined) const
{
    qWarning("QUmlStateMachine::isRedefinitionContextValid: operation to be implemented");
    Q_UNUSED(redefined);

    return bool(); // change here to your derived return
}

void QUmlStateMachine::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("extendedStateMachines")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("extendedStateMachines")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("extendedStateMachines")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The state machines of which this is an extension.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("extendedStateMachines")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlBehavior::redefinedBehaviors");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("extendedStateMachines")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("extendedStateMachines")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPseudostate::stateMachine");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("submachineStates")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("submachineStates")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("submachineStates")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("submachineStates")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("submachineStates")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("submachineStates")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlState::submachine");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("regions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("regions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("regions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The regions owned directly by the state machine.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("regions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("regions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStateMachine")][QString::fromLatin1("regions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlRegion::stateMachine");

    QUmlBehavior::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstatemachine.cpp"

