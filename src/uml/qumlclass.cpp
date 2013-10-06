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
#include "qumlclass.h"

#include "private/qumlclassobject_p.h"

#include <QtUml/QUmlBehavior>
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
    \class QUmlClass

    \inmodule QtUml

    \brief A class may be designated as active (i.e., each of its instances having its own thread of control) or passive (i.e., each of its instances executing within the context of some other object). A class may also specify which signals the instances of this class handle.A class describes a set of objects that share the same specifications of features, constraints, and semantics.A class has the capability to have an internal structure and ports.Class has derived association that indicates how it may be extended through one or more stereotypes. Stereotype is the only kind of metaclass that cannot be extended by stereotypes.
 */
QUmlClass::QUmlClass(bool createQObject) :
    _isAbstract(false),
    _isActive(false)
{
    if (createQObject)
        _qObject = new QUmlClassObject(this);
    setPropertyData();
}

QUmlClass::~QUmlClass()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlClass::clone() const
{
    QUmlClass *c = new QUmlClass;
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
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.
 */
const QSet<QUmlExtension *> QUmlClass::extensions() const
{
    // This is a read-only derived association end

    qWarning("UmlClass::extensions(): to be implemented (this is a derived association end)");

    return QSet<QUmlExtension *>();
}

void QUmlClass::addExtension(QUmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("UmlClass::addExtension(): to be implemented (this is a derived association end)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (extension) {
            extension->setMetaclass(this);
        }
    }
}

void QUmlClass::removeExtension(QUmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("UmlClass::removeExtension(): to be implemented (this is a derived association end)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (extension) {
            extension->setMetaclass(0);
        }
    }
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.
 */
bool QUmlClass::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void QUmlClass::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
        _modifiedResettableProperties << QStringLiteral("isAbstract");
    }
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QUmlClass::isActive() const
{
    // This is a read-write property

    return _isActive;
}

void QUmlClass::setActive(bool isActive)
{
    // This is a read-write property

    if (_isActive != isActive) {
        _isActive = isActive;
        _modifiedResettableProperties << QStringLiteral("isActive");
    }
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QUmlClassifier *> QUmlClass::nestedClassifiers() const
{
    // This is a read-write association end

    return _nestedClassifiers;
}

void QUmlClass::addNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (!_nestedClassifiers.contains(nestedClassifier)) {
        _nestedClassifiers.append(nestedClassifier);
        if (nestedClassifier && nestedClassifier->asQObject() && this->asQObject())
            QObject::connect(nestedClassifier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNestedClassifier(QObject *)));
        nestedClassifier->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(nestedClassifier);
    }
}

void QUmlClass::removeNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (_nestedClassifiers.contains(nestedClassifier)) {
        _nestedClassifiers.removeAll(nestedClassifier);
        if (nestedClassifier->asQObject())
            nestedClassifier->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(nestedClassifier);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
const QList<QUmlProperty *> QUmlClass::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

void QUmlClass::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.append(ownedAttribute);
        if (ownedAttribute && ownedAttribute->asQObject() && this->asQObject())
            QObject::connect(ownedAttribute->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedAttribute);
        addAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(this);
        }
    }
}

void QUmlClass::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.removeAll(ownedAttribute);
        if (ownedAttribute->asQObject())
            ownedAttribute->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedAttribute);
        removeAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(0);
        }
    }
}

/*!
    The operations owned by the class.
 */
const QList<QUmlOperation *> QUmlClass::ownedOperations() const
{
    // This is a read-write association end

    return _ownedOperations;
}

void QUmlClass::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.append(ownedOperation);
        if (ownedOperation && ownedOperation->asQObject() && this->asQObject())
            QObject::connect(ownedOperation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedOperation(QObject *)));
        ownedOperation->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setClass(this);
        }
    }
}

void QUmlClass::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.removeAll(ownedOperation);
        if (ownedOperation->asQObject())
            ownedOperation->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setClass(0);
        }
    }
}

/*!
    Receptions that objects of this class are willing to accept.
 */
const QSet<QUmlReception *> QUmlClass::ownedReceptions() const
{
    // This is a read-write association end

    return _ownedReceptions;
}

void QUmlClass::addOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    if (!_ownedReceptions.contains(ownedReception)) {
        _ownedReceptions.insert(ownedReception);
        if (ownedReception && ownedReception->asQObject() && this->asQObject())
            QObject::connect(ownedReception->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedReception(QObject *)));
        ownedReception->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addFeature(ownedReception);
        addOwnedMember(ownedReception);
    }
}

void QUmlClass::removeOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    if (_ownedReceptions.contains(ownedReception)) {
        _ownedReceptions.remove(ownedReception);
        if (ownedReception->asQObject())
            ownedReception->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedReception);
        removeOwnedMember(ownedReception);
    }
}

/*!
    This gives the superclasses of a class.
 */
const QSet<QUmlClass *> QUmlClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("UmlClass::superClasses(): to be implemented (this is a derived association end)");

    return QSet<QUmlClass *>();
}

void QUmlClass::addSuperClass(QUmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("UmlClass::addSuperClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlClass::removeSuperClass(QUmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("UmlClass::removeSuperClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QUmlNamedElement *> QUmlClass::inherit(QSet<QUmlNamedElement *> inhs) const
{
    qWarning("UmlClass::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<QUmlNamedElement *> ();
}

void QUmlClass::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::DocumentationRole] = QStringLiteral("References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.");
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("extension")][QtModeling::OppositeEndRole] = QStringLiteral("Extension-metaclass");

    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::DocumentationRole] = QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.");
    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("Classifier-isAbstract");
    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isAbstract")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::DocumentationRole] = QStringLiteral("Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.");
    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isActive")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::DocumentationRole] = QStringLiteral("References all the Classifiers that are defined (nested) within the Class.");
    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("nestedClassifier")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::DocumentationRole] = QStringLiteral("The attributes (i.e. the properties) owned by the class.");
    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("StructuredClassifier-ownedAttribute");
    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember Classifier-attribute");
    QModelingObject::propertyDataHash[QStringLiteral("ownedAttribute")][QtModeling::OppositeEndRole] = QStringLiteral("Property-class");

    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::DocumentationRole] = QStringLiteral("The operations owned by the class.");
    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("ownedOperation")][QtModeling::OppositeEndRole] = QStringLiteral("Operation-class");

    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::DocumentationRole] = QStringLiteral("Receptions that objects of this class are willing to accept.");
    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Classifier-feature Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("ownedReception")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClass");
    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::DocumentationRole] = QStringLiteral("This gives the superclasses of a class.");
    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("Classifier-general");
    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("superClass")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

