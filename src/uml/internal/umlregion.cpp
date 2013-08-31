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
#include "umlregion_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlstate_p.h"
#include "private/umlstatemachine_p.h"
#include "private/umltransition_p.h"
#include "private/umlvertex_p.h"

UmlRegion::UmlRegion() :
    _extendedRegion(0),
    _state(0),
    _stateMachine(0)
{
}

// OWNED ATTRIBUTES

UmlRegion *UmlRegion::extendedRegion() const
{
    // This is a read-write association end

    return _extendedRegion;
}

void UmlRegion::setExtendedRegion(UmlRegion *extendedRegion)
{
    // This is a read-write association end

    if (_extendedRegion != extendedRegion) {
        // Adjust subsetted properties
        removeRedefinedElement(_extendedRegion);

        _extendedRegion = extendedRegion;

        // Adjust subsetted properties
        if (extendedRegion) {
            addRedefinedElement(extendedRegion);
        }
    }
}

UmlClassifier *UmlRegion::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("UmlRegion::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlRegion::setRedefinitionContext(UmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("UmlRegion::redefinitionContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(redefinitionContext);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlState *UmlRegion::state() const
{
    // This is a read-write association end

    return _state;
}

void UmlRegion::setState(UmlState *state)
{
    // This is a read-write association end

    if (_state != state) {
        // Adjust subsetted properties

        _state = state;

        // Adjust subsetted properties
        setNamespace(state);
    }
}

UmlStateMachine *UmlRegion::stateMachine() const
{
    // This is a read-write association end

    return _stateMachine;
}

void UmlRegion::setStateMachine(UmlStateMachine *stateMachine)
{
    // This is a read-write association end

    if (_stateMachine != stateMachine) {
        // Adjust subsetted properties

        _stateMachine = stateMachine;

        // Adjust subsetted properties
        setNamespace(stateMachine);
    }
}

const QSet<UmlVertex *> UmlRegion::subvertex() const
{
    // This is a read-write association end

    return _subvertex;
}

void UmlRegion::addSubvertex(UmlVertex *subvertex)
{
    // This is a read-write association end

    if (!_subvertex.contains(subvertex)) {
        _subvertex.insert(subvertex);

        // Adjust subsetted properties
        addOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(this);
        }
    }
}

void UmlRegion::removeSubvertex(UmlVertex *subvertex)
{
    // This is a read-write association end

    if (_subvertex.contains(subvertex)) {
        _subvertex.remove(subvertex);

        // Adjust subsetted properties
        removeOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(0);
        }
    }
}

const QSet<UmlTransition *> UmlRegion::transition() const
{
    // This is a read-write association end

    return _transition;
}

void UmlRegion::addTransition(UmlTransition *transition)
{
    // This is a read-write association end

    if (!_transition.contains(transition)) {
        _transition.insert(transition);

        // Adjust subsetted properties
        addOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(this);
        }
    }
}

void UmlRegion::removeTransition(UmlTransition *transition)
{
    // This is a read-write association end

    if (_transition.contains(transition)) {
        _transition.remove(transition);

        // Adjust subsetted properties
        removeOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(0);
        }
    }
}

// OPERATIONS

bool UmlRegion::belongsToPSM(
    ) const
{
    qWarning("UmlRegion::belongsToPSM(): to be implemented (operation)");

    return bool ();
}

UmlStateMachine *UmlRegion::containingStateMachine(
    ) const
{
    qWarning("UmlRegion::containingStateMachine(): to be implemented (operation)");

    return 0;
}

bool UmlRegion::isConsistentWith(
    UmlRedefinableElement *redefinee) const
{
    qWarning("UmlRegion::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

bool UmlRegion::isRedefinitionContextValid(
    UmlRegion *redefined) const
{
    qWarning("UmlRegion::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

