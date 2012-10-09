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

#include "qtransition.h"
#include "qtransition_p.h"
#include "qnamespace_p.h"
#include "qelement_p.h"
#include "qnamedelement_p.h"
#include "qredefinableelement_p.h"
#include "qelement_p.h"

#include <QtUml/QTrigger>
#include <QtUml/QVertex>
#include <QtUml/QStateMachine>
#include <QtUml/QClassifier>
#include <QtUml/QBehavior>
#include <QtUml/QRegion>
#include <QtUml/QConstraint>

QT_BEGIN_NAMESPACE_QTUML

QTransitionPrivate::QTransitionPrivate() :
    kind(QtUml::TransitionExternal),
    guard(0),
    target(0),
    effect(0),
    container(0),
    redefinedTransition(0),
    source(0),
    triggers(new QSet<QTrigger *>)
{
}

QTransitionPrivate::~QTransitionPrivate()
{
    delete triggers;
}

/*!
    \class QTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

QTransition::QTransition(QObject *parent)
    : QObject(parent), d_ptr(new QTransitionPrivate)
{
}

QTransition::~QTransition()
{
    delete d_ptr;
}

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QTransition::kind() const
{
    return d_ptr->kind;
}

void QTransition::setKind(QtUml::TransitionKind kind)
{
    d_ptr->kind = kind;
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QConstraint *QTransition::guard() const
{
    return d_ptr->guard;
}

void QTransition::setGuard(const QConstraint *guard)
{
    d_ptr->guard = const_cast<QConstraint *>(guard);
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QVertex *QTransition::target() const
{
    return d_ptr->target;
}

void QTransition::setTarget(const QVertex *target)
{
    d_ptr->target = const_cast<QVertex *>(target);
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QBehavior *QTransition::effect() const
{
    return d_ptr->effect;
}

void QTransition::setEffect(const QBehavior *effect)
{
    d_ptr->effect = const_cast<QBehavior *>(effect);
}

/*!
    Designates the region that owns this transition.
 */
QRegion *QTransition::container() const
{
    return d_ptr->container;
}

void QTransition::setContainer(const QRegion *container)
{
    d_ptr->container = const_cast<QRegion *>(container);
}

/*!
    References the classifier in which context this element may be redefined.
 */
QClassifier *QTransition::redefinitionContext() const
{
    qWarning("QTransition::redefinitionContext: to be implemented (this is a derived associationend)");
}

/*!
    The transition that is redefined by this transition.
 */
QTransition *QTransition::redefinedTransition() const
{
    return d_ptr->redefinedTransition;
}

void QTransition::setRedefinedTransition(const QTransition *redefinedTransition)
{
    d_ptr->redefinedTransition = const_cast<QTransition *>(redefinedTransition);
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QVertex *QTransition::source() const
{
    return d_ptr->source;
}

void QTransition::setSource(const QVertex *source)
{
    d_ptr->source = const_cast<QVertex *>(source);
}

/*!
    Specifies the triggers that may fire the transition.
 */
const QSet<QTrigger *> *QTransition::triggers() const
{
    return d_ptr->triggers;
}

void QTransition::addTrigger(const QTrigger *trigger)
{
    d_ptr->triggers->insert(const_cast<QTrigger *>(trigger));
}

void QTransition::removeTrigger(const QTrigger *trigger)
{
    d_ptr->triggers->remove(const_cast<QTrigger *>(trigger));
}

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QStateMachine *QTransition::containingStateMachine() const
{
    qWarning("QTransition::containingStateMachine: operation to be implemented");
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QTransition::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QTransition::isConsistentWith: operation to be implemented");
}

#include "moc_qtransition.cpp"

QT_END_NAMESPACE_QTUML

