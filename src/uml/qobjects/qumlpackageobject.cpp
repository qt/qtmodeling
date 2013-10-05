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

QUmlPackageObject::QUmlPackageObject(QUmlPackage *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlPackageObject::~QUmlPackageObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlPackage *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPackageObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPackageObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPackageObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlPackageObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->name();
}

QObject *QUmlPackageObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->nameExpression()->asQObject();
}

QObject *QUmlPackageObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->namespace_()->asQObject();
}

QString QUmlPackageObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlPackageObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlPackageObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlPackageObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlPackageObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->visibility();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlPackageObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlPackageObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Package]

QString QUmlPackageObject::URI() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->URI();
}

const QSet<QObject *> QUmlPackageObject::nestedPackage() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->nestedPackage())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPackageObject::nestingPackage() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->nestingPackage())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->nestingPackage()->asQObject();
}

const QSet<QObject *> QUmlPackageObject::ownedStereotype() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedStereotype())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::ownedType() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->ownedType())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::packageMerge() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageMerge *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->packageMerge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::packagedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->packagedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageObject::profileApplication() const
{
    QSet<QObject *> set;
    foreach (QUmlProfileApplication *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->profileApplication())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPackageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}
// OPERATIONS [NamedElement]

QList<QObject *> QUmlPackageObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlPackageObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPackageObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPackageObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlPackageObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlPackageObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlPackageObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlPackageObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlPackageObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlPackageObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->isTemplateParameter();
}

// OPERATIONS [TemplateableElement]

bool QUmlPackageObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->isTemplate();
}

QSet<QObject *> QUmlPackageObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Package]

QSet<QObject *> QUmlPackageObject::allApplicableStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->allApplicableStereotypes())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPackageObject::containingProfile() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackage *>(this)->containingProfile())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackage *>(this)->containingProfile()->asQObject();
}

bool QUmlPackageObject::makesVisible(QObject *el) const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->makesVisible(qmodelingobjectproperty_cast<QUmlNamedElement *>(el));
}

bool QUmlPackageObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlPackage *>(this)->mustBeOwned();
}

QSet<QObject *> QUmlPackageObject::visibleMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPackage *>(this)->visibleMembers())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPackageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPackageObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPackageObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPackageObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setName(name);
}

void QUmlPackageObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPackageObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPackageObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlPackageObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlPackageObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlPackageObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlPackageObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlPackageObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlPackageObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlPackageObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlPackageObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlPackageObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlPackageObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlPackageObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlPackageObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlPackageObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlPackageObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlPackageObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setVisibility(visibility);
}

void QUmlPackageObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlPackageObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlPackageObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlPackageObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QUmlPackageObject::setURI(QString URI)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setURI(URI);
}

void QUmlPackageObject::addNestedPackage(QObject *nestedPackage)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addNestedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlPackageObject::removeNestedPackage(QObject *nestedPackage)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeNestedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlPackageObject::setNestingPackage(QObject *nestingPackage)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->setNestingPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestingPackage));
}

void QUmlPackageObject::addOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addOwnedStereotype(qmodelingobjectproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlPackageObject::removeOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeOwnedStereotype(qmodelingobjectproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlPackageObject::addOwnedType(QObject *ownedType)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addOwnedType(qmodelingobjectproperty_cast<QUmlType *>(ownedType));
}

void QUmlPackageObject::removeOwnedType(QObject *ownedType)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeOwnedType(qmodelingobjectproperty_cast<QUmlType *>(ownedType));
}

void QUmlPackageObject::addPackageMerge(QObject *packageMerge)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addPackageMerge(qmodelingobjectproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlPackageObject::removePackageMerge(QObject *packageMerge)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removePackageMerge(qmodelingobjectproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlPackageObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addPackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlPackageObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removePackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlPackageObject::addProfileApplication(QObject *profileApplication)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->addProfileApplication(qmodelingobjectproperty_cast<QUmlProfileApplication *>(profileApplication));
}

void QUmlPackageObject::removeProfileApplication(QObject *profileApplication)
{
    qmodelingobjectproperty_cast<QUmlPackage *>(this)->removeProfileApplication(qmodelingobjectproperty_cast<QUmlProfileApplication *>(profileApplication));
}

QT_END_NAMESPACE

