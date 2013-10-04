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

QUmlCollaborationObject::QUmlCollaborationObject(QUmlCollaboration *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCollaborationObject::~QUmlCollaborationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCollaborationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCollaborationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCollaborationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCollaborationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->name();
}

QObject *QUmlCollaborationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCollaborationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->namespace_()->asQObject();
}

QString QUmlCollaborationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlCollaborationObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlCollaborationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlCollaborationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlCollaborationObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCollaborationObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCollaborationObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlCollaborationObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlCollaborationObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isAbstract();
}

bool QUmlCollaborationObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isFinalSpecialization();
}

QObject *QUmlCollaborationObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlCollaborationObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCollaborationObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlCollaborationObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCollaborationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlCollaborationObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QList<QObject *> QUmlCollaborationObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlCollaborationObject::ownedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::part() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->part())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::role() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->role())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlCollaborationObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlCollaborationObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Collaboration]

const QSet<QObject *> QUmlCollaborationObject::collaborationRole() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->collaborationRole())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCollaborationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCollaborationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCollaborationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCollaborationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlCollaborationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlCollaborationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlCollaborationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlCollaborationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlCollaborationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlCollaborationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCollaborationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlCollaborationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlCollaborationObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCollaborationObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlCollaborationObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlCollaborationObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCollaborationObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->isTemplate();
}

bool QUmlCollaborationObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlCollaborationObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCollaborationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCollaborationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setName(name);
}

void QUmlCollaborationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCollaborationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCollaborationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlCollaborationObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCollaborationObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCollaborationObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCollaborationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCollaborationObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCollaborationObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCollaborationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCollaborationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCollaborationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCollaborationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCollaborationObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlCollaborationObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlCollaborationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlCollaborationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlCollaborationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlCollaborationObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCollaborationObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlCollaborationObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlCollaborationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCollaborationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCollaborationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCollaborationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlCollaborationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlCollaborationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlCollaborationObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCollaborationObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCollaborationObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCollaborationObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCollaborationObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlCollaborationObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlCollaborationObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlCollaborationObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlCollaborationObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCollaborationObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCollaborationObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCollaborationObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCollaborationObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlCollaborationObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlCollaborationObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setFinalSpecialization(isFinalSpecialization);
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties() << QStringLiteral("finalSpecialization");
}

void QUmlCollaborationObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlCollaborationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlCollaborationObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCollaborationObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCollaborationObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCollaborationObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCollaborationObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCollaborationObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCollaborationObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlCollaborationObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCollaborationObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCollaborationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlCollaborationObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlCollaborationObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlCollaborationObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlCollaborationObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlCollaborationObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlCollaborationObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlCollaborationObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlCollaborationObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlCollaborationObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlCollaborationObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlCollaborationObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlCollaborationObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlCollaborationObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlCollaborationObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlCollaborationObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Collaboration]

void QUmlCollaborationObject::addCollaborationRole(QObject *collaborationRole)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->addCollaborationRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(collaborationRole));
}

void QUmlCollaborationObject::removeCollaborationRole(QObject *collaborationRole)
{
    qmodelingobjectproperty_cast<QUmlCollaboration *>(this)->removeCollaborationRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(collaborationRole));
}

QT_END_NAMESPACE

