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

#include <QtUml/QOutputPin>
#include <QtUml/QVariable>
#include <QtUml/QInputPin>
#include <QtUml/QActivityEdge>
#include <QtUml/QActivity>
#include <QtUml/QActivityNode>

QT_BEGIN_NAMESPACE_QTUML

class QStructuredActivityNodePrivate
{
public:
    explicit QStructuredActivityNodePrivate();
    virtual ~QStructuredActivityNodePrivate();

    bool mustIsolate;
    QActivity *activity;
    QSet<QActivityEdge *> *edges;
    QSet<QActivityNode *> *nodes;
    QSet<QInputPin *> *structuredNodeInputs;
    QSet<QOutputPin *> *structuredNodeOutputs;
    QSet<QVariable *> *variables;
};

QStructuredActivityNodePrivate::QStructuredActivityNodePrivate() :
    mustIsolate(false),
    edges(new QSet<QActivityEdge *>),
    nodes(new QSet<QActivityNode *>),
    structuredNodeInputs(new QSet<QInputPin *>),
    structuredNodeOutputs(new QSet<QOutputPin *>),
    variables(new QSet<QVariable *>)
{
}

QStructuredActivityNodePrivate::~QStructuredActivityNodePrivate()
{
    delete edges;
    delete nodes;
    delete structuredNodeInputs;
    delete structuredNodeOutputs;
    delete variables;
}

/*!
    \class QStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

QStructuredActivityNode::QStructuredActivityNode(QObject *parent)
    : QObject(parent), d_ptr(new QStructuredActivityNodePrivate)
{
}

QStructuredActivityNode::~QStructuredActivityNode()
{
    delete d_ptr;
}

/*!
    If true, then the actions in the node execute in isolation from actions outside the node.
 */
bool QStructuredActivityNode::mustIsolate() const
{
    return d_ptr->mustIsolate;
}

void QStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    d_ptr->mustIsolate = mustIsolate;
}

/*!
    Activity immediately containing the node.
 */
QActivity *QStructuredActivityNode::activity() const
{
    return d_ptr->activity;
}

void QStructuredActivityNode::setActivity(const QActivity *activity)
{
    d_ptr->activity = const_cast<QActivity *>(activity);
}

/*!
    Edges immediately contained in the structured node.
 */
const QSet<QActivityEdge *> *QStructuredActivityNode::edges() const
{
    return d_ptr->edges;
}

void QStructuredActivityNode::addEdge(const QActivityEdge *edge)
{
    d_ptr->edges->insert(const_cast<QActivityEdge *>(edge));
    // Adjust subsetted property(ies)
    addContainedEdge(edge);
    addOwnedElement(edge);
}

void QStructuredActivityNode::removeEdge(const QActivityEdge *edge)
{
    d_ptr->edges->remove(const_cast<QActivityEdge *>(edge));
    // Adjust subsetted property(ies)
    removeContainedEdge(edge);
    removeOwnedElement(edge);
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QStructuredActivityNode::nodes() const
{
    return d_ptr->nodes;
}

void QStructuredActivityNode::addNode(const QActivityNode *node)
{
    d_ptr->nodes->insert(const_cast<QActivityNode *>(node));
    // Adjust subsetted property(ies)
    addContainedNode(node);
    addOwnedElement(node);
}

void QStructuredActivityNode::removeNode(const QActivityNode *node)
{
    d_ptr->nodes->remove(const_cast<QActivityNode *>(node));
    // Adjust subsetted property(ies)
    removeContainedNode(node);
    removeOwnedElement(node);
}

const QSet<QInputPin *> *QStructuredActivityNode::structuredNodeInputs() const
{
    return d_ptr->structuredNodeInputs;
}

void QStructuredActivityNode::addStructuredNodeInput(const QInputPin *structuredNodeInput)
{
    d_ptr->structuredNodeInputs->insert(const_cast<QInputPin *>(structuredNodeInput));
    // Adjust subsetted property(ies)
    addInput(structuredNodeInput);
}

void QStructuredActivityNode::removeStructuredNodeInput(const QInputPin *structuredNodeInput)
{
    d_ptr->structuredNodeInputs->remove(const_cast<QInputPin *>(structuredNodeInput));
    // Adjust subsetted property(ies)
    removeInput(structuredNodeInput);
}

const QSet<QOutputPin *> *QStructuredActivityNode::structuredNodeOutputs() const
{
    return d_ptr->structuredNodeOutputs;
}

void QStructuredActivityNode::addStructuredNodeOutput(const QOutputPin *structuredNodeOutput)
{
    d_ptr->structuredNodeOutputs->insert(const_cast<QOutputPin *>(structuredNodeOutput));
    // Adjust subsetted property(ies)
    addOutput(structuredNodeOutput);
}

void QStructuredActivityNode::removeStructuredNodeOutput(const QOutputPin *structuredNodeOutput)
{
    d_ptr->structuredNodeOutputs->remove(const_cast<QOutputPin *>(structuredNodeOutput));
    // Adjust subsetted property(ies)
    removeOutput(structuredNodeOutput);
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
const QSet<QVariable *> *QStructuredActivityNode::variables() const
{
    return d_ptr->variables;
}

void QStructuredActivityNode::addVariable(const QVariable *variable)
{
    d_ptr->variables->insert(const_cast<QVariable *>(variable));
    // Adjust subsetted property(ies)
    addOwnedMember(variable);
}

void QStructuredActivityNode::removeVariable(const QVariable *variable)
{
    d_ptr->variables->remove(const_cast<QVariable *>(variable));
    // Adjust subsetted property(ies)
    removeOwnedMember(variable);
}

#include "moc_qstructuredactivitynode.cpp"

QT_END_NAMESPACE_QTUML

