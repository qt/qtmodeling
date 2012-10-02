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

#include "qstructuredactivitynode.h"
//#include "qstructuredactivitynode_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

QStructuredActivityNode::QStructuredActivityNode(QObject *parent)
    : QObject(parent)
{
}

QStructuredActivityNode::~QStructuredActivityNode()
{
}

/*!
    If true, then the actions in the node execute in isolation from actions outside the node.
 */
bool QStructuredActivityNode::mustIsolate() const
{
}

void QStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
}

/*!
    Activity immediately containing the node.
 */
QActivity *QStructuredActivityNode::activity() const
{
}

void QStructuredActivityNode::setActivity(QActivity *activity)
{
}

/*!
    Edges immediately contained in the structured node.
 */
QList<QActivityEdge *> *QStructuredActivityNode::edge()
{
}

/*!
    Nodes immediately contained in the group.
 */
QList<QActivityNode *> *QStructuredActivityNode::node()
{
}

QList<QInputPin *> *QStructuredActivityNode::structuredNodeInput()
{
}

QList<QOutputPin *> *QStructuredActivityNode::structuredNodeOutput()
{
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
QList<QVariable *> *QStructuredActivityNode::variable()
{
}

#include "moc_qstructuredactivitynode.cpp"

QT_END_NAMESPACE_QTUML

