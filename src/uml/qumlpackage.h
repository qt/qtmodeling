/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLPACKAGE_H
#define QUMLPACKAGE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlTemplateableElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlProfile;
class QUmlProfileApplication;
class QUmlNamedElement;
class QUmlPackageMerge;
class QUmlStereotype;
class QUmlPackage;
class QUmlType;

class QUmlPackagePrivate;

class Q_UML_EXPORT QUmlPackage : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QUmlPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QUmlNamedElement *> members READ members)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QUmlElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QUmlTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QUmlTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QUmlTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(QString URI READ URI WRITE setURI)
    Q_PROPERTY(QSet<QUmlType *> ownedTypes READ ownedTypes STORED false)
    Q_PROPERTY(QSet<QUmlPackageableElement *> packagedElements READ packagedElements)
    Q_PROPERTY(QUmlPackage * nestingPackage READ nestingPackage WRITE setNestingPackage)
    Q_PROPERTY(QSet<QUmlProfileApplication *> profileApplications READ profileApplications)
    Q_PROPERTY(QSet<QUmlStereotype *> ownedStereotypes READ ownedStereotypes STORED false)
    Q_PROPERTY(QSet<QUmlPackageMerge *> packageMerges READ packageMerges)
    Q_PROPERTY(QSet<QUmlPackage *> nestedPackages READ nestedPackages STORED false)

    Q_DISABLE_COPY(QUmlPackage)
    Q_DECLARE_PRIVATE(QUmlPackage)

public:
    Q_INVOKABLE explicit QUmlPackage(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlPackage();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlNamespace
    Q_INVOKABLE QSet<QUmlPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE QSet<QUmlNamedElement *> members() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QUmlElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE QSet<QUmlConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE QSet<QUmlNamedElement *> ownedMembers() const;

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    Q_INVOKABLE QUmlTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Attributes from aggregated QUmlPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QUmlTemplateableElement
    Q_INVOKABLE QUmlTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QUmlTemplateBinding *> templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QUmlTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QUmlTemplateBinding *templateBinding);

    // Attributes from QUmlPackage
    Q_INVOKABLE QString URI() const;
    Q_INVOKABLE void setURI(QString URI);

    // Association ends from QUmlPackage
    Q_INVOKABLE QSet<QUmlType *> ownedTypes() const;
    Q_INVOKABLE void addOwnedType(QUmlType *ownedType);
    Q_INVOKABLE void removeOwnedType(QUmlType *ownedType);
    Q_INVOKABLE QSet<QUmlPackageableElement *> packagedElements() const;
    Q_INVOKABLE void addPackagedElement(QUmlPackageableElement *packagedElement);
    Q_INVOKABLE void removePackagedElement(QUmlPackageableElement *packagedElement);
    Q_INVOKABLE QUmlPackage *nestingPackage() const;
    Q_INVOKABLE void setNestingPackage(QUmlPackage *nestingPackage);
    Q_INVOKABLE QSet<QUmlProfileApplication *> profileApplications() const;
    Q_INVOKABLE void addProfileApplication(QUmlProfileApplication *profileApplication);
    Q_INVOKABLE void removeProfileApplication(QUmlProfileApplication *profileApplication);
    Q_INVOKABLE QSet<QUmlStereotype *> ownedStereotypes() const;
    Q_INVOKABLE QSet<QUmlPackageMerge *> packageMerges() const;
    Q_INVOKABLE void addPackageMerge(QUmlPackageMerge *packageMerge);
    Q_INVOKABLE void removePackageMerge(QUmlPackageMerge *packageMerge);
    Q_INVOKABLE QSet<QUmlPackage *> nestedPackages() const;
    Q_INVOKABLE void addNestedPackage(QUmlPackage *nestedPackage);
    Q_INVOKABLE void removeNestedPackage(QUmlPackage *nestedPackage);

    // Operations
    Q_INVOKABLE QSet<QUmlStereotype *> allApplicableStereotypes() const;
    Q_INVOKABLE QUmlProfile *containingProfile() const;
    Q_INVOKABLE bool makesVisible(const QUmlNamedElement *el) const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> visibleMembers() const;

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addPackagedElement(QWrappedObjectPointer<QUmlType> ownedType);
    Q_INVOKABLE void removePackagedElement(QWrappedObjectPointer<QUmlType> ownedType);
    Q_INVOKABLE void addPackagedElement(QWrappedObjectPointer<QUmlPackage> nestedPackage);
    Q_INVOKABLE void removePackagedElement(QWrappedObjectPointer<QUmlPackage> nestedPackage);

    virtual void setPropertyData();

protected:
    explicit QUmlPackage(QUmlPackagePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlNamespace *_wrappedUmlNamespace;
    QUmlPackageableElement *_wrappedUmlPackageableElement;
    QUmlTemplateableElement *_wrappedUmlTemplateableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPACKAGE_H

