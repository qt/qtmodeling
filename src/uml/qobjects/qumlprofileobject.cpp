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

QUmlProfileObject::QUmlProfileObject(QUmlProfile *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlProfileObject::~QUmlProfileObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlProfile *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
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

