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
#ifndef QMOFCLASSIFIER_H
#define QMOFCLASSIFIER_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtMof/QMofType>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofNamespace>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofGeneralization;
class QMofNamedElement;
class QMofClassifier;
class QMofProperty;
class QMofFeature;

class QMofClassifierPrivate;

class Q_MOF_EXPORT QMofClassifier : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QSet<QMofElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QMofElement * owner READ owner)
    Q_PROPERTY(QSet<QMofComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QMofNamespace * namespace_ READ namespace_)

    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QMofPackage * package READ package WRITE setPackage)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QMofRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QMofClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(QSet<QMofPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QMofNamedElement *> members READ members)
    Q_PROPERTY(QSet<QMofPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QMofElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QMofConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QMofNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization RESET unsetFinalSpecialization)
    Q_PROPERTY(QSet<QMofProperty *> attributes READ attributes)
    Q_PROPERTY(QSet<QMofFeature *> features READ features)
    Q_PROPERTY(QSet<QMofClassifier *> generals READ generals STORED false)
    Q_PROPERTY(QSet<QMofClassifier *> redefinedClassifiers READ redefinedClassifiers)
    Q_PROPERTY(QSet<QMofNamedElement *> inheritedMembers READ inheritedMembers STORED false)
    Q_PROPERTY(QSet<QMofGeneralization *> generalizations READ generalizations)

    Q_DISABLE_COPY(QMofClassifier)
    Q_DECLARE_PRIVATE(QMofClassifier)

public:
    Q_INVOKABLE explicit QMofClassifier(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofClassifier();

    // Association ends from aggregated QMofElement
    Q_INVOKABLE QSet<QMofElement *> ownedElements() const;
    Q_INVOKABLE QMofElement *owner() const;
    Q_INVOKABLE QSet<QMofComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QMofComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QMofComment *ownedComment);

    // Attributes from aggregated QMofNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QMofNamedElement
    Q_INVOKABLE QMofNamespace *namespace_() const;

    // Attributes from aggregated QMofPackageableElement
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QMofType
    Q_INVOKABLE QMofPackage *package() const;
    Q_INVOKABLE void setPackage(QMofPackage *package);

    // Attributes from aggregated QMofRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QMofRedefinableElement
    Q_INVOKABLE QSet<QMofRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QMofClassifier *> redefinitionContexts() const;

    // Association ends from aggregated QMofNamespace
    Q_INVOKABLE QSet<QMofPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QMofPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QMofPackageImport *packageImport);
    Q_INVOKABLE QSet<QMofNamedElement *> members() const;
    Q_INVOKABLE QSet<QMofPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QMofElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QMofElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QMofElementImport *elementImport);
    Q_INVOKABLE QSet<QMofConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QMofConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QMofConstraint *ownedRule);
    Q_INVOKABLE QSet<QMofNamedElement *> ownedMembers() const;

    // Attributes from QMofClassifier
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);
    Q_INVOKABLE void unsetFinalSpecialization();

    // Association ends from QMofClassifier
    Q_INVOKABLE QSet<QMofProperty *> attributes() const;
    Q_INVOKABLE QSet<QMofFeature *> features() const;
    Q_INVOKABLE QSet<QMofClassifier *> generals() const;
    Q_INVOKABLE void addGeneral(QMofClassifier *general);
    Q_INVOKABLE void removeGeneral(QMofClassifier *general);
    Q_INVOKABLE QSet<QMofClassifier *> redefinedClassifiers() const;
    Q_INVOKABLE void addRedefinedClassifier(QMofClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(QMofClassifier *redefinedClassifier);
    Q_INVOKABLE QSet<QMofNamedElement *> inheritedMembers() const;
    Q_INVOKABLE QSet<QMofGeneralization *> generalizations() const;
    Q_INVOKABLE void addGeneralization(QMofGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QMofGeneralization *generalization);

    // Operations
    Q_INVOKABLE QSet<QMofFeature *> allFeatures() const;
    Q_INVOKABLE QSet<QMofClassifier *> allParents() const;
    Q_INVOKABLE bool conformsTo(const QMofClassifier *other) const;
    Q_INVOKABLE bool hasVisibilityOf(const QMofNamedElement *n) const;
    Q_INVOKABLE QSet<QMofNamedElement *> inherit(QSet<QMofNamedElement *> inhs) const;
    Q_INVOKABLE QSet<QMofNamedElement *> inheritableMembers(const QMofClassifier *c) const;
    Q_INVOKABLE bool maySpecializeType(const QMofClassifier *c) const;
    Q_INVOKABLE QSet<QMofClassifier *> parents() const;

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QMofFeaturePrivate;

protected:
    explicit QMofClassifier(QMofClassifierPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QMofType *_wrappedMofType;
    QMofRedefinableElement *_wrappedMofRedefinableElement;
    QMofNamespace *_wrappedMofNamespace;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFCLASSIFIER_H

