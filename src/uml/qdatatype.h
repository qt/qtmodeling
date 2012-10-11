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
#ifndef QTUML_QDATATYPE_H
#define QTUML_QDATATYPE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QDataTypePrivate;
class QProperty;
class QOperation;
class QNamedElement;

class Q_UML_EXPORT QDataType : public QObject, public QClassifier
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
    Q_PROPERTY(const QSet<QClassifier *> * generals READ generals)
    Q_PROPERTY(QCollaborationUse * representation READ representation WRITE setRepresentation)
    Q_PROPERTY(const QSet<QGeneralization *> * generalizations READ generalizations)
    Q_PROPERTY(const QSet<QNamedElement *> * inheritedMembers READ inheritedMembers)
    Q_PROPERTY(const QSet<QSubstitution *> * substitutions READ substitutions)

    // From QDataType
    Q_PROPERTY(const QList<QOperation *> * ownedOperations READ ownedOperations)
    Q_PROPERTY(const QList<QProperty *> * ownedAttributes READ ownedAttributes)

    Q_DISABLE_COPY(QDataType)

public:
    explicit QDataType(QObject *parent = 0);
    virtual ~QDataType();

    // Association-ends
    const QList<QOperation *> *ownedOperations() const;
    void addOwnedOperation(const QOperation *ownedOperation);
    void removeOwnedOperation(const QOperation *ownedOperation);
    const QList<QProperty *> *ownedAttributes() const;
    void addOwnedAttribute(const QProperty *ownedAttribute);
    void removeOwnedAttribute(const QProperty *ownedAttribute);

    // Operations
    const QSet<QNamedElement *> *inherit(const QSet<QNamedElement *> *inhs) const;

protected:
    explicit QDataType(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QDataType) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QDataType) *> *)

QT_END_HEADER

#endif // QTUML_QDATATYPE_H

