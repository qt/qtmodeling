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
#include "private/qmodelingobject_p.h"

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

QUmlAssociationObject::QUmlAssociationObject(QUmlAssociation *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlAssociationObject::~QUmlAssociationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlAssociation *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAssociationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAssociationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAssociationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlAssociationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->name();
}

QObject *QUmlAssociationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlAssociationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->namespace_()->asQModelingObject();
}

QString QUmlAssociationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlAssociationObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlAssociationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlAssociationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlAssociationObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAssociationObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAssociationObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlAssociationObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlAssociationObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAssociationObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isAbstract();
}

bool QUmlAssociationObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isFinalSpecialization();
}

QObject *QUmlAssociationObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlAssociationObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAssociationObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAssociationObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlAssociationObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAssociationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlAssociation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAssociation *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlAssociationObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlAssociationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Association]

const QList<QObject *> QUmlAssociationObject::endTypes() const
{
    QList<QObject *> list;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->endTypes())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlAssociationObject::isDerived() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isDerived();
}

const QList<QObject *> QUmlAssociationObject::memberEnds() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->memberEnds())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlAssociationObject::navigableOwnedEnds() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->navigableOwnedEnds())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlAssociationObject::ownedEnds() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->ownedEnds())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAssociationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAssociationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAssociationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAssociationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAssociationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAssociationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlAssociationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlAssociationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlAssociationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAssociationObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlAssociationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlAssociationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlAssociationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAssociationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlAssociationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlAssociationObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAssociationObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAssociationObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlAssociationObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlAssociationObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAssociationObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAssociationObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->isTemplate();
}

bool QUmlAssociationObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlAssociation *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlAssociationObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAssociation *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAssociationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAssociationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAssociationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAssociationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAssociationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAssociationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAssociationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAssociationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setName(name);
}

void QUmlAssociationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAssociationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAssociationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlAssociationObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlAssociationObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlAssociationObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlAssociationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlAssociationObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlAssociationObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlAssociationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlAssociationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlAssociationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlAssociationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlAssociationObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlAssociationObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlAssociationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlAssociationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setVisibility(visibility);
}

void QUmlAssociationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlAssociationObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAssociationObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setLeaf(isLeaf);
}

void QUmlAssociationObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlAssociationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAssociationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAssociationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAssociationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlAssociationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlAssociationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlAssociationObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlAssociationObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlAssociationObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlAssociationObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlAssociationObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlAssociationObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlAssociationObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlAssociationObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlAssociationObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlAssociationObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlAssociationObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlAssociationObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlAssociationObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setAbstract(isAbstract);
}

void QUmlAssociationObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlAssociationObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlAssociationObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlAssociationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlAssociationObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlAssociationObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlAssociationObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlAssociationObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlAssociationObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlAssociationObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlAssociationObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlAssociationObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlAssociationObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlAssociationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlAssociationObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlAssociationObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlAssociationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlAssociationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [Association]

void QUmlAssociationObject::addEndType(QObject *endType)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addEndType(qmodelingelementproperty_cast<QUmlType *>(endType));
}

void QUmlAssociationObject::removeEndType(QObject *endType)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeEndType(qmodelingelementproperty_cast<QUmlType *>(endType));
}

void QUmlAssociationObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->setDerived(isDerived);
}

void QUmlAssociationObject::unsetDerived()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derived"));
}

void QUmlAssociationObject::addMemberEnd(QObject *memberEnd)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addMemberEnd(qmodelingelementproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlAssociationObject::removeMemberEnd(QObject *memberEnd)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeMemberEnd(qmodelingelementproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlAssociationObject::addNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addNavigableOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlAssociationObject::removeNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeNavigableOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlAssociationObject::addOwnedEnd(QObject *ownedEnd)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->addOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(ownedEnd));
}

void QUmlAssociationObject::removeOwnedEnd(QObject *ownedEnd)
{
    qmodelingelementproperty_cast<QUmlAssociation *>(this)->removeOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(ownedEnd));
}


void QUmlAssociationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlType");
    d->groupProperties.insert(QStringLiteral("QUmlType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("package"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateableElement");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));

    d->propertyGroups << QStringLiteral("QUmlClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("attributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("collaborationUses"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("features"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generals"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isFinalSpecialization"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedUseCases"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("powertypeExtents"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("representation"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("substitutions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("useCases"))));

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlAssociation");
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("endTypes"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDerived"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("memberEnds"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("navigableOwnedEnds"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedEnds"))));
}

void QUmlAssociationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, PropertyClassRole, QStringLiteral("QUmlAssociation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, DocumentationRole, QStringLiteral("References the classifiers that are used as types of the ends of the association."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, endTypes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, PropertyClassRole, QStringLiteral("QUmlAssociation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, DocumentationRole, QStringLiteral("Specifies whether the association is derived from other model elements such as other associations or constraints."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, isDerived, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, PropertyClassRole, QStringLiteral("QUmlAssociation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, DocumentationRole, QStringLiteral("Each end represents participation of instances of the classifier connected to the end in links of the association."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, memberEnds, OppositeEndRole, QStringLiteral("Property-association"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, PropertyClassRole, QStringLiteral("QUmlAssociation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, DocumentationRole, QStringLiteral("The navigable ends that are owned by the association itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, SubsettedPropertiesRole, QStringLiteral("Association-ownedEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, navigableOwnedEnds, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, PropertyClassRole, QStringLiteral("QUmlAssociation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, DocumentationRole, QStringLiteral("The ends that are owned by the association itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, SubsettedPropertiesRole, QStringLiteral("Association-memberEnd Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAssociation, ownedEnds, OppositeEndRole, QStringLiteral("Property-owningAssociation"));

}

QT_END_NAMESPACE

