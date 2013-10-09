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
#include "qumlinterface.h"

#include "private/qumlinterfaceobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlProtocolStateMachine>
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
    \class QUmlInterface

    \inmodule QtUml

    \brief Since an interface specifies conformance characteristics, it does not own detailed behavior specifications. Instead, interfaces may own a protocol state machine that specifies event sequences and pre/post conditions for the operations and receptions described by the interface.Interfaces may include receptions (in addition to operations).An interface is a kind of classifier that represents a declaration of a set of coherent public features and obligations. An interface specifies a contract; any instance of a classifier that realizes the interface must fulfill that contract. The obligations that may be associated with an interface are in the form of various kinds of constraints (such as pre- and post-conditions) or protocol specifications, which may impose ordering restrictions on interactions through the interface.
 */
QUmlInterface::QUmlInterface(bool createQObject) :
    _protocol(0)
{
    if (createQObject)
        _qObject = new QUmlInterfaceObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlInterface::~QUmlInterface()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInterface::clone() const
{
    QUmlInterface *c = new QUmlInterface;
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
    c->setAbstract(isAbstract());
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
    foreach (QUmlClassifier *element, nestedClassifiers())
        c->addNestedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    foreach (QUmlReception *element, ownedReceptions())
        c->addOwnedReception(dynamic_cast<QUmlReception *>(element->clone()));
    if (protocol())
        c->setProtocol(dynamic_cast<QUmlProtocolStateMachine *>(protocol()->clone()));
    foreach (QUmlInterface *element, redefinedInterfaces())
        c->addRedefinedInterface(dynamic_cast<QUmlInterface *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QUmlClassifier *> QUmlInterface::nestedClassifiers() const
{
    // This is a read-write association end

    return _nestedClassifiers;
}

void QUmlInterface::addNestedClassifier(QUmlClassifier *nestedClassifier)
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

void QUmlInterface::removeNestedClassifier(QUmlClassifier *nestedClassifier)
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
const QList<QUmlProperty *> QUmlInterface::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

void QUmlInterface::addOwnedAttribute(QUmlProperty *ownedAttribute)
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
            ownedAttribute->setInterface(this);
        }
    }
}

void QUmlInterface::removeOwnedAttribute(QUmlProperty *ownedAttribute)
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
            ownedAttribute->setInterface(0);
        }
    }
}

/*!
    The operations owned by the class.
 */
const QList<QUmlOperation *> QUmlInterface::ownedOperations() const
{
    // This is a read-write association end

    return _ownedOperations;
}

void QUmlInterface::addOwnedOperation(QUmlOperation *ownedOperation)
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
            ownedOperation->setInterface(this);
        }
    }
}

void QUmlInterface::removeOwnedOperation(QUmlOperation *ownedOperation)
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
            ownedOperation->setInterface(0);
        }
    }
}

/*!
    Receptions that objects providing this interface are willing to accept.
 */
const QSet<QUmlReception *> QUmlInterface::ownedReceptions() const
{
    // This is a read-write association end

    return _ownedReceptions;
}

void QUmlInterface::addOwnedReception(QUmlReception *ownedReception)
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

void QUmlInterface::removeOwnedReception(QUmlReception *ownedReception)
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
    References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.
 */
QUmlProtocolStateMachine *QUmlInterface::protocol() const
{
    // This is a read-write association end

    return _protocol;
}

void QUmlInterface::setProtocol(QUmlProtocolStateMachine *protocol)
{
    // This is a read-write association end

    if (_protocol != protocol) {
        // Adjust subsetted properties
        removeOwnedMember(_protocol);

        _protocol = protocol;
        if (protocol && protocol->asQObject() && this->asQObject())
            QObject::connect(protocol->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setProtocol()));
        protocol->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (protocol) {
            addOwnedMember(protocol);
        }
    }
}

/*!
    References all the Interfaces redefined by this Interface.
 */
const QSet<QUmlInterface *> QUmlInterface::redefinedInterfaces() const
{
    // This is a read-write association end

    return _redefinedInterfaces;
}

void QUmlInterface::addRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    if (!_redefinedInterfaces.contains(redefinedInterface)) {
        _redefinedInterfaces.insert(redefinedInterface);
        if (redefinedInterface && redefinedInterface->asQObject() && this->asQObject())
            QObject::connect(redefinedInterface->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRedefinedInterface(QObject *)));

        // Adjust subsetted properties
        addRedefinedClassifier(redefinedInterface);
    }
}

void QUmlInterface::removeRedefinedInterface(QUmlInterface *redefinedInterface)
{
    // This is a read-write association end

    if (_redefinedInterfaces.contains(redefinedInterface)) {
        _redefinedInterfaces.remove(redefinedInterface);

        // Adjust subsetted properties
        removeRedefinedClassifier(redefinedInterface);
    }
}

void QUmlInterface::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));
    _groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    _groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
    _groupProperties.insert(QStringLiteral("QUmlType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("package"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));
    _groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("attributes"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("collaborationUses"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("features"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generals"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isFinalSpecialization"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedUseCases"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("powertypeExtents"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedClassifiers"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("representation"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("substitutions"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));
    _groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("useCases"))));
    _groupProperties.insert(QStringLiteral("QUmlInterface"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedClassifiers"))));
    _groupProperties.insert(QStringLiteral("QUmlInterface"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    _groupProperties.insert(QStringLiteral("QUmlInterface"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedOperations"))));
    _groupProperties.insert(QStringLiteral("QUmlInterface"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedReceptions"))));
    _groupProperties.insert(QStringLiteral("QUmlInterface"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("protocol"))));
    _groupProperties.insert(QStringLiteral("QUmlInterface"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedInterfaces"))));
}

void QUmlInterface::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterface");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::DocumentationRole] = QStringLiteral("References all the Classifiers that are defined (nested) within the Class.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("nestedClassifiers")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterface");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::DocumentationRole] = QStringLiteral("The attributes (i.e. the properties) owned by the class.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember Classifier-attribute");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedAttributes")][QtModeling::OppositeEndRole] = QStringLiteral("Property-interface");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterface");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::DocumentationRole] = QStringLiteral("The operations owned by the class.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedOperations")][QtModeling::OppositeEndRole] = QStringLiteral("Operation-interface");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterface");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::DocumentationRole] = QStringLiteral("Receptions that objects providing this interface are willing to accept.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Classifier-feature Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("ownedReceptions")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterface");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::DocumentationRole] = QStringLiteral("References a protocol state machine specifying the legal sequences of the invocation of the behavioral features described in the interface.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("protocol")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterface");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::DocumentationRole] = QStringLiteral("References all the Interfaces redefined by this Interface.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Classifier-redefinedClassifier");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterface")][QStringLiteral("redefinedInterfaces")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

