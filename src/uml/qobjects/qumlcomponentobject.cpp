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
#include "qumlcomponentobject_p.h"

#include <QtUml/QUmlComponent>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlComponentRealization>
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
#include <QtUml/QUmlInterface>
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

QUmlComponentObject::QUmlComponentObject(QUmlComponent *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlComponentObject::~QUmlComponentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlComponent *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlComponentObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlComponentObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlComponentObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlComponentObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->name();
}

QObject *QUmlComponentObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->nameExpression()->asQObject();
}

QObject *QUmlComponentObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->namespace_()->asQObject();
}

QString QUmlComponentObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlComponentObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlComponentObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlComponentObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlComponentObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlComponentObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isLeaf();
}

const QSet<QObject *> QUmlComponentObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlComponentObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlComponentObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isFinalSpecialization();
}

QObject *QUmlComponentObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlComponentObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlComponentObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlComponentObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlComponentObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlComponentObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlComponentObject::ownedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::part() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->part())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::role() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->role())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlComponentObject::ownedPort() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedPort())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlComponentObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponent *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponent *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlComponentObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlComponentObject::extension() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->extension())
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isAbstract();
}

bool QUmlComponentObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isActive();
}

const QList<QObject *> QUmlComponentObject::nestedClassifier() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->nestedClassifier())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlComponentObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlComponentObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlComponentObject::ownedReception() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->ownedReception())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::superClass() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->superClass())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Component]

bool QUmlComponentObject::isIndirectlyInstantiated() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isIndirectlyInstantiated();
}

const QSet<QObject *> QUmlComponentObject::packagedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->packagedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::provided() const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->provided())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::realization() const
{
    QSet<QObject *> set;
    foreach (QUmlComponentRealization *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->realization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentObject::required() const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->required())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlComponentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlComponentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlComponentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlComponentObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlComponentObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlComponentObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlComponentObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlComponentObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlComponentObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlComponentObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlComponentObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlComponentObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlComponentObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlComponentObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlComponentObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlComponentObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->isTemplate();
}

bool QUmlComponentObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlComponent *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlComponentObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlComponentObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Component]

QSet<QObject *> QUmlComponentObject::realizedInterfaces(QObject *classifier) const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->realizedInterfaces(qmodelingobjectproperty_cast<QUmlClassifier *>(classifier)))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlComponentObject::usedInterfaces(QObject *classifier) const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingobjectproperty_cast<QUmlComponent *>(this)->usedInterfaces(qmodelingobjectproperty_cast<QUmlClassifier *>(classifier)))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlComponentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlComponentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlComponentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlComponentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlComponentObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlComponentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlComponentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlComponentObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setName(name);
}

void QUmlComponentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlComponentObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlComponentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlComponentObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlComponentObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlComponentObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlComponentObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlComponentObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlComponentObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlComponentObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlComponentObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlComponentObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlComponentObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlComponentObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlComponentObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlComponentObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlComponentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlComponentObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlComponentObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlComponentObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlComponentObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlComponentObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlComponentObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlComponentObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlComponentObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlComponentObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlComponentObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlComponentObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlComponentObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlComponentObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlComponentObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlComponentObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlComponentObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlComponentObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlComponentObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlComponentObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlComponentObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlComponentObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setFinalSpecialization(isFinalSpecialization);
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties() << QStringLiteral("finalSpecialization");
}

void QUmlComponentObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlComponentObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlComponentObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlComponentObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlComponentObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlComponentObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlComponentObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlComponentObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlComponentObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlComponentObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlComponentObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlComponentObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlComponentObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlComponentObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlComponentObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlComponentObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlComponentObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlComponentObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlComponentObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlComponentObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlComponentObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlComponentObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlComponentObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlComponentObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlComponentObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlComponentObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlComponentObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlComponentObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlComponentObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlComponentObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlComponentObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlComponentObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setActive(isActive);
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties() << QStringLiteral("active");
}

void QUmlComponentObject::unsetActive()
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("active"));
}

void QUmlComponentObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlComponentObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlComponentObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlComponentObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlComponentObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlComponentObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlComponentObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlComponentObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlComponentObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlComponentObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Component]

void QUmlComponentObject::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->setIndirectlyInstantiated(isIndirectlyInstantiated);
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties() << QStringLiteral("indirectlyInstantiated");
}

void QUmlComponentObject::unsetIndirectlyInstantiated()
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("indirectlyInstantiated"));
}

void QUmlComponentObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addPackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlComponentObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removePackagedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(packagedElement));
}

void QUmlComponentObject::addProvided(QObject *provided)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addProvided(qmodelingobjectproperty_cast<QUmlInterface *>(provided));
}

void QUmlComponentObject::removeProvided(QObject *provided)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeProvided(qmodelingobjectproperty_cast<QUmlInterface *>(provided));
}

void QUmlComponentObject::addRealization(QObject *realization)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addRealization(qmodelingobjectproperty_cast<QUmlComponentRealization *>(realization));
}

void QUmlComponentObject::removeRealization(QObject *realization)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeRealization(qmodelingobjectproperty_cast<QUmlComponentRealization *>(realization));
}

void QUmlComponentObject::addRequired(QObject *required)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->addRequired(qmodelingobjectproperty_cast<QUmlInterface *>(required));
}

void QUmlComponentObject::removeRequired(QObject *required)
{
    qmodelingobjectproperty_cast<QUmlComponent *>(this)->removeRequired(qmodelingobjectproperty_cast<QUmlInterface *>(required));
}

QT_END_NAMESPACE

