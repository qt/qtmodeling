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
#include "qumlactivitynode_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlActivityNodePrivate::QUmlActivityNodePrivate() :
    activity(0),
    inStructuredNode(0)
{
}

/*!
    \class QUmlActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */

QUmlActivityNode::QUmlActivityNode(bool create_d_ptr) :
    QUmlRedefinableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlActivityNodePrivate);
}

// OWNED ATTRIBUTES

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlActivityNode::activity() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityNode);
    return d->activity;
}

void QUmlActivityNode::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (d->activity != activity) {
        d->activity = activity;
    }
}

/*!
    Groups containing the node.
 */
QSet<QUmlActivityGroup *> QUmlActivityNode::inGroup() const
{
    // This is a read-only derived union association end

    QM_D(const QUmlActivityNode);
    return d->inGroup;
}

/*!
    Interruptible regions containing the node.
 */
QSet<QUmlInterruptibleActivityRegion *> QUmlActivityNode::inInterruptibleRegion() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityNode);
    return d->inInterruptibleRegion;
}

void QUmlActivityNode::addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (!d->inInterruptibleRegion.contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion.insert(inInterruptibleRegion);
    }
}

void QUmlActivityNode::removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (d->inInterruptibleRegion.contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion.remove(inInterruptibleRegion);
    }
}

/*!
    Partitions containing the node.
 */
QSet<QUmlActivityPartition *> QUmlActivityNode::inPartition() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityNode);
    return d->inPartition;
}

void QUmlActivityNode::addInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (!d->inPartition.contains(inPartition)) {
        d->inPartition.insert(inPartition);
    }
}

void QUmlActivityNode::removeInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (d->inPartition.contains(inPartition)) {
        d->inPartition.remove(inPartition);
    }
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlActivityNode::inStructuredNode() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityNode);
    return d->inStructuredNode;
}

void QUmlActivityNode::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (d->inStructuredNode != inStructuredNode) {
        d->inStructuredNode = inStructuredNode;
    }
}

/*!
    Edges that have the node as target.
 */
QSet<QUmlActivityEdge *> QUmlActivityNode::incoming() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityNode);
    return d->incoming;
}

void QUmlActivityNode::addIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (!d->incoming.contains(incoming)) {
        d->incoming.insert(incoming);
    }
}

void QUmlActivityNode::removeIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (d->incoming.contains(incoming)) {
        d->incoming.remove(incoming);
    }
}

/*!
    Edges that have the node as source.
 */
QSet<QUmlActivityEdge *> QUmlActivityNode::outgoing() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityNode);
    return d->outgoing;
}

void QUmlActivityNode::addOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (!d->outgoing.contains(outgoing)) {
        d->outgoing.insert(outgoing);
    }
}

void QUmlActivityNode::removeOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (d->outgoing.contains(outgoing)) {
        d->outgoing.remove(outgoing);
    }
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QSet<QUmlActivityNode *> QUmlActivityNode::redefinedNode() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityNode);
    return d->redefinedNode;
}

void QUmlActivityNode::addRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (!d->redefinedNode.contains(redefinedNode)) {
        d->redefinedNode.insert(redefinedNode);
    }
}

void QUmlActivityNode::removeRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    QM_D(QUmlActivityNode);
    if (d->redefinedNode.contains(redefinedNode)) {
        d->redefinedNode.remove(redefinedNode);
    }
}

QT_END_NAMESPACE

