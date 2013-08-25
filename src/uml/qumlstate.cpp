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
#include "qumlstate.h"
#include "qumlstate_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

QUmlStatePrivate::QUmlStatePrivate() :
    doActivity(0),
    entry(0),
    exit(0),
    redefinedState(0),
    stateInvariant(0),
    submachine(0)
{
}

/*!
    \class QUmlState

    \inmodule QtUml

    \brief A state models a situation during which some (usually implicit) invariant condition holds.The states of protocol state machines are exposed to the users of their context classifiers. A protocol state represents an exposed stable situation of its context classifier: when an instance of the classifier is not processing any operation, users of this instance can always know its state configuration.
 */

QUmlState::QUmlState(bool create_d_ptr) :
    QUmlNamespace(false),
    QUmlRedefinableElement(false),
    QUmlVertex(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStatePrivate);
}

// OWNED ATTRIBUTES

/*!
    The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.
 */
QSet<QUmlConnectionPointReference *> QUmlState::connection() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->connection;
}

void QUmlState::addConnection(QUmlConnectionPointReference *connection)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (!d->connection.contains(connection)) {
        d->connection.insert(connection);
    }
}

void QUmlState::removeConnection(QUmlConnectionPointReference *connection)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->connection.contains(connection)) {
        d->connection.remove(connection);
    }
}

/*!
    The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.
 */
QSet<QUmlPseudostate *> QUmlState::connectionPoint() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->connectionPoint;
}

void QUmlState::addConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (!d->connectionPoint.contains(connectionPoint)) {
        d->connectionPoint.insert(connectionPoint);
    }
}

void QUmlState::removeConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->connectionPoint.contains(connectionPoint)) {
        d->connectionPoint.remove(connectionPoint);
    }
}

/*!
    A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.
 */
QSet<QUmlTrigger *> QUmlState::deferrableTrigger() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->deferrableTrigger;
}

void QUmlState::addDeferrableTrigger(QUmlTrigger *deferrableTrigger)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (!d->deferrableTrigger.contains(deferrableTrigger)) {
        d->deferrableTrigger.insert(deferrableTrigger);
    }
}

void QUmlState::removeDeferrableTrigger(QUmlTrigger *deferrableTrigger)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->deferrableTrigger.contains(deferrableTrigger)) {
        d->deferrableTrigger.remove(deferrableTrigger);
    }
}

/*!
    An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.
 */
QUmlBehavior *QUmlState::doActivity() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->doActivity;
}

void QUmlState::setDoActivity(QUmlBehavior *doActivity)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->doActivity != doActivity) {
        d->doActivity = doActivity;
    }
}

/*!
    An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.
 */
QUmlBehavior *QUmlState::entry() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->entry;
}

void QUmlState::setEntry(QUmlBehavior *entry)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->entry != entry) {
        d->entry = entry;
    }
}

/*!
    An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.
 */
QUmlBehavior *QUmlState::exit() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->exit;
}

void QUmlState::setExit(QUmlBehavior *exit)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->exit != exit) {
        d->exit = exit;
    }
}

/*!
    A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.
 */
bool QUmlState::isComposite() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isComposite(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.
 */
bool QUmlState::isOrthogonal() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isOrthogonal(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.
 */
bool QUmlState::isSimple() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isSimple(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).
 */
bool QUmlState::isSubmachineState() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isSubmachineState(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    The state of which this state is a redefinition.
 */
QUmlState *QUmlState::redefinedState() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->redefinedState;
}

void QUmlState::setRedefinedState(QUmlState *redefinedState)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->redefinedState != redefinedState) {
        d->redefinedState = redefinedState;
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlState::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlState::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    The regions owned directly by the state.
 */
QSet<QUmlRegion *> QUmlState::region() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->region;
}

void QUmlState::addRegion(QUmlRegion *region)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (!d->region.contains(region)) {
        d->region.insert(region);
    }
}

void QUmlState::removeRegion(QUmlRegion *region)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->region.contains(region)) {
        d->region.remove(region);
    }
}

/*!
    Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.
 */
QUmlConstraint *QUmlState::stateInvariant() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->stateInvariant;
}

void QUmlState::setStateInvariant(QUmlConstraint *stateInvariant)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->stateInvariant != stateInvariant) {
        d->stateInvariant = stateInvariant;
    }
}

/*!
    The state machine that is to be inserted in place of the (submachine) state.
 */
QUmlStateMachine *QUmlState::submachine() const
{
    // This is a read-write association end

    QM_D(const QUmlState);
    return d->submachine;
}

void QUmlState::setSubmachine(QUmlStateMachine *submachine)
{
    // This is a read-write association end

    QM_D(QUmlState);
    if (d->submachine != submachine) {
        d->submachine = submachine;
    }
}

// OPERATIONS

/*!
    The query containingStateMachine() returns the state machine that contains the state either directly or transitively.
 */
QUmlStateMachine *QUmlState::containingStateMachine() const
{
    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining state is consistent with a redefined state provided that the redefining state is an extension of the redefined state: A simple state can be redefined (extended) to become a composite state (by adding a region) and a composite state can be redefined (extended) by adding regions and by adding vertices, states, and transitions to inherited regions. All states may add or replace entry, exit, and 'doActivity' actions.
 */
bool QUmlState::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a state are properly related to the redefinition contexts of the specified state to allow this element to redefine the other. The containing region of a redefining state must redefine the containing region of the redefined state.
 */
bool QUmlState::isRedefinitionContextValid(QUmlState *redefined) const
{
    Q_UNUSED(redefined);
    return bool ();
}

QT_END_NAMESPACE

