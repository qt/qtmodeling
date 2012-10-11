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
#include "qnamedelement_p.h"
#include "qnamedelement_p.h"

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

void QPseudostatePrivate::setKind(QtUml::PseudostateKind kind)
{
    this->kind = kind;
}

void QPseudostatePrivate::setState(const QState *state)
{
    this->state = const_cast<QState *>(state);

    // Adjust subsetted property(ies)
    setNamespace_(state);
}

void QPseudostatePrivate::setStateMachine(const QStateMachine *stateMachine)
{
    this->stateMachine = const_cast<QStateMachine *>(stateMachine);

    // Adjust subsetted property(ies)
    setNamespace_(stateMachine);
}

/*!
    \class QPseudostate

    \inmodule QtUml

    \brief A pseudostate is an abstraction that encompasses different types of transient vertices in the state machine graph.
 */

QPseudostate::QPseudostate(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QPseudostatePrivate;
}

QPseudostate::QPseudostate(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QPseudostatePrivate;
}

QPseudostate::~QPseudostate()
{
}

/*!
    Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
 */
QtUml::PseudostateKind QPseudostate::kind() const
{
    Q_D(const QPseudostate);
    return d->kind;
}

void QPseudostate::setKind(QtUml::PseudostateKind kind)
{
    Q_D(QPseudostate);
    d->setKind(kind);
}

/*!
    The State that owns this pseudostate and in which it appears.
 */
QState *QPseudostate::state() const
{
    Q_D(const QPseudostate);
    return d->state;
}

void QPseudostate::setState(const QState *state)
{
    Q_D(QPseudostate);
    d->setState(const_cast<QState *>(state));
}

/*!
    The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
 */
QStateMachine *QPseudostate::stateMachine() const
{
    Q_D(const QPseudostate);
    return d->stateMachine;
}

void QPseudostate::setStateMachine(const QStateMachine *stateMachine)
{
    Q_D(QPseudostate);
    d->setStateMachine(const_cast<QStateMachine *>(stateMachine));
}

#include "moc_qpseudostate.cpp"

QT_END_NAMESPACE_QTUML

