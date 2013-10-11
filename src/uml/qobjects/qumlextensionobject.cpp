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
#include "private/qmodelingobject_p.h"

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

QUmlExtensionObject::QUmlExtensionObject(QUmlExtension *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlExtensionObject::~QUmlExtensionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlExtension *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExtensionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExtensionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExtensionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlExtensionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->name();
}

QObject *QUmlExtensionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlExtensionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->namespace_()->asQModelingObject();
}

QString QUmlExtensionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlExtensionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlExtensionObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlExtensionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlExtensionObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExtensionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExtensionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlExtensionObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlExtensionObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isAbstract();
}

bool QUmlExtensionObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isFinalSpecialization();
}

QObject *QUmlExtensionObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlExtensionObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExtensionObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlExtensionObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExtensionObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlExtensionObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlExtensionObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Association]

const QList<QObject *> QUmlExtensionObject::endTypes() const
{
    QList<QObject *> list;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->endTypes())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlExtensionObject::isDerived() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isDerived();
}

const QList<QObject *> QUmlExtensionObject::memberEnds() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->memberEnds())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlExtensionObject::navigableOwnedEnds() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->navigableOwnedEnds())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Extension]

bool QUmlExtensionObject::isRequired() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isRequired();
}

QObject *QUmlExtensionObject::metaclass() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->metaclass())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->metaclass()->asQModelingObject();
}

QObject *QUmlExtensionObject::ownedEnd() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedEnd())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->ownedEnd()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExtensionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExtensionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExtensionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExtensionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlExtensionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlExtensionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlExtensionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlExtensionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlExtensionObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlExtensionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExtensionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlExtensionObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlExtensionObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExtensionObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlExtensionObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlExtensionObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExtensionObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->isTemplate();
}

bool QUmlExtensionObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlExtension *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlExtensionObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExtension *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Extension]

QObject *QUmlExtensionObject::metaclassEnd() const
{
    if (!qmodelingelementproperty_cast<QUmlExtension *>(this)->metaclassEnd())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtension *>(this)->metaclassEnd()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExtensionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtensionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setName(name);
}

void QUmlExtensionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExtensionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExtensionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlExtensionObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExtensionObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExtensionObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExtensionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExtensionObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExtensionObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExtensionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExtensionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExtensionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExtensionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExtensionObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlExtensionObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExtensionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlExtensionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setVisibility(visibility);
}

void QUmlExtensionObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlExtensionObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExtensionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setLeaf(isLeaf);
}

void QUmlExtensionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlExtensionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExtensionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlExtensionObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlExtensionObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlExtensionObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlExtensionObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlExtensionObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlExtensionObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlExtensionObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlExtensionObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlExtensionObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlExtensionObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlExtensionObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlExtensionObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlExtensionObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlExtensionObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlExtensionObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setAbstract(isAbstract);
}

void QUmlExtensionObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlExtensionObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlExtensionObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlExtensionObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlExtensionObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlExtensionObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlExtensionObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlExtensionObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlExtensionObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlExtensionObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlExtensionObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlExtensionObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlExtensionObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlExtensionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlExtensionObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlExtensionObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlExtensionObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlExtensionObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [Association]

void QUmlExtensionObject::addEndType(QObject *endType)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addEndType(qmodelingelementproperty_cast<QUmlType *>(endType));
}

void QUmlExtensionObject::removeEndType(QObject *endType)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeEndType(qmodelingelementproperty_cast<QUmlType *>(endType));
}

void QUmlExtensionObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setDerived(isDerived);
}

void QUmlExtensionObject::unsetDerived()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derived"));
}

void QUmlExtensionObject::addMemberEnd(QObject *memberEnd)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addMemberEnd(qmodelingelementproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlExtensionObject::removeMemberEnd(QObject *memberEnd)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeMemberEnd(qmodelingelementproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlExtensionObject::addNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->addNavigableOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlExtensionObject::removeNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->removeNavigableOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}
// SLOTS FOR OWNED ATTRIBUTES [Extension]

void QUmlExtensionObject::setRequired(bool isRequired)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setRequired(isRequired);
}

void QUmlExtensionObject::unsetRequired()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("required"));
}

void QUmlExtensionObject::setMetaclass(QObject *metaclass)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setMetaclass(qmodelingelementproperty_cast<QUmlClass *>(metaclass));
}

void QUmlExtensionObject::setOwnedEnd(QObject *ownedEnd)
{
    qmodelingelementproperty_cast<QUmlExtension *>(this)->setOwnedEnd(qmodelingelementproperty_cast<QUmlExtensionEnd *>(ownedEnd));
}


void QUmlExtensionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlExtension");
    d->groupProperties.insert(QStringLiteral("QUmlExtension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isRequired"))));
    d->groupProperties.insert(QStringLiteral("QUmlExtension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("metaclass"))));
    d->groupProperties.insert(QStringLiteral("QUmlExtension"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedEnd"))));
}

void QUmlExtensionObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, PropertyClassRole, QStringLiteral("QUmlType"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, DocumentationRole, QStringLiteral("Specifies the owning package of this classifier, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, SubsettedPropertiesRole, QStringLiteral("A_packagedElement_owningPackage-owningPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, OppositeEndRole, QStringLiteral("Package-ownedType"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

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

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, DocumentationRole, QStringLiteral("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, DocumentationRole, QStringLiteral("References the collaboration uses owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, DocumentationRole, QStringLiteral("Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, OppositeEndRole, QStringLiteral("Feature-featuringClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, DocumentationRole, QStringLiteral("Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, DocumentationRole, QStringLiteral("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, OppositeEndRole, QStringLiteral("Generalization-specific"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, DocumentationRole, QStringLiteral("Specifies all elements inherited by this classifier from the general classifiers."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, DocumentationRole, QStringLiteral("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral("TemplateableElement-ownedTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, OppositeEndRole, QStringLiteral("RedefinableTemplateSignature-classifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, DocumentationRole, QStringLiteral("References the use cases owned by this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, DocumentationRole, QStringLiteral("Designates the GeneralizationSet of which the associated Classifier is a power type."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, OppositeEndRole, QStringLiteral("GeneralizationSet-powertype"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, DocumentationRole, QStringLiteral("References the Classifiers that are redefined by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, DocumentationRole, QStringLiteral("References a collaboration use which indicates the collaboration that represents this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, SubsettedPropertiesRole, QStringLiteral("Classifier-collaborationUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, DocumentationRole, QStringLiteral("References the substitutions that are owned by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, OppositeEndRole, QStringLiteral("Substitution-substitutingClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, RedefinedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, OppositeEndRole, QStringLiteral("ClassifierTemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, DocumentationRole, QStringLiteral("The set of use cases for which this Classifier is the subject."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, OppositeEndRole, QStringLiteral("UseCase-subject"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, PropertyClassRole, QStringLiteral("QUmlRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, DocumentationRole, QStringLiteral("Specifies the elements related by the Relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, OppositeEndRole, QStringLiteral(""));

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

    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, PropertyClassRole, QStringLiteral("QUmlExtension"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, DocumentationRole, QStringLiteral("Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, isRequired, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, PropertyClassRole, QStringLiteral("QUmlExtension"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, DocumentationRole, QStringLiteral("References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, metaclass, OppositeEndRole, QStringLiteral("Class-extension"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, PropertyClassRole, QStringLiteral("QUmlExtension"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, DocumentationRole, QStringLiteral("References the end of the extension that is typed by a Stereotype."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, RedefinedPropertiesRole, QStringLiteral("Association-ownedEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtension, ownedEnd, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

