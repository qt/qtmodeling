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
//#include "qactivitynode_p.h"

QT_BEGIN_NAMESPACE_QTUML

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
    Activity containing the node.
 */
QActivity *QActivityNode::activity() const
{
}

void QActivityNode::setActivity(QActivity *activity)
{
}

/*!
    Groups containing the node.
 */
const QList<QActivityGroup *> *QActivityNode::inGroup() const
{
}

/*!
    Interruptible regions containing the node.
 */
QList<QInterruptibleActivityRegion *> *QActivityNode::inInterruptibleRegion()
{
}

/*!
    Partitions containing the node.
 */
QList<QActivityPartition *> *QActivityNode::inPartition()
{
}

/*!
    Structured activity node containing the node.
 */
QStructuredActivityNode *QActivityNode::inStructuredNode() const
{
}

void QActivityNode::setInStructuredNode(QStructuredActivityNode *inStructuredNode)
{
}

/*!
    Edges that have the node as target.
 */
QList<QActivityEdge *> *QActivityNode::incomings()
{
}

/*!
    Edges that have the node as source.
 */
QList<QActivityEdge *> *QActivityNode::outgoings()
{
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QList<QActivityNode *> *QActivityNode::redefinedNodes()
{
}

QT_END_NAMESPACE_QTUML

