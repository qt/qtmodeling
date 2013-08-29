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
#include "umlstructuredactivitynode_p.h"

#include "private/umlactivity_p.h"
#include "private/umlactivityedge_p.h"
#include "private/umlactivitynode_p.h"
#include "private/umlinputpin_p.h"
#include "private/umloutputpin_p.h"
#include "private/umlvariable_p.h"

/*!
    \class UmlStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

UmlStructuredActivityNode::UmlStructuredActivityNode() :
    _activity(0),
    _mustIsolate(false)
{
}

// OWNED ATTRIBUTES

/*!
    Activity immediately containing the node.
 */
UmlActivity *UmlStructuredActivityNode::activity() const
{
    // This is a read-write association end

    return _activity;
}

void UmlStructuredActivityNode::setActivity(UmlActivity *activity)
{
    // This is a read-write association end

    if (_activity != activity) {
        _activity = activity;
    }
}

/*!
    Edges immediately contained in the structured node.
 */
const QSet<UmlActivityEdge *> UmlStructuredActivityNode::edge() const
{
    // This is a read-write association end

    return _edge;
}

void UmlStructuredActivityNode::addEdge(UmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edge.contains(edge)) {
        _edge.insert(edge);

        // Adjust subsetted properties
        addContainedEdge(edge);
        addOwnedElement(edge);

        // Adjust opposite properties
        if (edge) {
            edge->setInStructuredNode(this);
        }
    }
}

void UmlStructuredActivityNode::removeEdge(UmlActivityEdge *edge)
{
    // This is a read-write association end

    if (_edge.contains(edge)) {
        _edge.remove(edge);

        // Adjust subsetted properties
        removeContainedEdge(edge);
        removeOwnedElement(edge);

        // Adjust opposite properties
        if (edge) {
            edge->setInStructuredNode(0);
        }
    }
}

/*!
    If true, then the actions in the node execute in isolation from actions outside the node.
 */
bool UmlStructuredActivityNode::mustIsolate() const
{
    // This is a read-write property

    return _mustIsolate;
}

void UmlStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    // This is a read-write property

    if (_mustIsolate != mustIsolate) {
        _mustIsolate = mustIsolate;
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<UmlActivityNode *> UmlStructuredActivityNode::node() const
{
    // This is a read-write association end

    return _node;
}

void UmlStructuredActivityNode::addNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (!_node.contains(node)) {
        _node.insert(node);

        // Adjust subsetted properties
        addContainedNode(node);
        addOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setInStructuredNode(this);
        }
    }
}

void UmlStructuredActivityNode::removeNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (_node.contains(node)) {
        _node.remove(node);

        // Adjust subsetted properties
        removeContainedNode(node);
        removeOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setInStructuredNode(0);
        }
    }
}

const QSet<UmlInputPin *> UmlStructuredActivityNode::structuredNodeInput() const
{
    // This is a read-write association end

    return _structuredNodeInput;
}

void UmlStructuredActivityNode::addStructuredNodeInput(UmlInputPin *structuredNodeInput)
{
    // This is a read-write association end

    if (!_structuredNodeInput.contains(structuredNodeInput)) {
        _structuredNodeInput.insert(structuredNodeInput);

        // Adjust subsetted properties
        addInput(structuredNodeInput);
    }
}

void UmlStructuredActivityNode::removeStructuredNodeInput(UmlInputPin *structuredNodeInput)
{
    // This is a read-write association end

    if (_structuredNodeInput.contains(structuredNodeInput)) {
        _structuredNodeInput.remove(structuredNodeInput);

        // Adjust subsetted properties
        removeInput(structuredNodeInput);
    }
}

const QSet<UmlOutputPin *> UmlStructuredActivityNode::structuredNodeOutput() const
{
    // This is a read-write association end

    return _structuredNodeOutput;
}

void UmlStructuredActivityNode::addStructuredNodeOutput(UmlOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    if (!_structuredNodeOutput.contains(structuredNodeOutput)) {
        _structuredNodeOutput.insert(structuredNodeOutput);

        // Adjust subsetted properties
        addOutput(structuredNodeOutput);
    }
}

void UmlStructuredActivityNode::removeStructuredNodeOutput(UmlOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    if (_structuredNodeOutput.contains(structuredNodeOutput)) {
        _structuredNodeOutput.remove(structuredNodeOutput);

        // Adjust subsetted properties
        removeOutput(structuredNodeOutput);
    }
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
const QSet<UmlVariable *> UmlStructuredActivityNode::variable() const
{
    // This is a read-write association end

    return _variable;
}

void UmlStructuredActivityNode::addVariable(UmlVariable *variable)
{
    // This is a read-write association end

    if (!_variable.contains(variable)) {
        _variable.insert(variable);

        // Adjust subsetted properties
        addOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setScope(this);
        }
    }
}

void UmlStructuredActivityNode::removeVariable(UmlVariable *variable)
{
    // This is a read-write association end

    if (_variable.contains(variable)) {
        _variable.remove(variable);

        // Adjust subsetted properties
        removeOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setScope(0);
        }
    }
}

