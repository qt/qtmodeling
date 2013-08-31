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
#ifndef QUMLMODEL_H
#define QUMLMODEL_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlmodel_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlComment;
class QUmlConstraint;
class QUmlDependency;
class QUmlElement;
class QUmlElementImport;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlPackageableElement;
class QUmlPackageImport;
class QUmlPackageMerge;
class QUmlParameterableElement;
class QUmlProfile;
class QUmlProfileApplication;
class QUmlStereotype;
class QUmlStringExpression;
class QUmlTemplateBinding;
class QUmlTemplateParameter;
class QUmlTemplateSignature;
class QUmlType;

class Q_UML_EXPORT QUmlModel : public QObject, public UmlModel
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QUmlElementImport *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QUmlNamedElement *> member READ member)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QUmlPackageImport *> packageImport READ packageImport)

    // Properties [ParameterableElement]
    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter)
    Q_PROPERTY(QUmlTemplateParameter * templateParameter READ templateParameter)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [TemplateableElement]
    Q_PROPERTY(QUmlTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature)
    Q_PROPERTY(QSet<QUmlTemplateBinding *> templateBinding READ templateBinding)

    // Properties [Package]
    Q_PROPERTY(QString URI READ URI)
    Q_PROPERTY(QSet<QUmlPackage *> nestedPackage READ nestedPackage)
    Q_PROPERTY(QUmlPackage * nestingPackage READ nestingPackage)
    Q_PROPERTY(QSet<QUmlStereotype *> ownedStereotype READ ownedStereotype)
    Q_PROPERTY(QSet<QUmlType *> ownedType READ ownedType)
    Q_PROPERTY(QSet<QUmlPackageMerge *> packageMerge READ packageMerge)
    Q_PROPERTY(QSet<QUmlPackageableElement *> packagedElement READ packagedElement)
    Q_PROPERTY(QSet<QUmlProfileApplication *> profileApplication READ profileApplication)

    // Properties [Model]
    Q_PROPERTY(QString viewpoint READ viewpoint)

public:
    Q_INVOKABLE explicit QUmlModel(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QUmlElementImport *> elementImport() const;
    Q_INVOKABLE const QSet<QUmlPackageableElement *> importedMember() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> member() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> ownedMember() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> ownedRule() const;
    Q_INVOKABLE const QSet<QUmlPackageImport *> packageImport() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE QUmlTemplateParameter *templateParameter() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [TemplateableElement]
    Q_INVOKABLE QUmlTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE const QSet<QUmlTemplateBinding *> templateBinding() const;

    // Owned attributes [Package]
    Q_INVOKABLE QString URI() const;
    Q_INVOKABLE const QSet<QUmlPackage *> nestedPackage() const;
    Q_INVOKABLE QUmlPackage *nestingPackage() const;
    Q_INVOKABLE const QSet<QUmlStereotype *> ownedStereotype() const;
    Q_INVOKABLE const QSet<QUmlType *> ownedType() const;
    Q_INVOKABLE const QSet<QUmlPackageMerge *> packageMerge() const;
    Q_INVOKABLE const QSet<QUmlPackageableElement *> packagedElement() const;
    Q_INVOKABLE const QSet<QUmlProfileApplication *> profileApplication() const;

    // Owned attributes [Model]
    Q_INVOKABLE QString viewpoint() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QUmlPackageableElement *> excludeCollisions(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QUmlNamedElement *element) const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importMembers(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [TemplateableElement]
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE QSet<QUmlParameterableElement *> parameterableElements() const;

    // Operations [Package]
    Q_INVOKABLE QSet<QUmlStereotype *> allApplicableStereotypes() const;
    Q_INVOKABLE QUmlProfile *containingProfile() const;
    Q_INVOKABLE bool makesVisible(QUmlNamedElement *el) const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> visibleMembers() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);

    // Slots for owned attributes [Namespace]
    void addElementImport(UmlElementImport *elementImport);
    void removeElementImport(UmlElementImport *elementImport);
    void addOwnedRule(UmlConstraint *ownedRule);
    void removeOwnedRule(UmlConstraint *ownedRule);
    void addPackageImport(UmlPackageImport *packageImport);
    void removePackageImport(UmlPackageImport *packageImport);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [TemplateableElement]
    void setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature);
    void addTemplateBinding(UmlTemplateBinding *templateBinding);
    void removeTemplateBinding(UmlTemplateBinding *templateBinding);

    // Slots for owned attributes [Package]
    void setURI(QString URI);
    void addNestedPackage(UmlPackage *nestedPackage);
    void removeNestedPackage(UmlPackage *nestedPackage);
    void setNestingPackage(QUmlPackage *nestingPackage);
    void addOwnedType(UmlType *ownedType);
    void removeOwnedType(UmlType *ownedType);
    void addPackageMerge(UmlPackageMerge *packageMerge);
    void removePackageMerge(UmlPackageMerge *packageMerge);
    void addPackagedElement(UmlPackageableElement *packagedElement);
    void removePackagedElement(UmlPackageableElement *packagedElement);
    void addProfileApplication(UmlProfileApplication *profileApplication);
    void removeProfileApplication(UmlProfileApplication *profileApplication);

    // Slots for owned attributes [Model]
    void setViewpoint(QString viewpoint);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlModel *)
Q_DECLARE_METATYPE(QList<QUmlModel *> *)
Q_DECLARE_METATYPE(QSet<QUmlModel *> *)

QT_END_HEADER

#endif // QUMLMODEL_H

