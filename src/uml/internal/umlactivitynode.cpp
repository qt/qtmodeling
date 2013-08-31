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
#include "umlactivitynode_p.h"

#include "private/umlactivity_p.h"
#include "private/umlactivityedge_p.h"
#include "private/umlactivitygroup_p.h"
#include "private/umlactivitypartition_p.h"
#include "private/umlinterruptibleactivityregion_p.h"
#include "private/umlstructuredactivitynode_p.h"

UmlActivityNode::UmlActivityNode() :
    _activity(0),
    _inStructuredNode(0)
{
}

// OWNED ATTRIBUTES

UmlActivity *UmlActivityNode::activity() const
{
    // This is a read-write association end

    return _activity;
}

void UmlActivityNode::setActivity(UmlActivity *activity)
{
    // This is a read-write association end

    if (_activity != activity) {
        // Adjust subsetted properties

        _activity = activity;

        // Adjust subsetted properties
        setOwner(activity);
    }
}

const QSet<UmlActivityGroup *> UmlActivityNode::inGroup() const
{
    // This is a read-only derived union association end

    return _inGroup;
}

void UmlActivityNode::addInGroup(UmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (!_inGroup.contains(inGroup)) {
        _inGroup.insert(inGroup);

        // Adjust opposite properties
        if (inGroup) {
            inGroup->addContainedNode(this);
        }
    }
}

void UmlActivityNode::removeInGroup(UmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (_inGroup.contains(inGroup)) {
        _inGroup.remove(inGroup);

        // Adjust opposite properties
        if (inGroup) {
            inGroup->removeContainedNode(this);
        }
    }
}

const QSet<UmlInterruptibleActivityRegion *> UmlActivityNode::inInterruptibleRegion() const
{
    // This is a read-write association end

    return _inInterruptibleRegion;
}

void UmlActivityNode::addInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    if (!_inInterruptibleRegion.contains(inInterruptibleRegion)) {
        _inInterruptibleRegion.insert(inInterruptibleRegion);

        // Adjust subsetted properties
        addInGroup(inInterruptibleRegion);

        // Adjust opposite properties
        if (inInterruptibleRegion) {
            inInterruptibleRegion->addNode(this);
        }
    }
}

void UmlActivityNode::removeInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    if (_inInterruptibleRegion.contains(inInterruptibleRegion)) {
        _inInterruptibleRegion.remove(inInterruptibleRegion);

        // Adjust subsetted properties
        removeInGroup(inInterruptibleRegion);

        // Adjust opposite properties
        if (inInterruptibleRegion) {
            inInterruptibleRegion->removeNode(this);
        }
    }
}

const QSet<UmlActivityPartition *> UmlActivityNode::inPartition() const
{
    // This is a read-write association end

    return _inPartition;
}

void UmlActivityNode::addInPartition(UmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (!_inPartition.contains(inPartition)) {
        _inPartition.insert(inPartition);

        // Adjust subsetted properties
        addInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->addNode(this);
        }
    }
}

void UmlActivityNode::removeInPartition(UmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (_inPartition.contains(inPartition)) {
        _inPartition.remove(inPartition);

        // Adjust subsetted properties
        removeInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->removeNode(this);
        }
    }
}

UmlStructuredActivityNode *UmlActivityNode::inStructuredNode() const
{
    // This is a read-write association end

    return _inStructuredNode;
}

void UmlActivityNode::setInStructuredNode(UmlStructuredActivityNode *inStructuredNode)
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

const QSet<UmlActivityEdge *> UmlActivityNode::incoming() const
{
    // This is a read-write association end

    return _incoming;
}

void UmlActivityNode::addIncoming(UmlActivityEdge *incoming)
{
    // This is a read-write association end

    if (!_incoming.contains(incoming)) {
        _incoming.insert(incoming);

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(this);
        }
    }
}

void UmlActivityNode::removeIncoming(UmlActivityEdge *incoming)
{
    // This is a read-write association end

    if (_incoming.contains(incoming)) {
        _incoming.remove(incoming);

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(0);
        }
    }
}

const QSet<UmlActivityEdge *> UmlActivityNode::outgoing() const
{
    // This is a read-write association end

    return _outgoing;
}

void UmlActivityNode::addOutgoing(UmlActivityEdge *outgoing)
{
    // This is a read-write association end

    if (!_outgoing.contains(outgoing)) {
        _outgoing.insert(outgoing);

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(this);
        }
    }
}

void UmlActivityNode::removeOutgoing(UmlActivityEdge *outgoing)
{
    // This is a read-write association end

    if (_outgoing.contains(outgoing)) {
        _outgoing.remove(outgoing);

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(0);
        }
    }
}

const QSet<UmlActivityNode *> UmlActivityNode::redefinedNode() const
{
    // This is a read-write association end

    return _redefinedNode;
}

void UmlActivityNode::addRedefinedNode(UmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    if (!_redefinedNode.contains(redefinedNode)) {
        _redefinedNode.insert(redefinedNode);

        // Adjust subsetted properties
        addRedefinedElement(redefinedNode);
    }
}

void UmlActivityNode::removeRedefinedNode(UmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    if (_redefinedNode.contains(redefinedNode)) {
        _redefinedNode.remove(redefinedNode);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedNode);
    }
}

