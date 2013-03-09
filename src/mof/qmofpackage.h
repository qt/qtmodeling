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
#ifndef QMOFPACKAGE_H
#define QMOFPACKAGE_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackageableElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofNamedElement;
class QMofPackageMerge;
class QMofPackage;
class QMofType;

class QMofPackagePrivate;

class Q_MOF_EXPORT QMofPackage : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QSet<QMofElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QMofElement * owner READ owner)
    Q_PROPERTY(QSet<QMofComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QMofNamespace * namespace_ READ namespace_)

    Q_PROPERTY(QSet<QMofPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QMofNamedElement *> members READ members)
    Q_PROPERTY(QSet<QMofPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QMofElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QMofConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QMofNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QString URI READ URI WRITE setURI)
    Q_PROPERTY(QSet<QMofType *> ownedTypes READ ownedTypes STORED false)
    Q_PROPERTY(QSet<QMofPackageableElement *> packagedElements READ packagedElements)
    Q_PROPERTY(QMofPackage * nestingPackage READ nestingPackage WRITE setNestingPackage)
    Q_PROPERTY(QSet<QMofPackageMerge *> packageMerges READ packageMerges)
    Q_PROPERTY(QSet<QMofPackage *> nestedPackages READ nestedPackages STORED false)

    Q_DISABLE_COPY(QMofPackage)
    Q_DECLARE_PRIVATE(QMofPackage)

public:
    Q_INVOKABLE explicit QMofPackage(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofPackage();

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

    // Attributes from aggregated QMofPackageableElement
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Attributes from QMofPackage
    Q_INVOKABLE QString URI() const;
    Q_INVOKABLE void setURI(QString URI);

    // Association ends from QMofPackage
    Q_INVOKABLE QSet<QMofType *> ownedTypes() const;
    Q_INVOKABLE void addOwnedType(QMofType *ownedType);
    Q_INVOKABLE void removeOwnedType(QMofType *ownedType);
    Q_INVOKABLE QSet<QMofPackageableElement *> packagedElements() const;
    Q_INVOKABLE void addPackagedElement(QMofPackageableElement *packagedElement);
    Q_INVOKABLE void removePackagedElement(QMofPackageableElement *packagedElement);
    Q_INVOKABLE QMofPackage *nestingPackage() const;
    Q_INVOKABLE void setNestingPackage(QMofPackage *nestingPackage);
    Q_INVOKABLE QSet<QMofPackageMerge *> packageMerges() const;
    Q_INVOKABLE void addPackageMerge(QMofPackageMerge *packageMerge);
    Q_INVOKABLE void removePackageMerge(QMofPackageMerge *packageMerge);
    Q_INVOKABLE QSet<QMofPackage *> nestedPackages() const;
    Q_INVOKABLE void addNestedPackage(QMofPackage *nestedPackage);
    Q_INVOKABLE void removeNestedPackage(QMofPackage *nestedPackage);

    // Operations
    Q_INVOKABLE bool makesVisible(const QMofNamedElement *el) const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QSet<QMofPackageableElement *> visibleMembers() const;

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addPackagedElement(QWrappedObjectPointer<QMofType> ownedType);
    Q_INVOKABLE void removePackagedElement(QWrappedObjectPointer<QMofType> ownedType);
    Q_INVOKABLE void addPackagedElement(QWrappedObjectPointer<QMofPackage> nestedPackage);
    Q_INVOKABLE void removePackagedElement(QWrappedObjectPointer<QMofPackage> nestedPackage);

    virtual void setPropertyData();

protected:
    explicit QMofPackage(QMofPackagePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QMofNamespace *_wrappedMofNamespace;
    QMofPackageableElement *_wrappedMofPackageableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFPACKAGE_H

