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
#ifndef QTUML_QCLASSIFIER_H
#define QTUML_QCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtUml/QNamespace>
#include <QtUml/QType>
#include <QtUml/QRedefinableElement>
#include <QtUml/QTemplateableElement>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>
using QtWrappedObjects::QWrappedObjectPointer;

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QRedefinableTemplateSignature;
class QClassifierTemplateParameter;
class QUseCase;
class QSubstitution;
class QGeneralizationSet;
class QNamedElement;
class QProperty;
class QGeneralization;
class QCollaborationUse;
class QFeature;

class QClassifierPrivate;

class Q_UML_EXPORT QClassifier : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization)
    Q_PROPERTY(const QSet<QUseCase *> * ownedUseCases READ ownedUseCases)
    Q_PROPERTY(const QSet<QGeneralizationSet *> * powertypeExtents READ powertypeExtents)
    Q_PROPERTY(const QSet<QUseCase *> * useCases READ useCases)
    Q_PROPERTY(QClassifierTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(const QSet<QClassifier *> * redefinedClassifiers READ redefinedClassifiers)
    Q_PROPERTY(QRedefinableTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(const QSet<QCollaborationUse *> * collaborationUses READ collaborationUses)
    Q_PROPERTY(const QSet<QProperty *> * attributes READ attributes)
    Q_PROPERTY(const QSet<QFeature *> * features READ features)
    Q_PROPERTY(const QSet<QClassifier *> * generals READ generals STORED false)
    Q_PROPERTY(QCollaborationUse * representation READ representation WRITE setRepresentation)
    Q_PROPERTY(const QSet<QGeneralization *> * generalizations READ generalizations)
    Q_PROPERTY(const QSet<QNamedElement *> * inheritedMembers READ inheritedMembers STORED false)
    Q_PROPERTY(const QSet<QSubstitution *> * substitutions READ substitutions)

    Q_DISABLE_COPY(QClassifier)
    Q_DECLARE_PRIVATE(QClassifier)

public:
    Q_INVOKABLE explicit QClassifier(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QClassifier();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
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
    Q_INVOKABLE const QSet<QDependency *> *clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QNamespace
    Q_INVOKABLE const QSet<QPackageImport *> *packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE const QSet<QNamedElement *> *members() const;
    Q_INVOKABLE const QSet<QPackageableElement *> *importedMembers() const;
    Q_INVOKABLE const QSet<QElementImport *> *elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE const QSet<QConstraint *> *ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE const QSet<QNamedElement *> *ownedMembers() const;

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);

    // Association ends from aggregated QType
    Q_INVOKABLE QPackage *package() const;
    Q_INVOKABLE void setPackage(QPackage *package);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE const QSet<QRedefinableElement *> *redefinedElements() const;
    Q_INVOKABLE const QSet<QClassifier *> *redefinitionContexts() const;

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE const QSet<QTemplateBinding *> *templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QTemplateBinding *templateBinding);

    // Attributes from QClassifier
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);

    // Association ends from QClassifier
    Q_INVOKABLE const QSet<QUseCase *> *ownedUseCases() const;
    Q_INVOKABLE void addOwnedUseCase(QUseCase *ownedUseCase);
    Q_INVOKABLE void removeOwnedUseCase(QUseCase *ownedUseCase);
    Q_INVOKABLE const QSet<QGeneralizationSet *> *powertypeExtents() const;
    Q_INVOKABLE void addPowertypeExtent(QGeneralizationSet *powertypeExtent);
    Q_INVOKABLE void removePowertypeExtent(QGeneralizationSet *powertypeExtent);
    Q_INVOKABLE const QSet<QUseCase *> *useCases() const;
    Q_INVOKABLE void addUseCase(QUseCase *useCase);
    Q_INVOKABLE void removeUseCase(QUseCase *useCase);
    Q_INVOKABLE QClassifierTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QClassifierTemplateParameter *templateParameter);
    Q_INVOKABLE const QSet<QClassifier *> *redefinedClassifiers() const;
    Q_INVOKABLE void addRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE QRedefinableTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QRedefinableTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE const QSet<QCollaborationUse *> *collaborationUses() const;
    Q_INVOKABLE void addCollaborationUse(QCollaborationUse *collaborationUse);
    Q_INVOKABLE void removeCollaborationUse(QCollaborationUse *collaborationUse);
    Q_INVOKABLE const QSet<QProperty *> *attributes() const;
    Q_INVOKABLE const QSet<QFeature *> *features() const;
    Q_INVOKABLE const QSet<QClassifier *> *generals() const;
    Q_INVOKABLE void addGeneral(QClassifier *general);
    Q_INVOKABLE void removeGeneral(QClassifier *general);
    Q_INVOKABLE QCollaborationUse *representation() const;
    Q_INVOKABLE void setRepresentation(QCollaborationUse *representation);
    Q_INVOKABLE const QSet<QGeneralization *> *generalizations() const;
    Q_INVOKABLE void addGeneralization(QGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QGeneralization *generalization);
    Q_INVOKABLE const QSet<QNamedElement *> *inheritedMembers() const;
    Q_INVOKABLE const QSet<QSubstitution *> *substitutions() const;
    Q_INVOKABLE void addSubstitution(QSubstitution *substitution);
    Q_INVOKABLE void removeSubstitution(QSubstitution *substitution);

    // Operations
    Q_INVOKABLE const QSet<QFeature *> *allFeatures() const;
    Q_INVOKABLE const QSet<QClassifier *> *allParents() const;
    Q_INVOKABLE bool conformsTo(const QClassifier *other) const;
    Q_INVOKABLE bool hasVisibilityOf(const QNamedElement *n) const;
    Q_INVOKABLE const QSet<QNamedElement *> *inherit(const QSet<QNamedElement *> *inhs) const;
    Q_INVOKABLE const QSet<QNamedElement *> *inheritableMembers(const QClassifier *c) const;
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE bool maySpecializeType(const QClassifier *c) const;
    Q_INVOKABLE const QSet<QClassifier *> *parents() const;

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClientDependency(QWrappedObjectPointer<QSubstitution> substitution);
    Q_INVOKABLE void removeClientDependency(QWrappedObjectPointer<QSubstitution> substitution);

    // Classes which access read-only opposite properties should be friend
    friend class QFeaturePrivate;

protected:
    explicit QClassifier(QClassifierPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QNamespace *_wrappedNamespace;
    QType *_wrappedType;
    QRedefinableElement *_wrappedRedefinableElement;
    QTemplateableElement *_wrappedTemplateableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QClassifier) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *)

QT_END_HEADER

#endif // QTUML_QCLASSIFIER_H

