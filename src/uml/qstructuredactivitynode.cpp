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

#include <QtUml/QOutputPin>
#include <QtUml/QVariable>
#include <QtUml/QInputPin>
#include <QtUml/QActivityEdge>
#include <QtUml/QActivity>
#include <QtUml/QActivityNode>

QT_BEGIN_NAMESPACE_QTUML

QStructuredActivityNodePrivate::QStructuredActivityNodePrivate(QStructuredActivityNode *q_umlptr) :
    mustIsolate(false),
    structuredNodeInputs(new QSet<QInputPin *>),
    nodes(new QSet<QActivityNode *>),
    structuredNodeOutputs(new QSet<QOutputPin *>),
    edges(new QSet<QActivityEdge *>),
    variables(new QSet<QVariable *>),
    activity(0)
{
    this->q_umlptr = q_umlptr;
}

QStructuredActivityNodePrivate::~QStructuredActivityNodePrivate()
{
    delete structuredNodeInputs;
    delete nodes;
    delete structuredNodeOutputs;
    delete edges;
    delete variables;
}

/*!
    \class QStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

QStructuredActivityNode::QStructuredActivityNode(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QStructuredActivityNodePrivate(this);
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
    // This is a read-write attribute

    QTUML_D(const QStructuredActivityNode);
    return d->mustIsolate;
}

void QStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    // This is a read-write attribute

    QTUML_D(QStructuredActivityNode);
    if (d->mustIsolate != mustIsolate) {
        d->mustIsolate = mustIsolate;
    }
}

const QSet<QInputPin *> *QStructuredActivityNode::structuredNodeInputs() const
{
    // This is a read-write association end

    QTUML_D(const QStructuredActivityNode);
    return d->structuredNodeInputs;
}

void QStructuredActivityNode::addStructuredNodeInput(QInputPin *structuredNodeInput)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (!d->structuredNodeInputs->contains(structuredNodeInput)) {
        d->structuredNodeInputs->insert(structuredNodeInput);

        // Adjust subsetted property(ies)
        d->QActionPrivate::addInput(dynamic_cast<QInputPin *>(structuredNodeInput));
    }
}

void QStructuredActivityNode::removeStructuredNodeInput(QInputPin *structuredNodeInput)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (d->structuredNodeInputs->contains(structuredNodeInput)) {
        d->structuredNodeInputs->remove(structuredNodeInput);

        // Adjust subsetted property(ies)
        d->QActionPrivate::removeInput(dynamic_cast<QInputPin *>(structuredNodeInput));
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QStructuredActivityNode::nodes() const
{
    // This is a read-write association end

    QTUML_D(const QStructuredActivityNode);
    return d->nodes;
}

void QStructuredActivityNode::addNode(QActivityNode *node)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (!d->nodes->contains(node)) {
        d->nodes->insert(node);

        // Adjust subsetted property(ies)
        d->QActivityGroupPrivate::addContainedNode(dynamic_cast<QActivityNode *>(node));
        d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(node));

        // Adjust opposite property
        node->setInStructuredNode(this);
    }
}

void QStructuredActivityNode::removeNode(QActivityNode *node)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (d->nodes->contains(node)) {
        d->nodes->remove(node);

        // Adjust subsetted property(ies)
        d->QActivityGroupPrivate::removeContainedNode(dynamic_cast<QActivityNode *>(node));
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(node));

        // Adjust opposite property
        node->setInStructuredNode(0);
    }
}

const QSet<QOutputPin *> *QStructuredActivityNode::structuredNodeOutputs() const
{
    // This is a read-write association end

    QTUML_D(const QStructuredActivityNode);
    return d->structuredNodeOutputs;
}

void QStructuredActivityNode::addStructuredNodeOutput(QOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (!d->structuredNodeOutputs->contains(structuredNodeOutput)) {
        d->structuredNodeOutputs->insert(structuredNodeOutput);

        // Adjust subsetted property(ies)
        d->QActionPrivate::addOutput(dynamic_cast<QOutputPin *>(structuredNodeOutput));
    }
}

void QStructuredActivityNode::removeStructuredNodeOutput(QOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (d->structuredNodeOutputs->contains(structuredNodeOutput)) {
        d->structuredNodeOutputs->remove(structuredNodeOutput);

        // Adjust subsetted property(ies)
        d->QActionPrivate::removeOutput(dynamic_cast<QOutputPin *>(structuredNodeOutput));
    }
}

/*!
    Edges immediately contained in the structured node.
 */
const QSet<QActivityEdge *> *QStructuredActivityNode::edges() const
{
    // This is a read-write association end

    QTUML_D(const QStructuredActivityNode);
    return d->edges;
}

void QStructuredActivityNode::addEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (!d->edges->contains(edge)) {
        d->edges->insert(edge);

        // Adjust subsetted property(ies)
        d->QActivityGroupPrivate::addContainedEdge(dynamic_cast<QActivityEdge *>(edge));
        d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(edge));

        // Adjust opposite property
        edge->setInStructuredNode(this);
    }
}

void QStructuredActivityNode::removeEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (d->edges->contains(edge)) {
        d->edges->remove(edge);

        // Adjust subsetted property(ies)
        d->QActivityGroupPrivate::removeContainedEdge(dynamic_cast<QActivityEdge *>(edge));
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(edge));

        // Adjust opposite property
        edge->setInStructuredNode(0);
    }
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
const QSet<QVariable *> *QStructuredActivityNode::variables() const
{
    // This is a read-write association end

    QTUML_D(const QStructuredActivityNode);
    return d->variables;
}

void QStructuredActivityNode::addVariable(QVariable *variable)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (!d->variables->contains(variable)) {
        d->variables->insert(variable);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::addOwnedMember(dynamic_cast<QNamedElement *>(variable));

        // Adjust opposite property
        variable->setScope(this);
    }
}

void QStructuredActivityNode::removeVariable(QVariable *variable)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (d->variables->contains(variable)) {
        d->variables->remove(variable);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::removeOwnedMember(dynamic_cast<QNamedElement *>(variable));

        // Adjust opposite property
        variable->setScope(0);
    }
}

/*!
    Activity immediately containing the node.
 */
QActivity *QStructuredActivityNode::activity() const
{
    // This is a read-write association end

    QTUML_D(const QStructuredActivityNode);
    return d->activity;
}

void QStructuredActivityNode::setActivity(QActivity *activity)
{
    // This is a read-write association end

    QTUML_D(QStructuredActivityNode);
    if (d->activity != activity) {
        // Adjust opposite property
        if (d->activity)
            d->activity->removeStructuredNode(this);

        d->activity = activity;

        // Adjust opposite property
        if (activity)
            activity->addStructuredNode(this);
    }
}

#include "moc_qstructuredactivitynode.cpp"

QT_END_NAMESPACE_QTUML

