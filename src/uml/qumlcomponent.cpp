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
#include "qumlcomponent.h"

#include "private/qumlcomponentobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlComponentRealization>
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
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
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
    \class QUmlComponent

    \inmodule QtUml

    \brief In the namespace of a component, all model elements that are involved in or related to its definition are either owned or imported explicitly. This may include, for example, use cases and dependencies (e.g. mappings), packages, components, and artifacts.A component represents a modular part of a system that encapsulates its contents and whose manifestation is replaceable within its environment.
 */
QUmlComponent::QUmlComponent(bool createQModelingObject) :
    QUmlClass(false),
    _isIndirectlyInstantiated(true)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlComponentObject(this));
}

QUmlComponent::~QUmlComponent()
{
    if (!deletingFromQModelingObject) {
        if (_qModelingObject)
            _qModelingObject->setProperty("deletingFromModelingObject", true);
        delete _qModelingObject;
    }
}

QModelingElement *QUmlComponent::clone() const
{
    QUmlComponent *c = new QUmlComponent;
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
    c->setIndirectlyInstantiated(isIndirectlyInstantiated());
    foreach (QUmlPackageableElement *element, packagedElements())
        c->addPackagedElement(dynamic_cast<QUmlPackageableElement *>(element->clone()));
    foreach (QUmlComponentRealization *element, realizations())
        c->addRealization(dynamic_cast<QUmlComponentRealization *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    isIndirectlyInstantiated : Boolean {default = true} The kind of instantiation that applies to a Component. If false, the component is instantiated as an addressable object. If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the component is instantiated indirectly, through the instantiation of its realizing classifiers or parts. Several standard stereotypes use this meta attribute (e.g., specification, focus, subsystem).
 */
bool QUmlComponent::isIndirectlyInstantiated() const
{
    // This is a read-write property

    return _isIndirectlyInstantiated;
}

void QUmlComponent::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
    // This is a read-write property

    if (_isIndirectlyInstantiated != isIndirectlyInstantiated) {
        _isIndirectlyInstantiated = isIndirectlyInstantiated;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isIndirectlyInstantiated");
    }
}

/*!
    The set of PackageableElements that a Component owns. In the namespace of a component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g. Classes, Interfaces, Components, Packages, Use cases, Dependencies (e.g. mappings), and Artifacts.
 */
const QSet<QUmlPackageableElement *> QUmlComponent::packagedElements() const
{
    // This is a read-write association end

    return _packagedElements;
}

void QUmlComponent::addPackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (!_packagedElements.contains(packagedElement)) {
        _packagedElements.insert(packagedElement);
        if (packagedElement && packagedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(packagedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePackagedElement(QObject *)));
        packagedElement->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(packagedElement);
    }
}

void QUmlComponent::removePackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (_packagedElements.contains(packagedElement)) {
        _packagedElements.remove(packagedElement);
        if (packagedElement->asQModelingObject())
            packagedElement->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(packagedElement);
    }
}

/*!
    The interfaces that the component exposes to its environment. These interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
 */
const QSet<QUmlInterface *> QUmlComponent::provided() const
{
    // This is a read-only derived association end

    qWarning("UmlComponent::provided(): to be implemented (this is a derived association end)");

    return QSet<QUmlInterface *>();
}

void QUmlComponent::addProvided(QUmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::addProvided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlComponent::removeProvided(QUmlInterface *provided)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::removeProvided(): to be implemented (this is a derived association end)");
    Q_UNUSED(provided);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
 */
const QSet<QUmlComponentRealization *> QUmlComponent::realizations() const
{
    // This is a read-write association end

    return _realizations;
}

void QUmlComponent::addRealization(QUmlComponentRealization *realization)
{
    // This is a read-write association end

    if (!_realizations.contains(realization)) {
        _realizations.insert(realization);
        if (realization && realization->asQModelingObject() && this->asQModelingObject())
            QObject::connect(realization->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRealization(QObject *)));
        realization->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(realization);

        // Adjust opposite properties
        if (realization) {
            realization->setAbstraction(this);
        }
    }
}

void QUmlComponent::removeRealization(QUmlComponentRealization *realization)
{
    // This is a read-write association end

    if (_realizations.contains(realization)) {
        _realizations.remove(realization);
        if (realization->asQModelingObject())
            realization->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(realization);

        // Adjust opposite properties
        if (realization) {
            realization->setAbstraction(0);
        }
    }
}

/*!
    The interfaces that the component requires from other components in its environment in order to be able to offer its full set of provided functionality. These interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
 */
const QSet<QUmlInterface *> QUmlComponent::required() const
{
    // This is a read-only derived association end

    qWarning("UmlComponent::required(): to be implemented (this is a derived association end)");

    return QSet<QUmlInterface *>();
}

void QUmlComponent::addRequired(QUmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::addRequired(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlComponent::removeRequired(QUmlInterface *required)
{
    // This is a read-only derived association end

    qWarning("UmlComponent::removeRequired(): to be implemented (this is a derived association end)");
    Q_UNUSED(required);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

/*!
    Utility returning the set of realized interfaces of a component.
 */
QSet<QUmlInterface *> QUmlComponent::realizedInterfaces(QUmlClassifier *classifier) const
{
    qWarning("UmlComponent::realizedInterfaces(): to be implemented (operation)");

    Q_UNUSED(classifier);
    return QSet<QUmlInterface *> ();
}

/*!
    Utility returning the set of used interfaces of a component.
 */
QSet<QUmlInterface *> QUmlComponent::usedInterfaces(QUmlClassifier *classifier) const
{
    qWarning("UmlComponent::usedInterfaces(): to be implemented (operation)");

    Q_UNUSED(classifier);
    return QSet<QUmlInterface *> ();
}

