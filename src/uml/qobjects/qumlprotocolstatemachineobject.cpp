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
#include "qumlprotocolstatemachineobject_p.h"

#include <QtUml/QUmlProtocolStateMachine>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
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
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlProtocolConformance>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlProtocolStateMachineObject::QUmlProtocolStateMachineObject(QUmlProtocolStateMachine *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlProtocolStateMachineObject::~QUmlProtocolStateMachineObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlProtocolStateMachineObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlProtocolStateMachineObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->name();
}

QObject *QUmlProtocolStateMachineObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->nameExpression()->asQObject();
}

QObject *QUmlProtocolStateMachineObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->namespace_()->asQObject();
}

QString QUmlProtocolStateMachineObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlProtocolStateMachineObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlProtocolStateMachineObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlProtocolStateMachineObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlProtocolStateMachineObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlProtocolStateMachineObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isLeaf();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlProtocolStateMachineObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlProtocolStateMachineObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isFinalSpecialization();
}

QObject *QUmlProtocolStateMachineObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::part() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->part())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::role() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->role())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedPort() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedPort())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlProtocolStateMachineObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlProtocolStateMachineObject::extension() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->extension())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isAbstract();
}

bool QUmlProtocolStateMachineObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isActive();
}

const QList<QObject *> QUmlProtocolStateMachineObject::nestedClassifier() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->nestedClassifier())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlProtocolStateMachineObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlProtocolStateMachineObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedReception() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedReception())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::superClass() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->superClass())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlProtocolStateMachineObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->context()->asQObject();
}

bool QUmlProtocolStateMachineObject::isReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isReentrant();
}

const QList<QObject *> QUmlProtocolStateMachineObject::ownedParameter() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedParameter())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedParameterSet() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ownedParameterSet())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::postcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->postcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::precondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->precondition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [StateMachine]

const QSet<QObject *> QUmlProtocolStateMachineObject::connectionPoint() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->connectionPoint())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::extendedStateMachine() const
{
    QSet<QObject *> set;
    foreach (QUmlStateMachine *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->extendedStateMachine())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::region() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->region())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::submachineState() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->submachineState())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ProtocolStateMachine]

const QSet<QObject *> QUmlProtocolStateMachineObject::conformance() const
{
    QSet<QObject *> set;
    foreach (QUmlProtocolConformance *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->conformance())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProtocolStateMachineObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolStateMachineObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlProtocolStateMachineObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlProtocolStateMachineObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlProtocolStateMachineObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlProtocolStateMachineObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlProtocolStateMachineObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlProtocolStateMachineObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolStateMachineObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlProtocolStateMachineObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlProtocolStateMachineObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]
// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlProtocolStateMachineObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlProtocolStateMachineObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlProtocolStateMachineObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolStateMachineObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlProtocolStateMachineObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlProtocolStateMachineObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isTemplate();
}

bool QUmlProtocolStateMachineObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlProtocolStateMachineObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlProtocolStateMachineObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [StateMachine]

QObject *QUmlProtocolStateMachineObject::LCA(QObject *s1, QObject *s2) const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->LCA(qmodelingobjectproperty_cast<QUmlState *>(s1), qmodelingobjectproperty_cast<QUmlState *>(s2)))
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->LCA(qmodelingobjectproperty_cast<QUmlState *>(s1), qmodelingobjectproperty_cast<QUmlState *>(s2))->asQObject();
}

bool QUmlProtocolStateMachineObject::ancestor(QObject *s1, QObject *s2) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->ancestor(qmodelingobjectproperty_cast<QUmlState *>(s1), qmodelingobjectproperty_cast<QUmlState *>(s2));
}

bool QUmlProtocolStateMachineObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlProtocolStateMachineObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlStateMachine *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolStateMachineObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolStateMachineObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolStateMachineObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolStateMachineObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolStateMachineObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProtocolStateMachineObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolStateMachineObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolStateMachineObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setName(name);
}

void QUmlProtocolStateMachineObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlProtocolStateMachineObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlProtocolStateMachineObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProtocolStateMachineObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolStateMachineObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolStateMachineObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolStateMachineObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolStateMachineObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolStateMachineObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolStateMachineObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolStateMachineObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolStateMachineObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolStateMachineObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolStateMachineObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlProtocolStateMachineObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlProtocolStateMachineObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlProtocolStateMachineObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setVisibility(visibility);
}

void QUmlProtocolStateMachineObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlProtocolStateMachineObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlProtocolStateMachineObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setLeaf(isLeaf);
}

void QUmlProtocolStateMachineObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlProtocolStateMachineObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlProtocolStateMachineObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlProtocolStateMachineObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlProtocolStateMachineObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlProtocolStateMachineObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlProtocolStateMachineObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlProtocolStateMachineObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlProtocolStateMachineObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlProtocolStateMachineObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlProtocolStateMachineObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlProtocolStateMachineObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlProtocolStateMachineObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlProtocolStateMachineObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlProtocolStateMachineObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlProtocolStateMachineObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlProtocolStateMachineObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlProtocolStateMachineObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlProtocolStateMachineObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlProtocolStateMachineObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlProtocolStateMachineObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlProtocolStateMachineObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlProtocolStateMachineObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlProtocolStateMachineObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlProtocolStateMachineObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlProtocolStateMachineObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlProtocolStateMachineObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlProtocolStateMachineObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlProtocolStateMachineObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlProtocolStateMachineObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlProtocolStateMachineObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlProtocolStateMachineObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlProtocolStateMachineObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlProtocolStateMachineObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlProtocolStateMachineObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlProtocolStateMachineObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlProtocolStateMachineObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlProtocolStateMachineObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlProtocolStateMachineObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlProtocolStateMachineObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlProtocolStateMachineObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlProtocolStateMachineObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlProtocolStateMachineObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlProtocolStateMachineObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlProtocolStateMachineObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlProtocolStateMachineObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlProtocolStateMachineObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlProtocolStateMachineObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setAbstract(isAbstract);
}

void QUmlProtocolStateMachineObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlProtocolStateMachineObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setActive(isActive);
}

void QUmlProtocolStateMachineObject::unsetActive()
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("active"));
}

void QUmlProtocolStateMachineObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlProtocolStateMachineObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlProtocolStateMachineObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlProtocolStateMachineObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlProtocolStateMachineObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlProtocolStateMachineObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlProtocolStateMachineObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlProtocolStateMachineObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlProtocolStateMachineObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlProtocolStateMachineObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlProtocolStateMachineObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setContext(qmodelingobjectproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlProtocolStateMachineObject::setReentrant(bool isReentrant)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setReentrant(isReentrant);
}

void QUmlProtocolStateMachineObject::unsetReentrant()
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("reentrant"));
}

void QUmlProtocolStateMachineObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlProtocolStateMachineObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlProtocolStateMachineObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlProtocolStateMachineObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlProtocolStateMachineObject::addPostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlProtocolStateMachineObject::removePostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removePostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlProtocolStateMachineObject::addPrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlProtocolStateMachineObject::removePrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removePrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlProtocolStateMachineObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [StateMachine]

void QUmlProtocolStateMachineObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlProtocolStateMachineObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlProtocolStateMachineObject::addExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addExtendedStateMachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlProtocolStateMachineObject::removeExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeExtendedStateMachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlProtocolStateMachineObject::addRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlProtocolStateMachineObject::removeRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlProtocolStateMachineObject::addSubmachineState(QObject *submachineState)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addSubmachineState(qmodelingobjectproperty_cast<QUmlState *>(submachineState));
}

void QUmlProtocolStateMachineObject::removeSubmachineState(QObject *submachineState)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeSubmachineState(qmodelingobjectproperty_cast<QUmlState *>(submachineState));
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolStateMachine]

void QUmlProtocolStateMachineObject::addConformance(QObject *conformance)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->addConformance(qmodelingobjectproperty_cast<QUmlProtocolConformance *>(conformance));
}

void QUmlProtocolStateMachineObject::removeConformance(QObject *conformance)
{
    qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(this)->removeConformance(qmodelingobjectproperty_cast<QUmlProtocolConformance *>(conformance));
}

QT_END_NAMESPACE

