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
//#include "qstate_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QState

    \inmodule QtUml

    \brief A state models a situation during which some (usually implicit) invariant condition holds.The states of protocol state machines are exposed to the users of their context classifiers. A protocol state represents an exposed stable situation of its context classifier: when an instance of the classifier is not processing any operation, users of this instance can always know its state configuration.
 */

QState::QState(QObject *parent)
    : QObject(parent)
{
}

QState::~QState()
{
}

/*!
    The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.
 */
QList<QConnectionPointReference *> *QState::connections()
{
}

/*!
    The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.
 */
QList<QPseudostate *> *QState::connectionPoints()
{
}

/*!
    A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.
 */
QList<QTrigger *> *QState::deferrableTriggers()
{
}

/*!
    An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.
 */
QBehavior *QState::doActivity() const
{
}

void QState::setDoActivity(QBehavior *doActivity)
{
}

/*!
    An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.
 */
QBehavior *QState::entry() const
{
}

void QState::setEntry(QBehavior *entry)
{
}

/*!
    An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.
 */
QBehavior *QState::exit() const
{
}

void QState::setExit(QBehavior *exit)
{
}

/*!
    The state of which this state is a redefinition.
 */
QState *QState::redefinedState() const
{
}

void QState::setRedefinedState(QState *redefinedState)
{
}

/*!
    The regions owned directly by the state.
 */
QList<QRegion *> *QState::regions()
{
}

/*!
    Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.
 */
QConstraint *QState::stateInvariant() const
{
}

void QState::setStateInvariant(QConstraint *stateInvariant)
{
}

/*!
    The state machine that is to be inserted in place of the (submachine) state.
 */
QStateMachine *QState::submachine() const
{
}

void QState::setSubmachine(QStateMachine *submachine)
{
}

/*!
    The query containingStateMachine() returns the state machine that contains the state either directly or transitively.
 */
const QStateMachine *QState::containingStateMachine() const
{
}

/*!
    A composite state is a state with at least one region.
 */
bool QState::isComposite() const
{
}

/*!
    The query isConsistentWith() specifies that a redefining state is consistent with a redefined state provided that the redefining state is an extension of the redefined state: A simple state can be redefined (extended) to become a composite state (by adding a region) and a composite state can be redefined (extended) by adding regions and by adding vertices, states, and transitions to inherited regions. All states may add or replace entry, exit, and 'doActivity' actions.
 */
bool QState::isConsistentWith(const QRedefinableElement *redefinee) const
{
}

/*!
    An orthogonal state is a composite state with at least 2 regions
 */
bool QState::isOrthogonal() const
{
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a state are properly related to the redefinition contexts of the specified state to allow this element to redefine the other. The containing region of a redefining state must redefine the containing region of the redefined state.
 */
bool QState::isRedefinitionContextValid(const QState *redefined) const
{
}

/*!
    A simple state is a state without any regions.
 */
bool QState::isSimple() const
{
}

/*!
    Only submachine states can have a reference statemachine.
 */
bool QState::isSubmachineState() const
{
}

/*!
    The redefinition context of a state is the nearest containing statemachine.
 */
const QClassifier *QState::redefinitionContext() const
{
}

#include "moc_qstate.cpp"

QT_END_NAMESPACE_QTUML

