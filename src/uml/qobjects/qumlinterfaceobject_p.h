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
#ifndef QUMLINTERFACEOBJECT_H
#define QUMLINTERFACEOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlInterface;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlInterfaceObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlInterfaceObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependencies READ clientDependencies NOTIFY clientDependenciesChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QObject * nameExpression READ nameExpression WRITE setNameExpression NOTIFY nameExpressionChanged)
    Q_PROPERTY(QObject * namespace_ READ namespace_ NOTIFY namespaceChanged)
    Q_PROPERTY(QString qualifiedName READ qualifiedName NOTIFY qualifiedNameChanged STORED false)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImports READ elementImports NOTIFY elementImportsChanged)
    Q_PROPERTY(QSet<QObject *> importedMembers READ importedMembers NOTIFY importedMembersChanged STORED false)
    Q_PROPERTY(QSet<QObject *> members READ members NOTIFY membersChanged)
    Q_PROPERTY(QSet<QObject *> ownedMembers READ ownedMembers NOTIFY ownedMembersChanged)
    Q_PROPERTY(QSet<QObject *> ownedRules READ ownedRules NOTIFY ownedRulesChanged)
    Q_PROPERTY(QSet<QObject *> packageImports READ packageImports NOTIFY packageImportsChanged)

    // Properties [ParameterableElement]
    Q_PROPERTY(QObject * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter NOTIFY owningTemplateParameterChanged)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility NOTIFY visibilityChanged RESET unsetVisibility)

    // Properties [Type]
    Q_PROPERTY(QObject * package READ package WRITE setPackage NOTIFY packageChanged)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf NOTIFY isLeafChanged RESET unsetLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElements READ redefinedElements NOTIFY redefinedElementsChanged)
    Q_PROPERTY(QSet<QObject *> redefinitionContexts READ redefinitionContexts NOTIFY redefinitionContextsChanged)

    // Properties [TemplateableElement]
    Q_PROPERTY(QSet<QObject *> templateBindings READ templateBindings NOTIFY templateBindingsChanged)

    // Properties [Classifier]
    Q_PROPERTY(QSet<QObject *> attributes READ attributes NOTIFY attributesChanged)
    Q_PROPERTY(QSet<QObject *> collaborationUses READ collaborationUses NOTIFY collaborationUsesChanged)
    Q_PROPERTY(QSet<QObject *> features READ features NOTIFY featuresChanged)
    Q_PROPERTY(QSet<QObject *> generals READ generals NOTIFY generalsChanged STORED false)
    Q_PROPERTY(QSet<QObject *> generalizations READ generalizations NOTIFY generalizationsChanged)
    Q_PROPERTY(QSet<QObject *> inheritedMembers READ inheritedMembers NOTIFY inheritedMembersChanged STORED false)
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract NOTIFY isAbstractChanged RESET unsetAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization NOTIFY isFinalSpecializationChanged RESET unsetFinalSpecialization)
    Q_PROPERTY(QObject * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature NOTIFY ownedTemplateSignatureChanged)
    Q_PROPERTY(QSet<QObject *> ownedUseCases READ ownedUseCases NOTIFY ownedUseCasesChanged)
    Q_PROPERTY(QSet<QObject *> powertypeExtents READ powertypeExtents NOTIFY powertypeExtentsChanged)
    Q_PROPERTY(QSet<QObject *> redefinedClassifiers READ redefinedClassifiers NOTIFY redefinedClassifiersChanged)
    Q_PROPERTY(QObject * representation READ representation WRITE setRepresentation NOTIFY representationChanged)
    Q_PROPERTY(QSet<QObject *> substitutions READ substitutions NOTIFY substitutionsChanged)
    Q_PROPERTY(QObject * templateParameter READ templateParameter WRITE setTemplateParameter NOTIFY templateParameterChanged)
    Q_PROPERTY(QSet<QObject *> useCases READ useCases NOTIFY useCasesChanged)

    // Properties [Interface]
    Q_PROPERTY(QList<QObject *> nestedClassifiers READ nestedClassifiers NOTIFY nestedClassifiersChanged)
    Q_PROPERTY(QList<QObject *> ownedAttributes READ ownedAttributes NOTIFY ownedAttributesChanged)
    Q_PROPERTY(QList<QObject *> ownedOperations READ ownedOperations NOTIFY ownedOperationsChanged)
    Q_PROPERTY(QSet<QObject *> ownedReceptions READ ownedReceptions NOTIFY ownedReceptionsChanged)
    Q_PROPERTY(QObject * protocol READ protocol WRITE setProtocol NOTIFY protocolChanged)
    Q_PROPERTY(QSet<QObject *> redefinedInterfaces READ redefinedInterfaces NOTIFY redefinedInterfacesChanged)

public:
    Q_INVOKABLE explicit QUmlInterfaceObject(QUmlInterface *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependencies() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImports() const;
    Q_INVOKABLE const QSet<QObject *> importedMembers() const;
    Q_INVOKABLE const QSet<QObject *> members() const;
    Q_INVOKABLE const QSet<QObject *> ownedMembers() const;
    Q_INVOKABLE const QSet<QObject *> ownedRules() const;
    Q_INVOKABLE const QSet<QObject *> packageImports() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QObject *owningTemplateParameter() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Type]
    Q_INVOKABLE QObject *package() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElements() const;
    Q_INVOKABLE const QSet<QObject *> redefinitionContexts() const;

    // Owned attributes [TemplateableElement]
    Q_INVOKABLE const QSet<QObject *> templateBindings() const;

    // Owned attributes [Classifier]
    Q_INVOKABLE const QSet<QObject *> attributes() const;
    Q_INVOKABLE const QSet<QObject *> collaborationUses() const;
    Q_INVOKABLE const QSet<QObject *> features() const;
    Q_TODO Q_INVOKABLE const QSet<QObject *> generals() const;
    Q_INVOKABLE const QSet<QObject *> generalizations() const;
    Q_TODO Q_INVOKABLE const QSet<QObject *> inheritedMembers() const;
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE QObject *ownedTemplateSignature() const;
    Q_INVOKABLE const QSet<QObject *> ownedUseCases() const;
    Q_INVOKABLE const QSet<QObject *> powertypeExtents() const;
    Q_INVOKABLE const QSet<QObject *> redefinedClassifiers() const;
    Q_INVOKABLE QObject *representation() const;
    Q_INVOKABLE const QSet<QObject *> substitutions() const;
    Q_INVOKABLE QObject *templateParameter() const;
    Q_INVOKABLE const QSet<QObject *> useCases() const;

    // Owned attributes [Interface]
    Q_INVOKABLE const QList<QObject *> nestedClassifiers() const;
    Q_INVOKABLE const QList<QObject *> ownedAttributes() const;
    Q_INVOKABLE const QList<QObject *> ownedOperations() const;
    Q_INVOKABLE const QSet<QObject *> ownedReceptions() const;
    Q_INVOKABLE QObject *protocol() const;
    Q_INVOKABLE const QSet<QObject *> redefinedInterfaces() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_TODO Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_TODO Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_TODO Q_INVOKABLE QSet<QObject *> excludeCollisions(QSet<QObject *> imps) const;
    Q_TODO Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_TODO Q_INVOKABLE QSet<QObject *> importMembers(QSet<QObject *> imps) const;
    Q_TODO Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [ParameterableElement]
    Q_TODO Q_INVOKABLE bool isCompatibleWith(QObject *p) const;
    Q_TODO Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [Type]

    // Operations [RedefinableElement]
    Q_TODO Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_TODO Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

    // Operations [TemplateableElement]
    Q_TODO Q_INVOKABLE QSet<QObject *> parameterableElements() const;

    // Operations [Classifier]
    Q_TODO Q_INVOKABLE QSet<QObject *> allFeatures() const;
    Q_TODO Q_INVOKABLE QSet<QObject *> allParents() const;
    Q_TODO Q_INVOKABLE bool conformsTo(QObject *other) const;
    Q_TODO Q_INVOKABLE bool hasVisibilityOf(QObject *n) const;
    Q_TODO Q_INVOKABLE QSet<QObject *> inherit(QSet<QObject *> inhs) const;
    Q_TODO Q_INVOKABLE QSet<QObject *> inheritableMembers(QObject *c) const;
    Q_TODO Q_INVOKABLE bool isTemplate() const;
    Q_TODO Q_INVOKABLE bool maySpecializeType(QObject *c) const;
    Q_TODO Q_INVOKABLE QSet<QObject *> parents() const;

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
    void unsetVisibility();

    // Slots for owned attributes [Type]
    void setPackage(QObject *package = 0);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);
    void unsetLeaf();
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
    void addGeneral(QObject *general);
    void removeGeneral(QObject *general);
    void addGeneralization(QObject *generalization);
    void removeGeneralization(QObject *generalization);
    void Q_DECL_HIDDEN addInheritedMember(QObject *inheritedMember);
    void Q_DECL_HIDDEN removeInheritedMember(QObject *inheritedMember);
    void setAbstract(bool isAbstract);
    void unsetAbstract();
    void setFinalSpecialization(bool isFinalSpecialization);
    void unsetFinalSpecialization();
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

    // Slots for owned attributes [Interface]
    void addNestedClassifier(QObject *nestedClassifier);
    void removeNestedClassifier(QObject *nestedClassifier);
    void addOwnedAttribute(QObject *ownedAttribute);
    void removeOwnedAttribute(QObject *ownedAttribute);
    void addOwnedOperation(QObject *ownedOperation);
    void removeOwnedOperation(QObject *ownedOperation);
    void addOwnedReception(QObject *ownedReception);
    void removeOwnedReception(QObject *ownedReception);
    void setProtocol(QObject *protocol = 0);
    void addRedefinedInterface(QObject *redefinedInterface);
    void removeRedefinedInterface(QObject *redefinedInterface);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [NamedElement]
    void clientDependenciesChanged(QSet<QObject *> clientDependencies);
    void nameChanged(QString name);
    void nameExpressionChanged(QObject *nameExpression);
    void namespaceChanged(QObject *namespace_);
    void qualifiedNameChanged(QString qualifiedName);

    // Signals for owned attributes [Namespace]
    void elementImportsChanged(QSet<QObject *> elementImports);
    void importedMembersChanged(QSet<QObject *> importedMembers);
    void membersChanged(QSet<QObject *> members);
    void ownedMembersChanged(QSet<QObject *> ownedMembers);
    void ownedRulesChanged(QSet<QObject *> ownedRules);
    void packageImportsChanged(QSet<QObject *> packageImports);

    // Signals for owned attributes [ParameterableElement]
    void owningTemplateParameterChanged(QObject *owningTemplateParameter);

    // Signals for owned attributes [PackageableElement]
    void visibilityChanged(QtUml::VisibilityKind visibility);

    // Signals for owned attributes [Type]
    void packageChanged(QObject *package);

    // Signals for owned attributes [RedefinableElement]
    void isLeafChanged(bool isLeaf);
    void redefinedElementsChanged(QSet<QObject *> redefinedElements);
    void redefinitionContextsChanged(QSet<QObject *> redefinitionContexts);

    // Signals for owned attributes [TemplateableElement]
    void templateBindingsChanged(QSet<QObject *> templateBindings);

    // Signals for owned attributes [Classifier]
    void attributesChanged(QSet<QObject *> attributes);
    void collaborationUsesChanged(QSet<QObject *> collaborationUses);
    void featuresChanged(QSet<QObject *> features);
    void generalsChanged(QSet<QObject *> generals);
    void generalizationsChanged(QSet<QObject *> generalizations);
    void inheritedMembersChanged(QSet<QObject *> inheritedMembers);
    void isAbstractChanged(bool isAbstract);
    void isFinalSpecializationChanged(bool isFinalSpecialization);
    void ownedTemplateSignatureChanged(QObject *ownedTemplateSignature);
    void ownedUseCasesChanged(QSet<QObject *> ownedUseCases);
    void powertypeExtentsChanged(QSet<QObject *> powertypeExtents);
    void redefinedClassifiersChanged(QSet<QObject *> redefinedClassifiers);
    void representationChanged(QObject *representation);
    void substitutionsChanged(QSet<QObject *> substitutions);
    void templateParameterChanged(QObject *templateParameter);
    void useCasesChanged(QSet<QObject *> useCases);

    // Signals for owned attributes [Interface]
    void nestedClassifiersChanged(QList<QObject *> nestedClassifiers);
    void ownedAttributesChanged(QList<QObject *> ownedAttributes);
    void ownedOperationsChanged(QList<QObject *> ownedOperations);
    void ownedReceptionsChanged(QSet<QObject *> ownedReceptions);
    void protocolChanged(QObject *protocol);
    void redefinedInterfacesChanged(QSet<QObject *> redefinedInterfaces);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QUMLINTERFACEOBJECT_H

