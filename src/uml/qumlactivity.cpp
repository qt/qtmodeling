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
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>
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
    setPropertyData();
}

QUmlActivity::~QUmlActivity()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlActivity::clone() const
{
    QUmlActivity *c = new QUmlActivity;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImport())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRule())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImport())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QUmlPackage *>(package()->clone()));
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBinding())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUse())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalization())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCase())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlGeneralizationSet *element, powertypeExtent())
        c->addPowertypeExtent(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    foreach (QUmlClassifier *element, redefinedClassifier())
        c->addRedefinedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (representation())
        c->setRepresentation(dynamic_cast<QUmlCollaborationUse *>(representation()->clone()));
    foreach (QUmlSubstitution *element, substitution())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlClassifierTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlUseCase *element, useCase())
        c->addUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlConnector *element, ownedConnector())
        c->addOwnedConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    if (classifierBehavior())
        c->setClassifierBehavior(dynamic_cast<QUmlBehavior *>(classifierBehavior()->clone()));
    foreach (QUmlInterfaceRealization *element, interfaceRealization())
        c->addInterfaceRealization(dynamic_cast<QUmlInterfaceRealization *>(element->clone()));
    foreach (QUmlBehavior *element, ownedBehavior())
        c->addOwnedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setActive(isActive());
    foreach (QUmlClassifier *element, nestedClassifier())
        c->addNestedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttribute())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlOperation *element, ownedOperation())
        c->addOwnedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    foreach (QUmlReception *element, ownedReception())
        c->addOwnedReception(dynamic_cast<QUmlReception *>(element->clone()));
    c->setReentrant(isReentrant());
    foreach (QUmlParameter *element, ownedParameter())
        c->addOwnedParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    foreach (QUmlParameterSet *element, ownedParameterSet())
        c->addOwnedParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
    foreach (QUmlConstraint *element, postcondition())
        c->addPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, precondition())
        c->addPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlBehavior *element, redefinedBehavior())
        c->addRedefinedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    if (specification())
        c->setSpecification(dynamic_cast<QUmlBehavioralFeature *>(specification()->clone()));
    foreach (QUmlActivityEdge *element, edge())
        c->addEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityGroup *element, group())
        c->addGroup(dynamic_cast<QUmlActivityGroup *>(element->clone()));
    c->setReadOnly(isReadOnly());
    c->setSingleExecution(isSingleExecution());
    foreach (QUmlActivityNode *element, node())
        c->addNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlActivityPartition *element, partition())
        c->addPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    foreach (QUmlStructuredActivityNode *element, structuredNode())
        c->addStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(element->clone()));
    foreach (QUmlVariable *element, variable())
        c->addVariable(dynamic_cast<QUmlVariable *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QUmlActivityEdge *> QUmlActivity::edge() const
{
    // This is a read-write association end

    return _edge;
}

void QUmlActivity::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edge.contains(edge)) {
        _edge.insert(edge);
        if (edge && edge->asQObject() && this->asQObject())
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
const QSet<QUmlActivityGroup *> QUmlActivity::group() const
{
    // This is a read-write association end

    return _group;
}

void QUmlActivity::addGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    if (!_group.contains(group)) {
        _group.insert(group);
        if (group && group->asQObject() && this->asQObject())
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
bool QUmlActivity::isReadOnly() const
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
bool QUmlActivity::isSingleExecution() const
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
const QSet<QUmlActivityNode *> QUmlActivity::node() const
{
    // This is a read-write association end

    return _node;
}

void QUmlActivity::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_node.contains(node)) {
        _node.insert(node);
        if (node && node->asQObject() && this->asQObject())
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
const QSet<QUmlActivityPartition *> QUmlActivity::partition() const
{
    // This is a read-write association end

    return _partition;
}

void QUmlActivity::addPartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    if (!_partition.contains(partition)) {
        _partition.insert(partition);
        if (partition && partition->asQObject() && this->asQObject())
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
const QSet<QUmlStructuredActivityNode *> QUmlActivity::structuredNode() const
{
    // This is a read-write association end

    return _structuredNode;
}

void QUmlActivity::addStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    if (!_structuredNode.contains(structuredNode)) {
        _structuredNode.insert(structuredNode);
        if (structuredNode && structuredNode->asQObject() && this->asQObject())
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
const QSet<QUmlVariable *> QUmlActivity::variable() const
{
    // This is a read-write association end

    return _variable;
}

void QUmlActivity::addVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    if (!_variable.contains(variable)) {
        _variable.insert(variable);
        if (variable && variable->asQObject() && this->asQObject())
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

void QUmlActivity::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::DocumentationRole] = QStringLiteral("Edges expressing flow between nodes of the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-activity");

    QModelingObject::propertyDataHash[QStringLiteral("group")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("group")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("group")][QtModeling::DocumentationRole] = QStringLiteral("Top-level groups in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("group")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("group")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("group")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityGroup-inActivity");

    QModelingObject::propertyDataHash[QStringLiteral("isReadOnly")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("isReadOnly")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isReadOnly")][QtModeling::DocumentationRole] = QStringLiteral("If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).");
    QModelingObject::propertyDataHash[QStringLiteral("isReadOnly")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isReadOnly")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isReadOnly")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("isSingleExecution")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("isSingleExecution")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isSingleExecution")][QtModeling::DocumentationRole] = QStringLiteral("If true, all invocations of the activity are handled by the same execution.");
    QModelingObject::propertyDataHash[QStringLiteral("isSingleExecution")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isSingleExecution")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isSingleExecution")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::DocumentationRole] = QStringLiteral("Nodes coordinated by the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityNode-activity");

    QModelingObject::propertyDataHash[QStringLiteral("partition")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("partition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("partition")][QtModeling::DocumentationRole] = QStringLiteral("Top-level partitions in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("partition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("partition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Activity-group");
    QModelingObject::propertyDataHash[QStringLiteral("partition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("structuredNode")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("structuredNode")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("structuredNode")][QtModeling::DocumentationRole] = QStringLiteral("Top-level structured nodes in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("structuredNode")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("structuredNode")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Activity-group Activity-node");
    QModelingObject::propertyDataHash[QStringLiteral("structuredNode")][QtModeling::OppositeEndRole] = QStringLiteral("StructuredActivityNode-activity");

    QModelingObject::propertyDataHash[QStringLiteral("variable")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("variable")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("variable")][QtModeling::DocumentationRole] = QStringLiteral("Top-level variables in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("variable")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("variable")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("variable")][QtModeling::OppositeEndRole] = QStringLiteral("Variable-activityScope");

}

