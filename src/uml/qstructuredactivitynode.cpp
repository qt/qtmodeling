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
#include "qstructuredactivitynode_p.h"
#include "qaction_p.h"
#include "qactivitygroup_p.h"
#include "qelement_p.h"
#include "qaction_p.h"
#include "qactivitygroup_p.h"
#include "qelement_p.h"
#include "qnamespace_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QVariable>
#include <QtUml/QInputPin>
#include <QtUml/QActivityEdge>
#include <QtUml/QActivity>
#include <QtUml/QActivityNode>

QT_BEGIN_NAMESPACE_QTUML

QStructuredActivityNodePrivate::QStructuredActivityNodePrivate() :
    mustIsolate(false),
    structuredNodeInputs(new QSet<QInputPin *>),
    nodes(new QSet<QActivityNode *>),
    structuredNodeOutputs(new QSet<QOutputPin *>),
    edges(new QSet<QActivityEdge *>),
    variables(new QSet<QVariable *>),
    activity(0)
{
}

QStructuredActivityNodePrivate::~QStructuredActivityNodePrivate()
{
    delete structuredNodeInputs;
    delete nodes;
    delete structuredNodeOutputs;
    delete edges;
    delete variables;
}

void QStructuredActivityNodePrivate::setMustIsolate(bool mustIsolate)
{
    this->mustIsolate = mustIsolate;
}

void QStructuredActivityNodePrivate::addStructuredNodeInput(const QInputPin *structuredNodeInput)
{
    this->structuredNodeInputs->insert(const_cast<QInputPin *>(structuredNodeInput));
    // Adjust subsetted property(ies)
    addInput(structuredNodeInput);
}

void QStructuredActivityNodePrivate::removeStructuredNodeInput(const QInputPin *structuredNodeInput)
{
    this->structuredNodeInputs->remove(const_cast<QInputPin *>(structuredNodeInput));
    // Adjust subsetted property(ies)
    removeInput(structuredNodeInput);
}

void QStructuredActivityNodePrivate::addNode(const QActivityNode *node)
{
    this->nodes->insert(const_cast<QActivityNode *>(node));
    // Adjust subsetted property(ies)
    addContainedNode(node);
    addOwnedElement(node);
}

void QStructuredActivityNodePrivate::removeNode(const QActivityNode *node)
{
    this->nodes->remove(const_cast<QActivityNode *>(node));
    // Adjust subsetted property(ies)
    removeContainedNode(node);
    removeOwnedElement(node);
}

void QStructuredActivityNodePrivate::addStructuredNodeOutput(const QOutputPin *structuredNodeOutput)
{
    this->structuredNodeOutputs->insert(const_cast<QOutputPin *>(structuredNodeOutput));
    // Adjust subsetted property(ies)
    addOutput(structuredNodeOutput);
}

void QStructuredActivityNodePrivate::removeStructuredNodeOutput(const QOutputPin *structuredNodeOutput)
{
    this->structuredNodeOutputs->remove(const_cast<QOutputPin *>(structuredNodeOutput));
    // Adjust subsetted property(ies)
    removeOutput(structuredNodeOutput);
}

void QStructuredActivityNodePrivate::addEdge(const QActivityEdge *edge)
{
    this->edges->insert(const_cast<QActivityEdge *>(edge));
    // Adjust subsetted property(ies)
    addContainedEdge(edge);
    addOwnedElement(edge);
}

void QStructuredActivityNodePrivate::removeEdge(const QActivityEdge *edge)
{
    this->edges->remove(const_cast<QActivityEdge *>(edge));
    // Adjust subsetted property(ies)
    removeContainedEdge(edge);
    removeOwnedElement(edge);
}

void QStructuredActivityNodePrivate::addVariable(const QVariable *variable)
{
    this->variables->insert(const_cast<QVariable *>(variable));
    // Adjust subsetted property(ies)
    addOwnedMember(variable);
}

void QStructuredActivityNodePrivate::removeVariable(const QVariable *variable)
{
    this->variables->remove(const_cast<QVariable *>(variable));
    // Adjust subsetted property(ies)
    removeOwnedMember(variable);
}

void QStructuredActivityNodePrivate::setActivity(const QActivity *activity)
{
    this->activity = const_cast<QActivity *>(activity);
}

/*!
    \class QStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

QStructuredActivityNode::QStructuredActivityNode(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QStructuredActivityNodePrivate;
}

QStructuredActivityNode::QStructuredActivityNode(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QStructuredActivityNodePrivate;
}

QStructuredActivityNode::~QStructuredActivityNode()
{
}

/*!
    If true, then the actions in the node execute in isolation from actions outside the node.
 */
bool QStructuredActivityNode::mustIsolate() const
{
    Q_D(const QStructuredActivityNode);
    return d->mustIsolate;
}

void QStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    Q_D(QStructuredActivityNode);
    d->setMustIsolate(mustIsolate);
}

const QSet<QInputPin *> *QStructuredActivityNode::structuredNodeInputs() const
{
    Q_D(const QStructuredActivityNode);
    return d->structuredNodeInputs;
}

void QStructuredActivityNode::addStructuredNodeInput(const QInputPin *structuredNodeInput)
{
    Q_D(QStructuredActivityNode);
    d->addStructuredNodeInput(const_cast<QInputPin *>(structuredNodeInput));
}

void QStructuredActivityNode::removeStructuredNodeInput(const QInputPin *structuredNodeInput)
{
    Q_D(QStructuredActivityNode);
    d->removeStructuredNodeInput(const_cast<QInputPin *>(structuredNodeInput));
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QStructuredActivityNode::nodes() const
{
    Q_D(const QStructuredActivityNode);
    return d->nodes;
}

void QStructuredActivityNode::addNode(const QActivityNode *node)
{
    Q_D(QStructuredActivityNode);
    d->addNode(const_cast<QActivityNode *>(node));
}

void QStructuredActivityNode::removeNode(const QActivityNode *node)
{
    Q_D(QStructuredActivityNode);
    d->removeNode(const_cast<QActivityNode *>(node));
}

const QSet<QOutputPin *> *QStructuredActivityNode::structuredNodeOutputs() const
{
    Q_D(const QStructuredActivityNode);
    return d->structuredNodeOutputs;
}

void QStructuredActivityNode::addStructuredNodeOutput(const QOutputPin *structuredNodeOutput)
{
    Q_D(QStructuredActivityNode);
    d->addStructuredNodeOutput(const_cast<QOutputPin *>(structuredNodeOutput));
}

void QStructuredActivityNode::removeStructuredNodeOutput(const QOutputPin *structuredNodeOutput)
{
    Q_D(QStructuredActivityNode);
    d->removeStructuredNodeOutput(const_cast<QOutputPin *>(structuredNodeOutput));
}

/*!
    Edges immediately contained in the structured node.
 */
const QSet<QActivityEdge *> *QStructuredActivityNode::edges() const
{
    Q_D(const QStructuredActivityNode);
    return d->edges;
}

void QStructuredActivityNode::addEdge(const QActivityEdge *edge)
{
    Q_D(QStructuredActivityNode);
    d->addEdge(const_cast<QActivityEdge *>(edge));
}

void QStructuredActivityNode::removeEdge(const QActivityEdge *edge)
{
    Q_D(QStructuredActivityNode);
    d->removeEdge(const_cast<QActivityEdge *>(edge));
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
const QSet<QVariable *> *QStructuredActivityNode::variables() const
{
    Q_D(const QStructuredActivityNode);
    return d->variables;
}

void QStructuredActivityNode::addVariable(const QVariable *variable)
{
    Q_D(QStructuredActivityNode);
    d->addVariable(const_cast<QVariable *>(variable));
}

void QStructuredActivityNode::removeVariable(const QVariable *variable)
{
    Q_D(QStructuredActivityNode);
    d->removeVariable(const_cast<QVariable *>(variable));
}

/*!
    Activity immediately containing the node.
 */
QActivity *QStructuredActivityNode::activity() const
{
    Q_D(const QStructuredActivityNode);
    return d->activity;
}

void QStructuredActivityNode::setActivity(const QActivity *activity)
{
    Q_D(QStructuredActivityNode);
    d->setActivity(const_cast<QActivity *>(activity));
}

#include "moc_qstructuredactivitynode.cpp"

QT_END_NAMESPACE_QTUML

