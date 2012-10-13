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

void QTransitionPrivate::setKind(QtUml::TransitionKind kind)
{
    this->kind = kind;
}

void QTransitionPrivate::setGuard(QConstraint *guard)
{
    // Adjust subsetted property(ies)
    removeOwnedRule(this->guard);

    this->guard = guard;

    // Adjust subsetted property(ies)
    addOwnedRule(guard);
}

void QTransitionPrivate::setTarget(QVertex *target)
{
    this->target = target;
}

void QTransitionPrivate::setEffect(QBehavior *effect)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->effect);

    this->effect = effect;

    // Adjust subsetted property(ies)
    addOwnedElement(effect);
}

void QTransitionPrivate::setContainer(QRegion *container)
{
    this->container = container;

    // Adjust subsetted property(ies)
    setNamespace_(container);
}

void QTransitionPrivate::setRedefinedTransition(QTransition *redefinedTransition)
{
    // Adjust subsetted property(ies)
    removeRedefinedElement(this->redefinedTransition);

    this->redefinedTransition = redefinedTransition;

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedTransition);
}

void QTransitionPrivate::setSource(QVertex *source)
{
    this->source = source;
}

void QTransitionPrivate::addTrigger(QTrigger *trigger)
{
    this->triggers->insert(trigger);

    // Adjust subsetted property(ies)
    addOwnedElement(trigger);
}

void QTransitionPrivate::removeTrigger(QTrigger *trigger)
{
    this->triggers->remove(trigger);

    // Adjust subsetted property(ies)
    removeOwnedElement(trigger);
}

/*!
    \class QTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

QTransition::QTransition(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QTransitionPrivate;
}

QTransition::QTransition(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QTransitionPrivate;
}

QTransition::~QTransition()
{
}

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QTransition::kind() const
{
    QTUML_D(const QTransition);
    return d->kind;
}

void QTransition::setKind(QtUml::TransitionKind kind)
{
    QTUML_D(QTransition);
    if (d->kind != kind) {
        d->setKind(kind);
    }
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QConstraint *QTransition::guard() const
{
    QTUML_D(const QTransition);
    return d->guard;
}

void QTransition::setGuard(QConstraint *guard)
{
    QTUML_D(QTransition);
    if (d->guard != guard) {
        d->setGuard(guard);
    }
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QVertex *QTransition::target() const
{
    QTUML_D(const QTransition);
    return d->target;
}

void QTransition::setTarget(QVertex *target)
{
    QTUML_D(QTransition);
    if (d->target != target) {
        d->setTarget(target);
    }
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QBehavior *QTransition::effect() const
{
    QTUML_D(const QTransition);
    return d->effect;
}

void QTransition::setEffect(QBehavior *effect)
{
    QTUML_D(QTransition);
    if (d->effect != effect) {
        d->setEffect(effect);
    }
}

/*!
    Designates the region that owns this transition.
 */
QRegion *QTransition::container() const
{
    QTUML_D(const QTransition);
    return d->container;
}

void QTransition::setContainer(QRegion *container)
{
    QTUML_D(QTransition);
    if (d->container != container) {
        d->setContainer(container);

        // Adjust opposite property
        container->addTransition(this);
    }
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
    QTUML_D(const QTransition);
    return d->redefinedTransition;
}

void QTransition::setRedefinedTransition(QTransition *redefinedTransition)
{
    QTUML_D(QTransition);
    if (d->redefinedTransition != redefinedTransition) {
        d->setRedefinedTransition(redefinedTransition);
    }
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QVertex *QTransition::source() const
{
    QTUML_D(const QTransition);
    return d->source;
}

void QTransition::setSource(QVertex *source)
{
    QTUML_D(QTransition);
    if (d->source != source) {
        d->setSource(source);
    }
}

/*!
    Specifies the triggers that may fire the transition.
 */
const QSet<QTrigger *> *QTransition::triggers() const
{
    QTUML_D(const QTransition);
    return d->triggers;
}

void QTransition::addTrigger(QTrigger *trigger)
{
    QTUML_D(QTransition);
    if (!d->triggers->contains(trigger)) {
        d->addTrigger(trigger);
    }
}

void QTransition::removeTrigger(QTrigger *trigger)
{
    QTUML_D(QTransition);
    if (d->triggers->contains(trigger)) {
        d->removeTrigger(trigger);
    }
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

