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
#include "qumlextensionobject_p.h"

#include <QtUml/QUmlExtension>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlExtensionObject::QUmlExtensionObject(QUmlExtension *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlExtensionObject::~QUmlExtensionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExtension *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExtensionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExtensionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExtensionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExtensionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->name();
}

QObject *QUmlExtensionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExtensionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->namespace_()->asQObject();
}

QString QUmlExtensionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlExtensionObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlExtensionObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlExtensionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlExtensionObject::package() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExtensionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExtensionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlExtensionObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlExtensionObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isAbstract();
}

bool QUmlExtensionObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isFinalSpecialization();
}

QObject *QUmlExtensionObject::ownedTemplateSignature() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlExtensionObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExtensionObject::representation() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlExtensionObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExtensionObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlExtensionObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlExtensionObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Association]

const QList<QObject *> QUmlExtensionObject::endType() const
{
    QList<QObject *> list;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->endType())
        list.append(element->asQObject());
    return list;
}

bool QUmlExtensionObject::isDerived() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isDerived();
}

const QList<QObject *> QUmlExtensionObject::memberEnd() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->memberEnd())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlExtensionObject::navigableOwnedEnd() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->navigableOwnedEnd())
        set.insert(element->asQObject());
    return set;
}
// OWNED ATTRIBUTES [Extension]

bool QUmlExtensionObject::isRequired() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isRequired();
}

QObject *QUmlExtensionObject::metaclass() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->metaclass()->asQObject();
}

QObject *QUmlExtensionObject::ownedEnd() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->ownedEnd()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExtensionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExtensionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExtensionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExtensionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlExtensionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlExtensionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlExtensionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlExtensionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlExtensionObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlExtensionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExtensionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlExtensionObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlExtensionObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExtensionObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlExtensionObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlExtensionObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExtensionObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->isTemplate();
}

bool QUmlExtensionObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlExtensionObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtension *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Extension]

QObject *QUmlExtensionObject::metaclassEnd() const
{
    return qmodelingobjectproperty_cast<QUmlExtension *>(this)->metaclassEnd()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExtensionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtensionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setName(name);
}
    
void QUmlExtensionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExtensionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExtensionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlExtensionObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExtensionObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExtensionObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExtensionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExtensionObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExtensionObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExtensionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExtensionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExtensionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExtensionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExtensionObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlExtensionObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExtensionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlExtensionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlExtensionObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExtensionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setLeaf(isLeaf);
}
    
void QUmlExtensionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExtensionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlExtensionObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlExtensionObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlExtensionObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlExtensionObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlExtensionObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlExtensionObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlExtensionObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlExtensionObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlExtensionObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlExtensionObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlExtensionObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlExtensionObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlExtensionObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlExtensionObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlExtensionObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setAbstract(isAbstract);
}
    
void QUmlExtensionObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setFinalSpecialization(isFinalSpecialization);
}
    
void QUmlExtensionObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlExtensionObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlExtensionObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlExtensionObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlExtensionObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlExtensionObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlExtensionObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlExtensionObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlExtensionObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlExtensionObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlExtensionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlExtensionObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlExtensionObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlExtensionObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlExtensionObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [Association]

void QUmlExtensionObject::addEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlExtensionObject::removeEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlExtensionObject::setDerived(bool isDerived)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setDerived(isDerived);
}
    
void QUmlExtensionObject::addMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlExtensionObject::removeMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlExtensionObject::addNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->addNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlExtensionObject::removeNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->removeNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}
// SLOTS FOR OWNED ATTRIBUTES [Extension]

void QUmlExtensionObject::setRequired(bool isRequired)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setRequired(isRequired);
}
    
void QUmlExtensionObject::setMetaclass(QObject *metaclass)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setMetaclass(qmodelingobjectproperty_cast<QUmlClass *>(metaclass));
}

void QUmlExtensionObject::setOwnedEnd(QObject *ownedEnd)
{
    qmodelingobjectproperty_cast<QUmlExtension *>(this)->setOwnedEnd(qmodelingobjectproperty_cast<QUmlExtensionEnd *>(ownedEnd));
}

QT_END_NAMESPACE

