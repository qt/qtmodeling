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
#include "qumltransition.h"
#include "qumltransition_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

QUmlTransitionPrivate::QUmlTransitionPrivate() :
    container(0),
    effect(0),
    guard(0),
    kind(QtUml::TransitionExternal),
    redefinedTransition(0),
    source(0),
    target(0)
{
}

/*!
    \class QUmlTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

QUmlTransition::QUmlTransition(bool create_d_ptr) :
    QUmlRedefinableElement(false),
    QUmlNamespace(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlTransitionPrivate);
}

// OWNED ATTRIBUTES

/*!
    Designates the region that owns this transition.
 */
QUmlRegion *QUmlTransition::container() const
{
    // This is a read-write association end

    QM_D(const QUmlTransition);
    return d->container;
}

void QUmlTransition::setContainer(QUmlRegion *container)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (d->container != container) {
        d->container = container;
    }
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QUmlBehavior *QUmlTransition::effect() const
{
    // This is a read-write association end

    QM_D(const QUmlTransition);
    return d->effect;
}

void QUmlTransition::setEffect(QUmlBehavior *effect)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (d->effect != effect) {
        d->effect = effect;
    }
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QUmlConstraint *QUmlTransition::guard() const
{
    // This is a read-write association end

    QM_D(const QUmlTransition);
    return d->guard;
}

void QUmlTransition::setGuard(QUmlConstraint *guard)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (d->guard != guard) {
        d->guard = guard;
    }
}

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QUmlTransition::kind() const
{
    // This is a read-write property

    QM_D(const QUmlTransition);
    return d->kind;
}

void QUmlTransition::setKind(QtUml::TransitionKind kind)
{
    // This is a read-write property

    QM_D(QUmlTransition);
    if (d->kind != kind) {
        d->kind = kind;
    }
}

/*!
    The transition that is redefined by this transition.
 */
QUmlTransition *QUmlTransition::redefinedTransition() const
{
    // This is a read-write association end

    QM_D(const QUmlTransition);
    return d->redefinedTransition;
}

void QUmlTransition::setRedefinedTransition(QUmlTransition *redefinedTransition)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (d->redefinedTransition != redefinedTransition) {
        d->redefinedTransition = redefinedTransition;
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlTransition::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlTransition::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QUmlVertex *QUmlTransition::source() const
{
    // This is a read-write association end

    QM_D(const QUmlTransition);
    return d->source;
}

void QUmlTransition::setSource(QUmlVertex *source)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (d->source != source) {
        d->source = source;
    }
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QUmlVertex *QUmlTransition::target() const
{
    // This is a read-write association end

    QM_D(const QUmlTransition);
    return d->target;
}

void QUmlTransition::setTarget(QUmlVertex *target)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (d->target != target) {
        d->target = target;
    }
}

/*!
    Specifies the triggers that may fire the transition.
 */
QSet<QUmlTrigger *> QUmlTransition::trigger() const
{
    // This is a read-write association end

    QM_D(const QUmlTransition);
    return d->trigger;
}

void QUmlTransition::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (!d->trigger.contains(trigger)) {
        d->trigger.insert(trigger);
    }
}

void QUmlTransition::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    QM_D(QUmlTransition);
    if (d->trigger.contains(trigger)) {
        d->trigger.remove(trigger);
    }
}

// OPERATIONS

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QUmlStateMachine *QUmlTransition::containingStateMachine() const
{
    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QUmlTransition::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    Q_UNUSED(redefinee);
    return bool ();
}

QT_END_NAMESPACE

