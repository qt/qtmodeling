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

#include "qpseudostate.h"
#include "qpseudostate_p.h"

#include <QtUml/QState>
#include <QtUml/QStateMachine>

QT_BEGIN_NAMESPACE_QTUML

QPseudostatePrivate::QPseudostatePrivate() :
    kind(QtUml::PseudostateInitial),
    state(0),
    stateMachine(0)
{
}

QPseudostatePrivate::~QPseudostatePrivate()
{
}

/*!
    \class QPseudostate

    \inmodule QtUml

    \brief A pseudostate is an abstraction that encompasses different types of transient vertices in the state machine graph.
 */

QPseudostate::QPseudostate(QWrappedObject *parent, QWrappedObject *wrapper) :
    QVertex(*new QPseudostatePrivate, parent, wrapper)
{
}

QPseudostate::QPseudostate(QPseudostatePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QVertex(dd, parent, wrapper)
{
}

QPseudostate::~QPseudostate()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPseudostate
// ---------------------------------------------------------------

/*!
    Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
 */
QtUml::PseudostateKind QPseudostate::kind() const
{
    // This is a read-write attribute

    Q_D(const QPseudostate);
    return d->kind;
}

void QPseudostate::setKind(QtUml::PseudostateKind kind)
{
    // This is a read-write attribute

    Q_D(QPseudostate);
    if (d->kind != kind) {
        d->kind = kind;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QPseudostate
// ---------------------------------------------------------------

/*!
    The State that owns this pseudostate and in which it appears.
 */
QState *QPseudostate::state() const
{
    // This is a read-write association end

    Q_D(const QPseudostate);
    return d->state;
}

void QPseudostate::setState(QState *state)
{
    // This is a read-write association end

    Q_D(QPseudostate);
    if (d->state != state) {
        // Adjust opposite property
        if (d->state)
            d->state->removeConnectionPoint(this);

        d->state = state;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(state));

        // Adjust opposite property
        if (state)
            state->addConnectionPoint(this);
    }
}

/*!
    The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
 */
QStateMachine *QPseudostate::stateMachine() const
{
    // This is a read-write association end

    Q_D(const QPseudostate);
    return d->stateMachine;
}

void QPseudostate::setStateMachine(QStateMachine *stateMachine)
{
    // This is a read-write association end

    Q_D(QPseudostate);
    if (d->stateMachine != stateMachine) {
        // Adjust opposite property
        if (d->stateMachine)
            d->stateMachine->removeConnectionPoint(this);

        d->stateMachine = stateMachine;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(stateMachine));

        // Adjust opposite property
        if (stateMachine)
            stateMachine->addConnectionPoint(this);
    }
}

#include "moc_qpseudostate.cpp"

QT_END_NAMESPACE_QTUML

