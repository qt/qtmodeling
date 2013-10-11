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
#include "qumlmodelobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlModel>
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
#include <QtUml/QUmlProfile>
#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlModelObject::QUmlModelObject(QUmlModel *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlModelObject::~QUmlModelObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlModel *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlModelObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlModel *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlModelObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlModelObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlModel *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlModelObject::name() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->name();
}

QObject *QUmlModelObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlModelObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->namespace_()->asQModelingObject();
}

QString QUmlModelObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlModelObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlModel *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlModel *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlModel *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlModelObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlModelObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlModelObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->visibility();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlModelObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlModelObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlModel *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Package]

QString QUmlModelObject::URI() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->URI();
}

const QSet<QObject *> QUmlModelObject::nestedPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlModel *>(this)->nestedPackages())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlModelObject::nestingPackage() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->nestingPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->nestingPackage()->asQModelingObject();
}

const QSet<QObject *> QUmlModelObject::ownedStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingelementproperty_cast<QUmlModel *>(this)->ownedStereotypes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedTypes() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlModel *>(this)->ownedTypes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::packageMerges() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageMerge *element, qmodelingelementproperty_cast<QUmlModel *>(this)->packageMerges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::packagedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->packagedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::profileApplications() const
{
    QSet<QObject *> set;
    foreach (QUmlProfileApplication *element, qmodelingelementproperty_cast<QUmlModel *>(this)->profileApplications())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Model]

QString QUmlModelObject::viewpoint() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->viewpoint();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlModelObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}
// OPERATIONS [NamedElement]

QList<QObject *> QUmlModelObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlModel *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlModelObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlModel *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlModelObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlModelObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlModelObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlModelObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlModelObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlModelObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlModelObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlModelObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->isTemplateParameter();
}

// OPERATIONS [TemplateableElement]

bool QUmlModelObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->isTemplate();
}

QSet<QObject *> QUmlModelObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Package]

QSet<QObject *> QUmlModelObject::allApplicableStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingelementproperty_cast<QUmlModel *>(this)->allApplicableStereotypes())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlModelObject::containingProfile() const
{
    if (!qmodelingelementproperty_cast<QUmlModel *>(this)->containingProfile())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlModel *>(this)->containingProfile()->asQModelingObject();
}

bool QUmlModelObject::makesVisible(QObject *el) const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->makesVisible(qmodelingelementproperty_cast<QUmlNamedElement *>(el));
}

bool QUmlModelObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlModel *>(this)->mustBeOwned();
}

QSet<QObject *> QUmlModelObject::visibleMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlModel *>(this)->visibleMembers())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlModelObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlModelObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlModelObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlModelObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlModelObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlModelObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlModelObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlModelObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setName(name);
}

void QUmlModelObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlModelObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlModelObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlModelObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlModelObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlModelObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlModelObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlModelObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlModelObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlModelObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlModelObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlModelObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlModelObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlModelObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlModelObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlModelObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlModelObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlModelObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setVisibility(visibility);
}

void QUmlModelObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlModelObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlModelObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlModelObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QUmlModelObject::setURI(QString URI)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setURI(URI);
}

void QUmlModelObject::addNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addNestedPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlModelObject::removeNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeNestedPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlModelObject::setNestingPackage(QObject *nestingPackage)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setNestingPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestingPackage));
}

void QUmlModelObject::addOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addOwnedStereotype(qmodelingelementproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlModelObject::removeOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeOwnedStereotype(qmodelingelementproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlModelObject::addOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addOwnedType(qmodelingelementproperty_cast<QUmlType *>(ownedType));
}

void QUmlModelObject::removeOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeOwnedType(qmodelingelementproperty_cast<QUmlType *>(ownedType));
}

void QUmlModelObject::addPackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addPackageMerge(qmodelingelementproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlModelObject::removePackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removePackageMerge(qmodelingelementproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlModelObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addPackagedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlModelObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removePackagedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlModelObject::addProfileApplication(QObject *profileApplication)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->addProfileApplication(qmodelingelementproperty_cast<QUmlProfileApplication *>(profileApplication));
}

void QUmlModelObject::removeProfileApplication(QObject *profileApplication)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->removeProfileApplication(qmodelingelementproperty_cast<QUmlProfileApplication *>(profileApplication));
}

// SLOTS FOR OWNED ATTRIBUTES [Model]

void QUmlModelObject::setViewpoint(QString viewpoint)
{
    qmodelingelementproperty_cast<QUmlModel *>(this)->setViewpoint(viewpoint);
}


void QUmlModelObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlModel");
    d->groupProperties.insert(QStringLiteral("QUmlModel"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("viewpoint"))));
}

void QUmlModelObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, PropertyClassRole, QStringLiteral("QUmlModel"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, DocumentationRole, QStringLiteral("The name of the viewpoint that is expressed by a model (This name may refer to a profile definition)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlModel, viewpoint, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

