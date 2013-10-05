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

QUmlProfileObject::QUmlProfileObject(QUmlProfile *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlProfileObject::~QUmlProfileObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlProfile *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProfileObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProfileObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlProfileObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlProfileObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->name();
}

QObject *QUmlProfileObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->nameExpression()->asQObject();
}

QObject *QUmlProfileObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->namespace_()->asQObject();
}

QString QUmlProfileObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlProfileObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlProfileObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlProfileObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlProfileObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->visibility();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlProfileObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlProfileObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Package]

QString QUmlProfileObject::URI() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->URI();
}

const QSet<QObject *> QUmlProfileObject::nestedPackage() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->nestedPackage())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProfileObject::nestingPackage() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->nestingPackage())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->nestingPackage()->asQObject();
}

const QSet<QObject *> QUmlProfileObject::ownedStereotype() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedStereotype())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::ownedType() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->ownedType())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::packageMerge() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageMerge *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->packageMerge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::packagedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->packagedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::profileApplication() const
{
    QSet<QObject *> set;
    foreach (QUmlProfileApplication *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->profileApplication())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Profile]

const QSet<QObject *> QUmlProfileObject::metaclassReference() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->metaclassReference())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProfileObject::metamodelReference() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->metamodelReference())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProfileObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}
// OPERATIONS [NamedElement]

QList<QObject *> QUmlProfileObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlProfileObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProfileObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlProfileObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlProfileObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlProfileObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlProfileObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlProfileObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlProfileObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlProfileObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->isTemplateParameter();
}

// OPERATIONS [TemplateableElement]

bool QUmlProfileObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->isTemplate();
}

QSet<QObject *> QUmlProfileObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Package]

QSet<QObject *> QUmlProfileObject::allApplicableStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->allApplicableStereotypes())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProfileObject::containingProfile() const
{
    if (!qmodelingobjectproperty_cast<QUmlProfile *>(this)->containingProfile())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProfile *>(this)->containingProfile()->asQObject();
}

bool QUmlProfileObject::makesVisible(QObject *el) const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->makesVisible(qmodelingobjectproperty_cast<QUmlNamedElement *>(el));
}

bool QUmlProfileObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlProfile *>(this)->mustBeOwned();
}

QSet<QObject *> QUmlProfileObject::visibleMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProfile *>(this)->visibleMembers())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProfileObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProfileObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProfileObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProfileObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setName(name);
}

void QUmlProfileObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlProfileObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlProfileObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProfileObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProfileObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProfileObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProfileObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProfileObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProfileObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProfileObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProfileObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProfileObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProfileObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProfileObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlProfileObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlProfileObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlProfileObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlProfileObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setVisibility(visibility);
}

void QUmlProfileObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlProfileObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlProfileObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlProfileObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QUmlProfileObject::setURI(QString URI)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setURI(URI);
}

void QUmlProfileObject::addNestedPackage(QObject *nestedPackage)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addNestedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlProfileObject::removeNestedPackage(QObject *nestedPackage)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeNestedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlProfileObject::setNestingPackage(QObject *nestingPackage)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->setNestingPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestingPackage));
}

void QUmlProfileObject::addOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addOwnedStereotype(qmodelingobjectproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlProfileObject::removeOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeOwnedStereotype(qmodelingobjectproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlProfileObject::addOwnedType(QObject *ownedType)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addOwnedType(qmodelingobjectproperty_cast<QUmlType *>(ownedType));
}

void QUmlProfileObject::removeOwnedType(QObject *ownedType)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeOwnedType(qmodelingobjectproperty_cast<QUmlType *>(ownedType));
}

void QUmlProfileObject::addPackageMerge(QObject *packageMerge)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addPackageMerge(qmodelingobjectproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlProfileObject::removePackageMerge(QObject *packageMerge)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removePackageMerge(qmodelingobjectproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlProfileObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addPackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlProfileObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removePackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlProfileObject::addProfileApplication(QObject *profileApplication)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addProfileApplication(qmodelingobjectproperty_cast<QUmlProfileApplication *>(profileApplication));
}

void QUmlProfileObject::removeProfileApplication(QObject *profileApplication)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeProfileApplication(qmodelingobjectproperty_cast<QUmlProfileApplication *>(profileApplication));
}

// SLOTS FOR OWNED ATTRIBUTES [Profile]

void QUmlProfileObject::addMetaclassReference(QObject *metaclassReference)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addMetaclassReference(qmodelingobjectproperty_cast<QUmlElementImport *>(metaclassReference));
}

void QUmlProfileObject::removeMetaclassReference(QObject *metaclassReference)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeMetaclassReference(qmodelingobjectproperty_cast<QUmlElementImport *>(metaclassReference));
}

void QUmlProfileObject::addMetamodelReference(QObject *metamodelReference)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->addMetamodelReference(qmodelingobjectproperty_cast<QUmlPackageImport *>(metamodelReference));
}

void QUmlProfileObject::removeMetamodelReference(QObject *metamodelReference)
{
    qmodelingobjectproperty_cast<QUmlProfile *>(this)->removeMetamodelReference(qmodelingobjectproperty_cast<QUmlPackageImport *>(metamodelReference));
}

QT_END_NAMESPACE

