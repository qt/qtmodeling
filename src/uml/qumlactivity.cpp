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
#include "qumlactivity.h"

#include "private/qumlactivityobject_p.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlVariable>

/*!
    \class QUmlActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */
QUmlActivity::QUmlActivity(bool createQObject) :
    _isReadOnly(false),
    _isSingleExecution(false)
{
    if (createQObject)
        _qObject = new QUmlActivityObject(this);
}

QUmlActivity::~QUmlActivity()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QUmlActivityEdge *> 
QUmlActivity::edge() const
{
    // This is a read-write association end

    return _edge;
}

void QUmlActivity::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edge.contains(edge)) {
        _edge.insert(edge);
        if (edge->asQObject() && this->asQObject())
            QObject::connect(edge->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeEdge(QObject *)));
        edge->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(edge);

        // Adjust opposite properties
        if (edge) {
            edge->setActivity(this);
        }
    }
}

void QUmlActivity::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (_edge.contains(edge)) {
        _edge.remove(edge);
        if (edge->asQObject())
            edge->asQObject()->setParent(0);

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
const QSet<QUmlActivityGroup *> 
QUmlActivity::group() const
{
    // This is a read-write association end

    return _group;
}

void QUmlActivity::addGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    if (!_group.contains(group)) {
        _group.insert(group);
        if (group->asQObject() && this->asQObject())
            QObject::connect(group->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeGroup(QObject *)));
        group->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(group);

        // Adjust opposite properties
        if (group) {
            group->setInActivity(this);
        }
    }
}

void QUmlActivity::removeGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    if (_group.contains(group)) {
        _group.remove(group);
        if (group->asQObject())
            group->asQObject()->setParent(0);

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
bool 
QUmlActivity::isReadOnly() const
{
    // This is a read-write property

    return _isReadOnly;
}

void QUmlActivity::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    if (_isReadOnly != isReadOnly) {
        _isReadOnly = isReadOnly;
    }
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool 
QUmlActivity::isSingleExecution() const
{
    // This is a read-write property

    return _isSingleExecution;
}

void QUmlActivity::setSingleExecution(bool isSingleExecution)
{
    // This is a read-write property

    if (_isSingleExecution != isSingleExecution) {
        _isSingleExecution = isSingleExecution;
    }
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<QUmlActivityNode *> 
QUmlActivity::node() const
{
    // This is a read-write association end

    return _node;
}

void QUmlActivity::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_node.contains(node)) {
        _node.insert(node);
        if (node->asQObject() && this->asQObject())
            QObject::connect(node->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNode(QObject *)));
        node->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setActivity(this);
        }
    }
}

void QUmlActivity::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (_node.contains(node)) {
        _node.remove(node);
        if (node->asQObject())
            node->asQObject()->setParent(0);

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
const QSet<QUmlActivityPartition *> 
QUmlActivity::partition() const
{
    // This is a read-write association end

    return _partition;
}

void QUmlActivity::addPartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    if (!_partition.contains(partition)) {
        _partition.insert(partition);
        if (partition->asQObject() && this->asQObject())
            QObject::connect(partition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePartition(QObject *)));

        // Adjust subsetted properties
        addGroup(partition);
    }
}

void QUmlActivity::removePartition(QUmlActivityPartition *partition)
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
const QSet<QUmlStructuredActivityNode *> 
QUmlActivity::structuredNode() const
{
    // This is a read-write association end

    return _structuredNode;
}

void QUmlActivity::addStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    if (!_structuredNode.contains(structuredNode)) {
        _structuredNode.insert(structuredNode);
        if (structuredNode->asQObject() && this->asQObject())
            QObject::connect(structuredNode->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeStructuredNode(QObject *)));
        structuredNode->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addGroup(structuredNode);
        addNode(structuredNode);

        // Adjust opposite properties
        if (structuredNode) {
            structuredNode->setActivity(this);
        }
    }
}

void QUmlActivity::removeStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    if (_structuredNode.contains(structuredNode)) {
        _structuredNode.remove(structuredNode);
        if (structuredNode->asQObject())
            structuredNode->asQObject()->setParent(0);

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
const QSet<QUmlVariable *> 
QUmlActivity::variable() const
{
    // This is a read-write association end

    return _variable;
}

void QUmlActivity::addVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    if (!_variable.contains(variable)) {
        _variable.insert(variable);
        if (variable->asQObject() && this->asQObject())
            QObject::connect(variable->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeVariable(QObject *)));
        variable->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setActivityScope(this);
        }
    }
}

void QUmlActivity::removeVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    if (_variable.contains(variable)) {
        _variable.remove(variable);
        if (variable->asQObject())
            variable->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setActivityScope(0);
        }
    }
}

