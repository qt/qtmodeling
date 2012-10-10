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
#ifndef QTUML_QPACKAGE_H
#define QTUML_QPACKAGE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QNamespace>
#include <QtUml/QPackageableElement>
#include <QtUml/QTemplateableElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QPackagePrivate;
class QProfile;
class QNamedElement;
class QProfileApplication;
class QType;
class QStereotype;
class QPackageMerge;

class Q_UML_EXPORT QPackage : public QObject, public QNamespace, public QPackageableElement, public QTemplateableElement
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
    Q_PROPERTY(QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QTemplateableElement
    Q_PROPERTY(QTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(const QSet<QTemplateBinding *> * templateBindings READ templateBindings)

    // From QPackage
    Q_PROPERTY(QString URI READ URI WRITE setURI)
    Q_PROPERTY(const QSet<QType *> * ownedTypes READ ownedTypes)
    Q_PROPERTY(const QSet<QPackageableElement *> * packagedElements READ packagedElements)
    Q_PROPERTY(QPackage * nestingPackage READ nestingPackage WRITE setNestingPackage)
    Q_PROPERTY(const QSet<QProfileApplication *> * profileApplications READ profileApplications)
    Q_PROPERTY(const QSet<QStereotype *> * ownedStereotypes READ ownedStereotypes)
    Q_PROPERTY(const QSet<QPackageMerge *> * packageMerges READ packageMerges)
    Q_PROPERTY(const QSet<QPackage *> * nestedPackages READ nestedPackages)

    Q_DISABLE_COPY(QPackage)
    QTUML_DECLARE_PRIVATE(QPackage)

public:
    explicit QPackage(QObject *parent = 0);
    virtual ~QPackage();

    // Attributes
    QString URI() const;
    void setURI(QString URI);

    // Association-ends
    const QSet<QType *> *ownedTypes() const;
    void addOwnedType(const QType *ownedType);
    void removeOwnedType(const QType *ownedType);
    const QSet<QPackageableElement *> *packagedElements() const;
    void addPackagedElement(const QPackageableElement *packagedElement);
    void removePackagedElement(const QPackageableElement *packagedElement);
    QPackage *nestingPackage() const;
    void setNestingPackage(const QPackage *nestingPackage);
    const QSet<QProfileApplication *> *profileApplications() const;
    void addProfileApplication(const QProfileApplication *profileApplication);
    void removeProfileApplication(const QProfileApplication *profileApplication);
    const QSet<QStereotype *> *ownedStereotypes() const;
    const QSet<QPackageMerge *> *packageMerges() const;
    void addPackageMerge(const QPackageMerge *packageMerge);
    void removePackageMerge(const QPackageMerge *packageMerge);
    const QSet<QPackage *> *nestedPackages() const;
    void addNestedPackage(const QPackage *nestedPackage);
    void removeNestedPackage(const QPackage *nestedPackage);

    // Operations
    const QSet<QStereotype *> *allApplicableStereotypes() const;
    QProfile *containingProfile() const;
    bool makesVisible(const QNamedElement *el) const;
    bool mustBeOwned() const;
    const QSet<QPackageableElement *> *visibleMembers() const;

protected:
    explicit QPackage(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QPackage) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QPackage) *> *)

QT_END_HEADER

#endif // QTUML_QPACKAGE_H

