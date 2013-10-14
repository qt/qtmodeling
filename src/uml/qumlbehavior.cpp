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
#include "qumlbehavior.h"

#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
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
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

/*!
    \class QUmlBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */
QUmlBehavior::QUmlBehavior() :
    QUmlClass(false),
    _isReentrant(true),
    _specification(0)
{
}

QModelingElement *QUmlBehavior::clone() const
{
    QUmlBehavior *c = new QUmlBehavior;
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
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
QUmlBehavioredClassifier *QUmlBehavior::context() const
{
    // This is a read-only derived association end

    qWarning("QUmlBehavior::context(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlBehavior::setContext(QUmlBehavioredClassifier *context)
{
    // This is a read-only derived association end

    qWarning("QUmlBehavior::setContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // Adjust subsetted properties
        // removeRedefinitionContext(/* <derived-code> */);

        // <derived-code>

        // Adjust subsetted properties
        if (context) {
            addRedefinitionContext(context);
        }
    }
}

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool QUmlBehavior::isReentrant() const
{
    // This is a read-write property

    return _isReentrant;
}

void QUmlBehavior::setReentrant(bool isReentrant)
{
    // This is a read-write property

    if (_isReentrant != isReentrant) {
        _isReentrant = isReentrant;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isReentrant");
    }
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<QUmlParameter *> QUmlBehavior::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

void QUmlBehavior::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.append(ownedParameter);
        if (ownedParameter && ownedParameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameter);
    }
}

void QUmlBehavior::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.removeAll(ownedParameter);
        if (ownedParameter->asQModelingObject())
            ownedParameter->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameter);
    }
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<QUmlParameterSet *> QUmlBehavior::ownedParameterSets() const
{
    // This is a read-write association end

    return _ownedParameterSets;
}

void QUmlBehavior::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (!_ownedParameterSets.contains(ownedParameterSet)) {
        _ownedParameterSets.insert(ownedParameterSet);
        if (ownedParameterSet && ownedParameterSet->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameterSet->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedParameterSet(QObject *)));
        ownedParameterSet->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameterSet);
    }
}

void QUmlBehavior::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (_ownedParameterSets.contains(ownedParameterSet)) {
        _ownedParameterSets.remove(ownedParameterSet);
        if (ownedParameterSet->asQModelingObject())
            ownedParameterSet->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameterSet);
    }
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<QUmlConstraint *> QUmlBehavior::postconditions() const
{
    // This is a read-write association end

    return _postconditions;
}

void QUmlBehavior::addPostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    if (!_postconditions.contains(postcondition)) {
        _postconditions.insert(postcondition);
        if (postcondition && postcondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(postcondition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePostcondition(QObject *)));
        postcondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedRule(postcondition);
    }
}

void QUmlBehavior::removePostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    if (_postconditions.contains(postcondition)) {
        _postconditions.remove(postcondition);
        if (postcondition->asQModelingObject())
            postcondition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(postcondition);
    }
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<QUmlConstraint *> QUmlBehavior::preconditions() const
{
    // This is a read-write association end

    return _preconditions;
}

void QUmlBehavior::addPrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    if (!_preconditions.contains(precondition)) {
        _preconditions.insert(precondition);
        if (precondition && precondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(precondition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePrecondition(QObject *)));
        precondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedRule(precondition);
    }
}

void QUmlBehavior::removePrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    if (_preconditions.contains(precondition)) {
        _preconditions.remove(precondition);
        if (precondition->asQModelingObject())
            precondition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedRule(precondition);
    }
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<QUmlBehavior *> QUmlBehavior::redefinedBehaviors() const
{
    // This is a read-write association end

    return _redefinedBehaviors;
}

void QUmlBehavior::addRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (!_redefinedBehaviors.contains(redefinedBehavior)) {
        _redefinedBehaviors.insert(redefinedBehavior);
        if (redefinedBehavior && redefinedBehavior->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedBehavior->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedBehavior(QObject *)));

        // Adjust subsetted properties
        addRedefinedClassifier(redefinedBehavior);
    }
}

void QUmlBehavior::removeRedefinedBehavior(QUmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (_redefinedBehaviors.contains(redefinedBehavior)) {
        _redefinedBehaviors.remove(redefinedBehavior);

        // Adjust subsetted properties
        removeRedefinedClassifier(redefinedBehavior);
    }
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
QUmlBehavioralFeature *QUmlBehavior::specification() const
{
    // This is a read-write association end

    return _specification;
}

void QUmlBehavior::setSpecification(QUmlBehavioralFeature *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        _specification = specification;
        if (specification && specification->asQModelingObject() && this->asQModelingObject())
            QObject::connect(specification->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSpecification()));
    }
}

