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
#include "umlactivityedge_p.h"

#include "private/umlactivity_p.h"
#include "private/umlactivitygroup_p.h"
#include "private/umlactivitynode_p.h"
#include "private/umlactivitypartition_p.h"
#include "private/umlinterruptibleactivityregion_p.h"
#include "private/umlstructuredactivitynode_p.h"
#include "private/umlvaluespecification_p.h"

UmlActivityEdge::UmlActivityEdge() :
    _activity(0),
    _guard(0),
    _inStructuredNode(0),
    _interrupts(0),
    _source(0),
    _target(0),
    _weight(0)
{
}

// OWNED ATTRIBUTES

UmlActivity *UmlActivityEdge::activity() const
{
    // This is a read-write association end

    return _activity;
}

void UmlActivityEdge::setActivity(UmlActivity *activity)
{
    // This is a read-write association end

    if (_activity != activity) {
        // Adjust subsetted properties

        _activity = activity;

        // Adjust subsetted properties
        setOwner(activity);
    }
}

UmlValueSpecification *UmlActivityEdge::guard() const
{
    // This is a read-write association end

    return _guard;
}

void UmlActivityEdge::setGuard(UmlValueSpecification *guard)
{
    // This is a read-write association end

    if (_guard != guard) {
        // Adjust subsetted properties
        removeOwnedElement(_guard);

        _guard = guard;

        // Adjust subsetted properties
        if (guard) {
            addOwnedElement(guard);
        }
    }
}

const QSet<UmlActivityGroup *> UmlActivityEdge::inGroup() const
{
    // This is a read-only derived union association end

    return _inGroup;
}

void UmlActivityEdge::addInGroup(UmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (!_inGroup.contains(inGroup)) {
        _inGroup.insert(inGroup);

        // Adjust opposite properties
        if (inGroup) {
            inGroup->addContainedEdge(this);
        }
    }
}

void UmlActivityEdge::removeInGroup(UmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (_inGroup.contains(inGroup)) {
        _inGroup.remove(inGroup);

        // Adjust opposite properties
        if (inGroup) {
            inGroup->removeContainedEdge(this);
        }
    }
}

const QSet<UmlActivityPartition *> UmlActivityEdge::inPartition() const
{
    // This is a read-write association end

    return _inPartition;
}

void UmlActivityEdge::addInPartition(UmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (!_inPartition.contains(inPartition)) {
        _inPartition.insert(inPartition);

        // Adjust subsetted properties
        addInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->addEdge(this);
        }
    }
}

void UmlActivityEdge::removeInPartition(UmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (_inPartition.contains(inPartition)) {
        _inPartition.remove(inPartition);

        // Adjust subsetted properties
        removeInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->removeEdge(this);
        }
    }
}

UmlStructuredActivityNode *UmlActivityEdge::inStructuredNode() const
{
    // This is a read-write association end

    return _inStructuredNode;
}

void UmlActivityEdge::setInStructuredNode(UmlStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    if (_inStructuredNode != inStructuredNode) {
        // Adjust subsetted properties
        removeInGroup(_inStructuredNode);

        _inStructuredNode = inStructuredNode;

        // Adjust subsetted properties
        if (inStructuredNode) {
            addInGroup(inStructuredNode);
        }
        setOwner(inStructuredNode);
    }
}

UmlInterruptibleActivityRegion *UmlActivityEdge::interrupts() const
{
    // This is a read-write association end

    return _interrupts;
}

void UmlActivityEdge::setInterrupts(UmlInterruptibleActivityRegion *interrupts)
{
    // This is a read-write association end

    if (_interrupts != interrupts) {
        _interrupts = interrupts;
    }
}

const QSet<UmlActivityEdge *> UmlActivityEdge::redefinedEdge() const
{
    // This is a read-write association end

    return _redefinedEdge;
}

void UmlActivityEdge::addRedefinedEdge(UmlActivityEdge *redefinedEdge)
{
    // This is a read-write association end

    if (!_redefinedEdge.contains(redefinedEdge)) {
        _redefinedEdge.insert(redefinedEdge);

        // Adjust subsetted properties
        addRedefinedElement(redefinedEdge);
    }
}

void UmlActivityEdge::removeRedefinedEdge(UmlActivityEdge *redefinedEdge)
{
    // This is a read-write association end

    if (_redefinedEdge.contains(redefinedEdge)) {
        _redefinedEdge.remove(redefinedEdge);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedEdge);
    }
}

UmlActivityNode *UmlActivityEdge::source() const
{
    // This is a read-write association end

    return _source;
}

void UmlActivityEdge::setSource(UmlActivityNode *source)
{
    // This is a read-write association end

    if (_source != source) {
        _source = source;
    }
}

UmlActivityNode *UmlActivityEdge::target() const
{
    // This is a read-write association end

    return _target;
}

void UmlActivityEdge::setTarget(UmlActivityNode *target)
{
    // This is a read-write association end

    if (_target != target) {
        _target = target;
    }
}

UmlValueSpecification *UmlActivityEdge::weight() const
{
    // This is a read-write association end

    return _weight;
}

void UmlActivityEdge::setWeight(UmlValueSpecification *weight)
{
    // This is a read-write association end

    if (_weight != weight) {
        // Adjust subsetted properties
        removeOwnedElement(_weight);

        _weight = weight;

        // Adjust subsetted properties
        if (weight) {
            addOwnedElement(weight);
        }
    }
}

