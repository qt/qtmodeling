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

#include "qstate.h"
#include "qstate_p.h"
#include "qnamespace_p.h"
#include "qelement_p.h"
#include "qredefinableelement_p.h"

#include <QtUml/QConstraint>
#include <QtUml/QRegion>
#include <QtUml/QStateMachine>
#include <QtUml/QClassifier>
#include <QtUml/QBehavior>
#include <QtUml/QConnectionPointReference>
#include <QtUml/QTrigger>
#include <QtUml/QPseudostate>

QT_BEGIN_NAMESPACE_QTUML

QStatePrivate::QStatePrivate() :
    regions(new QSet<QRegion *>),
    exit(0),
    connections(new QSet<QConnectionPointReference *>),
    redefinedState(0),
    deferrableTriggers(new QSet<QTrigger *>),
    connectionPoints(new QSet<QPseudostate *>),
    entry(0),
    doActivity(0),
    submachine(0),
    stateInvariant(0)
{
}

QStatePrivate::~QStatePrivate()
{
    delete regions;
    delete connections;
    delete deferrableTriggers;
    delete connectionPoints;
}

void QStatePrivate::addRegion(QRegion *region)
{
    this->regions->insert(region);

    // Adjust subsetted property(ies)
    addOwnedMember(region);
}

void QStatePrivate::removeRegion(QRegion *region)
{
    this->regions->remove(region);

    // Adjust subsetted property(ies)
    removeOwnedMember(region);
}

void QStatePrivate::setExit(QBehavior *exit)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->exit);

    this->exit = exit;

    // Adjust subsetted property(ies)
    addOwnedElement(exit);
}

void QStatePrivate::addConnection(QConnectionPointReference *connection)
{
    this->connections->insert(connection);

    // Adjust subsetted property(ies)
    addOwnedMember(connection);
}

void QStatePrivate::removeConnection(QConnectionPointReference *connection)
{
    this->connections->remove(connection);

    // Adjust subsetted property(ies)
    removeOwnedMember(connection);
}

void QStatePrivate::setRedefinedState(QState *redefinedState)
{
    // Adjust subsetted property(ies)
    removeRedefinedElement(this->redefinedState);

    this->redefinedState = redefinedState;

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedState);
}

void QStatePrivate::addDeferrableTrigger(QTrigger *deferrableTrigger)
{
    this->deferrableTriggers->insert(deferrableTrigger);

    // Adjust subsetted property(ies)
    addOwnedElement(deferrableTrigger);
}

void QStatePrivate::removeDeferrableTrigger(QTrigger *deferrableTrigger)
{
    this->deferrableTriggers->remove(deferrableTrigger);

    // Adjust subsetted property(ies)
    removeOwnedElement(deferrableTrigger);
}

void QStatePrivate::addConnectionPoint(QPseudostate *connectionPoint)
{
    this->connectionPoints->insert(connectionPoint);

    // Adjust subsetted property(ies)
    addOwnedMember(connectionPoint);
}

void QStatePrivate::removeConnectionPoint(QPseudostate *connectionPoint)
{
    this->connectionPoints->remove(connectionPoint);

    // Adjust subsetted property(ies)
    removeOwnedMember(connectionPoint);
}

void QStatePrivate::setEntry(QBehavior *entry)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->entry);

    this->entry = entry;

    // Adjust subsetted property(ies)
    addOwnedElement(entry);
}

void QStatePrivate::setDoActivity(QBehavior *doActivity)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->doActivity);

    this->doActivity = doActivity;

    // Adjust subsetted property(ies)
    addOwnedElement(doActivity);
}

void QStatePrivate::setSubmachine(QStateMachine *submachine)
{
    this->submachine = submachine;
}

void QStatePrivate::setStateInvariant(QConstraint *stateInvariant)
{
    // Adjust subsetted property(ies)
    removeOwnedRule(this->stateInvariant);

    this->stateInvariant = stateInvariant;

    // Adjust subsetted property(ies)
    addOwnedRule(stateInvariant);
}

/*!
    \class QState

    \inmodule QtUml

    \brief A state models a situation during which some (usually implicit) invariant condition holds.The states of protocol state machines are exposed to the users of their context classifiers. A protocol state represents an exposed stable situation of its context classifier: when an instance of the classifier is not processing any operation, users of this instance can always know its state configuration.
 */

QState::QState(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QStatePrivate;
}

QState::QState(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QStatePrivate;
}

QState::~QState()
{
}

/*!
    A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.
 */
bool QState::isSimple() const
{
    qWarning("QState::isSimple: to be implemented (this is a derived attribute)");
}

/*!
    A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.
 */
bool QState::isComposite() const
{
    qWarning("QState::isComposite: to be implemented (this is a derived attribute)");
}

/*!
    A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.
 */
bool QState::isOrthogonal() const
{
    qWarning("QState::isOrthogonal: to be implemented (this is a derived attribute)");
}

/*!
    A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).
 */
bool QState::isSubmachineState() const
{
    qWarning("QState::isSubmachineState: to be implemented (this is a derived attribute)");
}

/*!
    The regions owned directly by the state.
 */
const QSet<QRegion *> *QState::regions() const
{
    QTUML_D(const QState);
    return d->regions;
}

void QState::addRegion(QRegion *region)
{
    QTUML_D(QState);
    if (!d->regions->contains(region)) {
        d->addRegion(region);

        // Adjust opposite property
        region->setState(this);
    }
}

void QState::removeRegion(QRegion *region)
{
    QTUML_D(QState);
    if (d->regions->contains(region)) {
        d->removeRegion(region);

        // Adjust opposite property
        region->setState(0);
    }
}

/*!
    An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.
 */
QBehavior *QState::exit() const
{
    QTUML_D(const QState);
    return d->exit;
}

void QState::setExit(QBehavior *exit)
{
    QTUML_D(QState);
    if (d->exit != exit) {
        d->setExit(exit);
    }
}

/*!
    The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.
 */
const QSet<QConnectionPointReference *> *QState::connections() const
{
    QTUML_D(const QState);
    return d->connections;
}

void QState::addConnection(QConnectionPointReference *connection)
{
    QTUML_D(QState);
    if (!d->connections->contains(connection)) {
        d->addConnection(connection);

        // Adjust opposite property
        connection->setState(this);
    }
}

void QState::removeConnection(QConnectionPointReference *connection)
{
    QTUML_D(QState);
    if (d->connections->contains(connection)) {
        d->removeConnection(connection);

        // Adjust opposite property
        connection->setState(0);
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QClassifier *QState::redefinitionContext() const
{
    qWarning("QState::redefinitionContext: to be implemented (this is a derived associationend)");
}

/*!
    The state of which this state is a redefinition.
 */
QState *QState::redefinedState() const
{
    QTUML_D(const QState);
    return d->redefinedState;
}

void QState::setRedefinedState(QState *redefinedState)
{
    QTUML_D(QState);
    if (d->redefinedState != redefinedState) {
        d->setRedefinedState(redefinedState);
    }
}

/*!
    A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.
 */
const QSet<QTrigger *> *QState::deferrableTriggers() const
{
    QTUML_D(const QState);
    return d->deferrableTriggers;
}

void QState::addDeferrableTrigger(QTrigger *deferrableTrigger)
{
    QTUML_D(QState);
    if (!d->deferrableTriggers->contains(deferrableTrigger)) {
        d->addDeferrableTrigger(deferrableTrigger);
    }
}

void QState::removeDeferrableTrigger(QTrigger *deferrableTrigger)
{
    QTUML_D(QState);
    if (d->deferrableTriggers->contains(deferrableTrigger)) {
        d->removeDeferrableTrigger(deferrableTrigger);
    }
}

/*!
    The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.
 */
const QSet<QPseudostate *> *QState::connectionPoints() const
{
    QTUML_D(const QState);
    return d->connectionPoints;
}

void QState::addConnectionPoint(QPseudostate *connectionPoint)
{
    QTUML_D(QState);
    if (!d->connectionPoints->contains(connectionPoint)) {
        d->addConnectionPoint(connectionPoint);

        // Adjust opposite property
        connectionPoint->setState(this);
    }
}

void QState::removeConnectionPoint(QPseudostate *connectionPoint)
{
    QTUML_D(QState);
    if (d->connectionPoints->contains(connectionPoint)) {
        d->removeConnectionPoint(connectionPoint);

        // Adjust opposite property
        connectionPoint->setState(0);
    }
}

/*!
    An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.
 */
QBehavior *QState::entry() const
{
    QTUML_D(const QState);
    return d->entry;
}

void QState::setEntry(QBehavior *entry)
{
    QTUML_D(QState);
    if (d->entry != entry) {
        d->setEntry(entry);
    }
}

/*!
    An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.
 */
QBehavior *QState::doActivity() const
{
    QTUML_D(const QState);
    return d->doActivity;
}

void QState::setDoActivity(QBehavior *doActivity)
{
    QTUML_D(QState);
    if (d->doActivity != doActivity) {
        d->setDoActivity(doActivity);
    }
}

/*!
    The state machine that is to be inserted in place of the (submachine) state.
 */
QStateMachine *QState::submachine() const
{
    QTUML_D(const QState);
    return d->submachine;
}

void QState::setSubmachine(QStateMachine *submachine)
{
    QTUML_D(QState);
    if (d->submachine != submachine) {
        d->setSubmachine(submachine);

        // Adjust opposite property
        submachine->addSubmachineState(this);
    }
}

/*!
    Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.
 */
QConstraint *QState::stateInvariant() const
{
    QTUML_D(const QState);
    return d->stateInvariant;
}

void QState::setStateInvariant(QConstraint *stateInvariant)
{
    QTUML_D(QState);
    if (d->stateInvariant != stateInvariant) {
        d->setStateInvariant(stateInvariant);
    }
}

/*!
    The query containingStateMachine() returns the state machine that contains the state either directly or transitively.
 */
QStateMachine *QState::containingStateMachine() const
{
    qWarning("QState::containingStateMachine: operation to be implemented");
}

/*!
    The query isConsistentWith() specifies that a redefining state is consistent with a redefined state provided that the redefining state is an extension of the redefined state: A simple state can be redefined (extended) to become a composite state (by adding a region) and a composite state can be redefined (extended) by adding regions and by adding vertices, states, and transitions to inherited regions. All states may add or replace entry, exit, and 'doActivity' actions.
 */
bool QState::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QState::isConsistentWith: operation to be implemented");
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a state are properly related to the redefinition contexts of the specified state to allow this element to redefine the other. The containing region of a redefining state must redefine the containing region of the redefined state.
 */
bool QState::isRedefinitionContextValid(const QState *redefined) const
{
    qWarning("QState::isRedefinitionContextValid: operation to be implemented");
}

#include "moc_qstate.cpp"

QT_END_NAMESPACE_QTUML

