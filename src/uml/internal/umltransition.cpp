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
#include "umltransition_p.h"

#include "private/umlbehavior_p.h"
#include "private/umlclassifier_p.h"
#include "private/umlconstraint_p.h"
#include "private/umlregion_p.h"
#include "private/umlstatemachine_p.h"
#include "private/umltrigger_p.h"
#include "private/umlvertex_p.h"

UmlTransition::UmlTransition() :
    _container(0),
    _effect(0),
    _guard(0),
    _kind(QtUml::TransitionKindExternal),
    _redefinedTransition(0),
    _source(0),
    _target(0)
{
}

// OWNED ATTRIBUTES

UmlRegion *UmlTransition::container() const
{
    // This is a read-write association end

    return _container;
}

void UmlTransition::setContainer(UmlRegion *container)
{
    // This is a read-write association end

    if (_container != container) {
        // Adjust subsetted properties

        _container = container;

        // Adjust subsetted properties
        setNamespace(container);
    }
}

UmlBehavior *UmlTransition::effect() const
{
    // This is a read-write association end

    return _effect;
}

void UmlTransition::setEffect(UmlBehavior *effect)
{
    // This is a read-write association end

    if (_effect != effect) {
        // Adjust subsetted properties
        removeOwnedElement(_effect);

        _effect = effect;

        // Adjust subsetted properties
        if (effect) {
            addOwnedElement(effect);
        }
    }
}

UmlConstraint *UmlTransition::guard() const
{
    // This is a read-write association end

    return _guard;
}

void UmlTransition::setGuard(UmlConstraint *guard)
{
    // This is a read-write association end

    if (_guard != guard) {
        // Adjust subsetted properties
        removeOwnedRule(_guard);

        _guard = guard;

        // Adjust subsetted properties
        if (guard) {
            addOwnedRule(guard);
        }
    }
}

QtUml::TransitionKind UmlTransition::kind() const
{
    // This is a read-write property

    return _kind;
}

void UmlTransition::setKind(QtUml::TransitionKind kind)
{
    // This is a read-write property

    if (_kind != kind) {
        _kind = kind;
    }
}

UmlTransition *UmlTransition::redefinedTransition() const
{
    // This is a read-write association end

    return _redefinedTransition;
}

void UmlTransition::setRedefinedTransition(UmlTransition *redefinedTransition)
{
    // This is a read-write association end

    if (_redefinedTransition != redefinedTransition) {
        // Adjust subsetted properties
        removeRedefinedElement(_redefinedTransition);

        _redefinedTransition = redefinedTransition;

        // Adjust subsetted properties
        if (redefinedTransition) {
            addRedefinedElement(redefinedTransition);
        }
    }
}

UmlClassifier *UmlTransition::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("UmlTransition::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlTransition::setRedefinitionContext(UmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("UmlTransition::redefinitionContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(redefinitionContext);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlVertex *UmlTransition::source() const
{
    // This is a read-write association end

    return _source;
}

void UmlTransition::setSource(UmlVertex *source)
{
    // This is a read-write association end

    if (_source != source) {
        _source = source;
    }
}

UmlVertex *UmlTransition::target() const
{
    // This is a read-write association end

    return _target;
}

void UmlTransition::setTarget(UmlVertex *target)
{
    // This is a read-write association end

    if (_target != target) {
        _target = target;
    }
}

const QSet<UmlTrigger *> UmlTransition::trigger() const
{
    // This is a read-write association end

    return _trigger;
}

void UmlTransition::addTrigger(UmlTrigger *trigger)
{
    // This is a read-write association end

    if (!_trigger.contains(trigger)) {
        _trigger.insert(trigger);

        // Adjust subsetted properties
        addOwnedElement(trigger);
    }
}

void UmlTransition::removeTrigger(UmlTrigger *trigger)
{
    // This is a read-write association end

    if (_trigger.contains(trigger)) {
        _trigger.remove(trigger);

        // Adjust subsetted properties
        removeOwnedElement(trigger);
    }
}

// OPERATIONS

UmlStateMachine *UmlTransition::containingStateMachine(
    ) const
{
    qWarning("UmlTransition::containingStateMachine(): to be implemented (operation)");

    return 0;
}

bool UmlTransition::isConsistentWith(
    UmlRedefinableElement *redefinee) const
{
    qWarning("UmlTransition::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

