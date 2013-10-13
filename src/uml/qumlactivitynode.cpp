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
#include "qumlactivitynode.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

/*!
    \class QUmlActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */
QUmlActivityNode::QUmlActivityNode() :
    _activity(0),
    _inStructuredNode(0)
{
}

QModelingElement *QUmlActivityNode::clone() const
{
    QUmlActivityNode *c = new QUmlActivityNode;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegions())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartitions())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incomings())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoings())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNodes())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlActivityNode::activity() const
{
    // This is a read-write association end

    return _activity;
}

void QUmlActivityNode::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    if (_activity != activity) {
        // Adjust subsetted properties

        _activity = activity;
        if (activity && activity->asQModelingObject() && this->asQModelingObject())
            QObject::connect(activity->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setActivity()));

        // Adjust subsetted properties
        setOwner(activity);
    }
}

/*!
    Groups containing the node.
 */
const QSet<QUmlActivityGroup *> QUmlActivityNode::inGroups() const
{
    // This is a read-only derived union association end

    return _inGroups;
}

void QUmlActivityNode::addInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (!_inGroups.contains(inGroup)) {
        _inGroups.insert(inGroup);
        if (inGroup && inGroup->asQModelingObject() && this->asQModelingObject())
            QObject::connect(inGroup->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInGroup(QObject *)));

        // Adjust opposite properties
        if (inGroup) {
            inGroup->addContainedNode(this);
        }
    }
}

void QUmlActivityNode::removeInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (_inGroups.contains(inGroup)) {
        _inGroups.remove(inGroup);

        // Adjust opposite properties
        if (inGroup) {
            inGroup->removeContainedNode(this);
        }
    }
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QUmlInterruptibleActivityRegion *> QUmlActivityNode::inInterruptibleRegions() const
{
    // This is a read-write association end

    return _inInterruptibleRegions;
}

void QUmlActivityNode::addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    if (!_inInterruptibleRegions.contains(inInterruptibleRegion)) {
        _inInterruptibleRegions.insert(inInterruptibleRegion);
        if (inInterruptibleRegion && inInterruptibleRegion->asQModelingObject() && this->asQModelingObject())
            QObject::connect(inInterruptibleRegion->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInInterruptibleRegion(QObject *)));

        // Adjust subsetted properties
        addInGroup(inInterruptibleRegion);

        // Adjust opposite properties
        if (inInterruptibleRegion) {
            inInterruptibleRegion->addNode(this);
        }
    }
}

void QUmlActivityNode::removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    if (_inInterruptibleRegions.contains(inInterruptibleRegion)) {
        _inInterruptibleRegions.remove(inInterruptibleRegion);

        // Adjust subsetted properties
        removeInGroup(inInterruptibleRegion);

        // Adjust opposite properties
        if (inInterruptibleRegion) {
            inInterruptibleRegion->removeNode(this);
        }
    }
}

/*!
    Partitions containing the node.
 */
const QSet<QUmlActivityPartition *> QUmlActivityNode::inPartitions() const
{
    // This is a read-write association end

    return _inPartitions;
}

void QUmlActivityNode::addInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (!_inPartitions.contains(inPartition)) {
        _inPartitions.insert(inPartition);
        if (inPartition && inPartition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(inPartition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInPartition(QObject *)));

        // Adjust subsetted properties
        addInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->addNode(this);
        }
    }
}

void QUmlActivityNode::removeInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (_inPartitions.contains(inPartition)) {
        _inPartitions.remove(inPartition);

        // Adjust subsetted properties
        removeInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->removeNode(this);
        }
    }
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlActivityNode::inStructuredNode() const
{
    // This is a read-write association end

    return _inStructuredNode;
}

void QUmlActivityNode::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    if (_inStructuredNode != inStructuredNode) {
        // Adjust subsetted properties
        removeInGroup(_inStructuredNode);

        _inStructuredNode = inStructuredNode;
        if (inStructuredNode && inStructuredNode->asQModelingObject() && this->asQModelingObject())
            QObject::connect(inStructuredNode->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInStructuredNode()));

        // Adjust subsetted properties
        if (inStructuredNode) {
            addInGroup(inStructuredNode);
        }
        setOwner(inStructuredNode);
    }
}

/*!
    Edges that have the node as target.
 */
const QSet<QUmlActivityEdge *> QUmlActivityNode::incomings() const
{
    // This is a read-write association end

    return _incomings;
}

void QUmlActivityNode::addIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    if (!_incomings.contains(incoming)) {
        _incomings.insert(incoming);
        if (incoming && incoming->asQModelingObject() && this->asQModelingObject())
            QObject::connect(incoming->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeIncoming(QObject *)));

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(this);
        }
    }
}

void QUmlActivityNode::removeIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    if (_incomings.contains(incoming)) {
        _incomings.remove(incoming);

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(0);
        }
    }
}

/*!
    Edges that have the node as source.
 */
const QSet<QUmlActivityEdge *> QUmlActivityNode::outgoings() const
{
    // This is a read-write association end

    return _outgoings;
}

void QUmlActivityNode::addOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    if (!_outgoings.contains(outgoing)) {
        _outgoings.insert(outgoing);
        if (outgoing && outgoing->asQModelingObject() && this->asQModelingObject())
            QObject::connect(outgoing->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOutgoing(QObject *)));

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(this);
        }
    }
}

void QUmlActivityNode::removeOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    if (_outgoings.contains(outgoing)) {
        _outgoings.remove(outgoing);

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(0);
        }
    }
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
const QSet<QUmlActivityNode *> QUmlActivityNode::redefinedNodes() const
{
    // This is a read-write association end

    return _redefinedNodes;
}

void QUmlActivityNode::addRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    if (!_redefinedNodes.contains(redefinedNode)) {
        _redefinedNodes.insert(redefinedNode);
        if (redefinedNode && redefinedNode->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedNode->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedNode(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedNode);
    }
}

void QUmlActivityNode::removeRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    if (_redefinedNodes.contains(redefinedNode)) {
        _redefinedNodes.remove(redefinedNode);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedNode);
    }
}

