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
#include "private/qmodelingobject_p.h"

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

QUmlProtocolStateMachineObject::QUmlProtocolStateMachineObject(QUmlProtocolStateMachine *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlProtocolStateMachineObject::~QUmlProtocolStateMachineObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlProtocolStateMachineObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlProtocolStateMachineObject::name() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->name();
}

QObject *QUmlProtocolStateMachineObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlProtocolStateMachineObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->namespace_()->asQModelingObject();
}

QString QUmlProtocolStateMachineObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlProtocolStateMachineObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlProtocolStateMachineObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlProtocolStateMachineObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlProtocolStateMachineObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlProtocolStateMachineObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isLeaf();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlProtocolStateMachineObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlProtocolStateMachineObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isFinalSpecialization();
}

QObject *QUmlProtocolStateMachineObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlProtocolStateMachineObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlProtocolStateMachineObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlProtocolStateMachineObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isAbstract();
}

bool QUmlProtocolStateMachineObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isActive();
}

const QList<QObject *> QUmlProtocolStateMachineObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlProtocolStateMachineObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlProtocolStateMachineObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlProtocolStateMachineObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->context()->asQModelingObject();
}

bool QUmlProtocolStateMachineObject::isReentrant() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isReentrant();
}

const QList<QObject *> QUmlProtocolStateMachineObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProtocolStateMachineObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [StateMachine]

const QSet<QObject *> QUmlProtocolStateMachineObject::connectionPoints() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->connectionPoints())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::extendedStateMachines() const
{
    QSet<QObject *> set;
    foreach (QUmlStateMachine *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->extendedStateMachines())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::regions() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->regions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolStateMachineObject::submachineStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->submachineStates())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ProtocolStateMachine]

const QSet<QObject *> QUmlProtocolStateMachineObject::conformance() const
{
    QSet<QObject *> set;
    foreach (QUmlProtocolConformance *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->conformance())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProtocolStateMachineObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolStateMachineObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlProtocolStateMachineObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlProtocolStateMachineObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlProtocolStateMachineObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlProtocolStateMachineObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlProtocolStateMachineObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlProtocolStateMachineObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolStateMachineObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlProtocolStateMachineObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlProtocolStateMachineObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]
// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlProtocolStateMachineObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlProtocolStateMachineObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlProtocolStateMachineObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolStateMachineObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlProtocolStateMachineObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlProtocolStateMachineObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolStateMachineObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isTemplate();
}

bool QUmlProtocolStateMachineObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlProtocolStateMachineObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlProtocolStateMachineObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [StateMachine]

QObject *QUmlProtocolStateMachineObject::LCA(QObject *s1, QObject *s2) const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->LCA(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2)))
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->LCA(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2))->asQModelingObject();
}

bool QUmlProtocolStateMachineObject::ancestor(QObject *s1, QObject *s2) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->ancestor(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2));
}

bool QUmlProtocolStateMachineObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlProtocolStateMachineObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlStateMachine *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolStateMachineObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolStateMachineObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolStateMachineObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolStateMachineObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolStateMachineObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProtocolStateMachineObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolStateMachineObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolStateMachineObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setName(name);
}

void QUmlProtocolStateMachineObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlProtocolStateMachineObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlProtocolStateMachineObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProtocolStateMachineObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolStateMachineObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolStateMachineObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolStateMachineObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolStateMachineObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolStateMachineObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolStateMachineObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolStateMachineObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolStateMachineObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolStateMachineObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolStateMachineObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlProtocolStateMachineObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlProtocolStateMachineObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlProtocolStateMachineObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setVisibility(visibility);
}

void QUmlProtocolStateMachineObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlProtocolStateMachineObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlProtocolStateMachineObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setLeaf(isLeaf);
}

void QUmlProtocolStateMachineObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlProtocolStateMachineObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlProtocolStateMachineObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlProtocolStateMachineObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlProtocolStateMachineObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlProtocolStateMachineObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlProtocolStateMachineObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlProtocolStateMachineObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlProtocolStateMachineObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlProtocolStateMachineObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlProtocolStateMachineObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlProtocolStateMachineObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlProtocolStateMachineObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlProtocolStateMachineObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlProtocolStateMachineObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlProtocolStateMachineObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlProtocolStateMachineObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlProtocolStateMachineObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlProtocolStateMachineObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlProtocolStateMachineObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlProtocolStateMachineObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlProtocolStateMachineObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlProtocolStateMachineObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlProtocolStateMachineObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlProtocolStateMachineObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlProtocolStateMachineObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlProtocolStateMachineObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlProtocolStateMachineObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlProtocolStateMachineObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlProtocolStateMachineObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlProtocolStateMachineObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlProtocolStateMachineObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlProtocolStateMachineObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlProtocolStateMachineObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlProtocolStateMachineObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlProtocolStateMachineObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlProtocolStateMachineObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlProtocolStateMachineObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlProtocolStateMachineObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlProtocolStateMachineObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlProtocolStateMachineObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlProtocolStateMachineObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlProtocolStateMachineObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlProtocolStateMachineObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlProtocolStateMachineObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlProtocolStateMachineObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlProtocolStateMachineObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlProtocolStateMachineObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setAbstract(isAbstract);
}

void QUmlProtocolStateMachineObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlProtocolStateMachineObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setActive(isActive);
}

void QUmlProtocolStateMachineObject::unsetActive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("active"));
}

void QUmlProtocolStateMachineObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlProtocolStateMachineObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlProtocolStateMachineObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlProtocolStateMachineObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlProtocolStateMachineObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlProtocolStateMachineObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlProtocolStateMachineObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlProtocolStateMachineObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlProtocolStateMachineObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

void QUmlProtocolStateMachineObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlProtocolStateMachineObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setContext(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlProtocolStateMachineObject::setReentrant(bool isReentrant)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setReentrant(isReentrant);
}

void QUmlProtocolStateMachineObject::unsetReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("reentrant"));
}

void QUmlProtocolStateMachineObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlProtocolStateMachineObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlProtocolStateMachineObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlProtocolStateMachineObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlProtocolStateMachineObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlProtocolStateMachineObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlProtocolStateMachineObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlProtocolStateMachineObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlProtocolStateMachineObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [StateMachine]

void QUmlProtocolStateMachineObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlProtocolStateMachineObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlProtocolStateMachineObject::addExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addExtendedStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlProtocolStateMachineObject::removeExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeExtendedStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlProtocolStateMachineObject::addRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
}

void QUmlProtocolStateMachineObject::removeRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
}

void QUmlProtocolStateMachineObject::addSubmachineState(QObject *submachineState)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addSubmachineState(qmodelingelementproperty_cast<QUmlState *>(submachineState));
}

void QUmlProtocolStateMachineObject::removeSubmachineState(QObject *submachineState)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeSubmachineState(qmodelingelementproperty_cast<QUmlState *>(submachineState));
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolStateMachine]

void QUmlProtocolStateMachineObject::addConformance(QObject *conformance)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->addConformance(qmodelingelementproperty_cast<QUmlProtocolConformance *>(conformance));
}

void QUmlProtocolStateMachineObject::removeConformance(QObject *conformance)
{
    qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(this)->removeConformance(qmodelingelementproperty_cast<QUmlProtocolConformance *>(conformance));
}


void QUmlProtocolStateMachineObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
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
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedConnectors"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parts"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("roles"))));

    d->propertyGroups << QStringLiteral("QUmlEncapsulatedClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlEncapsulatedClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedPorts"))));

    d->propertyGroups << QStringLiteral("QUmlBehavioredClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifierBehavior"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interfaceRealizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedBehaviors"))));

    d->propertyGroups << QStringLiteral("QUmlClass");
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extensions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isActive"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedOperations"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedReceptions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superClasses"))));

    d->propertyGroups << QStringLiteral("QUmlBehavior");
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReentrant"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameterSets"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("postconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("preconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));

    d->propertyGroups << QStringLiteral("QUmlStateMachine");
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("connectionPoints"))));
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extendedStateMachines"))));
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("regions"))));
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("submachineStates"))));

    d->propertyGroups << QStringLiteral("QUmlProtocolStateMachine");
    d->groupProperties.insert(QStringLiteral("QUmlProtocolStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("conformance"))));
}

void QUmlProtocolStateMachineObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, PropertyClassRole, QStringLiteral("QUmlProtocolStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, DocumentationRole, QStringLiteral("Conformance between protocol state machines."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolStateMachine, conformance, OppositeEndRole, QStringLiteral("ProtocolConformance-specificMachine"));

}

QT_END_NAMESPACE

