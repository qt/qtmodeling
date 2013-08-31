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
#include "umlstatemachine_p.h"

#include "private/umlnamespace_p.h"
#include "private/umlpseudostate_p.h"
#include "private/umlredefinableelement_p.h"
#include "private/umlregion_p.h"
#include "private/umlstate_p.h"

UmlStateMachine::UmlStateMachine()
{
}

// OWNED ATTRIBUTES

const QSet<UmlPseudostate *> UmlStateMachine::connectionPoint() const
{
    // This is a read-write association end

    return _connectionPoint;
}

void UmlStateMachine::addConnectionPoint(UmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (!_connectionPoint.contains(connectionPoint)) {
        _connectionPoint.insert(connectionPoint);

        // Adjust subsetted properties
        addOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setStateMachine(this);
        }
    }
}

void UmlStateMachine::removeConnectionPoint(UmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (_connectionPoint.contains(connectionPoint)) {
        _connectionPoint.remove(connectionPoint);

        // Adjust subsetted properties
        removeOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setStateMachine(0);
        }
    }
}

const QSet<UmlStateMachine *> UmlStateMachine::extendedStateMachine() const
{
    // This is a read-write association end

    return _extendedStateMachine;
}

void UmlStateMachine::addExtendedStateMachine(UmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    if (!_extendedStateMachine.contains(extendedStateMachine)) {
        _extendedStateMachine.insert(extendedStateMachine);
    }
}

void UmlStateMachine::removeExtendedStateMachine(UmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    if (_extendedStateMachine.contains(extendedStateMachine)) {
        _extendedStateMachine.remove(extendedStateMachine);
    }
}

const QSet<UmlRegion *> UmlStateMachine::region() const
{
    // This is a read-write association end

    return _region;
}

void UmlStateMachine::addRegion(UmlRegion *region)
{
    // This is a read-write association end

    if (!_region.contains(region)) {
        _region.insert(region);

        // Adjust subsetted properties
        addOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setStateMachine(this);
        }
    }
}

void UmlStateMachine::removeRegion(UmlRegion *region)
{
    // This is a read-write association end

    if (_region.contains(region)) {
        _region.remove(region);

        // Adjust subsetted properties
        removeOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setStateMachine(0);
        }
    }
}

const QSet<UmlState *> UmlStateMachine::submachineState() const
{
    // This is a read-write association end

    return _submachineState;
}

void UmlStateMachine::addSubmachineState(UmlState *submachineState)
{
    // This is a read-write association end

    if (!_submachineState.contains(submachineState)) {
        _submachineState.insert(submachineState);

        // Adjust opposite properties
        if (submachineState) {
            submachineState->setSubmachine(this);
        }
    }
}

void UmlStateMachine::removeSubmachineState(UmlState *submachineState)
{
    // This is a read-write association end

    if (_submachineState.contains(submachineState)) {
        _submachineState.remove(submachineState);

        // Adjust opposite properties
        if (submachineState) {
            submachineState->setSubmachine(0);
        }
    }
}

// OPERATIONS

UmlNamespace *UmlStateMachine::LCA(
    UmlState *s1, UmlState *s2) const
{
    qWarning("UmlStateMachine::LCA(): to be implemented (operation)");

    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return 0;
}

bool UmlStateMachine::ancestor(
    UmlState *s1, UmlState *s2) const
{
    qWarning("UmlStateMachine::ancestor(): to be implemented (operation)");

    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return bool ();
}

bool UmlStateMachine::isConsistentWith(
    UmlRedefinableElement *redefinee) const
{
    qWarning("UmlStateMachine::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

bool UmlStateMachine::isRedefinitionContextValid(
    UmlStateMachine *redefined) const
{
    qWarning("UmlStateMachine::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

