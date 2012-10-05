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
#ifndef QTUML_QUSECASE_H
#define QTUML_QUSECASE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QBehavioredClassifier>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QUseCasePrivate;
class QClassifier;
class QInclude;
class QExtend;
class QExtensionPoint;

class Q_UML_EXPORT QUseCase : public QObject, public QBehavioredClassifier
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QNamespace
    Q_PROPERTY(const QSet<QElementImport *> * elementImports READ elementImports)
    Q_PROPERTY(const QSet<QPackageableElement *> * importedMembers READ importedMembers)
    Q_PROPERTY(const QSet<QNamedElement *> * members READ members)
    Q_PROPERTY(const QSet<QNamedElement *> * ownedMembers READ ownedMembers)
    Q_PROPERTY(const QSet<QConstraint *> * ownedRules READ ownedRules)
    Q_PROPERTY(const QSet<QPackageImport *> * packageImports READ packageImports)

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    // From QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QType
    Q_PROPERTY(QPackage * package READ package WRITE setPackage)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QTemplateableElement
    Q_PROPERTY(const QSet<QTemplateBinding *> * templateBindings READ templateBindings)

    // From QClassifier
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization)
    Q_PROPERTY(const QSet<QProperty *> * attributes READ attributes)
    Q_PROPERTY(const QSet<QCollaborationUse *> * collaborationUses READ collaborationUses)
    Q_PROPERTY(const QSet<QFeature *> * features READ features)
    Q_PROPERTY(const QSet<QClassifier *> * generals READ generals)
    Q_PROPERTY(const QSet<QGeneralization *> * generalizations READ generalizations)
    Q_PROPERTY(const QSet<QNamedElement *> * inheritedMembers READ inheritedMembers)
    Q_PROPERTY(QRedefinableTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(const QSet<QUseCase *> * ownedUseCases READ ownedUseCases)
    Q_PROPERTY(const QSet<QGeneralizationSet *> * powertypeExtents READ powertypeExtents)
    Q_PROPERTY(const QSet<QClassifier *> * redefinedClassifiers READ redefinedClassifiers)
    Q_PROPERTY(QCollaborationUse * representation READ representation WRITE setRepresentation)
    Q_PROPERTY(const QSet<QSubstitution *> * substitutions READ substitutions)
    Q_PROPERTY(QClassifierTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(const QSet<QUseCase *> * useCases READ useCases)

    // From QBehavioredClassifier
    Q_PROPERTY(QBehavior * classifierBehavior READ classifierBehavior WRITE setClassifierBehavior)
    Q_PROPERTY(const QSet<QInterfaceRealization *> * interfaceRealizations READ interfaceRealizations)
    Q_PROPERTY(const QSet<QBehavior *> * ownedBehaviors READ ownedBehaviors)

    // From QUseCase
    Q_PROPERTY(const QSet<QExtend *> * extends READ extends)
    Q_PROPERTY(const QSet<QExtensionPoint *> * extensionPoints READ extensionPoints)
    Q_PROPERTY(const QSet<QInclude *> * includes READ includes)
    Q_PROPERTY(const QSet<QClassifier *> * subjects READ subjects)

    Q_DISABLE_COPY(QUseCase)
    Q_DECLARE_PRIVATE(QUseCase)

public:
    explicit QUseCase(QObject *parent = 0);
    virtual ~QUseCase();

    // Association-ends
    const QSet<QExtend *> *extends() const;
    void addExtend(const QExtend *extend);
    void removeExtend(const QExtend *extend);
    const QSet<QExtensionPoint *> *extensionPoints() const;
    void addExtensionPoint(const QExtensionPoint *extensionPoint);
    void removeExtensionPoint(const QExtensionPoint *extensionPoint);
    const QSet<QInclude *> *includes() const;
    void addInclude(const QInclude *include);
    void removeInclude(const QInclude *include);
    const QSet<QClassifier *> *subjects() const;
    void addSubject(const QClassifier *subject);
    void removeSubject(const QClassifier *subject);

    // Operations
    const QSet<QUseCase *> *allIncludedUseCases() const;

private:
    QUseCasePrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QUseCase) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QUseCase) *> *)

QT_END_HEADER

#endif // QTUML_QUSECASE_H

