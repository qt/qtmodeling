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

QUmlDeploymentSpecificationObject::QUmlDeploymentSpecificationObject(QUmlDeploymentSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlDeploymentSpecificationObject::~QUmlDeploymentSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDeploymentSpecificationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDeploymentSpecificationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDeploymentSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->name();
}

QObject *QUmlDeploymentSpecificationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDeploymentSpecificationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlDeploymentSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlDeploymentSpecificationObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDeploymentSpecificationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDeploymentSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlDeploymentSpecificationObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlDeploymentSpecificationObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isLeaf();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlDeploymentSpecificationObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlDeploymentSpecificationObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isAbstract();
}

bool QUmlDeploymentSpecificationObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isFinalSpecialization();
}

QObject *QUmlDeploymentSpecificationObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDeploymentSpecificationObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDeploymentSpecificationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Artifact]

QString QUmlDeploymentSpecificationObject::fileName() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->fileName();
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::manifestation() const
{
    QSet<QObject *> set;
    foreach (QUmlManifestation *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->manifestation())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentSpecificationObject::nestedArtifact() const
{
    QSet<QObject *> set;
    foreach (QUmlArtifact *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->nestedArtifact())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlDeploymentSpecificationObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlDeploymentSpecificationObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [DeploymentSpecification]

QObject *QUmlDeploymentSpecificationObject::deployment() const
{
    if (!qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->deployment())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->deployment()->asQObject();
}

QString QUmlDeploymentSpecificationObject::deploymentLocation() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->deploymentLocation();
}

QString QUmlDeploymentSpecificationObject::executionLocation() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->executionLocation();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDeploymentSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDeploymentSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDeploymentSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDeploymentSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlDeploymentSpecificationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlDeploymentSpecificationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlDeploymentSpecificationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlDeploymentSpecificationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDeploymentSpecificationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlDeploymentSpecificationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlDeploymentSpecificationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlDeploymentSpecificationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlDeploymentSpecificationObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDeploymentSpecificationObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlDeploymentSpecificationObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlDeploymentSpecificationObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDeploymentSpecificationObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentSpecificationObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->isTemplate();
}

bool QUmlDeploymentSpecificationObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlDeploymentSpecificationObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDeploymentSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDeploymentSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setName(name);
}

void QUmlDeploymentSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDeploymentSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDeploymentSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlDeploymentSpecificationObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlDeploymentSpecificationObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlDeploymentSpecificationObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlDeploymentSpecificationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlDeploymentSpecificationObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlDeploymentSpecificationObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlDeploymentSpecificationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlDeploymentSpecificationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlDeploymentSpecificationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlDeploymentSpecificationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlDeploymentSpecificationObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlDeploymentSpecificationObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDeploymentSpecificationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDeploymentSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setVisibility(visibility);
}

void QUmlDeploymentSpecificationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlDeploymentSpecificationObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlDeploymentSpecificationObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setLeaf(isLeaf);
}

void QUmlDeploymentSpecificationObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlDeploymentSpecificationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDeploymentSpecificationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDeploymentSpecificationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlDeploymentSpecificationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlDeploymentSpecificationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlDeploymentSpecificationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlDeploymentSpecificationObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlDeploymentSpecificationObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlDeploymentSpecificationObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlDeploymentSpecificationObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlDeploymentSpecificationObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlDeploymentSpecificationObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlDeploymentSpecificationObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlDeploymentSpecificationObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlDeploymentSpecificationObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlDeploymentSpecificationObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlDeploymentSpecificationObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlDeploymentSpecificationObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlDeploymentSpecificationObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setAbstract(isAbstract);
}

void QUmlDeploymentSpecificationObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlDeploymentSpecificationObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlDeploymentSpecificationObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlDeploymentSpecificationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlDeploymentSpecificationObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlDeploymentSpecificationObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlDeploymentSpecificationObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlDeploymentSpecificationObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlDeploymentSpecificationObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlDeploymentSpecificationObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlDeploymentSpecificationObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlDeploymentSpecificationObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlDeploymentSpecificationObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlDeploymentSpecificationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlDeploymentSpecificationObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlDeploymentSpecificationObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Artifact]

void QUmlDeploymentSpecificationObject::setFileName(QString fileName)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setFileName(fileName);
}

void QUmlDeploymentSpecificationObject::addManifestation(QObject *manifestation)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addManifestation(qmodelingobjectproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlDeploymentSpecificationObject::removeManifestation(QObject *manifestation)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeManifestation(qmodelingobjectproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlDeploymentSpecificationObject::addNestedArtifact(QObject *nestedArtifact)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addNestedArtifact(qmodelingobjectproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlDeploymentSpecificationObject::removeNestedArtifact(QObject *nestedArtifact)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeNestedArtifact(qmodelingobjectproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlDeploymentSpecificationObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlDeploymentSpecificationObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlDeploymentSpecificationObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlDeploymentSpecificationObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentSpecification]

void QUmlDeploymentSpecificationObject::setDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlDeploymentSpecificationObject::setDeploymentLocation(QString deploymentLocation)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setDeploymentLocation(deploymentLocation);
}

void QUmlDeploymentSpecificationObject::setExecutionLocation(QString executionLocation)
{
    qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(this)->setExecutionLocation(executionLocation);
}

QT_END_NAMESPACE

