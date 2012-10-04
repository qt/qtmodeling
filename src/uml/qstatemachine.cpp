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

#include "qstatemachine.h"
//#include "qstatemachine_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QStateMachine

    \inmodule QtUml

    \brief State machines can be used to express the behavior of part of a system. Behavior is modeled as a traversal of a graph of state nodes interconnected by one or more joined transition arcs that are triggered by the dispatching of series of (event) occurrences. During this traversal, the state machine executes a series of activities associated with various elements of the state machine.
 */

QStateMachine::QStateMachine(QObject *parent)
    : QBehavior(parent)
{
}

QStateMachine::~QStateMachine()
{
}

/*!
    The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.
 */
const QSet<QPseudostate *> *QStateMachine::connectionPoints() const
{
}

void QStateMachine::addConnectionPoint(const QPseudostate *connectionPoint)
{
}

void QStateMachine::removeConnectionPoint(const QPseudostate *connectionPoint)
{
}

/*!
    The state machines of which this is an extension.
 */
const QSet<QStateMachine *> *QStateMachine::extendedStateMachines() const
{
}

void QStateMachine::addExtendedStateMachine(const QStateMachine *extendedStateMachine)
{
}

void QStateMachine::removeExtendedStateMachine(const QStateMachine *extendedStateMachine)
{
}

/*!
    The regions owned directly by the state machine.
 */
const QSet<QRegion *> *QStateMachine::regions() const
{
}

void QStateMachine::addRegion(const QRegion *region)
{
}

void QStateMachine::removeRegion(const QRegion *region)
{
}

/*!
    References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.
 */
const QSet<QState *> *QStateMachine::submachineStates() const
{
}

void QStateMachine::addSubmachineState(const QState *submachineState)
{
}

void QStateMachine::removeSubmachineState(const QState *submachineState)
{
}

/*!
    The operation LCA(s1,s2) returns an orthogonal state or region which is the least common ancestor of states s1 and s2, based on the statemachine containment hierarchy.
 */
QNamespace *QStateMachine::LCA(const QState *s1, const QState *s2) const
{
}

/*!
    The query ancestor(s1, s2) checks whether s1 is an ancestor state of state s2.
 */
bool QStateMachine::ancestor(const QState *s1, const QState *s2) const
{
}

/*!
    The query isConsistentWith() specifies that a redefining state machine is consistent with a redefined state machine provided that the redefining state machine is an extension of the redefined state machine: Regions are inherited and regions can be added, inherited regions can be redefined. In case of multiple redefining state machines, extension implies that the redefining state machine gets orthogonal regions for each of the redefined state machines.
 */
bool QStateMachine::isConsistentWith(const QRedefinableElement *redefinee) const
{
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a statemachine are properly related to the redefinition contexts of the specified statemachine to allow this element to redefine the other. The containing classifier of a redefining statemachine must redefine the containing classifier of the redefined statemachine.
 */
bool QStateMachine::isRedefinitionContextValid(const QStateMachine *redefined) const
{
}

#include "moc_qstatemachine.cpp"

QT_END_NAMESPACE_QTUML

