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
#include "qumlactorobject_p.h"

#include <QtUml/QUmlActor>
#include <QtUml/QUmlBehavior>
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

QUmlActorObject::QUmlActorObject(QUmlActor *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlActorObject::~QUmlActorObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlActor *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActorObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActorObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActorObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlActorObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->name();
}

QObject *QUmlActorObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->nameExpression()->asQObject();
}

QObject *QUmlActorObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->namespace_()->asQObject();
}

QString QUmlActorObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlActorObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->elementImports())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->importedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->members())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedRules())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->packageImports())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlActorObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlActorObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlActorObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActorObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActorObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlActorObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->templateBindings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlActorObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->attributes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->collaborationUses())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->features())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->generals())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->generalizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->inheritedMembers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActorObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isAbstract();
}

bool QUmlActorObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isFinalSpecialization();
}

QObject *QUmlActorObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlActorObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedUseCases())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->powertypeExtents())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->redefinedClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActorObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlActorObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->substitutions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActorObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlActorObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->useCases())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlActorObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlActor *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActor *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlActorObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->interfaceRealizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActorObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->ownedBehaviors())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActorObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActorObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActorObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActorObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActorObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActorObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlActorObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlActorObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlActorObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlActorObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlActorObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlActorObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlActorObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActorObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlActorObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlActorObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActorObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActorObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlActorObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlActorObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActorObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlActorObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->isTemplate();
}

bool QUmlActorObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlActor *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlActorObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActor *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActorObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActorObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActorObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActorObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActorObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActorObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActorObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActorObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setName(name);
}

void QUmlActorObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActorObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActorObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlActorObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlActorObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlActorObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlActorObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlActorObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlActorObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlActorObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlActorObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlActorObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlActorObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlActorObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlActorObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlActorObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlActorObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setVisibility(visibility);
}

void QUmlActorObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlActorObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActorObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setLeaf(isLeaf);
}

void QUmlActorObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlActorObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActorObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActorObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActorObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlActorObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlActorObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlActorObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlActorObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlActorObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlActorObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlActorObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlActorObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlActorObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlActorObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlActorObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlActorObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlActorObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlActorObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlActorObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setAbstract(isAbstract);
}

void QUmlActorObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlActorObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlActorObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlActorObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlActorObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlActorObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlActorObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlActorObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlActorObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlActorObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlActorObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlActorObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlActorObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlActorObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlActorObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlActorObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlActorObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlActorObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlActorObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlActorObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlActorObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlActor *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

QT_END_NAMESPACE

