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

void QActivityNodePrivate::addRedefinedNode(const QActivityNode *redefinedNode)
{
    this->redefinedNodes->insert(const_cast<QActivityNode *>(redefinedNode));

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedNode);
}

void QActivityNodePrivate::removeRedefinedNode(const QActivityNode *redefinedNode)
{
    this->redefinedNodes->remove(const_cast<QActivityNode *>(redefinedNode));

    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedNode);
}

void QActivityNodePrivate::addIncoming(const QActivityEdge *incoming)
{
    this->incomings->insert(const_cast<QActivityEdge *>(incoming));
}

void QActivityNodePrivate::removeIncoming(const QActivityEdge *incoming)
{
    this->incomings->remove(const_cast<QActivityEdge *>(incoming));
}

void QActivityNodePrivate::setActivity(const QActivity *activity)
{
    this->activity = const_cast<QActivity *>(activity);

    // Adjust subsetted property(ies)
    setOwner(activity);
}

void QActivityNodePrivate::addInGroup(const QActivityGroup *inGroup)
{
    this->inGroup->insert(const_cast<QActivityGroup *>(inGroup));
}

void QActivityNodePrivate::removeInGroup(const QActivityGroup *inGroup)
{
    this->inGroup->remove(const_cast<QActivityGroup *>(inGroup));
}

void QActivityNodePrivate::setInStructuredNode(const QStructuredActivityNode *inStructuredNode)
{
    // Adjust subsetted property(ies)
    removeInGroup(this->inStructuredNode);

    this->inStructuredNode = const_cast<QStructuredActivityNode *>(inStructuredNode);

    // Adjust subsetted property(ies)
    addInGroup(inStructuredNode);
    setOwner(inStructuredNode);
}

void QActivityNodePrivate::addInPartition(const QActivityPartition *inPartition)
{
    this->inPartition->insert(const_cast<QActivityPartition *>(inPartition));

    // Adjust subsetted property(ies)
    addInGroup(inPartition);
}

void QActivityNodePrivate::removeInPartition(const QActivityPartition *inPartition)
{
    this->inPartition->remove(const_cast<QActivityPartition *>(inPartition));

    // Adjust subsetted property(ies)
    removeInGroup(inPartition);
}

void QActivityNodePrivate::addInInterruptibleRegion(const QInterruptibleActivityRegion *inInterruptibleRegion)
{
    this->inInterruptibleRegion->insert(const_cast<QInterruptibleActivityRegion *>(inInterruptibleRegion));

    // Adjust subsetted property(ies)
    addInGroup(inInterruptibleRegion);
}

void QActivityNodePrivate::removeInInterruptibleRegion(const QInterruptibleActivityRegion *inInterruptibleRegion)
{
    this->inInterruptibleRegion->remove(const_cast<QInterruptibleActivityRegion *>(inInterruptibleRegion));

    // Adjust subsetted property(ies)
    removeInGroup(inInterruptibleRegion);
}

void QActivityNodePrivate::addOutgoing(const QActivityEdge *outgoing)
{
    this->outgoings->insert(const_cast<QActivityEdge *>(outgoing));
}

void QActivityNodePrivate::removeOutgoing(const QActivityEdge *outgoing)
{
    this->outgoings->remove(const_cast<QActivityEdge *>(outgoing));
}

/*!
    \class QActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */

QActivityNode::QActivityNode()
{
    d_umlptr = new QActivityNodePrivate;
}

QActivityNode::~QActivityNode()
{
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
const QSet<QActivityNode *> *QActivityNode::redefinedNodes() const
{
    Q_D(const QActivityNode);
    return d->redefinedNodes;
}

void QActivityNode::addRedefinedNode(const QActivityNode *redefinedNode)
{
    Q_D(QActivityNode);
    d->addRedefinedNode(const_cast<QActivityNode *>(redefinedNode));
}

void QActivityNode::removeRedefinedNode(const QActivityNode *redefinedNode)
{
    Q_D(QActivityNode);
    d->removeRedefinedNode(const_cast<QActivityNode *>(redefinedNode));
}

/*!
    Edges that have the node as target.
 */
const QSet<QActivityEdge *> *QActivityNode::incomings() const
{
    Q_D(const QActivityNode);
    return d->incomings;
}

void QActivityNode::addIncoming(const QActivityEdge *incoming)
{
    Q_D(QActivityNode);
    d->addIncoming(const_cast<QActivityEdge *>(incoming));
}

void QActivityNode::removeIncoming(const QActivityEdge *incoming)
{
    Q_D(QActivityNode);
    d->removeIncoming(const_cast<QActivityEdge *>(incoming));
}

/*!
    Activity containing the node.
 */
QActivity *QActivityNode::activity() const
{
    Q_D(const QActivityNode);
    return d->activity;
}

void QActivityNode::setActivity(const QActivity *activity)
{
    Q_D(QActivityNode);
    d->setActivity(const_cast<QActivity *>(activity));
}

/*!
    Groups containing the node.
 */
const QSet<QActivityGroup *> *QActivityNode::inGroup() const
{
    Q_D(const QActivityNode);
    return d->inGroup;
}

/*!
    Structured activity node containing the node.
 */
QStructuredActivityNode *QActivityNode::inStructuredNode() const
{
    Q_D(const QActivityNode);
    return d->inStructuredNode;
}

void QActivityNode::setInStructuredNode(const QStructuredActivityNode *inStructuredNode)
{
    Q_D(QActivityNode);
    d->setInStructuredNode(const_cast<QStructuredActivityNode *>(inStructuredNode));
}

/*!
    Partitions containing the node.
 */
const QSet<QActivityPartition *> *QActivityNode::inPartition() const
{
    Q_D(const QActivityNode);
    return d->inPartition;
}

void QActivityNode::addInPartition(const QActivityPartition *inPartition)
{
    Q_D(QActivityNode);
    d->addInPartition(const_cast<QActivityPartition *>(inPartition));
}

void QActivityNode::removeInPartition(const QActivityPartition *inPartition)
{
    Q_D(QActivityNode);
    d->removeInPartition(const_cast<QActivityPartition *>(inPartition));
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QInterruptibleActivityRegion *> *QActivityNode::inInterruptibleRegion() const
{
    Q_D(const QActivityNode);
    return d->inInterruptibleRegion;
}

void QActivityNode::addInInterruptibleRegion(const QInterruptibleActivityRegion *inInterruptibleRegion)
{
    Q_D(QActivityNode);
    d->addInInterruptibleRegion(const_cast<QInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QActivityNode::removeInInterruptibleRegion(const QInterruptibleActivityRegion *inInterruptibleRegion)
{
    Q_D(QActivityNode);
    d->removeInInterruptibleRegion(const_cast<QInterruptibleActivityRegion *>(inInterruptibleRegion));
}

/*!
    Edges that have the node as source.
 */
const QSet<QActivityEdge *> *QActivityNode::outgoings() const
{
    Q_D(const QActivityNode);
    return d->outgoings;
}

void QActivityNode::addOutgoing(const QActivityEdge *outgoing)
{
    Q_D(QActivityNode);
    d->addOutgoing(const_cast<QActivityEdge *>(outgoing));
}

void QActivityNode::removeOutgoing(const QActivityEdge *outgoing)
{
    Q_D(QActivityNode);
    d->removeOutgoing(const_cast<QActivityEdge *>(outgoing));
}

QT_END_NAMESPACE_QTUML

