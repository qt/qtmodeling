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
#include <QtCore/QObject>
#include <QtUml/QEncapsulatedClassifier>
#include <QtUml/QBehavioredClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QClassPrivate;
class QReception;
class QNamedElement;
class QOperation;
class QClassifier;
class QExtension;
class QProperty;

class Q_UML_EXPORT QClass : public QObject, public QEncapsulatedClassifier, public QBehavioredClassifier
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QNamespace
    Q_PROPERTY(const QSet<QPackageImport *> * packageImports READ packageImports)
    Q_PROPERTY(const QSet<QNamedElement *> * members READ members)
    Q_PROPERTY(const QSet<QPackageableElement *> * importedMembers READ importedMembers)
    Q_PROPERTY(const QSet<QElementImport *> * elementImports READ elementImports)
    Q_PROPERTY(const QSet<QConstraint *> * ownedRules READ ownedRules)
    Q_PROPERTY(const QSet<QNamedElement *> * ownedMembers READ ownedMembers)

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
    Q_PROPERTY(QCollaborationUse * representation READ representation WRITE setRepresentation)
    Q_PROPERTY(const QSet<QGeneralization *> * generalizations READ generalizations)
    Q_PROPERTY(const QSet<QNamedElement *> * inheritedMembers READ inheritedMembers)
    Q_PROPERTY(const QSet<QSubstitution *> * substitutions READ substitutions)

    // From QStructuredClassifier
    Q_PROPERTY(const QSet<QConnectableElement *> * roles READ roles)
    Q_PROPERTY(const QSet<QProperty *> * parts READ parts)
    Q_PROPERTY(const QSet<QConnector *> * ownedConnectors READ ownedConnectors)

    // From QEncapsulatedClassifier
    Q_PROPERTY(const QSet<QPort *> * ownedPorts READ ownedPorts)

    // From QBehavioredClassifier
    Q_PROPERTY(const QSet<QBehavior *> * ownedBehaviors READ ownedBehaviors)
    Q_PROPERTY(const QSet<QInterfaceRealization *> * interfaceRealizations READ interfaceRealizations)
    Q_PROPERTY(QBehavior * classifierBehavior READ classifierBehavior WRITE setClassifierBehavior)

    // From QClass
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(bool isActive READ isActive WRITE setActive)
    Q_PROPERTY(const QList<QClassifier *> * nestedClassifiers READ nestedClassifiers)
    Q_PROPERTY(const QSet<QReception *> * ownedReceptions READ ownedReceptions)
    Q_PROPERTY(const QSet<QExtension *> * extensions READ extensions)
    Q_PROPERTY(const QList<QOperation *> * ownedOperations READ ownedOperations)
    Q_PROPERTY(const QList<QProperty *> * ownedAttributes READ ownedAttributes)
    Q_PROPERTY(const QSet<QClass *> * superClasses READ superClasses)

    Q_DISABLE_COPY(QClass)

public:
    explicit QClass(QObject *parent = 0);
    virtual ~QClass();

    // Attributes
    bool isAbstract() const;
    void setAbstract(bool isAbstract);
    bool isActive() const;
    void setActive(bool isActive);

    // Association-ends
    const QList<QClassifier *> *nestedClassifiers() const;
    void addNestedClassifier(QClassifier *nestedClassifier);
    void removeNestedClassifier(QClassifier *nestedClassifier);
    const QSet<QReception *> *ownedReceptions() const;
    void addOwnedReception(QReception *ownedReception);
    void removeOwnedReception(QReception *ownedReception);
    const QSet<QExtension *> *extensions() const;
    const QList<QOperation *> *ownedOperations() const;
    void addOwnedOperation(QOperation *ownedOperation);
    void removeOwnedOperation(QOperation *ownedOperation);
    const QList<QProperty *> *ownedAttributes() const;
    void addOwnedAttribute(QProperty *ownedAttribute);
    void removeOwnedAttribute(QProperty *ownedAttribute);
    const QSet<QClass *> *superClasses() const;
    void addSuperClass(QClass *superClass);
    void removeSuperClass(QClass *superClass);

    // Operations
    const QSet<QNamedElement *> *inherit(const QSet<QNamedElement *> *inhs) const;

protected:
    explicit QClass(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QClass) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QClass) *> *)

QT_END_HEADER

#endif // QTUML_QCLASS_H

