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
#include <QtUml/QUmlActivityGroup>
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
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlVariable>

/*!
    \class QUmlStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */
QUmlStructuredActivityNode::QUmlStructuredActivityNode(bool createQObject) :
    _activity(0),
    _mustIsolate(false)
{
    if (createQObject)
        _qObject = new QUmlStructuredActivityNodeObject(this);
    setPropertyData();
}

QUmlStructuredActivityNode::~QUmlStructuredActivityNode()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlStructuredActivityNode::clone() const
{
    QUmlStructuredActivityNode *c = new QUmlStructuredActivityNode;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegions())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartitions())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incomings())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoings())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNodes())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
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
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
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
 */
QUmlActivity *QUmlStructuredActivityNode::activity() const
{
    // This is a read-write association end

    return _activity;
}

void QUmlStructuredActivityNode::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    if (_activity != activity) {
        _activity = activity;
        if (activity && activity->asQObject() && this->asQObject())
            QObject::connect(activity->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setActivity()));
    }
}

/*!
    Edges immediately contained in the structured node.
 */
const QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::edges() const
{
    // This is a read-write association end

    return _edges;
}

void QUmlStructuredActivityNode::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edges.contains(edge)) {
        _edges.insert(edge);
        if (edge && edge->asQObject() && this->asQObject())
            QObject::connect(edge->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeEdge(QObject *)));
        edge->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addContainedEdge(edge);
        addOwnedElement(edge);

        // Adjust opposite properties
        if (edge) {
            edge->setInStructuredNode(this);
        }
    }
}

void QUmlStructuredActivityNode::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (_edges.contains(edge)) {
        _edges.remove(edge);
        if (edge->asQObject())
            edge->asQObject()->setParent(0);

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

void QUmlStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    // This is a read-write property

    if (_mustIsolate != mustIsolate) {
        _mustIsolate = mustIsolate;
        _modifiedResettableProperties << QStringLiteral("mustIsolate");
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QUmlActivityNode *> QUmlStructuredActivityNode::nodes() const
{
    // This is a read-write association end

    return _nodes;
}

void QUmlStructuredActivityNode::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_nodes.contains(node)) {
        _nodes.insert(node);
        if (node && node->asQObject() && this->asQObject())
            QObject::connect(node->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNode(QObject *)));
        node->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addContainedNode(node);
        addOwnedElement(node);

        // Adjust opposite properties
        if (node) {
            node->setInStructuredNode(this);
        }
    }
}

void QUmlStructuredActivityNode::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (_nodes.contains(node)) {
        _nodes.remove(node);
        if (node->asQObject())
            node->asQObject()->setParent(0);

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
        if (structuredNodeInput && structuredNodeInput->asQObject() && this->asQObject())
            QObject::connect(structuredNodeInput->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeStructuredNodeInput(QObject *)));
        structuredNodeInput->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addInput(structuredNodeInput);
    }
}

void QUmlStructuredActivityNode::removeStructuredNodeInput(QUmlInputPin *structuredNodeInput)
{
    // This is a read-write association end

    if (_structuredNodeInputs.contains(structuredNodeInput)) {
        _structuredNodeInputs.remove(structuredNodeInput);
        if (structuredNodeInput->asQObject())
            structuredNodeInput->asQObject()->setParent(0);

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
        if (structuredNodeOutput && structuredNodeOutput->asQObject() && this->asQObject())
            QObject::connect(structuredNodeOutput->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeStructuredNodeOutput(QObject *)));
        structuredNodeOutput->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOutput(structuredNodeOutput);
    }
}

void QUmlStructuredActivityNode::removeStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    if (_structuredNodeOutputs.contains(structuredNodeOutput)) {
        _structuredNodeOutputs.remove(structuredNodeOutput);
        if (structuredNodeOutput->asQObject())
            structuredNodeOutput->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(structuredNodeOutput);
    }
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
const QSet<QUmlVariable *> QUmlStructuredActivityNode::variables() const
{
    // This is a read-write association end

    return _variables;
}

void QUmlStructuredActivityNode::addVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    if (!_variables.contains(variable)) {
        _variables.insert(variable);
        if (variable && variable->asQObject() && this->asQObject())
            QObject::connect(variable->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeVariable(QObject *)));
        variable->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setScope(this);
        }
    }
}

void QUmlStructuredActivityNode::removeVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    if (_variables.contains(variable)) {
        _variables.remove(variable);
        if (variable->asQObject())
            variable->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(variable);

        // Adjust opposite properties
        if (variable) {
            variable->setScope(0);
        }
    }
}

void QUmlStructuredActivityNode::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuredActivityNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::DocumentationRole] = QStringLiteral("Activity immediately containing the node.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("ActivityGroup-inActivity ActivityNode-activity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("activity")][QtModeling::OppositeEndRole] = QStringLiteral("Activity-structuredNode");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuredActivityNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::DocumentationRole] = QStringLiteral("Edges immediately contained in the structured node.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-containedEdge Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("edge")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-inStructuredNode");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuredActivityNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::DocumentationRole] = QStringLiteral("If true, then the actions in the node execute in isolation from actions outside the node.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("mustIsolate")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuredActivityNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::DocumentationRole] = QStringLiteral("Nodes immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-containedNode Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("node")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityNode-inStructuredNode");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuredActivityNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::DocumentationRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeInput")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuredActivityNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::DocumentationRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-output");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("structuredNodeOutput")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuredActivityNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::DocumentationRole] = QStringLiteral("A variable defined in the scope of the structured activity node. It has no value and may not be accessed");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuredActivityNode")][QStringLiteral("variable")][QtModeling::OppositeEndRole] = QStringLiteral("Variable-scope");

}

void QUmlStructuredActivityNode::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("inGroups")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inInterruptibleRegions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inPartitions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inStructuredNode")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("incomings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("outgoings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("redefinedNodes")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("handlers")] = QStringLiteral("QUmlExecutableNode");
    _classForProperty[QStringLiteral("context")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("inputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("isLocallyReentrant")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPostconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPreconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("outputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("elementImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("importedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("members")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedRules")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("packageImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("containedEdges")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("containedNodes")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("subgroups")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("superGroup")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("activity")] = QStringLiteral("QUmlStructuredActivityNode");
    _classForProperty[QStringLiteral("edges")] = QStringLiteral("QUmlStructuredActivityNode");
    _classForProperty[QStringLiteral("mustIsolate")] = QStringLiteral("QUmlStructuredActivityNode");
    _classForProperty[QStringLiteral("nodes")] = QStringLiteral("QUmlStructuredActivityNode");
    _classForProperty[QStringLiteral("structuredNodeInputs")] = QStringLiteral("QUmlStructuredActivityNode");
    _classForProperty[QStringLiteral("structuredNodeOutputs")] = QStringLiteral("QUmlStructuredActivityNode");
    _classForProperty[QStringLiteral("variables")] = QStringLiteral("QUmlStructuredActivityNode");
}

