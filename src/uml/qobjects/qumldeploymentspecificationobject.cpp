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
#include "qumldeploymentspecificationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDeploymentSpecification>
#include <QtUml/QUmlArtifact>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
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

QUmlDeploymentSpecificationObject::QUmlDeploymentSpecificationObject(QUmlDeploymentSpecification *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlDeploymentSpecificationObject::~QUmlDeploymentSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDeploymentSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDeploymentSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDeploymentSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->name();
}

QObject *QUmlDeploymentSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDeploymentSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDeploymentSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlDeploymentSpecificationObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDeploymentSpecificationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDeploymentSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlDeploymentSpecificationObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlDeploymentSpecificationObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isLeaf();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlDeploymentSpecificationObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlDeploymentSpecificationObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isAbstract();
}

bool QUmlDeploymentSpecificationObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isFinalSpecialization();
}

QObject *QUmlDeploymentSpecificationObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDeploymentSpecificationObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDeploymentSpecificationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Artifact]

QString QUmlDeploymentSpecificationObject::fileName() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->fileName();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::manifestations() const
{
    QSet<QObject *> set;
    foreach (QUmlManifestation *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->manifestations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::nestedArtifacts() const
{
    QSet<QObject *> set;
    foreach (QUmlArtifact *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->nestedArtifacts())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlDeploymentSpecificationObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlDeploymentSpecificationObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [DeploymentSpecification]

QObject *QUmlDeploymentSpecificationObject::deployment() const
{
    if (!qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->deployment())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->deployment()->asQModelingObject();
}

QString QUmlDeploymentSpecificationObject::deploymentLocation() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->deploymentLocation();
}

QString QUmlDeploymentSpecificationObject::executionLocation() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->executionLocation();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDeploymentSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDeploymentSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDeploymentSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDeploymentSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlDeploymentSpecificationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlDeploymentSpecificationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlDeploymentSpecificationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlDeploymentSpecificationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDeploymentSpecificationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlDeploymentSpecificationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlDeploymentSpecificationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlDeploymentSpecificationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlDeploymentSpecificationObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDeploymentSpecificationObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlDeploymentSpecificationObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlDeploymentSpecificationObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDeploymentSpecificationObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->isTemplate();
}

bool QUmlDeploymentSpecificationObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlDeploymentSpecificationObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDeploymentSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDeploymentSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setName(name);
}

void QUmlDeploymentSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDeploymentSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDeploymentSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlDeploymentSpecificationObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlDeploymentSpecificationObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlDeploymentSpecificationObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlDeploymentSpecificationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlDeploymentSpecificationObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlDeploymentSpecificationObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlDeploymentSpecificationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlDeploymentSpecificationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlDeploymentSpecificationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlDeploymentSpecificationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlDeploymentSpecificationObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlDeploymentSpecificationObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDeploymentSpecificationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDeploymentSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setVisibility(visibility);
}

void QUmlDeploymentSpecificationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlDeploymentSpecificationObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlDeploymentSpecificationObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setLeaf(isLeaf);
}

void QUmlDeploymentSpecificationObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlDeploymentSpecificationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDeploymentSpecificationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDeploymentSpecificationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlDeploymentSpecificationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlDeploymentSpecificationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlDeploymentSpecificationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlDeploymentSpecificationObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlDeploymentSpecificationObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlDeploymentSpecificationObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlDeploymentSpecificationObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlDeploymentSpecificationObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlDeploymentSpecificationObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlDeploymentSpecificationObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlDeploymentSpecificationObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlDeploymentSpecificationObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlDeploymentSpecificationObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlDeploymentSpecificationObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlDeploymentSpecificationObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlDeploymentSpecificationObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setAbstract(isAbstract);
}

void QUmlDeploymentSpecificationObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlDeploymentSpecificationObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlDeploymentSpecificationObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlDeploymentSpecificationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlDeploymentSpecificationObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlDeploymentSpecificationObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlDeploymentSpecificationObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlDeploymentSpecificationObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlDeploymentSpecificationObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlDeploymentSpecificationObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlDeploymentSpecificationObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlDeploymentSpecificationObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlDeploymentSpecificationObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlDeploymentSpecificationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlDeploymentSpecificationObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlDeploymentSpecificationObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Artifact]

void QUmlDeploymentSpecificationObject::setFileName(QString fileName)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setFileName(fileName);
}

void QUmlDeploymentSpecificationObject::addManifestation(QObject *manifestation)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addManifestation(qmodelingelementproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlDeploymentSpecificationObject::removeManifestation(QObject *manifestation)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeManifestation(qmodelingelementproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlDeploymentSpecificationObject::addNestedArtifact(QObject *nestedArtifact)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addNestedArtifact(qmodelingelementproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlDeploymentSpecificationObject::removeNestedArtifact(QObject *nestedArtifact)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeNestedArtifact(qmodelingelementproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlDeploymentSpecificationObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlDeploymentSpecificationObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlDeploymentSpecificationObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlDeploymentSpecificationObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentSpecification]

void QUmlDeploymentSpecificationObject::setDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlDeploymentSpecificationObject::setDeploymentLocation(QString deploymentLocation)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setDeploymentLocation(deploymentLocation);
}

void QUmlDeploymentSpecificationObject::setExecutionLocation(QString executionLocation)
{
    qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(this)->setExecutionLocation(executionLocation);
}


void QUmlDeploymentSpecificationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDeploymentSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployment"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deploymentLocation"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("executionLocation"))));
}

void QUmlDeploymentSpecificationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, PropertyClassRole, QStringLiteral("QUmlDeploymentSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, DocumentationRole, QStringLiteral("The deployment with which the DeploymentSpecification is associated."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deployment, OppositeEndRole, QStringLiteral("Deployment-configuration"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, PropertyClassRole, QStringLiteral("QUmlDeploymentSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, DocumentationRole, QStringLiteral("The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address'."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, deploymentLocation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, PropertyClassRole, QStringLiteral("QUmlDeploymentSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, DocumentationRole, QStringLiteral("The location where a component Artifact executes. This may be a local or remote location."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentSpecification, executionLocation, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

