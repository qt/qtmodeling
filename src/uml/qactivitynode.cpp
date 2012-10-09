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

/*!
    \class QActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */

QActivityNode::QActivityNode()
    : d_ptr(new QActivityNodePrivate)
{
}

QActivityNode::~QActivityNode()
{
    delete d_ptr;
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
const QSet<QActivityNode *> *QActivityNode::redefinedNodes() const
{
    return d_ptr->redefinedNodes;
}

void QActivityNode::addRedefinedNode(const QActivityNode *redefinedNode)
{
    d_ptr->redefinedNodes->insert(const_cast<QActivityNode *>(redefinedNode));
}

void QActivityNode::removeRedefinedNode(const QActivityNode *redefinedNode)
{
    d_ptr->redefinedNodes->remove(const_cast<QActivityNode *>(redefinedNode));
}

/*!
    Edges that have the node as target.
 */
const QSet<QActivityEdge *> *QActivityNode::incomings() const
{
    return d_ptr->incomings;
}

void QActivityNode::addIncoming(const QActivityEdge *incoming)
{
    d_ptr->incomings->insert(const_cast<QActivityEdge *>(incoming));
}

void QActivityNode::removeIncoming(const QActivityEdge *incoming)
{
    d_ptr->incomings->remove(const_cast<QActivityEdge *>(incoming));
}

/*!
    Activity containing the node.
 */
QActivity *QActivityNode::activity() const
{
    return d_ptr->activity;
}

void QActivityNode::setActivity(const QActivity *activity)
{
    d_ptr->activity = const_cast<QActivity *>(activity);
}

/*!
    Groups containing the node.
 */
const QSet<QActivityGroup *> *QActivityNode::inGroup() const
{
    return d_ptr->inGroup;
}

/*!
    Structured activity node containing the node.
 */
QStructuredActivityNode *QActivityNode::inStructuredNode() const
{
    return d_ptr->inStructuredNode;
}

void QActivityNode::setInStructuredNode(const QStructuredActivityNode *inStructuredNode)
{
    d_ptr->inStructuredNode = const_cast<QStructuredActivityNode *>(inStructuredNode);
}

/*!
    Partitions containing the node.
 */
const QSet<QActivityPartition *> *QActivityNode::inPartition() const
{
    return d_ptr->inPartition;
}

void QActivityNode::addInPartition(const QActivityPartition *inPartition)
{
    d_ptr->inPartition->insert(const_cast<QActivityPartition *>(inPartition));
}

void QActivityNode::removeInPartition(const QActivityPartition *inPartition)
{
    d_ptr->inPartition->remove(const_cast<QActivityPartition *>(inPartition));
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QInterruptibleActivityRegion *> *QActivityNode::inInterruptibleRegion() const
{
    return d_ptr->inInterruptibleRegion;
}

void QActivityNode::addInInterruptibleRegion(const QInterruptibleActivityRegion *inInterruptibleRegion)
{
    d_ptr->inInterruptibleRegion->insert(const_cast<QInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QActivityNode::removeInInterruptibleRegion(const QInterruptibleActivityRegion *inInterruptibleRegion)
{
    d_ptr->inInterruptibleRegion->remove(const_cast<QInterruptibleActivityRegion *>(inInterruptibleRegion));
}

/*!
    Edges that have the node as source.
 */
const QSet<QActivityEdge *> *QActivityNode::outgoings() const
{
    return d_ptr->outgoings;
}

void QActivityNode::addOutgoing(const QActivityEdge *outgoing)
{
    d_ptr->outgoings->insert(const_cast<QActivityEdge *>(outgoing));
}

void QActivityNode::removeOutgoing(const QActivityEdge *outgoing)
{
    d_ptr->outgoings->remove(const_cast<QActivityEdge *>(outgoing));
}

QT_END_NAMESPACE_QTUML

