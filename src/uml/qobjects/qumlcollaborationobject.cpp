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
#include "qumlcollaborationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlCollaboration>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
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

QUmlCollaborationObject::QUmlCollaborationObject(QUmlCollaboration *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCollaborationObject::~QUmlCollaborationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCollaboration *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCollaborationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCollaborationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCollaborationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCollaborationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->name();
}

QObject *QUmlCollaborationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCollaborationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCollaborationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlCollaborationObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlCollaborationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlCollaborationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlCollaborationObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCollaborationObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCollaborationObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlCollaborationObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlCollaborationObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isAbstract();
}

bool QUmlCollaborationObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isFinalSpecialization();
}

QObject *QUmlCollaborationObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlCollaborationObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCollaborationObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlCollaborationObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCollaborationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlCollaborationObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QList<QObject *> QUmlCollaborationObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlCollaborationObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlCollaborationObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaboration *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlCollaborationObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Collaboration]

const QSet<QObject *> QUmlCollaborationObject::collaborationRoles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->collaborationRoles())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCollaborationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCollaborationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCollaborationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCollaborationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlCollaborationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlCollaborationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlCollaborationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlCollaborationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlCollaborationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlCollaborationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCollaborationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlCollaborationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlCollaborationObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCollaborationObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlCollaborationObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlCollaborationObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCollaborationObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->isTemplate();
}

bool QUmlCollaborationObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlCollaboration *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlCollaborationObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCollaboration *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCollaborationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCollaborationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setName(name);
}

void QUmlCollaborationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCollaborationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCollaborationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlCollaborationObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCollaborationObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCollaborationObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCollaborationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCollaborationObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCollaborationObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCollaborationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCollaborationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCollaborationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCollaborationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCollaborationObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlCollaborationObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlCollaborationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlCollaborationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setVisibility(visibility);
}

void QUmlCollaborationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlCollaborationObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCollaborationObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setLeaf(isLeaf);
}

void QUmlCollaborationObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlCollaborationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCollaborationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCollaborationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCollaborationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlCollaborationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlCollaborationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlCollaborationObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCollaborationObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCollaborationObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCollaborationObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCollaborationObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlCollaborationObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlCollaborationObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlCollaborationObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlCollaborationObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCollaborationObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCollaborationObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCollaborationObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCollaborationObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setAbstract(isAbstract);
}

void QUmlCollaborationObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlCollaborationObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlCollaborationObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlCollaborationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlCollaborationObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCollaborationObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCollaborationObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCollaborationObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCollaborationObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCollaborationObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCollaborationObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlCollaborationObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCollaborationObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCollaborationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlCollaborationObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlCollaborationObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlCollaborationObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlCollaborationObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlCollaborationObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlCollaborationObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlCollaborationObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlCollaborationObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlCollaborationObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlCollaborationObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlCollaborationObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlCollaborationObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlCollaborationObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlCollaborationObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlCollaborationObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Collaboration]

void QUmlCollaborationObject::addCollaborationRole(QObject *collaborationRole)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->addCollaborationRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(collaborationRole));
}

void QUmlCollaborationObject::removeCollaborationRole(QObject *collaborationRole)
{
    qmodelingelementproperty_cast<QUmlCollaboration *>(this)->removeCollaborationRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(collaborationRole));
}


void QUmlCollaborationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlStructuredClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedConnectors"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parts"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("roles"))));

    d->propertyGroups << QStringLiteral("QUmlBehavioredClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifierBehavior"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interfaceRealizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedBehaviors"))));

    d->propertyGroups << QStringLiteral("QUmlCollaboration");
    d->groupProperties.insert(QStringLiteral("QUmlCollaboration"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("collaborationRoles"))));
}

void QUmlCollaborationObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, DocumentationRole, QStringLiteral("References the properties owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Classifier-attribute Namespace-ownedMember StructuredClassifier-role"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, DocumentationRole, QStringLiteral("References the connectors owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, DocumentationRole, QStringLiteral("References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, DocumentationRole, QStringLiteral("References the roles that instances may play in this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, DocumentationRole, QStringLiteral("A behavior specification that specifies the behavior of the classifier itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, SubsettedPropertiesRole, QStringLiteral("BehavioredClassifier-ownedBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, DocumentationRole, QStringLiteral("The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, OppositeEndRole, QStringLiteral("InterfaceRealization-implementingClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, DocumentationRole, QStringLiteral("References behavior specifications owned by a classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, PropertyClassRole, QStringLiteral("QUmlCollaboration"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, DocumentationRole, QStringLiteral("References connectable elements (possibly owned by other classifiers) which represent roles that instances may play in this collaboration."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, SubsettedPropertiesRole, QStringLiteral("StructuredClassifier-role"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaboration, collaborationRoles, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

