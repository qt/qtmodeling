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
    setClassForProperty();
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
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QUmlPackage *>(package()->clone()));
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUses())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCases())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlGeneralizationSet *element, powertypeExtents())
        c->addPowertypeExtent(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    foreach (QUmlClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (representation())
        c->setRepresentation(dynamic_cast<QUmlCollaborationUse *>(representation()->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlClassifierTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlUseCase *element, useCases())
        c->addUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlConnector *element, ownedConnectors())
        c->addOwnedConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    if (classifierBehavior())
        c->setClassifierBehavior(dynamic_cast<QUmlBehavior *>(classifierBehavior()->clone()));
    foreach (QUmlInterfaceRealization *element, interfaceRealizations())
        c->addInterfaceRealization(dynamic_cast<QUmlInterfaceRealization *>(element->clone()));
    foreach (QUmlBehavior *element, ownedBehaviors())
        c->addOwnedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setActive(isActive());
    foreach (QUmlClassifier *element, nestedClassifiers())
        c->addNestedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    foreach (QUmlReception *element, ownedReceptions())
        c->addOwnedReception(dynamic_cast<QUmlReception *>(element->clone()));
    c->setReentrant(isReentrant());
    foreach (QUmlParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    foreach (QUmlParameterSet *element, ownedParameterSets())
        c->addOwnedParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
    foreach (QUmlConstraint *element, postconditions())
        c->addPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, preconditions())
        c->addPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlBehavior *element, redefinedBehaviors())
        c->addRedefinedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    if (specification())
        c->setSpecification(dynamic_cast<QUmlBehavioralFeature *>(specification()->clone()));
    foreach (QUmlActivityEdge *element, edges())
        c->addEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityGroup *element, groups())
        c->addGroup(dynamic_cast<QUmlActivityGroup *>(element->clone()));
    c->setReadOnly(isReadOnly());
    c->setSingleExecution(isSingleExecution());
    foreach (QUmlActivityNode *element, nodes())
        c->addNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlActivityPartition *element, partitions())
        c->addPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    foreach (QUmlStructuredActivityNode *element, structuredNodes())
        c->addStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(element->clone()));
    foreach (QUmlVariable *element, variables())
        c->addVariable(dynamic_cast<QUmlVariable *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Edges expressing flow between nodes of the activity.
 */
const QSet<QUmlActivityEdge *> QUmlActivity::edges() const
{
    // This is a read-write association end

    return _edges;
}

void QUmlActivity::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edges.contains(edge)) {
        _edges.insert(edge);
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

    if (_edges.contains(edge)) {
        _edges.remove(edge);
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
const QSet<QUmlActivityGroup *> QUmlActivity::groups() const
{
    // This is a read-write association end

    return _groups;
}

void QUmlActivity::addGroup(QUmlActivityGroup *group)
{
    // This is a read-write association end

    if (!_groups.contains(group)) {
        _groups.insert(group);
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

    if (_groups.contains(group)) {
        _groups.remove(group);
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
        _modifiedResettableProperties << QStringLiteral("isReadOnly");
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
        _modifiedResettableProperties << QStringLiteral("isSingleExecution");
    }
}

/*!
    Nodes coordinated by the activity.
 */
const QSet<QUmlActivityNode *> QUmlActivity::nodes() const
{
    // This is a read-write association end

    return _nodes;
}

void QUmlActivity::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_nodes.contains(node)) {
        _nodes.insert(node);
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

    if (_nodes.contains(node)) {
        _nodes.remove(node);
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
const QSet<QUmlActivityPartition *> QUmlActivity::partitions() const
{
    // This is a read-write association end

    return _partitions;
}

void QUmlActivity::addPartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    if (!_partitions.contains(partition)) {
        _partitions.insert(partition);
        if (partition && partition->asQObject() && this->asQObject())
            QObject::connect(partition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePartition(QObject *)));

        // Adjust subsetted properties
        addGroup(partition);
    }
}

void QUmlActivity::removePartition(QUmlActivityPartition *partition)
{
    // This is a read-write association end

    if (_partitions.contains(partition)) {
        _partitions.remove(partition);

        // Adjust subsetted properties
        removeGroup(partition);
    }
}

/*!
    Top-level structured nodes in the activity.
 */
const QSet<QUmlStructuredActivityNode *> QUmlActivity::structuredNodes() const
{
    // This is a read-write association end

    return _structuredNodes;
}

void QUmlActivity::addStructuredNode(QUmlStructuredActivityNode *structuredNode)
{
    // This is a read-write association end

    if (!_structuredNodes.contains(structuredNode)) {
        _structuredNodes.insert(structuredNode);
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

    if (_structuredNodes.contains(structuredNode)) {
        _structuredNodes.remove(structuredNode);
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
const QSet<QUmlVariable *> QUmlActivity::variables() const
{
    // This is a read-write association end

    return _variables;
}

void QUmlActivity::addVariable(QUmlVariable *variable)
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
            variable->setActivityScope(this);
        }
    }
}

void QUmlActivity::removeVariable(QUmlVariable *variable)
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
            variable->setActivityScope(0);
        }
    }
}

void QUmlActivity::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("elementImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("importedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("members")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedRules")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("packageImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlPackageableElement");
    _classForProperty[QStringLiteral("package")] = QStringLiteral("QUmlType");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("templateBindings")] = QStringLiteral("QUmlTemplateableElement");
    _classForProperty[QStringLiteral("attributes")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("collaborationUses")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("features")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("generalizations")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("inheritedMembers")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("isFinalSpecialization")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedTemplateSignature")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedUseCases")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("powertypeExtents")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("redefinedClassifiers")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("representation")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("substitutions")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("useCases")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedConnectors")] = QStringLiteral("QUmlStructuredClassifier");
    _classForProperty[QStringLiteral("parts")] = QStringLiteral("QUmlStructuredClassifier");
    _classForProperty[QStringLiteral("roles")] = QStringLiteral("QUmlStructuredClassifier");
    _classForProperty[QStringLiteral("ownedPorts")] = QStringLiteral("QUmlEncapsulatedClassifier");
    _classForProperty[QStringLiteral("classifierBehavior")] = QStringLiteral("QUmlBehavioredClassifier");
    _classForProperty[QStringLiteral("interfaceRealizations")] = QStringLiteral("QUmlBehavioredClassifier");
    _classForProperty[QStringLiteral("ownedBehaviors")] = QStringLiteral("QUmlBehavioredClassifier");
    _classForProperty[QStringLiteral("extensions")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("isAbstract")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("isActive")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("nestedClassifiers")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("ownedAttributes")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("ownedOperations")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("ownedReceptions")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("superClasses")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("context")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("isReentrant")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("ownedParameters")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("ownedParameterSets")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("postconditions")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("preconditions")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("redefinedBehaviors")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("specification")] = QStringLiteral("QUmlBehavior");
    _classForProperty[QStringLiteral("edges")] = QStringLiteral("QUmlActivity");
    _classForProperty[QStringLiteral("groups")] = QStringLiteral("QUmlActivity");
    _classForProperty[QStringLiteral("isReadOnly")] = QStringLiteral("QUmlActivity");
    _classForProperty[QStringLiteral("isSingleExecution")] = QStringLiteral("QUmlActivity");
    _classForProperty[QStringLiteral("nodes")] = QStringLiteral("QUmlActivity");
    _classForProperty[QStringLiteral("partitions")] = QStringLiteral("QUmlActivity");
    _classForProperty[QStringLiteral("structuredNodes")] = QStringLiteral("QUmlActivity");
    _classForProperty[QStringLiteral("variables")] = QStringLiteral("QUmlActivity");
}

void QUmlActivity::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::DocumentationRole] = QStringLiteral("Edges expressing flow between nodes of the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("edges")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-activity");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::DocumentationRole] = QStringLiteral("Top-level groups in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("groups")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityGroup-inActivity");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::DocumentationRole] = QStringLiteral("If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isReadOnly")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::DocumentationRole] = QStringLiteral("If true, all invocations of the activity are handled by the same execution.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("isSingleExecution")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::DocumentationRole] = QStringLiteral("Nodes coordinated by the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("nodes")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityNode-activity");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::DocumentationRole] = QStringLiteral("Top-level partitions in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Activity-group");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("partitions")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::DocumentationRole] = QStringLiteral("Top-level structured nodes in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Activity-group Activity-node");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("structuredNodes")][QtModeling::OppositeEndRole] = QStringLiteral("StructuredActivityNode-activity");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivity");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::DocumentationRole] = QStringLiteral("Top-level variables in the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivity")][QStringLiteral("variables")][QtModeling::OppositeEndRole] = QStringLiteral("Variable-activityScope");

}

