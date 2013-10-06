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
#include "qumlstatemachine.h"

#include "private/qumlstatemachineobject_p.h"

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
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

/*!
    \class QUmlStateMachine

    \inmodule QtUml

    \brief State machines can be used to express the behavior of part of a system. Behavior is modeled as a traversal of a graph of state nodes interconnected by one or more joined transition arcs that are triggered by the dispatching of series of (event) occurrences. During this traversal, the state machine executes a series of activities associated with various elements of the state machine.
 */
QUmlStateMachine::QUmlStateMachine(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlStateMachineObject(this);
    setPropertyData();
}

QUmlStateMachine::~QUmlStateMachine()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlStateMachine::clone() const
{
    QUmlStateMachine *c = new QUmlStateMachine;
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
    if (specification())
        c->setSpecification(dynamic_cast<QUmlBehavioralFeature *>(specification()->clone()));
    foreach (QUmlPseudostate *element, connectionPoints())
        c->addConnectionPoint(dynamic_cast<QUmlPseudostate *>(element->clone()));
    foreach (QUmlStateMachine *element, extendedStateMachines())
        c->addExtendedStateMachine(dynamic_cast<QUmlStateMachine *>(element->clone()));
    foreach (QUmlRegion *element, regions())
        c->addRegion(dynamic_cast<QUmlRegion *>(element->clone()));
    foreach (QUmlState *element, submachineStates())
        c->addSubmachineState(dynamic_cast<QUmlState *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.
 */
const QSet<QUmlPseudostate *> QUmlStateMachine::connectionPoints() const
{
    // This is a read-write association end

    return _connectionPoints;
}

void QUmlStateMachine::addConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (!_connectionPoints.contains(connectionPoint)) {
        _connectionPoints.insert(connectionPoint);
        if (connectionPoint && connectionPoint->asQObject() && this->asQObject())
            QObject::connect(connectionPoint->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeConnectionPoint(QObject *)));
        connectionPoint->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setStateMachine(this);
        }
    }
}

void QUmlStateMachine::removeConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (_connectionPoints.contains(connectionPoint)) {
        _connectionPoints.remove(connectionPoint);
        if (connectionPoint->asQObject())
            connectionPoint->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setStateMachine(0);
        }
    }
}

/*!
    The state machines of which this is an extension.
 */
const QSet<QUmlStateMachine *> QUmlStateMachine::extendedStateMachines() const
{
    // This is a read-write association end

    return _extendedStateMachines;
}

void QUmlStateMachine::addExtendedStateMachine(QUmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    if (!_extendedStateMachines.contains(extendedStateMachine)) {
        _extendedStateMachines.insert(extendedStateMachine);
        if (extendedStateMachine && extendedStateMachine->asQObject() && this->asQObject())
            QObject::connect(extendedStateMachine->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeExtendedStateMachine(QObject *)));
    }
}

void QUmlStateMachine::removeExtendedStateMachine(QUmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    if (_extendedStateMachines.contains(extendedStateMachine)) {
        _extendedStateMachines.remove(extendedStateMachine);
    }
}

/*!
    The regions owned directly by the state machine.
 */
const QSet<QUmlRegion *> QUmlStateMachine::regions() const
{
    // This is a read-write association end

    return _regions;
}

void QUmlStateMachine::addRegion(QUmlRegion *region)
{
    // This is a read-write association end

    if (!_regions.contains(region)) {
        _regions.insert(region);
        if (region && region->asQObject() && this->asQObject())
            QObject::connect(region->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRegion(QObject *)));
        region->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setStateMachine(this);
        }
    }
}

void QUmlStateMachine::removeRegion(QUmlRegion *region)
{
    // This is a read-write association end

    if (_regions.contains(region)) {
        _regions.remove(region);
        if (region->asQObject())
            region->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setStateMachine(0);
        }
    }
}

/*!
    References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.
 */
const QSet<QUmlState *> QUmlStateMachine::submachineStates() const
{
    // This is a read-write association end

    return _submachineStates;
}

void QUmlStateMachine::addSubmachineState(QUmlState *submachineState)
{
    // This is a read-write association end

    if (!_submachineStates.contains(submachineState)) {
        _submachineStates.insert(submachineState);
        if (submachineState && submachineState->asQObject() && this->asQObject())
            QObject::connect(submachineState->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSubmachineState(QObject *)));

        // Adjust opposite properties
        if (submachineState) {
            submachineState->setSubmachine(this);
        }
    }
}

void QUmlStateMachine::removeSubmachineState(QUmlState *submachineState)
{
    // This is a read-write association end

    if (_submachineStates.contains(submachineState)) {
        _submachineStates.remove(submachineState);

        // Adjust opposite properties
        if (submachineState) {
            submachineState->setSubmachine(0);
        }
    }
}

// OPERATIONS

/*!
    The operation LCA(s1,s2) returns an orthogonal state or region which is the least common ancestor of states s1 and s2, based on the statemachine containment hierarchy.
 */
QUmlNamespace *QUmlStateMachine::LCA(QUmlState *s1, QUmlState *s2) const
{
    qWarning("UmlStateMachine::LCA(): to be implemented (operation)");

    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return 0;
}

/*!
    The query ancestor(s1, s2) checks whether s1 is an ancestor state of state s2.
 */
bool QUmlStateMachine::ancestor(QUmlState *s1, QUmlState *s2) const
{
    qWarning("UmlStateMachine::ancestor(): to be implemented (operation)");

    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return bool ();
}

/*!
    The query isConsistentWith() specifies that a redefining state machine is consistent with a redefined state machine provided that the redefining state machine is an extension of the redefined state machine: Regions are inherited and regions can be added, inherited regions can be redefined. In case of multiple redefining state machines, extension implies that the redefining state machine gets orthogonal regions for each of the redefined state machines.
 */
bool QUmlStateMachine::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("UmlStateMachine::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a statemachine are properly related to the redefinition contexts of the specified statemachine to allow this element to redefine the other. The containing classifier of a redefining statemachine must redefine the containing classifier of the redefined statemachine.
 */
bool QUmlStateMachine::isRedefinitionContextValid(QUmlStateMachine *redefined) const
{
    qWarning("UmlStateMachine::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

void QUmlStateMachine::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStateMachine");
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::DocumentationRole] = QStringLiteral("The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.");
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("connectionPoint")][QtModeling::OppositeEndRole] = QStringLiteral("Pseudostate-stateMachine");

    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStateMachine");
    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::DocumentationRole] = QStringLiteral("The state machines of which this is an extension.");
    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("Behavior-redefinedBehavior");
    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("extendedStateMachine")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStateMachine");
    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::DocumentationRole] = QStringLiteral("The regions owned directly by the state machine.");
    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("region")][QtModeling::OppositeEndRole] = QStringLiteral("Region-stateMachine");

    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStateMachine");
    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::DocumentationRole] = QStringLiteral("References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.");
    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("submachineState")][QtModeling::OppositeEndRole] = QStringLiteral("State-submachine");

}

