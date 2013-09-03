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
#ifndef QUMLPROFILEOBJECT_H
#define QUMLPROFILEOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlProfile;
class Q_UML_EXPORT QUmlProfileObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElement)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QObject * nameExpression READ nameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QObject *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QObject *> member READ member)
    Q_PROPERTY(QSet<QObject *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QObject *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QObject *> packageImport READ packageImport)

    // Properties [ParameterableElement]
    Q_PROPERTY(QObject * owningTemplateParameter READ owningTemplateParameter)
    Q_PROPERTY(QObject * templateParameter READ templateParameter)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [TemplateableElement]
    Q_PROPERTY(QObject * ownedTemplateSignature READ ownedTemplateSignature)
    Q_PROPERTY(QSet<QObject *> templateBinding READ templateBinding)

    // Properties [Package]
    Q_PROPERTY(QString URI READ URI)
    Q_PROPERTY(QSet<QObject *> nestedPackage READ nestedPackage)
    Q_PROPERTY(QObject * nestingPackage READ nestingPackage)
    Q_PROPERTY(QSet<QObject *> ownedStereotype READ ownedStereotype)
    Q_PROPERTY(QSet<QObject *> ownedType READ ownedType)
    Q_PROPERTY(QSet<QObject *> packageMerge READ packageMerge)
    Q_PROPERTY(QSet<QObject *> packagedElement READ packagedElement)
    Q_PROPERTY(QSet<QObject *> profileApplication READ profileApplication)

    // Properties [Profile]
    Q_PROPERTY(QSet<QObject *> metaclassReference READ metaclassReference)
    Q_PROPERTY(QSet<QObject *> metamodelReference READ metamodelReference)

public:
    Q_INVOKABLE explicit QUmlProfileObject(QUmlProfile *qModelingObject);
    virtual ~QUmlProfileObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComment() const;
    Q_INVOKABLE const QSet<QObject *> ownedElement() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImport() const;
    Q_INVOKABLE const QSet<QObject *> importedMember() const;
    Q_INVOKABLE const QSet<QObject *> member() const;
    Q_INVOKABLE const QSet<QObject *> ownedMember() const;
    Q_INVOKABLE const QSet<QObject *> ownedRule() const;
    Q_INVOKABLE const QSet<QObject *> packageImport() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QObject *owningTemplateParameter() const;
    Q_INVOKABLE QObject *templateParameter() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [TemplateableElement]
    Q_INVOKABLE QObject *ownedTemplateSignature() const;
    Q_INVOKABLE const QSet<QObject *> templateBinding() const;

    // Owned attributes [Package]
    Q_INVOKABLE QString URI() const;
    Q_INVOKABLE const QSet<QObject *> nestedPackage() const;
    Q_INVOKABLE QObject *nestingPackage() const;
    Q_INVOKABLE const QSet<QObject *> ownedStereotype() const;
    Q_INVOKABLE const QSet<QObject *> ownedType() const;
    Q_INVOKABLE const QSet<QObject *> packageMerge() const;
    Q_INVOKABLE const QSet<QObject *> packagedElement() const;
    Q_INVOKABLE const QSet<QObject *> profileApplication() const;

    // Owned attributes [Profile]
    Q_INVOKABLE const QSet<QObject *> metaclassReference() const;
    Q_INVOKABLE const QSet<QObject *> metamodelReference() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QObject *> excludeCollisions(QSet<QObject *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_INVOKABLE QSet<QObject *> importMembers(QSet<QObject *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QObject *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [TemplateableElement]
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE QSet<QObject *> parameterableElements() const;

    // Operations [Package]
    Q_INVOKABLE QSet<QObject *> allApplicableStereotypes() const;
    Q_INVOKABLE QObject *containingProfile() const;
    Q_INVOKABLE bool makesVisible(QObject *el) const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QSet<QObject *> visibleMembers() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);

    // Slots for owned attributes [Namespace]
    void addElementImport(QObject *elementImport);
    void removeElementImport(QObject *elementImport);
    void Q_DECL_HIDDEN addImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN removeImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN addMember(QObject *member);
    void Q_DECL_HIDDEN removeMember(QObject *member);
    void Q_DECL_HIDDEN addOwnedMember(QObject *ownedMember);
    void Q_DECL_HIDDEN removeOwnedMember(QObject *ownedMember);
    void addOwnedRule(QObject *ownedRule);
    void removeOwnedRule(QObject *ownedRule);
    void addPackageImport(QObject *packageImport);
    void removePackageImport(QObject *packageImport);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QObject *owningTemplateParameter = 0);
    void setTemplateParameter(QObject *templateParameter = 0);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [TemplateableElement]
    void setOwnedTemplateSignature(QObject *ownedTemplateSignature = 0);
    void addTemplateBinding(QObject *templateBinding);
    void removeTemplateBinding(QObject *templateBinding);

    // Slots for owned attributes [Package]
    void setURI(QString URI);
    void addNestedPackage(QObject *nestedPackage);
    void removeNestedPackage(QObject *nestedPackage);
    void setNestingPackage(QObject *nestingPackage = 0);
    void Q_DECL_HIDDEN addOwnedStereotype(QObject *ownedStereotype);
    void Q_DECL_HIDDEN removeOwnedStereotype(QObject *ownedStereotype);
    void addOwnedType(QObject *ownedType);
    void removeOwnedType(QObject *ownedType);
    void addPackageMerge(QObject *packageMerge);
    void removePackageMerge(QObject *packageMerge);
    void addPackagedElement(QObject *packagedElement);
    void removePackagedElement(QObject *packagedElement);
    void addProfileApplication(QObject *profileApplication);
    void removeProfileApplication(QObject *profileApplication);

    // Slots for owned attributes [Profile]
    void addMetaclassReference(QObject *metaclassReference);
    void removeMetaclassReference(QObject *metaclassReference);
    void addMetamodelReference(QObject *metamodelReference);
    void removeMetamodelReference(QObject *metamodelReference);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPROFILEOBJECT_H

