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

#include "qactivitynode.h"
#include "qactivitynode_p.h"
#include "qredefinableelement_p.h"
#include "qelement_p.h"

#include <QtUml/QStructuredActivityNode>
#include <QtUml/QActivityEdge>
#include <QtUml/QActivityPartition>
#include <QtUml/QActivityGroup>
#include <QtUml/QActivity>
#include <QtUml/QInterruptibleActivityRegion>

QT_BEGIN_NAMESPACE_QTUML

QActivityNodePrivate::QActivityNodePrivate() :
    redefinedNodes(new QSet<QActivityNode *>),
    incomings(new QSet<QActivityEdge *>),
    activity(0),
    inGroup(new QSet<QActivityGroup *>),
    inStructuredNode(0),
    inPartition(new QSet<QActivityPartition *>),
    inInterruptibleRegion(new QSet<QInterruptibleActivityRegion *>),
    outgoings(new QSet<QActivityEdge *>)
{
}

QActivityNodePrivate::~QActivityNodePrivate()
{
    delete redefinedNodes;
    delete incomings;
    delete inGroup;
    delete inPartition;
    delete inInterruptibleRegion;
    delete outgoings;
}

void QActivityNodePrivate::addRedefinedNode(QActivityNode *redefinedNode)
{
    this->redefinedNodes->insert(redefinedNode);

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedNode);
}

void QActivityNodePrivate::removeRedefinedNode(QActivityNode *redefinedNode)
{
    this->redefinedNodes->remove(redefinedNode);

    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedNode);
}

void QActivityNodePrivate::addIncoming(QActivityEdge *incoming)
{
    this->incomings->insert(incoming);
}

void QActivityNodePrivate::removeIncoming(QActivityEdge *incoming)
{
    this->incomings->remove(incoming);
}

void QActivityNodePrivate::setActivity(QActivity *activity)
{
    this->activity = activity;

    // Adjust subsetted property(ies)
    setOwner(activity);
}

void QActivityNodePrivate::addInGroup(QActivityGroup *inGroup)
{
    this->inGroup->insert(inGroup);
}

void QActivityNodePrivate::removeInGroup(QActivityGroup *inGroup)
{
    this->inGroup->remove(inGroup);
}

void QActivityNodePrivate::setInStructuredNode(QStructuredActivityNode *inStructuredNode)
{
    // Adjust subsetted property(ies)
    removeInGroup(this->inStructuredNode);

    this->inStructuredNode = inStructuredNode;

    // Adjust subsetted property(ies)
    addInGroup(inStructuredNode);
    setOwner(inStructuredNode);
}

void QActivityNodePrivate::addInPartition(QActivityPartition *inPartition)
{
    this->inPartition->insert(inPartition);

    // Adjust subsetted property(ies)
    addInGroup(inPartition);
}

void QActivityNodePrivate::removeInPartition(QActivityPartition *inPartition)
{
    this->inPartition->remove(inPartition);

    // Adjust subsetted property(ies)
    removeInGroup(inPartition);
}

void QActivityNodePrivate::addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    this->inInterruptibleRegion->insert(inInterruptibleRegion);

    // Adjust subsetted property(ies)
    addInGroup(inInterruptibleRegion);
}

void QActivityNodePrivate::removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    this->inInterruptibleRegion->remove(inInterruptibleRegion);

    // Adjust subsetted property(ies)
    removeInGroup(inInterruptibleRegion);
}

void QActivityNodePrivate::addOutgoing(QActivityEdge *outgoing)
{
    this->outgoings->insert(outgoing);
}

void QActivityNodePrivate::removeOutgoing(QActivityEdge *outgoing)
{
    this->outgoings->remove(outgoing);
}

/*!
    \class QActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */

QActivityNode::QActivityNode()
{
}

QActivityNode::~QActivityNode()
{
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
const QSet<QActivityNode *> *QActivityNode::redefinedNodes() const
{
    QTUML_D(const QActivityNode);
    return d->redefinedNodes;
}

void QActivityNode::addRedefinedNode(QActivityNode *redefinedNode)
{
    QTUML_D(QActivityNode);
    if (!d->redefinedNodes->contains(redefinedNode)) {
        d->addRedefinedNode(redefinedNode);
    }
}

void QActivityNode::removeRedefinedNode(QActivityNode *redefinedNode)
{
    QTUML_D(QActivityNode);
    if (d->redefinedNodes->contains(redefinedNode)) {
        d->removeRedefinedNode(redefinedNode);
    }
}

/*!
    Edges that have the node as target.
 */
const QSet<QActivityEdge *> *QActivityNode::incomings() const
{
    QTUML_D(const QActivityNode);
    return d->incomings;
}

void QActivityNode::addIncoming(QActivityEdge *incoming)
{
    QTUML_D(QActivityNode);
    if (!d->incomings->contains(incoming)) {
        d->addIncoming(incoming);

        // Adjust opposite property
        incoming->setTarget(this);
    }
}

void QActivityNode::removeIncoming(QActivityEdge *incoming)
{
    QTUML_D(QActivityNode);
    if (d->incomings->contains(incoming)) {
        d->removeIncoming(incoming);

        // Adjust opposite property
        incoming->setTarget(0);
    }
}

/*!
    Activity containing the node.
 */
QActivity *QActivityNode::activity() const
{
    QTUML_D(const QActivityNode);
    return d->activity;
}

void QActivityNode::setActivity(QActivity *activity)
{
    QTUML_D(QActivityNode);
    if (d->activity != activity) {
        d->setActivity(activity);

        // Adjust opposite property
        activity->addNode(this);
    }
}

/*!
    Groups containing the node.
 */
const QSet<QActivityGroup *> *QActivityNode::inGroup() const
{
    QTUML_D(const QActivityNode);
    return d->inGroup;
}

/*!
    Structured activity node containing the node.
 */
QStructuredActivityNode *QActivityNode::inStructuredNode() const
{
    QTUML_D(const QActivityNode);
    return d->inStructuredNode;
}

void QActivityNode::setInStructuredNode(QStructuredActivityNode *inStructuredNode)
{
    QTUML_D(QActivityNode);
    if (d->inStructuredNode != inStructuredNode) {
        d->setInStructuredNode(inStructuredNode);

        // Adjust opposite property
        inStructuredNode->addNode(this);
    }
}

/*!
    Partitions containing the node.
 */
const QSet<QActivityPartition *> *QActivityNode::inPartition() const
{
    QTUML_D(const QActivityNode);
    return d->inPartition;
}

void QActivityNode::addInPartition(QActivityPartition *inPartition)
{
    QTUML_D(QActivityNode);
    if (!d->inPartition->contains(inPartition)) {
        d->addInPartition(inPartition);

        // Adjust opposite property
        inPartition->addNode(this);
    }
}

void QActivityNode::removeInPartition(QActivityPartition *inPartition)
{
    QTUML_D(QActivityNode);
    if (d->inPartition->contains(inPartition)) {
        d->removeInPartition(inPartition);

        // Adjust opposite property
        inPartition->removeNode(this);
    }
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QInterruptibleActivityRegion *> *QActivityNode::inInterruptibleRegion() const
{
    QTUML_D(const QActivityNode);
    return d->inInterruptibleRegion;
}

void QActivityNode::addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    QTUML_D(QActivityNode);
    if (!d->inInterruptibleRegion->contains(inInterruptibleRegion)) {
        d->addInInterruptibleRegion(inInterruptibleRegion);

        // Adjust opposite property
        inInterruptibleRegion->addNode(this);
    }
}

void QActivityNode::removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    QTUML_D(QActivityNode);
    if (d->inInterruptibleRegion->contains(inInterruptibleRegion)) {
        d->removeInInterruptibleRegion(inInterruptibleRegion);

        // Adjust opposite property
        inInterruptibleRegion->removeNode(this);
    }
}

/*!
    Edges that have the node as source.
 */
const QSet<QActivityEdge *> *QActivityNode::outgoings() const
{
    QTUML_D(const QActivityNode);
    return d->outgoings;
}

void QActivityNode::addOutgoing(QActivityEdge *outgoing)
{
    QTUML_D(QActivityNode);
    if (!d->outgoings->contains(outgoing)) {
        d->addOutgoing(outgoing);

        // Adjust opposite property
        outgoing->setSource(this);
    }
}

void QActivityNode::removeOutgoing(QActivityEdge *outgoing)
{
    QTUML_D(QActivityNode);
    if (d->outgoings->contains(outgoing)) {
        d->removeOutgoing(outgoing);

        // Adjust opposite property
        outgoing->setSource(0);
    }
}

QT_END_NAMESPACE_QTUML

