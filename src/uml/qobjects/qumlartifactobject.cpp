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
#include "qumlartifactobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlArtifact>
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
#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
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

QUmlArtifactObject::QUmlArtifactObject(QUmlArtifact *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlArtifactObject::~QUmlArtifactObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlArtifact *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlArtifactObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlArtifactObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlArtifactObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlArtifactObject::name() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->name();
}

QObject *QUmlArtifactObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlArtifactObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->namespace_()->asQModelingObject();
}

QString QUmlArtifactObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlArtifactObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlArtifactObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlArtifactObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlArtifactObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlArtifactObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isLeaf();
}

const QSet<QObject *> QUmlArtifactObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlArtifactObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlArtifactObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isAbstract();
}

bool QUmlArtifactObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isFinalSpecialization();
}

QObject *QUmlArtifactObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlArtifactObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlArtifactObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlArtifactObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlArtifactObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlArtifact *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlArtifact *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlArtifactObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Artifact]

QString QUmlArtifactObject::fileName() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->fileName();
}

const QSet<QObject *> QUmlArtifactObject::manifestations() const
{
    QSet<QObject *> set;
    foreach (QUmlManifestation *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->manifestations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::nestedArtifacts() const
{
    QSet<QObject *> set;
    foreach (QUmlArtifact *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->nestedArtifacts())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlArtifactObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlArtifactObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlArtifactObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlArtifactObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlArtifactObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlArtifactObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlArtifactObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlArtifactObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlArtifactObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlArtifactObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlArtifactObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlArtifactObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlArtifactObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlArtifactObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlArtifactObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlArtifactObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlArtifactObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->isTemplate();
}

bool QUmlArtifactObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlArtifact *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlArtifactObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlArtifact *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlArtifactObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlArtifactObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlArtifactObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlArtifactObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlArtifactObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlArtifactObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlArtifactObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlArtifactObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setName(name);
}

void QUmlArtifactObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlArtifactObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlArtifactObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlArtifactObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlArtifactObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlArtifactObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlArtifactObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlArtifactObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlArtifactObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlArtifactObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlArtifactObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlArtifactObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlArtifactObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlArtifactObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlArtifactObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlArtifactObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlArtifactObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setVisibility(visibility);
}

void QUmlArtifactObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlArtifactObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlArtifactObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setLeaf(isLeaf);
}

void QUmlArtifactObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlArtifactObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlArtifactObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlArtifactObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlArtifactObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlArtifactObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlArtifactObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlArtifactObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlArtifactObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlArtifactObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlArtifactObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlArtifactObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlArtifactObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlArtifactObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlArtifactObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlArtifactObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlArtifactObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlArtifactObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlArtifactObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlArtifactObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setAbstract(isAbstract);
}

void QUmlArtifactObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlArtifactObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlArtifactObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlArtifactObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlArtifactObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlArtifactObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlArtifactObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlArtifactObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlArtifactObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlArtifactObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlArtifactObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlArtifactObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlArtifactObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlArtifactObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlArtifactObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlArtifactObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Artifact]

void QUmlArtifactObject::setFileName(QString fileName)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->setFileName(fileName);
}

void QUmlArtifactObject::addManifestation(QObject *manifestation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addManifestation(qmodelingelementproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlArtifactObject::removeManifestation(QObject *manifestation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeManifestation(qmodelingelementproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlArtifactObject::addNestedArtifact(QObject *nestedArtifact)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addNestedArtifact(qmodelingelementproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlArtifactObject::removeNestedArtifact(QObject *nestedArtifact)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeNestedArtifact(qmodelingelementproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlArtifactObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlArtifactObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlArtifactObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlArtifactObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlArtifact *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}


void QUmlArtifactObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDeployedArtifact");

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

    d->propertyGroups << QStringLiteral("QUmlArtifact");
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("fileName"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("manifestations"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedArtifacts"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlArtifact"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedOperations"))));
}

void QUmlArtifactObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, DocumentationRole, QStringLiteral("A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, fileName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, DocumentationRole, QStringLiteral("The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, manifestations, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, DocumentationRole, QStringLiteral("The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, nestedArtifacts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, DocumentationRole, QStringLiteral("The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember Classifier-attribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedAttributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, PropertyClassRole, QStringLiteral("QUmlArtifact"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, DocumentationRole, QStringLiteral("The Operations defined for the Artifact. The association is a specialization of the ownedMember association."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlArtifact, ownedOperations, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

