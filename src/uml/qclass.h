/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QTUML_QCLASS_H
#define QTUML_QCLASS_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtUml/QEncapsulatedClassifier>
#include <QtUml/QBehavioredClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QReception;
class QNamedElement;
class QOperation;
class QClassifier;
class QExtension;
class QProperty;

class QClassPrivate;

class Q_UML_EXPORT QClass : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(bool isActive READ isActive WRITE setActive RESET unsetActive)
    Q_PROPERTY(QList<QClassifier *> nestedClassifiers READ nestedClassifiers)
    Q_PROPERTY(QSet<QReception *> ownedReceptions READ ownedReceptions)
    Q_PROPERTY(QSet<QExtension *> extensions READ extensions STORED false)
    Q_PROPERTY(QList<QOperation *> ownedOperations READ ownedOperations)
    Q_PROPERTY(QList<QProperty *> ownedAttributes READ ownedAttributes)
    Q_PROPERTY(QSet<QClass *> superClasses READ superClasses STORED false)

    Q_DISABLE_COPY(QClass)
    Q_DECLARE_PRIVATE(QClass)

public:
    Q_INVOKABLE explicit QClass(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QClass();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> &ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> &ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE const QSet<QDependency *> &clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QNamespace
    Q_INVOKABLE const QSet<QPackageImport *> &packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE const QSet<QNamedElement *> &members() const;
    Q_INVOKABLE const QSet<QPackageableElement *> &importedMembers() const;
    Q_INVOKABLE const QSet<QElementImport *> &elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE const QSet<QConstraint *> &ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE const QSet<QNamedElement *> &ownedMembers() const;

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QType
    Q_INVOKABLE QPackage *package() const;
    Q_INVOKABLE void setPackage(QPackage *package);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE const QSet<QRedefinableElement *> &redefinedElements() const;
    Q_INVOKABLE const QSet<QClassifier *> &redefinitionContexts() const;

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE const QSet<QTemplateBinding *> &templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QTemplateBinding *templateBinding);

    // Attributes from aggregated QClassifier
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);
    Q_INVOKABLE void unsetFinalSpecialization();

    // Association ends from aggregated QClassifier
    Q_INVOKABLE const QSet<QUseCase *> &ownedUseCases() const;
    Q_INVOKABLE void addOwnedUseCase(QUseCase *ownedUseCase);
    Q_INVOKABLE void removeOwnedUseCase(QUseCase *ownedUseCase);
    Q_INVOKABLE const QSet<QGeneralizationSet *> &powertypeExtents() const;
    Q_INVOKABLE void addPowertypeExtent(QGeneralizationSet *powertypeExtent);
    Q_INVOKABLE void removePowertypeExtent(QGeneralizationSet *powertypeExtent);
    Q_INVOKABLE const QSet<QUseCase *> &useCases() const;
    Q_INVOKABLE void addUseCase(QUseCase *useCase);
    Q_INVOKABLE void removeUseCase(QUseCase *useCase);
    Q_INVOKABLE QClassifierTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QClassifierTemplateParameter *templateParameter);
    Q_INVOKABLE const QSet<QClassifier *> &redefinedClassifiers() const;
    Q_INVOKABLE void addRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE QRedefinableTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE const QSet<QCollaborationUse *> &collaborationUses() const;
    Q_INVOKABLE void addCollaborationUse(QCollaborationUse *collaborationUse);
    Q_INVOKABLE void removeCollaborationUse(QCollaborationUse *collaborationUse);
    Q_INVOKABLE const QSet<QProperty *> &attributes() const;
    Q_INVOKABLE const QSet<QFeature *> &features() const;
    Q_INVOKABLE QCollaborationUse *representation() const;
    Q_INVOKABLE void setRepresentation(QCollaborationUse *representation);
    Q_INVOKABLE const QSet<QGeneralization *> &generalizations() const;
    Q_INVOKABLE void addGeneralization(QGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QGeneralization *generalization);
    Q_INVOKABLE const QSet<QNamedElement *> &inheritedMembers() const;
    Q_INVOKABLE const QSet<QSubstitution *> &substitutions() const;
    Q_INVOKABLE void addSubstitution(QSubstitution *substitution);
    Q_INVOKABLE void removeSubstitution(QSubstitution *substitution);

    // Association ends from aggregated QStructuredClassifier
    Q_INVOKABLE const QSet<QConnectableElement *> &roles() const;
    Q_INVOKABLE const QSet<QProperty *> &parts() const;
    Q_INVOKABLE const QSet<QConnector *> &ownedConnectors() const;
    Q_INVOKABLE void addOwnedConnector(QConnector *ownedConnector);
    Q_INVOKABLE void removeOwnedConnector(QConnector *ownedConnector);

    // Association ends from aggregated QEncapsulatedClassifier
    Q_INVOKABLE const QSet<QPort *> &ownedPorts() const;

    // Association ends from aggregated QBehavioredClassifier
    Q_INVOKABLE const QSet<QBehavior *> &ownedBehaviors() const;
    Q_INVOKABLE void addOwnedBehavior(QBehavior *ownedBehavior);
    Q_INVOKABLE void removeOwnedBehavior(QBehavior *ownedBehavior);
    Q_INVOKABLE const QSet<QInterfaceRealization *> &interfaceRealizations() const;
    Q_INVOKABLE void addInterfaceRealization(QInterfaceRealization *interfaceRealization);
    Q_INVOKABLE void removeInterfaceRealization(QInterfaceRealization *interfaceRealization);
    Q_INVOKABLE QBehavior *classifierBehavior() const;
    Q_INVOKABLE void setClassifierBehavior(QBehavior *classifierBehavior);

    // Attributes from QClass
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();
    Q_INVOKABLE bool isActive() const;
    Q_INVOKABLE void setActive(bool isActive);
    Q_INVOKABLE void unsetActive();

    // Association ends from QClass
    Q_INVOKABLE const QList<QClassifier *> &nestedClassifiers() const;
    Q_INVOKABLE void addNestedClassifier(QClassifier *nestedClassifier);
    Q_INVOKABLE void removeNestedClassifier(QClassifier *nestedClassifier);
    Q_INVOKABLE const QSet<QReception *> &ownedReceptions() const;
    Q_INVOKABLE void addOwnedReception(QReception *ownedReception);
    Q_INVOKABLE void removeOwnedReception(QReception *ownedReception);
    Q_INVOKABLE const QSet<QExtension *> &extensions() const;
    Q_INVOKABLE const QList<QOperation *> &ownedOperations() const;
    Q_INVOKABLE void addOwnedOperation(QOperation *ownedOperation);
    Q_INVOKABLE void removeOwnedOperation(QOperation *ownedOperation);
    Q_INVOKABLE const QList<QProperty *> &ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE const QSet<QClass *> &superClasses() const;
    Q_INVOKABLE void addSuperClass(QClass *superClass);
    Q_INVOKABLE void removeSuperClass(QClass *superClass);

    // Operations
    Q_INVOKABLE const QSet<QNamedElement *> &inherit(const QSet<QNamedElement *> &inhs) const;

    // Classes which access read-only opposite properties should be friend
    friend class QExtensionPrivate;

protected:
    explicit QClass(QClassPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QEncapsulatedClassifier *_wrappedEncapsulatedClassifier;
    QBehavioredClassifier *_wrappedBehavioredClassifier;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QCLASS_H

