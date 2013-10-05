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

QUmlArtifactObject::QUmlArtifactObject(QUmlArtifact *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlArtifactObject::~QUmlArtifactObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlArtifact *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlArtifactObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlArtifactObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlArtifactObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlArtifactObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->name();
}

QObject *QUmlArtifactObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->nameExpression()->asQObject();
}

QObject *QUmlArtifactObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->namespace_()->asQObject();
}

QString QUmlArtifactObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlArtifactObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlArtifactObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlArtifactObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlArtifactObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlArtifactObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isLeaf();
}

const QSet<QObject *> QUmlArtifactObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlArtifactObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlArtifactObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlArtifactObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isAbstract();
}

bool QUmlArtifactObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isFinalSpecialization();
}

QObject *QUmlArtifactObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlArtifactObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlArtifactObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlArtifactObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlArtifactObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlArtifact *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlArtifactObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Artifact]

QString QUmlArtifactObject::fileName() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->fileName();
}

const QSet<QObject *> QUmlArtifactObject::manifestation() const
{
    QSet<QObject *> set;
    foreach (QUmlManifestation *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->manifestation())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlArtifactObject::nestedArtifact() const
{
    QSet<QObject *> set;
    foreach (QUmlArtifact *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->nestedArtifact())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlArtifactObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlArtifactObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlArtifactObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlArtifactObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlArtifactObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlArtifactObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlArtifactObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlArtifactObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlArtifactObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlArtifactObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlArtifactObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlArtifactObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlArtifactObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlArtifactObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlArtifactObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlArtifactObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlArtifactObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlArtifactObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlArtifactObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlArtifactObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlArtifactObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlArtifactObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->isTemplate();
}

bool QUmlArtifactObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlArtifact *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlArtifactObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlArtifact *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlArtifactObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlArtifactObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlArtifactObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlArtifactObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlArtifactObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlArtifactObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlArtifactObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlArtifactObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setName(name);
}

void QUmlArtifactObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlArtifactObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlArtifactObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlArtifactObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlArtifactObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlArtifactObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlArtifactObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlArtifactObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlArtifactObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlArtifactObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlArtifactObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlArtifactObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlArtifactObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlArtifactObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlArtifactObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlArtifactObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlArtifactObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setVisibility(visibility);
}

void QUmlArtifactObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlArtifactObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlArtifactObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setLeaf(isLeaf);
}

void QUmlArtifactObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlArtifactObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlArtifactObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlArtifactObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlArtifactObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlArtifactObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlArtifactObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlArtifactObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlArtifactObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlArtifactObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlArtifactObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlArtifactObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlArtifactObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlArtifactObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlArtifactObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlArtifactObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlArtifactObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlArtifactObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlArtifactObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlArtifactObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setAbstract(isAbstract);
}

void QUmlArtifactObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlArtifactObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlArtifactObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlArtifactObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlArtifactObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlArtifactObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlArtifactObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlArtifactObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlArtifactObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlArtifactObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlArtifactObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlArtifactObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlArtifactObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlArtifactObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlArtifactObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlArtifactObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Artifact]

void QUmlArtifactObject::setFileName(QString fileName)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->setFileName(fileName);
}

void QUmlArtifactObject::addManifestation(QObject *manifestation)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addManifestation(qmodelingobjectproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlArtifactObject::removeManifestation(QObject *manifestation)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeManifestation(qmodelingobjectproperty_cast<QUmlManifestation *>(manifestation));
}

void QUmlArtifactObject::addNestedArtifact(QObject *nestedArtifact)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addNestedArtifact(qmodelingobjectproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlArtifactObject::removeNestedArtifact(QObject *nestedArtifact)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeNestedArtifact(qmodelingobjectproperty_cast<QUmlArtifact *>(nestedArtifact));
}

void QUmlArtifactObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlArtifactObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlArtifactObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlArtifactObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlArtifact *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

QT_END_NAMESPACE

