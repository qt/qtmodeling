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
#include "qumlinteraction.h"

#include "private/qumlinteractionobject_p.h"

#include <QtUml/QUmlAction>
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
#include <QtUml/QUmlGate>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>
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
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

/*!
    \class QUmlInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */
QUmlInteraction::QUmlInteraction(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlInteractionObject(this);
    setPropertyData();
}

QUmlInteraction::~QUmlInteraction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInteraction::clone() const
{
    QUmlInteraction *c = new QUmlInteraction;
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
    foreach (QUmlLifeline *element, covered())
        c->addCovered(dynamic_cast<QUmlLifeline *>(element->clone()));
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    foreach (QUmlAction *element, actions())
        c->addAction(dynamic_cast<QUmlAction *>(element->clone()));
    foreach (QUmlGate *element, formalGates())
        c->addFormalGate(dynamic_cast<QUmlGate *>(element->clone()));
    foreach (QUmlInteractionFragment *element, fragments())
        c->addFragment(dynamic_cast<QUmlInteractionFragment *>(element->clone()));
    foreach (QUmlLifeline *element, lifelines())
        c->addLifeline(dynamic_cast<QUmlLifeline *>(element->clone()));
    foreach (QUmlMessage *element, messages())
        c->addMessage(dynamic_cast<QUmlMessage *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Actions owned by the Interaction.
 */
const QSet<QUmlAction *> QUmlInteraction::actions() const
{
    // This is a read-write association end

    return _actions;
}

void QUmlInteraction::addAction(QUmlAction *action)
{
    // This is a read-write association end

    if (!_actions.contains(action)) {
        _actions.insert(action);
        if (action && action->asQObject() && this->asQObject())
            QObject::connect(action->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeAction(QObject *)));
        action->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(action);
    }
}

void QUmlInteraction::removeAction(QUmlAction *action)
{
    // This is a read-write association end

    if (_actions.contains(action)) {
        _actions.remove(action);
        if (action->asQObject())
            action->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(action);
    }
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
const QSet<QUmlGate *> QUmlInteraction::formalGates() const
{
    // This is a read-write association end

    return _formalGates;
}

void QUmlInteraction::addFormalGate(QUmlGate *formalGate)
{
    // This is a read-write association end

    if (!_formalGates.contains(formalGate)) {
        _formalGates.insert(formalGate);
        if (formalGate && formalGate->asQObject() && this->asQObject())
            QObject::connect(formalGate->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeFormalGate(QObject *)));
        formalGate->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(formalGate);
    }
}

void QUmlInteraction::removeFormalGate(QUmlGate *formalGate)
{
    // This is a read-write association end

    if (_formalGates.contains(formalGate)) {
        _formalGates.remove(formalGate);
        if (formalGate->asQObject())
            formalGate->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(formalGate);
    }
}

/*!
    The ordered set of fragments in the Interaction.
 */
const QList<QUmlInteractionFragment *> QUmlInteraction::fragments() const
{
    // This is a read-write association end

    return _fragments;
}

void QUmlInteraction::addFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    if (!_fragments.contains(fragment)) {
        _fragments.append(fragment);
        if (fragment && fragment->asQObject() && this->asQObject())
            QObject::connect(fragment->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeFragment(QObject *)));
        fragment->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(fragment);

        // Adjust opposite properties
        if (fragment) {
            fragment->setEnclosingInteraction(this);
        }
    }
}

void QUmlInteraction::removeFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    if (_fragments.contains(fragment)) {
        _fragments.removeAll(fragment);
        if (fragment->asQObject())
            fragment->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(fragment);

        // Adjust opposite properties
        if (fragment) {
            fragment->setEnclosingInteraction(0);
        }
    }
}

/*!
    Specifies the participants in this Interaction.
 */
const QSet<QUmlLifeline *> QUmlInteraction::lifelines() const
{
    // This is a read-write association end

    return _lifelines;
}

void QUmlInteraction::addLifeline(QUmlLifeline *lifeline)
{
    // This is a read-write association end

    if (!_lifelines.contains(lifeline)) {
        _lifelines.insert(lifeline);
        if (lifeline && lifeline->asQObject() && this->asQObject())
            QObject::connect(lifeline->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeLifeline(QObject *)));
        lifeline->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(lifeline);

        // Adjust opposite properties
        if (lifeline) {
            lifeline->setInteraction(this);
        }
    }
}

void QUmlInteraction::removeLifeline(QUmlLifeline *lifeline)
{
    // This is a read-write association end

    if (_lifelines.contains(lifeline)) {
        _lifelines.remove(lifeline);
        if (lifeline->asQObject())
            lifeline->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(lifeline);

        // Adjust opposite properties
        if (lifeline) {
            lifeline->setInteraction(0);
        }
    }
}

/*!
    The Messages contained in this Interaction.
 */
const QSet<QUmlMessage *> QUmlInteraction::messages() const
{
    // This is a read-write association end

    return _messages;
}

void QUmlInteraction::addMessage(QUmlMessage *message)
{
    // This is a read-write association end

    if (!_messages.contains(message)) {
        _messages.insert(message);
        if (message && message->asQObject() && this->asQObject())
            QObject::connect(message->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeMessage(QObject *)));
        message->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(message);

        // Adjust opposite properties
        if (message) {
            message->setInteraction(this);
        }
    }
}

void QUmlInteraction::removeMessage(QUmlMessage *message)
{
    // This is a read-write association end

    if (_messages.contains(message)) {
        _messages.remove(message);
        if (message->asQObject())
            message->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(message);

        // Adjust opposite properties
        if (message) {
            message->setInteraction(0);
        }
    }
}

void QUmlInteraction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteraction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::DocumentationRole] = QStringLiteral("Actions owned by the Interaction.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("action")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteraction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("formalGate")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteraction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::DocumentationRole] = QStringLiteral("The ordered set of fragments in the Interaction.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("fragment")][QtModeling::OppositeEndRole] = QStringLiteral("InteractionFragment-enclosingInteraction");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteraction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the participants in this Interaction.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("lifeline")][QtModeling::OppositeEndRole] = QStringLiteral("Lifeline-interaction");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteraction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::DocumentationRole] = QStringLiteral("The Messages contained in this Interaction.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteraction")][QStringLiteral("message")][QtModeling::OppositeEndRole] = QStringLiteral("Message-interaction");

}

