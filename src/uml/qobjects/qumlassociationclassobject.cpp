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
#include "qumlassociationclassobject_p.h"

#include <QtUml/QUmlAssociationClass>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClass>
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
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlReception>
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

QUmlAssociationClassObject::QUmlAssociationClassObject(QUmlAssociationClass *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlAssociationClassObject::~QUmlAssociationClassObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAssociationClassObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAssociationClassObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAssociationClassObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlAssociationClassObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->name();
}

QObject *QUmlAssociationClassObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->nameExpression()->asQObject();
}

QObject *QUmlAssociationClassObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->namespace_()->asQObject();
}

QString QUmlAssociationClassObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlAssociationClassObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlAssociationClassObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlAssociationClassObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlAssociationClassObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAssociationClassObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAssociationClassObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlAssociationClassObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlAssociationClassObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationClassObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isFinalSpecialization();
}

QObject *QUmlAssociationClassObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlAssociationClassObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAssociationClassObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlAssociationClassObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAssociationClassObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlAssociationClassObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlAssociationClassObject::ownedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::part() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->part())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::role() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->role())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlAssociationClassObject::ownedPort() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedPort())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlAssociationClassObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlAssociationClassObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlAssociationClassObject::extension() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->extension())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationClassObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isAbstract();
}

bool QUmlAssociationClassObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isActive();
}

const QList<QObject *> QUmlAssociationClassObject::nestedClassifier() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->nestedClassifier())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlAssociationClassObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlAssociationClassObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlAssociationClassObject::ownedReception() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedReception())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAssociationClassObject::superClass() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->superClass())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlAssociationClassObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Association]

const QList<QObject *> QUmlAssociationClassObject::endType() const
{
    QList<QObject *> list;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->endType())
        list.append(element->asQObject());
    return list;
}

bool QUmlAssociationClassObject::isDerived() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isDerived();
}

const QList<QObject *> QUmlAssociationClassObject::memberEnd() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->memberEnd())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlAssociationClassObject::navigableOwnedEnd() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->navigableOwnedEnd())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlAssociationClassObject::ownedEnd() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->ownedEnd())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAssociationClassObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationClassObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAssociationClassObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAssociationClassObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationClassObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAssociationClassObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlAssociationClassObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlAssociationClassObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlAssociationClassObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationClassObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlAssociationClassObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlAssociationClassObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlAssociationClassObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAssociationClassObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlAssociationClassObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlAssociationClassObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAssociationClassObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationClassObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlAssociationClassObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlAssociationClassObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlAssociationClassObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->isTemplate();
}

bool QUmlAssociationClassObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlAssociationClassObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlAssociationClassObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAssociationClassObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAssociationClassObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAssociationClassObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAssociationClassObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAssociationClassObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAssociationClassObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAssociationClassObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAssociationClassObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setName(name);
}

void QUmlAssociationClassObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAssociationClassObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAssociationClassObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlAssociationClassObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlAssociationClassObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlAssociationClassObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlAssociationClassObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlAssociationClassObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlAssociationClassObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlAssociationClassObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlAssociationClassObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlAssociationClassObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlAssociationClassObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlAssociationClassObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlAssociationClassObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlAssociationClassObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlAssociationClassObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setVisibility(visibility);
}

void QUmlAssociationClassObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlAssociationClassObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAssociationClassObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setLeaf(isLeaf);
}

void QUmlAssociationClassObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlAssociationClassObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAssociationClassObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAssociationClassObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAssociationClassObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlAssociationClassObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlAssociationClassObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlAssociationClassObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlAssociationClassObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlAssociationClassObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlAssociationClassObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlAssociationClassObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlAssociationClassObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlAssociationClassObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlAssociationClassObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlAssociationClassObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlAssociationClassObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlAssociationClassObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlAssociationClassObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlAssociationClassObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlAssociationClassObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlAssociationClassObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlAssociationClassObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlAssociationClassObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlAssociationClassObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlAssociationClassObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlAssociationClassObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlAssociationClassObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlAssociationClassObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlAssociationClassObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlAssociationClassObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlAssociationClassObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlAssociationClassObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlAssociationClassObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlAssociationClassObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlAssociationClassObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlAssociationClassObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlAssociationClassObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlAssociationClassObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlAssociationClassObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlAssociationClassObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlAssociationClassObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlAssociationClassObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlAssociationClassObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlAssociationClassObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlAssociationClassObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlAssociationClassObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlAssociationClassObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setAbstract(isAbstract);
}

void QUmlAssociationClassObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlAssociationClassObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setActive(isActive);
}

void QUmlAssociationClassObject::unsetActive()
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("active"));
}

void QUmlAssociationClassObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlAssociationClassObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlAssociationClassObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlAssociationClassObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlAssociationClassObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlAssociationClassObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlAssociationClassObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlAssociationClassObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlAssociationClassObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlAssociationClassObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlAssociationClassObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlAssociationClassObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [Association]

void QUmlAssociationClassObject::addEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlAssociationClassObject::removeEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlAssociationClassObject::setDerived(bool isDerived)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->setDerived(isDerived);
}

void QUmlAssociationClassObject::unsetDerived()
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("derived"));
}

void QUmlAssociationClassObject::addMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlAssociationClassObject::removeMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlAssociationClassObject::addNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlAssociationClassObject::removeNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlAssociationClassObject::addOwnedEnd(QObject *ownedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->addOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(ownedEnd));
}

void QUmlAssociationClassObject::removeOwnedEnd(QObject *ownedEnd)
{
    qmodelingobjectproperty_cast<QUmlAssociationClass *>(this)->removeOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(ownedEnd));
}

QT_END_NAMESPACE

