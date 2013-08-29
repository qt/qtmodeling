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
#include "umlactivity_p.h"

#include "private/umlactivityedge_p.h"
#include "private/umlactivitygroup_p.h"
#include "private/umlactivitynode_p.h"
#include "private/umlactivitypartition_p.h"
#include "private/umlstructuredactivitynode_p.h"
#include "private/umlvariable_p.h"

/*!
    \class UmlActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

UmlActivity::UmlActivity() :
    _isReadOnly(false),
    _isSingleExecution(false)
{
}

// OWNED ATTRIBUTES

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<UmlActivityEdge *> UmlActivity::edge() const
{
    // This is a read-write association end

    return _edge;
}

void UmlActivity::addEdge(UmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edge.contains(edge)) {
        _edge.insert(edge);

        // Adjust subsetted properties
        addOwnedElement(edge);

        // Adjust opposite properties
        if (edge) {
            edge->setActivity(this);
        }
    }
}

void UmlActivity::removeEdge(UmlActivityEdge *edge)
{
    // This is a read-write association end

    if (_edge.contains(edge)) {
        _edge.remove(edge);

        // Adjust subsetted properties
        removeOwnedElement(edge);

        // Adjust opposite properties
        if (edge) {
            edge->setActivity(0);
        }
    }
}

/*!
    Top-level groups in the activity.
 */
const QSet<UmlActivityGroup *> UmlActivity::group() const
{
    // This is a read-write association end

    return _group;
}

void UmlActivity::addGroup(UmlActivityGroup *group)
{
    // This is a read-write association end

    if (!_group.contains(group)) {
        _group.insert(group);

        // Adjust subsetted properties
        addOwnedElement(group);

        // Adjust opposite properties
        if (group) {
            group->setInActivity(this);
        }
    }
}

void UmlActivity::removeGroup(UmlActivityGroup *group)
{
    // This is a read-write association end

    if (_group.contains(group)) {
        _group.remove(group);

        // Adjust subsetted properties
        removeOwnedElement(group);

        // Adjust opposite properties
        if (group) {
            group->setInActivity(0);
        }
    }
}

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool UmlActivity::isReadOnly() const
{
    // This is a read-write property

    return _isReadOnly;
}

void UmlActivity::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    if (_isReadOnly != isReadOnly) {
        _isReadOnly = isReadOnly;
    }
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool UmlActivity::isSingleExecution() const
{
    // This is a read-write property

    return _isSingleExecution;
}

void UmlActivity::setSingleExecution(bool isSingleExecution)
{
    // This is a read-write property

    if (_isSingleExecution != isSingleExecution) {
        _isSingleExecution = isSingleExecution;
    }
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<UmlActivityNode *> UmlActivity::node() const
{
    // This is a read-write association end

    return _node;
}

void UmlActivity::addNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (!_node.contains(node)) {
        _node.insert(node);

        // Adjust subsetted properties
        addOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setActivity(this);
        }
    }
}

void UmlActivity::removeNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (_node.contains(node)) {
        _node.remove(node);

        // Adjust subsetted properties
        removeOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setActivity(0);
        }
    }
}

/*!
    Top-level partitions in the activity.
 */
const QSet<UmlActivityPartition *> UmlActivity::partition() const
{
    // This is a read-write association end

    return _partition;
}

void UmlActivity::addPartition(UmlActivityPartition *partition)
{
    // This is a read-write association end

    if (!_partition.contains(partition)) {
        _partition.insert(partition);

        // Adjust subsetted properties
        addGroup(partition);
    }
}

void UmlActivity::removePartition(UmlActivityPartition *partition)
{
    // This is a read-write association end

    if (_partition.contains(partition)) {
        _partition.remove(partition);

        // Adjust subsetted properties
        removeGroup(partition);
    }
}

/*!
    Top-level structured nodes in the activity.
 */
const QSet<UmlStructuredActivityNode *> UmlActivity::structuredNode() const
{
    // This is a read-write association end

    return _structuredNode;
}

void UmlActivity::addStructuredNode(UmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    if (!_structuredNode.contains(structuredNode)) {
        _structuredNode.insert(structuredNode);

        // Adjust subsetted properties
        addGroup(structuredNode);
        addNode(structuredNode);

        // Adjust opposite properties
        if (structuredNode) {
            structuredNode->setActivity(this);
        }
    }
}

void UmlActivity::removeStructuredNode(UmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    if (_structuredNode.contains(structuredNode)) {
        _structuredNode.remove(structuredNode);

        // Adjust subsetted properties
        removeGroup(structuredNode);
        removeNode(structuredNode);

        // Adjust opposite properties
        if (structuredNode) {
            structuredNode->setActivity(0);
        }
    }
}

/*!
    Top-level variables in the activity.
 */
const QSet<UmlVariable *> UmlActivity::variable() const
{
    // This is a read-write association end

    return _variable;
}

void UmlActivity::addVariable(UmlVariable *variable)
{
    // This is a read-write association end

    if (!_variable.contains(variable)) {
        _variable.insert(variable);

        // Adjust subsetted properties
        addOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setActivityScope(this);
        }
    }
}

void UmlActivity::removeVariable(UmlVariable *variable)
{
    // This is a read-write association end

    if (_variable.contains(variable)) {
        _variable.remove(variable);

        // Adjust subsetted properties
        removeOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setActivityScope(0);
        }
    }
}

