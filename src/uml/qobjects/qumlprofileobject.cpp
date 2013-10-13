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
#include "qumlprofileobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlProfile>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlPackageMerge>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlProfileObject::QUmlProfileObject(QUmlProfile *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProfileObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProfileObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlProfileObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlProfileObject::name() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->name();
}

QObject *QUmlProfileObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlProfileObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->namespace_()->asQModelingObject();
}

QString QUmlProfileObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlProfileObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlProfileObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlProfileObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlProfileObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->visibility();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlProfileObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlProfileObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Package]

QString QUmlProfileObject::URI() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->URI();
}

const QSet<QObject *> QUmlProfileObject::nestedPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->nestedPackages())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProfileObject::nestingPackage() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->nestingPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->nestingPackage()->asQModelingObject();
}

const QSet<QObject *> QUmlProfileObject::ownedStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedStereotypes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedTypes() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->ownedTypes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::packageMerges() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageMerge *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->packageMerges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::packagedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->packagedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::profileApplications() const
{
    QSet<QObject *> set;
    foreach (QUmlProfileApplication *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->profileApplications())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Profile]

const QSet<QObject *> QUmlProfileObject::metaclassReferences() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->metaclassReferences())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::metamodelReferences() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->metamodelReferences())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProfileObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}
// OPERATIONS [NamedElement]

QList<QObject *> QUmlProfileObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlProfileObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProfileObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlProfileObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlProfileObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlProfileObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlProfileObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProfileObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlProfileObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlProfileObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->isTemplateParameter();
}

// OPERATIONS [TemplateableElement]

bool QUmlProfileObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->isTemplate();
}

QSet<QObject *> QUmlProfileObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Package]

QSet<QObject *> QUmlProfileObject::allApplicableStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->allApplicableStereotypes())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProfileObject::containingProfile() const
{
    if (!qmodelingelementproperty_cast<QUmlProfile *>(this)->containingProfile())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfile *>(this)->containingProfile()->asQModelingObject();
}

bool QUmlProfileObject::makesVisible(QObject *el) const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->makesVisible(qmodelingelementproperty_cast<QUmlNamedElement *>(el));
}

bool QUmlProfileObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlProfile *>(this)->mustBeOwned();
}

QSet<QObject *> QUmlProfileObject::visibleMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProfile *>(this)->visibleMembers())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProfileObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProfileObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProfileObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProfileObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setName(name);
}

void QUmlProfileObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlProfileObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlProfileObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProfileObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProfileObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProfileObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProfileObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProfileObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProfileObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProfileObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProfileObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProfileObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProfileObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProfileObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlProfileObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlProfileObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlProfileObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlProfileObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setVisibility(visibility);
}

void QUmlProfileObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlProfileObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlProfileObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlProfileObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QUmlProfileObject::setURI(QString URI)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setURI(URI);
}

void QUmlProfileObject::addNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addNestedPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlProfileObject::removeNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeNestedPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlProfileObject::setNestingPackage(QObject *nestingPackage)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->setNestingPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestingPackage));
}

void QUmlProfileObject::addOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addOwnedStereotype(qmodelingelementproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlProfileObject::removeOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeOwnedStereotype(qmodelingelementproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlProfileObject::addOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addOwnedType(qmodelingelementproperty_cast<QUmlType *>(ownedType));
}

void QUmlProfileObject::removeOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeOwnedType(qmodelingelementproperty_cast<QUmlType *>(ownedType));
}

void QUmlProfileObject::addPackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addPackageMerge(qmodelingelementproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlProfileObject::removePackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removePackageMerge(qmodelingelementproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlProfileObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addPackagedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlProfileObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removePackagedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlProfileObject::addProfileApplication(QObject *profileApplication)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addProfileApplication(qmodelingelementproperty_cast<QUmlProfileApplication *>(profileApplication));
}

void QUmlProfileObject::removeProfileApplication(QObject *profileApplication)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeProfileApplication(qmodelingelementproperty_cast<QUmlProfileApplication *>(profileApplication));
}

// SLOTS FOR OWNED ATTRIBUTES [Profile]

void QUmlProfileObject::addMetaclassReference(QObject *metaclassReference)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addMetaclassReference(qmodelingelementproperty_cast<QUmlElementImport *>(metaclassReference));
}

void QUmlProfileObject::removeMetaclassReference(QObject *metaclassReference)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeMetaclassReference(qmodelingelementproperty_cast<QUmlElementImport *>(metaclassReference));
}

void QUmlProfileObject::addMetamodelReference(QObject *metamodelReference)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->addMetamodelReference(qmodelingelementproperty_cast<QUmlPackageImport *>(metamodelReference));
}

void QUmlProfileObject::removeMetamodelReference(QObject *metamodelReference)
{
    qmodelingelementproperty_cast<QUmlProfile *>(this)->removeMetamodelReference(qmodelingelementproperty_cast<QUmlPackageImport *>(metamodelReference));
}


void QUmlProfileObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateableElement");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));

    d->propertyGroups << QStringLiteral("QUmlPackage");
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("URI"))));
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedPackages"))));
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestingPackage"))));
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedStereotypes"))));
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTypes"))));
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageMerges"))));
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packagedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("profileApplications"))));

    d->propertyGroups << QStringLiteral("QUmlProfile");
    d->groupProperties.insert(QStringLiteral("QUmlProfile"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("metaclassReferences"))));
    d->groupProperties.insert(QStringLiteral("QUmlProfile"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("metamodelReferences"))));
}

void QUmlProfileObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, DocumentationRole, QStringLiteral("The formal template parameter that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, SubsettedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-ownedParameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, OppositeEndRole, QStringLiteral("TemplateSignature-template"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, DocumentationRole, QStringLiteral("The optional bindings from this element to templates."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, OppositeEndRole, QStringLiteral("TemplateBinding-boundElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, DocumentationRole, QStringLiteral("Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, URI, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, DocumentationRole, QStringLiteral("References the packaged elements that are Packages."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, SubsettedPropertiesRole, QStringLiteral("Package-packagedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestedPackages, OppositeEndRole, QStringLiteral("Package-nestingPackage"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, DocumentationRole, QStringLiteral("References the Package that owns this Package."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, SubsettedPropertiesRole, QStringLiteral("A_packagedElement_owningPackage-owningPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, nestingPackage, OppositeEndRole, QStringLiteral("Package-nestedPackage"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, DocumentationRole, QStringLiteral("References the Stereotypes that are owned by the Package"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, SubsettedPropertiesRole, QStringLiteral("Package-packagedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedStereotypes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, DocumentationRole, QStringLiteral("References the packaged elements that are Types."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, SubsettedPropertiesRole, QStringLiteral("Package-packagedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, ownedTypes, OppositeEndRole, QStringLiteral("Type-package"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, DocumentationRole, QStringLiteral("References the PackageMerges that are owned by this Package."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packageMerges, OppositeEndRole, QStringLiteral("PackageMerge-receivingPackage"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, DocumentationRole, QStringLiteral("Specifies the packageable elements that are owned by this Package."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, packagedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, PropertyClassRole, QStringLiteral("QUmlPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, DocumentationRole, QStringLiteral("References the ProfileApplications that indicate which profiles have been applied to the Package."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackage, profileApplications, OppositeEndRole, QStringLiteral("ProfileApplication-applyingPackage"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, PropertyClassRole, QStringLiteral("QUmlProfile"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, DocumentationRole, QStringLiteral("References a metaclass that may be extended."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, SubsettedPropertiesRole, QStringLiteral("Namespace-elementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metaclassReferences, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, PropertyClassRole, QStringLiteral("QUmlProfile"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, DocumentationRole, QStringLiteral("References a package containing (directly or indirectly) metaclasses that may be extended."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, SubsettedPropertiesRole, QStringLiteral("Namespace-packageImport"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfile, metamodelReferences, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

