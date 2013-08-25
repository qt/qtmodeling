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
#include "qumlstructuredactivitynode.h"
#include "qumlstructuredactivitynode_p.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlStructuredActivityNodePrivate::QUmlStructuredActivityNodePrivate() :
    activity(0),
    mustIsolate(false)
{
}

/*!
    \class QUmlStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

QUmlStructuredActivityNode::QUmlStructuredActivityNode(bool create_d_ptr) :
    QUmlAction(false),
    QUmlNamespace(false),
    QUmlActivityGroup(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStructuredActivityNodePrivate);
}

// Owned attributes

/*!
    Activity immediately containing the node.
 */
QUmlActivity *QUmlStructuredActivityNode::activity() const
{
    return 0;
}

void QUmlStructuredActivityNode::setActivity(QUmlActivity *activity)
{
    Q_UNUSED(activity);
}

/*!
    Edges immediately contained in the structured node.
 */
QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::edge() const
{
    return QSet<QUmlActivityEdge *>();
}

void QUmlStructuredActivityNode::addEdge(QSet<QUmlActivityEdge *> edge)
{
    Q_UNUSED(edge);
}

void QUmlStructuredActivityNode::removeEdge(QSet<QUmlActivityEdge *> edge)
{
    Q_UNUSED(edge);
}

/*!
    If true, then the actions in the node execute in isolation from actions outside the node.
 */
bool QUmlStructuredActivityNode::mustIsolate() const
{
    return bool();
}

void QUmlStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    Q_UNUSED(mustIsolate);
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlStructuredActivityNode::node() const
{
    return QSet<QUmlActivityNode *>();
}

void QUmlStructuredActivityNode::addNode(QSet<QUmlActivityNode *> node)
{
    Q_UNUSED(node);
}

void QUmlStructuredActivityNode::removeNode(QSet<QUmlActivityNode *> node)
{
    Q_UNUSED(node);
}

QSet<QUmlInputPin *> QUmlStructuredActivityNode::structuredNodeInput() const
{
    return QSet<QUmlInputPin *>();
}

void QUmlStructuredActivityNode::addStructuredNodeInput(QSet<QUmlInputPin *> structuredNodeInput)
{
    Q_UNUSED(structuredNodeInput);
}

void QUmlStructuredActivityNode::removeStructuredNodeInput(QSet<QUmlInputPin *> structuredNodeInput)
{
    Q_UNUSED(structuredNodeInput);
}

QSet<QUmlOutputPin *> QUmlStructuredActivityNode::structuredNodeOutput() const
{
    return QSet<QUmlOutputPin *>();
}

void QUmlStructuredActivityNode::addStructuredNodeOutput(QSet<QUmlOutputPin *> structuredNodeOutput)
{
    Q_UNUSED(structuredNodeOutput);
}

void QUmlStructuredActivityNode::removeStructuredNodeOutput(QSet<QUmlOutputPin *> structuredNodeOutput)
{
    Q_UNUSED(structuredNodeOutput);
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
QSet<QUmlVariable *> QUmlStructuredActivityNode::variable() const
{
    return QSet<QUmlVariable *>();
}

void QUmlStructuredActivityNode::addVariable(QSet<QUmlVariable *> variable)
{
    Q_UNUSED(variable);
}

void QUmlStructuredActivityNode::removeVariable(QSet<QUmlVariable *> variable)
{
    Q_UNUSED(variable);
}

QT_END_NAMESPACE

