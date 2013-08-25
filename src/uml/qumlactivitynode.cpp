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

// Owned attributes

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlActivityNode::activity() const
{
    return 0;
}

void QUmlActivityNode::setActivity(QUmlActivity *activity)
{
    Q_UNUSED(activity);
}

/*!
    Groups containing the node.
 */
QSet<QUmlActivityGroup *> QUmlActivityNode::inGroup() const
{
    return QSet<QUmlActivityGroup *>();
}

/*!
    Interruptible regions containing the node.
 */
QSet<QUmlInterruptibleActivityRegion *> QUmlActivityNode::inInterruptibleRegion() const
{
    return QSet<QUmlInterruptibleActivityRegion *>();
}

void QUmlActivityNode::addInInterruptibleRegion(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion)
{
    Q_UNUSED(inInterruptibleRegion);
}

void QUmlActivityNode::removeInInterruptibleRegion(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion)
{
    Q_UNUSED(inInterruptibleRegion);
}

/*!
    Partitions containing the node.
 */
QSet<QUmlActivityPartition *> QUmlActivityNode::inPartition() const
{
    return QSet<QUmlActivityPartition *>();
}

void QUmlActivityNode::addInPartition(QSet<QUmlActivityPartition *> inPartition)
{
    Q_UNUSED(inPartition);
}

void QUmlActivityNode::removeInPartition(QSet<QUmlActivityPartition *> inPartition)
{
    Q_UNUSED(inPartition);
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlActivityNode::inStructuredNode() const
{
    return 0;
}

void QUmlActivityNode::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    Q_UNUSED(inStructuredNode);
}

/*!
    Edges that have the node as target.
 */
QSet<QUmlActivityEdge *> QUmlActivityNode::incoming() const
{
    return QSet<QUmlActivityEdge *>();
}

void QUmlActivityNode::addIncoming(QSet<QUmlActivityEdge *> incoming)
{
    Q_UNUSED(incoming);
}

void QUmlActivityNode::removeIncoming(QSet<QUmlActivityEdge *> incoming)
{
    Q_UNUSED(incoming);
}

/*!
    Edges that have the node as source.
 */
QSet<QUmlActivityEdge *> QUmlActivityNode::outgoing() const
{
    return QSet<QUmlActivityEdge *>();
}

void QUmlActivityNode::addOutgoing(QSet<QUmlActivityEdge *> outgoing)
{
    Q_UNUSED(outgoing);
}

void QUmlActivityNode::removeOutgoing(QSet<QUmlActivityEdge *> outgoing)
{
    Q_UNUSED(outgoing);
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QSet<QUmlActivityNode *> QUmlActivityNode::redefinedNode() const
{
    return QSet<QUmlActivityNode *>();
}

void QUmlActivityNode::addRedefinedNode(QSet<QUmlActivityNode *> redefinedNode)
{
    Q_UNUSED(redefinedNode);
}

void QUmlActivityNode::removeRedefinedNode(QSet<QUmlActivityNode *> redefinedNode)
{
    Q_UNUSED(redefinedNode);
}

QT_END_NAMESPACE

