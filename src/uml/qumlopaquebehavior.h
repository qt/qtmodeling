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
#ifndef QUMLOPAQUEBEHAVIOR_H
#define QUMLOPAQUEBEHAVIOR_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlopaquebehavior_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlBehavioralFeature;
class QUmlBehavioredClassifier;
class QUmlClass;
class QUmlClassifier;
class QUmlClassifierTemplateParameter;
class QUmlCollaborationUse;
class QUmlComment;
class QUmlConnectableElement;
class QUmlConnector;
class QUmlConstraint;
class QUmlDependency;
class QUmlElement;
class QUmlElementImport;
class QUmlExtension;
class QUmlFeature;
class QUmlGeneralization;
class QUmlGeneralizationSet;
class QUmlInterfaceRealization;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlOperation;
class QUmlPackage;
class QUmlPackageableElement;
class QUmlPackageImport;
class QUmlParameter;
class QUmlParameterableElement;
class QUmlParameterSet;
class QUmlPort;
class QUmlProperty;
class QUmlReception;
class QUmlRedefinableElement;
class QUmlRedefinableTemplateSignature;
class QUmlStringExpression;
class QUmlSubstitution;
class QUmlTemplateBinding;
class QUmlTemplateParameter;
class QUmlTemplateSignature;
class QUmlType;
class QUmlUseCase;

class Q_UML_EXPORT QUmlOpaqueBehavior : public QObject, public UmlOpaqueBehavior
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QUmlElementImport *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QUmlNamedElement *> member READ member)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QUmlPackageImport *> packageImport READ packageImport)

    // Properties [ParameterableElement]
    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [Type]
    Q_PROPERTY(QUmlPackage * package READ package)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElement READ redefinedElement)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContext READ redefinitionContext)

    // Properties [TemplateableElement]
    Q_PROPERTY(QSet<QUmlTemplateBinding *> templateBinding READ templateBinding)

    // Properties [Classifier]
    Q_PROPERTY(QSet<QUmlProperty *> attribute READ attribute)
    Q_PROPERTY(QSet<QUmlCollaborationUse *> collaborationUse READ collaborationUse)
    Q_PROPERTY(QSet<QUmlFeature *> feature READ feature)
    Q_PROPERTY(QSet<QUmlGeneralization *> generalization READ generalization)
    Q_PROPERTY(QSet<QUmlNamedElement *> inheritedMember READ inheritedMember)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization)
    Q_PROPERTY(QUmlRedefinableTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature)
    Q_PROPERTY(QSet<QUmlUseCase *> ownedUseCase READ ownedUseCase)
    Q_PROPERTY(QSet<QUmlGeneralizationSet *> powertypeExtent READ powertypeExtent)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinedClassifier READ redefinedClassifier)
    Q_PROPERTY(QUmlCollaborationUse * representation READ representation)
    Q_PROPERTY(QSet<QUmlSubstitution *> substitution READ substitution)
    Q_PROPERTY(QUmlClassifierTemplateParameter * templateParameter READ templateParameter)
    Q_PROPERTY(QSet<QUmlUseCase *> useCase READ useCase)

    // Properties [StructuredClassifier]
    Q_PROPERTY(QSet<QUmlConnector *> ownedConnector READ ownedConnector)
    Q_PROPERTY(QSet<QUmlProperty *> part READ part)
    Q_PROPERTY(QSet<QUmlConnectableElement *> role READ role)

    // Properties [EncapsulatedClassifier]
    Q_PROPERTY(QSet<QUmlPort *> ownedPort READ ownedPort)

    // Properties [BehavioredClassifier]
    Q_PROPERTY(QUmlBehavior * classifierBehavior READ classifierBehavior)
    Q_PROPERTY(QSet<QUmlInterfaceRealization *> interfaceRealization READ interfaceRealization)
    Q_PROPERTY(QSet<QUmlBehavior *> ownedBehavior READ ownedBehavior)

    // Properties [Class]
    Q_PROPERTY(QSet<QUmlExtension *> extension READ extension)
    Q_PROPERTY(bool isAbstract READ isAbstract)
    Q_PROPERTY(bool isActive READ isActive)
    Q_PROPERTY(QList<QUmlClassifier *> nestedClassifier READ nestedClassifier)
    Q_PROPERTY(QList<QUmlProperty *> ownedAttribute READ ownedAttribute)
    Q_PROPERTY(QList<QUmlOperation *> ownedOperation READ ownedOperation)
    Q_PROPERTY(QSet<QUmlReception *> ownedReception READ ownedReception)
    Q_PROPERTY(QSet<QUmlClass *> superClass READ superClass)

    // Properties [Behavior]
    Q_PROPERTY(QUmlBehavioredClassifier * context READ context)
    Q_PROPERTY(bool isReentrant READ isReentrant)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameter READ ownedParameter)
    Q_PROPERTY(QSet<QUmlParameterSet *> ownedParameterSet READ ownedParameterSet)
    Q_PROPERTY(QSet<QUmlConstraint *> postcondition READ postcondition)
    Q_PROPERTY(QSet<QUmlConstraint *> precondition READ precondition)
    Q_PROPERTY(QSet<QUmlBehavior *> redefinedBehavior READ redefinedBehavior)
    Q_PROPERTY(QUmlBehavioralFeature * specification READ specification)

    // Properties [OpaqueBehavior]
    Q_PROPERTY(QList<QString> body READ body)
    Q_PROPERTY(QList<QString> language READ language)

public:
    Q_INVOKABLE explicit QUmlOpaqueBehavior(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QUmlElementImport *> elementImport() const;
    Q_INVOKABLE const QSet<QUmlPackageableElement *> importedMember() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> member() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> ownedMember() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> ownedRule() const;
    Q_INVOKABLE const QSet<QUmlPackageImport *> packageImport() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Type]
    Q_INVOKABLE QUmlPackage *package() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QUmlRedefinableElement *> redefinedElement() const;
    Q_INVOKABLE const QSet<QUmlClassifier *> redefinitionContext() const;

    // Owned attributes [TemplateableElement]
    Q_INVOKABLE const QSet<QUmlTemplateBinding *> templateBinding() const;

    // Owned attributes [Classifier]
    Q_INVOKABLE const QSet<QUmlProperty *> attribute() const;
    Q_INVOKABLE const QSet<QUmlCollaborationUse *> collaborationUse() const;
    Q_INVOKABLE const QSet<QUmlFeature *> feature() const;
    Q_INVOKABLE const QSet<QUmlGeneralization *> generalization() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> inheritedMember() const;
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE QUmlRedefinableTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE const QSet<QUmlUseCase *> ownedUseCase() const;
    Q_INVOKABLE const QSet<QUmlGeneralizationSet *> powertypeExtent() const;
    Q_INVOKABLE const QSet<QUmlClassifier *> redefinedClassifier() const;
    Q_INVOKABLE QUmlCollaborationUse *representation() const;
    Q_INVOKABLE const QSet<QUmlSubstitution *> substitution() const;
    Q_INVOKABLE QUmlClassifierTemplateParameter *templateParameter() const;
    Q_INVOKABLE const QSet<QUmlUseCase *> useCase() const;

    // Owned attributes [StructuredClassifier]
    Q_INVOKABLE const QSet<QUmlConnector *> ownedConnector() const;
    Q_INVOKABLE const QSet<QUmlProperty *> part() const;
    Q_INVOKABLE const QSet<QUmlConnectableElement *> role() const;

    // Owned attributes [EncapsulatedClassifier]
    Q_INVOKABLE const QSet<QUmlPort *> ownedPort() const;

    // Owned attributes [BehavioredClassifier]
    Q_INVOKABLE QUmlBehavior *classifierBehavior() const;
    Q_INVOKABLE const QSet<QUmlInterfaceRealization *> interfaceRealization() const;
    Q_INVOKABLE const QSet<QUmlBehavior *> ownedBehavior() const;

    // Owned attributes [Class]
    Q_INVOKABLE const QSet<QUmlExtension *> extension() const;
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE bool isActive() const;
    Q_INVOKABLE const QList<QUmlClassifier *> nestedClassifier() const;
    Q_INVOKABLE const QList<QUmlProperty *> ownedAttribute() const;
    Q_INVOKABLE const QList<QUmlOperation *> ownedOperation() const;
    Q_INVOKABLE const QSet<QUmlReception *> ownedReception() const;
    Q_INVOKABLE const QSet<QUmlClass *> superClass() const;

    // Owned attributes [Behavior]
    Q_INVOKABLE QUmlBehavioredClassifier *context() const;
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE const QList<QUmlParameter *> ownedParameter() const;
    Q_INVOKABLE const QSet<QUmlParameterSet *> ownedParameterSet() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> postcondition() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> precondition() const;
    Q_INVOKABLE const QSet<QUmlBehavior *> redefinedBehavior() const;
    Q_INVOKABLE QUmlBehavioralFeature *specification() const;

    // Owned attributes [OpaqueBehavior]
    Q_INVOKABLE const QList<QString> body() const;
    Q_INVOKABLE const QList<QString> language() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QUmlPackageableElement *> excludeCollisions(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QUmlNamedElement *element) const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importMembers(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [Type]

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QUmlRedefinableElement *redefined) const;

    // Operations [TemplateableElement]
    Q_INVOKABLE QSet<QUmlParameterableElement *> parameterableElements() const;

    // Operations [Classifier]
    Q_INVOKABLE QSet<QUmlFeature *> allFeatures() const;
    Q_INVOKABLE QSet<QUmlClassifier *> allParents() const;
    Q_INVOKABLE bool conformsTo(QUmlClassifier *other) const;
    Q_INVOKABLE bool hasVisibilityOf(QUmlNamedElement *n) const;
    Q_INVOKABLE QSet<QUmlNamedElement *> inheritableMembers(QUmlClassifier *c) const;
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE bool maySpecializeType(QUmlClassifier *c) const;
    Q_INVOKABLE QSet<QUmlClassifier *> parents() const;

    // Operations [Class]
    Q_INVOKABLE QSet<QUmlNamedElement *> inherit(QSet<QUmlNamedElement *> inhs) const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);

    // Slots for owned attributes [Namespace]
    void addElementImport(UmlElementImport *elementImport);
    void removeElementImport(UmlElementImport *elementImport);
    void addOwnedRule(UmlConstraint *ownedRule);
    void removeOwnedRule(UmlConstraint *ownedRule);
    void addPackageImport(UmlPackageImport *packageImport);
    void removePackageImport(UmlPackageImport *packageImport);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [Type]
    void setPackage(QUmlPackage *package);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);

    // Slots for owned attributes [TemplateableElement]
    void addTemplateBinding(UmlTemplateBinding *templateBinding);
    void removeTemplateBinding(UmlTemplateBinding *templateBinding);

    // Slots for owned attributes [Classifier]
    void addCollaborationUse(UmlCollaborationUse *collaborationUse);
    void removeCollaborationUse(UmlCollaborationUse *collaborationUse);
    void addGeneralization(UmlGeneralization *generalization);
    void removeGeneralization(UmlGeneralization *generalization);
    void setFinalSpecialization(bool isFinalSpecialization);
    void setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature);
    void addOwnedUseCase(UmlUseCase *ownedUseCase);
    void removeOwnedUseCase(UmlUseCase *ownedUseCase);
    void addPowertypeExtent(UmlGeneralizationSet *powertypeExtent);
    void removePowertypeExtent(UmlGeneralizationSet *powertypeExtent);
    void addRedefinedClassifier(UmlClassifier *redefinedClassifier);
    void removeRedefinedClassifier(UmlClassifier *redefinedClassifier);
    void setRepresentation(QUmlCollaborationUse *representation);
    void addSubstitution(UmlSubstitution *substitution);
    void removeSubstitution(UmlSubstitution *substitution);
    void setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter);
    void addUseCase(UmlUseCase *useCase);
    void removeUseCase(UmlUseCase *useCase);

    // Slots for owned attributes [StructuredClassifier]
    void addOwnedConnector(UmlConnector *ownedConnector);
    void removeOwnedConnector(UmlConnector *ownedConnector);

    // Slots for owned attributes [EncapsulatedClassifier]

    // Slots for owned attributes [BehavioredClassifier]
    void setClassifierBehavior(QUmlBehavior *classifierBehavior);
    void addInterfaceRealization(UmlInterfaceRealization *interfaceRealization);
    void removeInterfaceRealization(UmlInterfaceRealization *interfaceRealization);
    void addOwnedBehavior(UmlBehavior *ownedBehavior);
    void removeOwnedBehavior(UmlBehavior *ownedBehavior);

    // Slots for owned attributes [Class]
    void setAbstract(bool isAbstract);
    void setActive(bool isActive);
    void addNestedClassifier(UmlClassifier *nestedClassifier);
    void removeNestedClassifier(UmlClassifier *nestedClassifier);
    void addOwnedAttribute(UmlProperty *ownedAttribute);
    void removeOwnedAttribute(UmlProperty *ownedAttribute);
    void addOwnedOperation(UmlOperation *ownedOperation);
    void removeOwnedOperation(UmlOperation *ownedOperation);
    void addOwnedReception(UmlReception *ownedReception);
    void removeOwnedReception(UmlReception *ownedReception);
    void addSuperClass(UmlClass *superClass);
    void removeSuperClass(UmlClass *superClass);

    // Slots for owned attributes [Behavior]
    void setReentrant(bool isReentrant);
    void addOwnedParameter(UmlParameter *ownedParameter);
    void removeOwnedParameter(UmlParameter *ownedParameter);
    void addOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    void removeOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    void addPostcondition(UmlConstraint *postcondition);
    void removePostcondition(UmlConstraint *postcondition);
    void addPrecondition(UmlConstraint *precondition);
    void removePrecondition(UmlConstraint *precondition);
    void addRedefinedBehavior(UmlBehavior *redefinedBehavior);
    void removeRedefinedBehavior(UmlBehavior *redefinedBehavior);
    void setSpecification(QUmlBehavioralFeature *specification);

    // Slots for owned attributes [OpaqueBehavior]
    void addBody(QString body);
    void removeBody(QString body);
    void addLanguage(QString language);
    void removeLanguage(QString language);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlOpaqueBehavior *)
Q_DECLARE_METATYPE(QList<QUmlOpaqueBehavior *> *)
Q_DECLARE_METATYPE(QSet<QUmlOpaqueBehavior *> *)

QT_END_HEADER

#endif // QUMLOPAQUEBEHAVIOR_H

