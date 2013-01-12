/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QTMOF_QCLASSIFIER_H
#define QTMOF_QCLASSIFIER_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtMof/QType>
#include <QtMof/QRedefinableElement>
#include <QtMof/QNamespace>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QGeneralization;
class QNamedElement;
class QProperty;
class QFeature;

class QClassifierPrivate;

class Q_MOF_EXPORT QClassifier : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization RESET unsetFinalSpecialization)
    Q_PROPERTY(QSet<QProperty *> attributes READ attributes)
    Q_PROPERTY(QSet<QFeature *> features READ features)
    Q_PROPERTY(QSet<QClassifier *> generals READ generals STORED false)
    Q_PROPERTY(QSet<QClassifier *> redefinedClassifiers READ redefinedClassifiers)
    Q_PROPERTY(QSet<QNamedElement *> inheritedMembers READ inheritedMembers STORED false)
    Q_PROPERTY(QSet<QGeneralization *> generalizations READ generalizations)

    Q_DISABLE_COPY(QClassifier)
    Q_DECLARE_PRIVATE(QClassifier)

public:
    Q_INVOKABLE explicit QClassifier(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QClassifier();

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
    Q_INVOKABLE QNamespace *namespace_() const;

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
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

    // Attributes from QClassifier
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);
    Q_INVOKABLE void unsetFinalSpecialization();

    // Association ends from QClassifier
    Q_INVOKABLE QSet<QProperty *> attributes() const;
    Q_INVOKABLE QSet<QFeature *> features() const;
    Q_INVOKABLE QSet<QClassifier *> generals() const;
    Q_INVOKABLE void addGeneral(QClassifier *general);
    Q_INVOKABLE void removeGeneral(QClassifier *general);
    Q_INVOKABLE QSet<QClassifier *> redefinedClassifiers() const;
    Q_INVOKABLE void addRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE QSet<QNamedElement *> inheritedMembers() const;
    Q_INVOKABLE QSet<QGeneralization *> generalizations() const;
    Q_INVOKABLE void addGeneralization(QGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QGeneralization *generalization);

    // Operations
    Q_INVOKABLE QSet<QFeature *> allFeatures() const;
    Q_INVOKABLE QSet<QClassifier *> allParents() const;
    Q_INVOKABLE bool conformsTo(const QClassifier *other) const;
    Q_INVOKABLE bool hasVisibilityOf(const QNamedElement *n) const;
    Q_INVOKABLE QSet<QNamedElement *> inherit(QSet<QNamedElement *> inhs) const;
    Q_INVOKABLE QSet<QNamedElement *> inheritableMembers(const QClassifier *c) const;
    Q_INVOKABLE bool maySpecializeType(const QClassifier *c) const;
    Q_INVOKABLE QSet<QClassifier *> parents() const;

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QFeaturePrivate;

protected:
    explicit QClassifier(QClassifierPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QType *_wrappedType;
    QRedefinableElement *_wrappedRedefinableElement;
    QNamespace *_wrappedNamespace;
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QCLASSIFIER_H

