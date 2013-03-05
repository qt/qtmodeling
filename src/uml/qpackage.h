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
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QNamespace>
#include <QtUml/QPackageableElement>
#include <QtUml/QTemplateableElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QProfile;
class QProfileApplication;
class QNamedElement;
class QPackageMerge;
class QStereotype;
class QType;

class QPackagePrivate;

class Q_UML_EXPORT QPackage : public QWrappedObject
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
    Q_PROPERTY(QtUml::QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(QtUmlNS::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QtUml::QTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QtUml::QTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(QString URI READ URI WRITE setURI)
    Q_PROPERTY(QSet<QtUml::QType *> ownedTypes READ ownedTypes STORED false)
    Q_PROPERTY(QSet<QtUml::QPackageableElement *> packagedElements READ packagedElements)
    Q_PROPERTY(QtUml::QPackage * nestingPackage READ nestingPackage WRITE setNestingPackage)
    Q_PROPERTY(QSet<QtUml::QProfileApplication *> profileApplications READ profileApplications)
    Q_PROPERTY(QSet<QtUml::QStereotype *> ownedStereotypes READ ownedStereotypes STORED false)
    Q_PROPERTY(QSet<QtUml::QPackageMerge *> packageMerges READ packageMerges)
    Q_PROPERTY(QSet<QtUml::QPackage *> nestedPackages READ nestedPackages STORED false)

    Q_DISABLE_COPY(QPackage)
    Q_DECLARE_PRIVATE(QPackage)

public:
    Q_INVOKABLE explicit QPackage(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QPackage();

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
    Q_INVOKABLE QTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QTemplateParameter *templateParameter);

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtUmlNS::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUmlNS::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE QTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QTemplateBinding *> templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QTemplateBinding *templateBinding);

    // Attributes from QPackage
    Q_INVOKABLE QString URI() const;
    Q_INVOKABLE void setURI(QString URI);

    // Association ends from QPackage
    Q_INVOKABLE QSet<QType *> ownedTypes() const;
    Q_INVOKABLE void addOwnedType(QType *ownedType);
    Q_INVOKABLE void removeOwnedType(QType *ownedType);
    Q_INVOKABLE QSet<QPackageableElement *> packagedElements() const;
    Q_INVOKABLE void addPackagedElement(QPackageableElement *packagedElement);
    Q_INVOKABLE void removePackagedElement(QPackageableElement *packagedElement);
    Q_INVOKABLE QPackage *nestingPackage() const;
    Q_INVOKABLE void setNestingPackage(QPackage *nestingPackage);
    Q_INVOKABLE QSet<QProfileApplication *> profileApplications() const;
    Q_INVOKABLE void addProfileApplication(QProfileApplication *profileApplication);
    Q_INVOKABLE void removeProfileApplication(QProfileApplication *profileApplication);
    Q_INVOKABLE QSet<QStereotype *> ownedStereotypes() const;
    Q_INVOKABLE QSet<QPackageMerge *> packageMerges() const;
    Q_INVOKABLE void addPackageMerge(QPackageMerge *packageMerge);
    Q_INVOKABLE void removePackageMerge(QPackageMerge *packageMerge);
    Q_INVOKABLE QSet<QPackage *> nestedPackages() const;
    Q_INVOKABLE void addNestedPackage(QPackage *nestedPackage);
    Q_INVOKABLE void removeNestedPackage(QPackage *nestedPackage);

    // Operations
    Q_INVOKABLE QSet<QStereotype *> allApplicableStereotypes() const;
    Q_INVOKABLE QProfile *containingProfile() const;
    Q_INVOKABLE bool makesVisible(const QNamedElement *el) const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QSet<QPackageableElement *> visibleMembers() const;

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addPackagedElement(QWrappedObjectPointer<QType> ownedType);
    Q_INVOKABLE void removePackagedElement(QWrappedObjectPointer<QType> ownedType);
    Q_INVOKABLE void addPackagedElement(QWrappedObjectPointer<QPackage> nestedPackage);
    Q_INVOKABLE void removePackagedElement(QWrappedObjectPointer<QPackage> nestedPackage);

    virtual void setPropertyData();

protected:
    explicit QPackage(QPackagePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QNamespace *_wrappedNamespace;
    QPackageableElement *_wrappedPackageableElement;
    QTemplateableElement *_wrappedTemplateableElement;
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QPACKAGE_H

