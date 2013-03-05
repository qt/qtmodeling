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
#ifndef QTUML_QCOLLABORATION_H
#define QTUML_QCOLLABORATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QStructuredClassifier>
#include <QtUml/QBehavioredClassifier>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QConnectableElement;

class QCollaborationPrivate;

class Q_UML_EXPORT QCollaboration : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QtUml::QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QtUml::QElement * owner READ owner)
    Q_PROPERTY(QSet<QtUml::QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QtUml::QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QtUml::QDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QtUml::QPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QtUml::QNamedElement *> members READ members)
    Q_PROPERTY(QSet<QtUml::QPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QtUml::QElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QtUml::QConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QtUml::QNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QtUml::QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    Q_PROPERTY(QtUmlNS::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QtUml::QPackage * package READ package WRITE setPackage)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QtUml::QRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QtUml::QClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(QSet<QtUml::QTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization RESET unsetFinalSpecialization)
    Q_PROPERTY(QSet<QtUml::QUseCase *> ownedUseCases READ ownedUseCases)
    Q_PROPERTY(QSet<QtUml::QGeneralizationSet *> powertypeExtents READ powertypeExtents)
    Q_PROPERTY(QSet<QtUml::QUseCase *> useCases READ useCases)
    Q_PROPERTY(QtUml::QClassifierTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QSet<QtUml::QClassifier *> redefinedClassifiers READ redefinedClassifiers)
    Q_PROPERTY(QtUml::QRedefinableTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QtUml::QCollaborationUse *> collaborationUses READ collaborationUses)
    Q_PROPERTY(QSet<QtUml::QProperty *> attributes READ attributes)
    Q_PROPERTY(QSet<QtUml::QFeature *> features READ features)
    Q_PROPERTY(QSet<QtUml::QClassifier *> generals READ generals STORED false)
    Q_PROPERTY(QtUml::QCollaborationUse * representation READ representation WRITE setRepresentation)
    Q_PROPERTY(QSet<QtUml::QGeneralization *> generalizations READ generalizations)
    Q_PROPERTY(QSet<QtUml::QNamedElement *> inheritedMembers READ inheritedMembers STORED false)
    Q_PROPERTY(QSet<QtUml::QSubstitution *> substitutions READ substitutions)

    Q_PROPERTY(QSet<QtUml::QConnectableElement *> roles READ roles)
    Q_PROPERTY(QList<QtUml::QProperty *> ownedAttributes READ ownedAttributes)
    Q_PROPERTY(QSet<QtUml::QProperty *> parts READ parts STORED false)
    Q_PROPERTY(QSet<QtUml::QConnector *> ownedConnectors READ ownedConnectors)

    Q_PROPERTY(QSet<QtUml::QBehavior *> ownedBehaviors READ ownedBehaviors)
    Q_PROPERTY(QSet<QtUml::QInterfaceRealization *> interfaceRealizations READ interfaceRealizations)
    Q_PROPERTY(QtUml::QBehavior * classifierBehavior READ classifierBehavior WRITE setClassifierBehavior)

    Q_PROPERTY(QSet<QtUml::QConnectableElement *> collaborationRoles READ collaborationRoles)

    Q_DISABLE_COPY(QCollaboration)
    Q_DECLARE_PRIVATE(QCollaboration)

public:
    Q_INVOKABLE explicit QCollaboration(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QCollaboration();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
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
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QNamespace
    Q_INVOKABLE QSet<QPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE QSet<QNamedElement *> members() const;
    Q_INVOKABLE QSet<QPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE QSet<QConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE QSet<QNamedElement *> ownedMembers() const;

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtUmlNS::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUmlNS::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QType
    Q_INVOKABLE QPackage *package() const;
    Q_INVOKABLE void setPackage(QPackage *package);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE QSet<QRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QClassifier *> redefinitionContexts() const;

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE QSet<QTemplateBinding *> templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QTemplateBinding *templateBinding);

    // Attributes from aggregated QClassifier
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);
    Q_INVOKABLE void unsetFinalSpecialization();

    // Association ends from aggregated QClassifier
    Q_INVOKABLE QSet<QUseCase *> ownedUseCases() const;
    Q_INVOKABLE void addOwnedUseCase(QUseCase *ownedUseCase);
    Q_INVOKABLE void removeOwnedUseCase(QUseCase *ownedUseCase);
    Q_INVOKABLE QSet<QGeneralizationSet *> powertypeExtents() const;
    Q_INVOKABLE void addPowertypeExtent(QGeneralizationSet *powertypeExtent);
    Q_INVOKABLE void removePowertypeExtent(QGeneralizationSet *powertypeExtent);
    Q_INVOKABLE QSet<QUseCase *> useCases() const;
    Q_INVOKABLE void addUseCase(QUseCase *useCase);
    Q_INVOKABLE void removeUseCase(QUseCase *useCase);
    Q_INVOKABLE QClassifierTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QClassifierTemplateParameter *templateParameter);
    Q_INVOKABLE QSet<QClassifier *> redefinedClassifiers() const;
    Q_INVOKABLE void addRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE QRedefinableTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QCollaborationUse *> collaborationUses() const;
    Q_INVOKABLE void addCollaborationUse(QCollaborationUse *collaborationUse);
    Q_INVOKABLE void removeCollaborationUse(QCollaborationUse *collaborationUse);
    Q_INVOKABLE QSet<QProperty *> attributes() const;
    Q_INVOKABLE QSet<QFeature *> features() const;
    Q_INVOKABLE QSet<QClassifier *> generals() const;
    Q_INVOKABLE void addGeneral(QClassifier *general);
    Q_INVOKABLE void removeGeneral(QClassifier *general);
    Q_INVOKABLE QCollaborationUse *representation() const;
    Q_INVOKABLE void setRepresentation(QCollaborationUse *representation);
    Q_INVOKABLE QSet<QGeneralization *> generalizations() const;
    Q_INVOKABLE void addGeneralization(QGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QGeneralization *generalization);
    Q_INVOKABLE QSet<QNamedElement *> inheritedMembers() const;
    Q_INVOKABLE QSet<QSubstitution *> substitutions() const;
    Q_INVOKABLE void addSubstitution(QSubstitution *substitution);
    Q_INVOKABLE void removeSubstitution(QSubstitution *substitution);

    // Association ends from aggregated QStructuredClassifier
    Q_INVOKABLE QSet<QConnectableElement *> roles() const;
    Q_INVOKABLE QList<QProperty *> ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE QSet<QProperty *> parts() const;
    Q_INVOKABLE QSet<QConnector *> ownedConnectors() const;
    Q_INVOKABLE void addOwnedConnector(QConnector *ownedConnector);
    Q_INVOKABLE void removeOwnedConnector(QConnector *ownedConnector);

    // Association ends from aggregated QBehavioredClassifier
    Q_INVOKABLE QSet<QBehavior *> ownedBehaviors() const;
    Q_INVOKABLE void addOwnedBehavior(QBehavior *ownedBehavior);
    Q_INVOKABLE void removeOwnedBehavior(QBehavior *ownedBehavior);
    Q_INVOKABLE QSet<QInterfaceRealization *> interfaceRealizations() const;
    Q_INVOKABLE void addInterfaceRealization(QInterfaceRealization *interfaceRealization);
    Q_INVOKABLE void removeInterfaceRealization(QInterfaceRealization *interfaceRealization);
    Q_INVOKABLE QBehavior *classifierBehavior() const;
    Q_INVOKABLE void setClassifierBehavior(QBehavior *classifierBehavior);

    // Association ends from QCollaboration
    Q_INVOKABLE QSet<QConnectableElement *> collaborationRoles() const;
    Q_INVOKABLE void addCollaborationRole(QConnectableElement *collaborationRole);
    Q_INVOKABLE void removeCollaborationRole(QConnectableElement *collaborationRole);

    virtual void setPropertyData();

protected:
    explicit QCollaboration(QCollaborationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QStructuredClassifier *_wrappedStructuredClassifier;
    QBehavioredClassifier *_wrappedBehavioredClassifier;
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QCOLLABORATION_H

