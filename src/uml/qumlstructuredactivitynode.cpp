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

#include "private/qumlstructuredactivitynodeobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

/*!
    Creates a new QUmlStructuredActivityNode. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlStructuredActivityNode::QUmlStructuredActivityNode(bool createQModelingObject) :
    _activity(0),
    _mustIsolate(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlStructuredActivityNodeObject(this));
}

/*!
    Destroys the QUmlStructuredActivityNode.
 */
QUmlStructuredActivityNode::~QUmlStructuredActivityNode()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlStructuredActivityNode.
*/
QModelingElement *QUmlStructuredActivityNode::clone() const
{
    QUmlStructuredActivityNode *c = new QUmlStructuredActivityNode;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    foreach (QUmlActivityEdge *element, edges())
        c->addEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    c->setMustIsolate(mustIsolate());
    foreach (QUmlActivityNode *element, nodes())
        c->addNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlInputPin *element, structuredNodeInputs())
        c->addStructuredNodeInput(dynamic_cast<QUmlInputPin *>(element->clone()));
    foreach (QUmlOutputPin *element, structuredNodeOutputs())
        c->addStructuredNodeOutput(dynamic_cast<QUmlOutputPin *>(element->clone()));
    foreach (QUmlVariable *element, variables())
        c->addVariable(dynamic_cast<QUmlVariable *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Activity immediately containing the node.

    \b {Redefined property(ies):} QUmlActivityGroup::inActivity(), QUmlActivityNode::activity().

    \b {Opposite property(ies):} QUmlActivity::structuredNodes().
 */
QUmlActivity *QUmlStructuredActivityNode::activity() const
{
    // This is a read-write association end

    return _activity;
}

/*!
    Adjusts activity to \a activity.
 */
void QUmlStructuredActivityNode::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    if (_activity != activity) {
        _activity = activity;
        if (activity && activity->asQModelingObject() && this->asQModelingObject())
            QObject::connect(activity->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setActivity()));

        // Adjust redefined properties
        QUmlActivityGroup::setInActivity(activity);
        QUmlActivityNode::setActivity(activity);
    }
}

/*!
    Edges immediately contained in the structured node.

    \sa addEdge(), removeEdge()

    \b {Subsetted property(ies):} QUmlActivityGroup::containedEdges(), QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlActivityEdge::inStructuredNode().
 */
const QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::edges() const
{
    // This is a read-write association end

    return _edges;
}

/*!
    Adds \a edge to edges.

    \sa edges(), removeEdge()
 */
void QUmlStructuredActivityNode::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edges.contains(edge)) {
        _edges.insert(edge);
        if (edge && edge->asQModelingObject() && this->asQModelingObject())
            QObject::connect(edge->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeEdge(QObject *)));
        edge->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addContainedEdge(edge);
        addOwnedElement(edge);

        // Adjust opposite properties
        if (edge) {
            edge->setInStructuredNode(this);
        }
    }
}

/*!
    Removes \a edge from edges.

    \sa edges(), addEdge()
 */
void QUmlStructuredActivityNode::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (_edges.contains(edge)) {
        _edges.remove(edge);
        if (edge->asQModelingObject())
            edge->asQModelingObject()->setParent(0);

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
bool QUmlStructuredActivityNode::mustIsolate() const
{
    // This is a read-write property

    return _mustIsolate;
}

/*!
    Adjusts mustIsolate to \a mustIsolate.
 */
void QUmlStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    // This is a read-write property

    if (_mustIsolate != mustIsolate) {
        _mustIsolate = mustIsolate;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("mustIsolate");
    }
}

/*!
    Nodes immediately contained in the group.

    \sa addNode(), removeNode()

    \b {Subsetted property(ies):} QUmlActivityGroup::containedNodes(), QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlActivityNode::inStructuredNode().
 */
const QSet<QUmlActivityNode *> QUmlStructuredActivityNode::nodes() const
{
    // This is a read-write association end

    return _nodes;
}

/*!
    Adds \a node to nodes.

    \sa nodes(), removeNode()
 */
void QUmlStructuredActivityNode::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_nodes.contains(node)) {
        _nodes.insert(node);
        if (node && node->asQModelingObject() && this->asQModelingObject())
            QObject::connect(node->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeNode(QObject *)));
        node->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addContainedNode(node);
        addOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setInStructuredNode(this);
        }
    }
}

/*!
    Removes \a node from nodes.

    \sa nodes(), addNode()
 */
void QUmlStructuredActivityNode::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (_nodes.contains(node)) {
        _nodes.remove(node);
        if (node->asQModelingObject())
            node->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeContainedNode(node);
        removeOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setInStructuredNode(0);
        }
    }
}

const QSet<QUmlInputPin *> QUmlStructuredActivityNode::structuredNodeInputs() const
{
    // This is a read-write association end

    return _structuredNodeInputs;
}
void QUmlStructuredActivityNode::addStructuredNodeInput(QUmlInputPin *structuredNodeInput)
{
    // This is a read-write association end

    if (!_structuredNodeInputs.contains(structuredNodeInput)) {
        _structuredNodeInputs.insert(structuredNodeInput);
        if (structuredNodeInput && structuredNodeInput->asQModelingObject() && this->asQModelingObject())
            QObject::connect(structuredNodeInput->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeStructuredNodeInput(QObject *)));
        structuredNodeInput->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addInput(structuredNodeInput);
    }
}
void QUmlStructuredActivityNode::removeStructuredNodeInput(QUmlInputPin *structuredNodeInput)
{
    // This is a read-write association end

    if (_structuredNodeInputs.contains(structuredNodeInput)) {
        _structuredNodeInputs.remove(structuredNodeInput);
        if (structuredNodeInput->asQModelingObject())
            structuredNodeInput->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeInput(structuredNodeInput);
    }
}

const QSet<QUmlOutputPin *> QUmlStructuredActivityNode::structuredNodeOutputs() const
{
    // This is a read-write association end

    return _structuredNodeOutputs;
}
void QUmlStructuredActivityNode::addStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    if (!_structuredNodeOutputs.contains(structuredNodeOutput)) {
        _structuredNodeOutputs.insert(structuredNodeOutput);
        if (structuredNodeOutput && structuredNodeOutput->asQModelingObject() && this->asQModelingObject())
            QObject::connect(structuredNodeOutput->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeStructuredNodeOutput(QObject *)));
        structuredNodeOutput->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOutput(structuredNodeOutput);
    }
}
void QUmlStructuredActivityNode::removeStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    if (_structuredNodeOutputs.contains(structuredNodeOutput)) {
        _structuredNodeOutputs.remove(structuredNodeOutput);
        if (structuredNodeOutput->asQModelingObject())
            structuredNodeOutput->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(structuredNodeOutput);
    }
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed

    \sa addVariable(), removeVariable()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlVariable::scope().
 */
const QSet<QUmlVariable *> QUmlStructuredActivityNode::variables() const
{
    // This is a read-write association end

    return _variables;
}

/*!
    Adds \a variable to variables.

    \sa variables(), removeVariable()
 */
void QUmlStructuredActivityNode::addVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    if (!_variables.contains(variable)) {
        _variables.insert(variable);
        if (variable && variable->asQModelingObject() && this->asQModelingObject())
            QObject::connect(variable->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeVariable(QObject *)));
        variable->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setScope(this);
        }
    }
}

/*!
    Removes \a variable from variables.

    \sa variables(), addVariable()
 */
void QUmlStructuredActivityNode::removeVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    if (_variables.contains(variable)) {
        _variables.remove(variable);
        if (variable->asQModelingObject())
            variable->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setScope(0);
        }
    }
}

QT_END_NAMESPACE

