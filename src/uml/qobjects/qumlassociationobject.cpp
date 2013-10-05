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
#include "qumlassociationobject_p.h"

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
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

QUmlAssociationObject::QUmlAssociationObject(QUmlAssociation *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlAssociationObject::~QUmlAssociationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlAssociation *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAssociationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAssociationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAssociationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlAssociationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->name();
}

QObject *QUmlAssociationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->nameExpression()->asQObject();
}

QObject *QUmlAssociationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->namespace_()->asQObject();
}

QString QUmlAssociationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlAssociationObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlAssociationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlAssociationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlAssociationObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAssociationObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAssociationObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlAssociationObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlAssociationObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isAbstract();
}

bool QUmlAssociationObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isFinalSpecialization();
}

QObject *QUmlAssociationObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlAssociationObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAssociationObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlAssociationObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAssociationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlAssociationObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlAssociationObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Association]

const QList<QObject *> QUmlAssociationObject::endType() const
{
    QList<QObject *> list;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->endType())
        list.append(element->asQObject());
    return list;
}

bool QUmlAssociationObject::isDerived() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isDerived();
}

const QList<QObject *> QUmlAssociationObject::memberEnd() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->memberEnd())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlAssociationObject::navigableOwnedEnd() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->navigableOwnedEnd())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlAssociationObject::ownedEnd() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->ownedEnd())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAssociationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAssociationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAssociationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAssociationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlAssociationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlAssociationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlAssociationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlAssociationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlAssociationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlAssociationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAssociationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlAssociationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlAssociationObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAssociationObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlAssociationObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlAssociationObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAssociationObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->isTemplate();
}

bool QUmlAssociationObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlAssociation *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlAssociationObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociation *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAssociationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAssociationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAssociationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAssociationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAssociationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAssociationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAssociationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAssociationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setName(name);
}

void QUmlAssociationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAssociationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAssociationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlAssociationObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlAssociationObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlAssociationObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlAssociationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlAssociationObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlAssociationObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlAssociationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlAssociationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlAssociationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlAssociationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlAssociationObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlAssociationObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlAssociationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlAssociationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setVisibility(visibility);
}

void QUmlAssociationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlAssociationObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAssociationObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setLeaf(isLeaf);
}

void QUmlAssociationObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlAssociationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAssociationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAssociationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAssociationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlAssociationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlAssociationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlAssociationObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlAssociationObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlAssociationObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlAssociationObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlAssociationObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlAssociationObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlAssociationObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlAssociationObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlAssociationObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlAssociationObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlAssociationObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlAssociationObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlAssociationObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setAbstract(isAbstract);
}

void QUmlAssociationObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlAssociationObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlAssociationObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlAssociationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlAssociationObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlAssociationObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlAssociationObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlAssociationObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlAssociationObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlAssociationObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlAssociationObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlAssociationObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlAssociationObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlAssociationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlAssociationObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlAssociationObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlAssociationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlAssociationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [Association]

void QUmlAssociationObject::addEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlAssociationObject::removeEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlAssociationObject::setDerived(bool isDerived)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->setDerived(isDerived);
}

void QUmlAssociationObject::unsetDerived()
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("derived"));
}

void QUmlAssociationObject::addMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlAssociationObject::removeMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlAssociationObject::addNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlAssociationObject::removeNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlAssociationObject::addOwnedEnd(QObject *ownedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->addOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(ownedEnd));
}

void QUmlAssociationObject::removeOwnedEnd(QObject *ownedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociation *>(this)->removeOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(ownedEnd));
}

QT_END_NAMESPACE

