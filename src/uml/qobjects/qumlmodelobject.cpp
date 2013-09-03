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

QUmlModelObject::QUmlModelObject(QUmlModel *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlModelObject::~QUmlModelObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlModel *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlModelObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlModelObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlModelObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlModelObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->name();
}

QObject *QUmlModelObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->nameExpression()->asQObject();
}

QObject *QUmlModelObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->namespace_()->asQObject();
}

QString QUmlModelObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlModelObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlModelObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlModelObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlModelObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->visibility();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlModelObject::ownedTemplateSignature() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlModelObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Package]

QString QUmlModelObject::URI() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->URI();
}

const QSet<QObject *> QUmlModelObject::nestedPackage() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->nestedPackage())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlModelObject::nestingPackage() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->nestingPackage()->asQObject();
}

const QSet<QObject *> QUmlModelObject::ownedStereotype() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->ownedStereotype())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::ownedType() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->ownedType())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::packageMerge() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageMerge *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->packageMerge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::packagedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->packagedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlModelObject::profileApplication() const
{
    QSet<QObject *> set;
    foreach (QUmlProfileApplication *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->profileApplication())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Model]

QString QUmlModelObject::viewpoint() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->viewpoint();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlModelObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}
// OPERATIONS [NamedElement]

QList<QObject *> QUmlModelObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlModelObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlModelObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlModelObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlModelObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlModelObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlModelObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlModelObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlModelObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlModelObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->isTemplateParameter();
}

// OPERATIONS [TemplateableElement]

bool QUmlModelObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->isTemplate();
}

QSet<QObject *> QUmlModelObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Package]

QSet<QObject *> QUmlModelObject::allApplicableStereotypes() const
{
    QSet<QObject *> set;
    foreach (QUmlStereotype *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->allApplicableStereotypes())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlModelObject::containingProfile() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->containingProfile()->asQObject();
}

bool QUmlModelObject::makesVisible(QObject *el) const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->makesVisible(qmodelingobjectproperty_cast<QUmlNamedElement *>(el));
}

bool QUmlModelObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlModel *>(this)->mustBeOwned();
}

QSet<QObject *> QUmlModelObject::visibleMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlModel *>(this)->visibleMembers())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlModelObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlModelObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlModelObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlModelObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlModelObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlModelObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlModelObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlModelObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setName(name);
}
    
void QUmlModelObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlModelObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlModelObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlModelObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlModelObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlModelObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlModelObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlModelObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlModelObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlModelObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlModelObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlModelObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlModelObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlModelObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlModelObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlModelObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlModelObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlModelObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlModelObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlModelObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlModelObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QUmlModelObject::setURI(QString URI)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setURI(URI);
}
    
void QUmlModelObject::addNestedPackage(QObject *nestedPackage)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addNestedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlModelObject::removeNestedPackage(QObject *nestedPackage)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeNestedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestedPackage));
}

void QUmlModelObject::setNestingPackage(QObject *nestingPackage)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setNestingPackage(qmodelingobjectproperty_cast<QUmlPackage *>(nestingPackage));
}

void QUmlModelObject::addOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addOwnedStereotype(qmodelingobjectproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlModelObject::removeOwnedStereotype(QObject *ownedStereotype)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeOwnedStereotype(qmodelingobjectproperty_cast<QUmlStereotype *>(ownedStereotype));
}

void QUmlModelObject::addOwnedType(QObject *ownedType)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addOwnedType(qmodelingobjectproperty_cast<QUmlType *>(ownedType));
}

void QUmlModelObject::removeOwnedType(QObject *ownedType)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeOwnedType(qmodelingobjectproperty_cast<QUmlType *>(ownedType));
}

void QUmlModelObject::addPackageMerge(QObject *packageMerge)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addPackageMerge(qmodelingobjectproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlModelObject::removePackageMerge(QObject *packageMerge)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removePackageMerge(qmodelingobjectproperty_cast<QUmlPackageMerge *>(packageMerge));
}

void QUmlModelObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addPackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlModelObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removePackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlModelObject::addProfileApplication(QObject *profileApplication)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->addProfileApplication(qmodelingobjectproperty_cast<QUmlProfileApplication *>(profileApplication));
}

void QUmlModelObject::removeProfileApplication(QObject *profileApplication)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->removeProfileApplication(qmodelingobjectproperty_cast<QUmlProfileApplication *>(profileApplication));
}

// SLOTS FOR OWNED ATTRIBUTES [Model]

void QUmlModelObject::setViewpoint(QString viewpoint)
{
    qmodelingobjectproperty_cast<QUmlModel *>(this)->setViewpoint(viewpoint);
}
    
QT_END_NAMESPACE

