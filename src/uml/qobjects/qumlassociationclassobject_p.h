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
#ifndef QUMLASSOCIATIONCLASSOBJECT_H
#define QUMLASSOCIATIONCLASSOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlAssociationClass;
class Q_UML_EXPORT QUmlAssociationClassObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElement)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QObject * nameExpression READ nameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QObject *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QObject *> member READ member)
    Q_PROPERTY(QSet<QObject *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QObject *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QObject *> packageImport READ packageImport)

    // Properties [ParameterableElement]
    Q_PROPERTY(QObject * owningTemplateParameter READ owningTemplateParameter)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [Type]
    Q_PROPERTY(QObject * package READ package)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElement READ redefinedElement)
    Q_PROPERTY(QSet<QObject *> redefinitionContext READ redefinitionContext)

    // Properties [TemplateableElement]
    Q_PROPERTY(QSet<QObject *> templateBinding READ templateBinding)

    // Properties [Classifier]
    Q_PROPERTY(QSet<QObject *> attribute READ attribute)
    Q_PROPERTY(QSet<QObject *> collaborationUse READ collaborationUse)
    Q_PROPERTY(QSet<QObject *> feature READ feature)
    Q_PROPERTY(QSet<QObject *> generalization READ generalization)
    Q_PROPERTY(QSet<QObject *> inheritedMember READ inheritedMember)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization)
    Q_PROPERTY(QObject * ownedTemplateSignature READ ownedTemplateSignature)
    Q_PROPERTY(QSet<QObject *> ownedUseCase READ ownedUseCase)
    Q_PROPERTY(QSet<QObject *> powertypeExtent READ powertypeExtent)
    Q_PROPERTY(QSet<QObject *> redefinedClassifier READ redefinedClassifier)
    Q_PROPERTY(QObject * representation READ representation)
    Q_PROPERTY(QSet<QObject *> substitution READ substitution)
    Q_PROPERTY(QObject * templateParameter READ templateParameter)
    Q_PROPERTY(QSet<QObject *> useCase READ useCase)

    // Properties [StructuredClassifier]
    Q_PROPERTY(QSet<QObject *> ownedConnector READ ownedConnector)
    Q_PROPERTY(QSet<QObject *> part READ part)
    Q_PROPERTY(QSet<QObject *> role READ role)

    // Properties [EncapsulatedClassifier]
    Q_PROPERTY(QSet<QObject *> ownedPort READ ownedPort)

    // Properties [BehavioredClassifier]
    Q_PROPERTY(QObject * classifierBehavior READ classifierBehavior)
    Q_PROPERTY(QSet<QObject *> interfaceRealization READ interfaceRealization)
    Q_PROPERTY(QSet<QObject *> ownedBehavior READ ownedBehavior)

    // Properties [Class]
    Q_PROPERTY(QSet<QObject *> extension READ extension)
    Q_PROPERTY(bool isAbstract READ isAbstract)
    Q_PROPERTY(bool isActive READ isActive)
    Q_PROPERTY(QList<QObject *> nestedClassifier READ nestedClassifier)
    Q_PROPERTY(QList<QObject *> ownedAttribute READ ownedAttribute)
    Q_PROPERTY(QList<QObject *> ownedOperation READ ownedOperation)
    Q_PROPERTY(QSet<QObject *> ownedReception READ ownedReception)
    Q_PROPERTY(QSet<QObject *> superClass READ superClass)

    // Properties [Relationship]
    Q_PROPERTY(QSet<QObject *> relatedElement READ relatedElement)

    // Properties [Association]
    Q_PROPERTY(QList<QObject *> endType READ endType)
    Q_PROPERTY(bool isDerived READ isDerived)
    Q_PROPERTY(QList<QObject *> memberEnd READ memberEnd)
    Q_PROPERTY(QSet<QObject *> navigableOwnedEnd READ navigableOwnedEnd)
    Q_PROPERTY(QList<QObject *> ownedEnd READ ownedEnd)

public:
    Q_INVOKABLE explicit QUmlAssociationClassObject(QUmlAssociationClass *qModelingObject);
    virtual ~QUmlAssociationClassObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComment() const;
    Q_INVOKABLE const QSet<QObject *> ownedElement() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImport() const;
    Q_INVOKABLE const QSet<QObject *> importedMember() const;
    Q_INVOKABLE const QSet<QObject *> member() const;
    Q_INVOKABLE const QSet<QObject *> ownedMember() const;
    Q_INVOKABLE const QSet<QObject *> ownedRule() const;
    Q_INVOKABLE const QSet<QObject *> packageImport() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QObject *owningTemplateParameter() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Type]
    Q_INVOKABLE QObject *package() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElement() const;
    Q_INVOKABLE const QSet<QObject *> redefinitionContext() const;

    // Owned attributes [TemplateableElement]
    Q_INVOKABLE const QSet<QObject *> templateBinding() const;

    // Owned attributes [Classifier]
    Q_INVOKABLE const QSet<QObject *> attribute() const;
    Q_INVOKABLE const QSet<QObject *> collaborationUse() const;
    Q_INVOKABLE const QSet<QObject *> feature() const;
    Q_INVOKABLE const QSet<QObject *> generalization() const;
    Q_INVOKABLE const QSet<QObject *> inheritedMember() const;
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE QObject *ownedTemplateSignature() const;
    Q_INVOKABLE const QSet<QObject *> ownedUseCase() const;
    Q_INVOKABLE const QSet<QObject *> powertypeExtent() const;
    Q_INVOKABLE const QSet<QObject *> redefinedClassifier() const;
    Q_INVOKABLE QObject *representation() const;
    Q_INVOKABLE const QSet<QObject *> substitution() const;
    Q_INVOKABLE QObject *templateParameter() const;
    Q_INVOKABLE const QSet<QObject *> useCase() const;

    // Owned attributes [StructuredClassifier]
    Q_INVOKABLE const QSet<QObject *> ownedConnector() const;
    Q_INVOKABLE const QSet<QObject *> part() const;
    Q_INVOKABLE const QSet<QObject *> role() const;

    // Owned attributes [EncapsulatedClassifier]
    Q_INVOKABLE const QSet<QObject *> ownedPort() const;

    // Owned attributes [BehavioredClassifier]
    Q_INVOKABLE QObject *classifierBehavior() const;
    Q_INVOKABLE const QSet<QObject *> interfaceRealization() const;
    Q_INVOKABLE const QSet<QObject *> ownedBehavior() const;

    // Owned attributes [Class]
    Q_INVOKABLE const QSet<QObject *> extension() const;
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE bool isActive() const;
    Q_INVOKABLE const QList<QObject *> nestedClassifier() const;
    Q_INVOKABLE const QList<QObject *> ownedAttribute() const;
    Q_INVOKABLE const QList<QObject *> ownedOperation() const;
    Q_INVOKABLE const QSet<QObject *> ownedReception() const;
    Q_INVOKABLE const QSet<QObject *> superClass() const;

    // Owned attributes [Relationship]
    Q_INVOKABLE const QSet<QObject *> relatedElement() const;

    // Owned attributes [Association]
    Q_INVOKABLE const QList<QObject *> endType() const;
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE const QList<QObject *> memberEnd() const;
    Q_INVOKABLE const QSet<QObject *> navigableOwnedEnd() const;
    Q_INVOKABLE const QList<QObject *> ownedEnd() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QObject *> excludeCollisions(QSet<QObject *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_INVOKABLE QSet<QObject *> importMembers(QSet<QObject *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QObject *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [Type]

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

    // Operations [TemplateableElement]
    Q_INVOKABLE QSet<QObject *> parameterableElements() const;

    // Operations [Classifier]
    Q_INVOKABLE QSet<QObject *> allFeatures() const;
    Q_INVOKABLE QSet<QObject *> allParents() const;
    Q_INVOKABLE bool conformsTo(QObject *other) const;
    Q_INVOKABLE bool hasVisibilityOf(QObject *n) const;
    Q_INVOKABLE QSet<QObject *> inheritableMembers(QObject *c) const;
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE bool maySpecializeType(QObject *c) const;
    Q_INVOKABLE QSet<QObject *> parents() const;

    // Operations [Class]
    Q_INVOKABLE QSet<QObject *> inherit(QSet<QObject *> inhs) const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);

    // Slots for owned attributes [Namespace]
    void addElementImport(QObject *elementImport);
    void removeElementImport(QObject *elementImport);
    void Q_DECL_HIDDEN addImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN removeImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN addMember(QObject *member);
    void Q_DECL_HIDDEN removeMember(QObject *member);
    void Q_DECL_HIDDEN addOwnedMember(QObject *ownedMember);
    void Q_DECL_HIDDEN removeOwnedMember(QObject *ownedMember);
    void addOwnedRule(QObject *ownedRule);
    void removeOwnedRule(QObject *ownedRule);
    void addPackageImport(QObject *packageImport);
    void removePackageImport(QObject *packageImport);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QObject *owningTemplateParameter = 0);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [Type]
    void setPackage(QObject *package = 0);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);
    void Q_DECL_HIDDEN addRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN removeRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN addRedefinitionContext(QObject *redefinitionContext);
    void Q_DECL_HIDDEN removeRedefinitionContext(QObject *redefinitionContext);

    // Slots for owned attributes [TemplateableElement]
    void addTemplateBinding(QObject *templateBinding);
    void removeTemplateBinding(QObject *templateBinding);

    // Slots for owned attributes [Classifier]
    void Q_DECL_HIDDEN addAttribute(QObject *attribute);
    void Q_DECL_HIDDEN removeAttribute(QObject *attribute);
    void addCollaborationUse(QObject *collaborationUse);
    void removeCollaborationUse(QObject *collaborationUse);
    void Q_DECL_HIDDEN addFeature(QObject *feature);
    void Q_DECL_HIDDEN removeFeature(QObject *feature);
    void addGeneralization(QObject *generalization);
    void removeGeneralization(QObject *generalization);
    void Q_DECL_HIDDEN addInheritedMember(QObject *inheritedMember);
    void Q_DECL_HIDDEN removeInheritedMember(QObject *inheritedMember);
    void setFinalSpecialization(bool isFinalSpecialization);
    void setOwnedTemplateSignature(QObject *ownedTemplateSignature = 0);
    void addOwnedUseCase(QObject *ownedUseCase);
    void removeOwnedUseCase(QObject *ownedUseCase);
    void addPowertypeExtent(QObject *powertypeExtent);
    void removePowertypeExtent(QObject *powertypeExtent);
    void addRedefinedClassifier(QObject *redefinedClassifier);
    void removeRedefinedClassifier(QObject *redefinedClassifier);
    void setRepresentation(QObject *representation = 0);
    void addSubstitution(QObject *substitution);
    void removeSubstitution(QObject *substitution);
    void setTemplateParameter(QObject *templateParameter = 0);
    void addUseCase(QObject *useCase);
    void removeUseCase(QObject *useCase);

    // Slots for owned attributes [StructuredClassifier]
    void addOwnedConnector(QObject *ownedConnector);
    void removeOwnedConnector(QObject *ownedConnector);
    void Q_DECL_HIDDEN addPart(QObject *part);
    void Q_DECL_HIDDEN removePart(QObject *part);
    void Q_DECL_HIDDEN addRole(QObject *role);
    void Q_DECL_HIDDEN removeRole(QObject *role);

    // Slots for owned attributes [EncapsulatedClassifier]
    void Q_DECL_HIDDEN addOwnedPort(QObject *ownedPort);
    void Q_DECL_HIDDEN removeOwnedPort(QObject *ownedPort);

    // Slots for owned attributes [BehavioredClassifier]
    void setClassifierBehavior(QObject *classifierBehavior = 0);
    void addInterfaceRealization(QObject *interfaceRealization);
    void removeInterfaceRealization(QObject *interfaceRealization);
    void addOwnedBehavior(QObject *ownedBehavior);
    void removeOwnedBehavior(QObject *ownedBehavior);

    // Slots for owned attributes [Class]
    void Q_DECL_HIDDEN addExtension(QObject *extension);
    void Q_DECL_HIDDEN removeExtension(QObject *extension);
    void setAbstract(bool isAbstract);
    void setActive(bool isActive);
    void addNestedClassifier(QObject *nestedClassifier);
    void removeNestedClassifier(QObject *nestedClassifier);
    void addOwnedAttribute(QObject *ownedAttribute);
    void removeOwnedAttribute(QObject *ownedAttribute);
    void addOwnedOperation(QObject *ownedOperation);
    void removeOwnedOperation(QObject *ownedOperation);
    void addOwnedReception(QObject *ownedReception);
    void removeOwnedReception(QObject *ownedReception);
    void addSuperClass(QObject *superClass);
    void removeSuperClass(QObject *superClass);

    // Slots for owned attributes [Relationship]
    void Q_DECL_HIDDEN addRelatedElement(QObject *relatedElement);
    void Q_DECL_HIDDEN removeRelatedElement(QObject *relatedElement);

    // Slots for owned attributes [Association]
    void Q_DECL_HIDDEN addEndType(QObject *endType);
    void Q_DECL_HIDDEN removeEndType(QObject *endType);
    void setDerived(bool isDerived);
    void addMemberEnd(QObject *memberEnd);
    void removeMemberEnd(QObject *memberEnd);
    void addNavigableOwnedEnd(QObject *navigableOwnedEnd);
    void removeNavigableOwnedEnd(QObject *navigableOwnedEnd);
    void addOwnedEnd(QObject *ownedEnd);
    void removeOwnedEnd(QObject *ownedEnd);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLASSOCIATIONCLASSOBJECT_H
