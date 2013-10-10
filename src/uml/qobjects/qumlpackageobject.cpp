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
#include "qumlpackageobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlPackage>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
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

QUmlPackageObject::QUmlPackageObject(QUmlPackage *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlPackageObject::~QUmlPackageObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlPackage *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPackageObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlPackageObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPackageObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlPackageObject::name() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->name();
}

QObject *QUmlPackageObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlPackageObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->namespace_()->asQModelingObject();
}

QString QUmlPackageObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlPackageObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlPackageObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlPackageObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlPackageObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->visibility();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlPackageObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlPackageObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Package]

QString QUmlPackageObject::URI() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->URI();
}

const QSet<QObject *> QUmlPackageObject::nestedPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->nestedPackages())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlPackageObject::nestingPackage() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->nestingPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->nestingPackage()->asQModelingObject();
}

const QSet<QObject *> QUmlPackageObject::ownedStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedStereotypes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedTypes() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->ownedTypes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::packageMerges() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageMerge *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->packageMerges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::packagedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->packagedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::profileApplications() const
{
    QSet<QObject *> set;
    foreach (QUmlProfileApplication *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->profileApplications())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPackageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}
// OPERATIONS [NamedElement]

QList<QObject *> QUmlPackageObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlPackageObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPackageObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPackageObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlPackageObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlPackageObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlPackageObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPackageObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlPackageObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlPackageObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->isTemplateParameter();
}

// OPERATIONS [TemplateableElement]

bool QUmlPackageObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->isTemplate();
}

QSet<QObject *> QUmlPackageObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Package]

QSet<QObject *> QUmlPackageObject::allApplicableStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->allApplicableStereotypes())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlPackageObject::containingProfile() const
{
    if (!qmodelingelementproperty_cast<QUmlPackage *>(this)->containingProfile())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPackage *>(this)->containingProfile()->asQModelingObject();
}

bool QUmlPackageObject::makesVisible(QObject *el) const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->makesVisible(qmodelingelementproperty_cast<QUmlNamedElement *>(el));
}

bool QUmlPackageObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlPackage *>(this)->mustBeOwned();
}

QSet<QObject *> QUmlPackageObject::visibleMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlPackage *>(this)->visibleMembers())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPackageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPackageObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPackageObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPackageObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setName(name);
}

void QUmlPackageObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPackageObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPackageObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlPackageObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlPackageObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlPackageObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlPackageObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlPackageObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlPackageObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlPackageObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlPackageObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlPackageObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlPackageObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlPackageObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlPackageObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlPackageObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlPackageObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlPackageObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setVisibility(visibility);
}

void QUmlPackageObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlPackageObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlPackageObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlPackageObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QUmlPackageObject::setURI(QString URI)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setURI(URI);
}

void QUmlPackageObject::addNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addNestedPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlPackageObject::removeNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeNestedPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlPackageObject::setNestingPackage(QObject *nestingPackage)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->setNestingPackage(qmodelingelementproperty_cast<QUmlPackage *>(nestingPackage));
}

void QUmlPackageObject::addOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addOwnedStereotype(qmodelingelementproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlPackageObject::removeOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeOwnedStereotype(qmodelingelementproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlPackageObject::addOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addOwnedType(qmodelingelementproperty_cast<QUmlType *>(ownedType));
}

void QUmlPackageObject::removeOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeOwnedType(qmodelingelementproperty_cast<QUmlType *>(ownedType));
}

void QUmlPackageObject::addPackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addPackageMerge(qmodelingelementproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlPackageObject::removePackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removePackageMerge(qmodelingelementproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlPackageObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addPackagedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlPackageObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removePackagedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlPackageObject::addProfileApplication(QObject *profileApplication)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->addProfileApplication(qmodelingelementproperty_cast<QUmlProfileApplication *>(profileApplication));
}

void QUmlPackageObject::removeProfileApplication(QObject *profileApplication)
{
    qmodelingelementproperty_cast<QUmlPackage *>(this)->removeProfileApplication(qmodelingelementproperty_cast<QUmlProfileApplication *>(profileApplication));
}


void QUmlPackageObject::setGroupProperties()
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
}

void QUmlPackageObject::setPropertyData()
{
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

}

QT_END_NAMESPACE

