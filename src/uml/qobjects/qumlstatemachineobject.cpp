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
#include "qumlstatemachineobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlStateMachine>
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
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlStateMachineObject::QUmlStateMachineObject(QUmlStateMachine *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlStateMachineObject::~QUmlStateMachineObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlStateMachine *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStateMachineObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStateMachineObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlStateMachineObject::name() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->name();
}

QObject *QUmlStateMachineObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlStateMachineObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->namespace_()->asQModelingObject();
}

QString QUmlStateMachineObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlStateMachineObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlStateMachineObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlStateMachineObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlStateMachineObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStateMachineObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStateMachineObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlStateMachineObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlStateMachineObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isFinalSpecialization();
}

QObject *QUmlStateMachineObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlStateMachineObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlStateMachineObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlStateMachineObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlStateMachineObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isAbstract();
}

bool QUmlStateMachineObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isActive();
}

const QList<QObject *> QUmlStateMachineObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlStateMachineObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlStateMachineObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlStateMachineObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlStateMachineObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->context()->asQModelingObject();
}

bool QUmlStateMachineObject::isReentrant() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isReentrant();
}

const QList<QObject *> QUmlStateMachineObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlStateMachineObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [StateMachine]

const QSet<QObject *> QUmlStateMachineObject::connectionPoints() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->connectionPoints())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::extendedStateMachines() const
{
    QSet<QObject *> set;
    foreach (QUmlStateMachine *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->extendedStateMachines())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::regions() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->regions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::submachineStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->submachineStates())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStateMachineObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStateMachineObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStateMachineObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStateMachineObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlStateMachineObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlStateMachineObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlStateMachineObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlStateMachineObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlStateMachineObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]
// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlStateMachineObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlStateMachineObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStateMachineObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlStateMachineObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlStateMachineObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isTemplate();
}

bool QUmlStateMachineObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlStateMachineObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlStateMachineObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [StateMachine]

QObject *QUmlStateMachineObject::LCA(QObject *s1, QObject *s2) const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->LCA(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2)))
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->LCA(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2))->asQModelingObject();
}

bool QUmlStateMachineObject::ancestor(QObject *s1, QObject *s2) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ancestor(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2));
}

bool QUmlStateMachineObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStateMachineObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlStateMachine *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStateMachineObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateMachineObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateMachineObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateMachineObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateMachineObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStateMachineObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateMachineObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateMachineObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setName(name);
}

void QUmlStateMachineObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStateMachineObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStateMachineObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlStateMachineObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStateMachineObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStateMachineObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStateMachineObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStateMachineObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStateMachineObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStateMachineObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStateMachineObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStateMachineObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStateMachineObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStateMachineObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlStateMachineObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlStateMachineObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlStateMachineObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setVisibility(visibility);
}

void QUmlStateMachineObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlStateMachineObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStateMachineObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setLeaf(isLeaf);
}

void QUmlStateMachineObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlStateMachineObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStateMachineObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStateMachineObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStateMachineObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlStateMachineObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlStateMachineObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlStateMachineObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlStateMachineObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlStateMachineObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlStateMachineObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlStateMachineObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlStateMachineObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlStateMachineObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlStateMachineObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlStateMachineObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlStateMachineObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlStateMachineObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlStateMachineObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlStateMachineObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlStateMachineObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlStateMachineObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlStateMachineObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlStateMachineObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlStateMachineObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlStateMachineObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlStateMachineObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlStateMachineObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlStateMachineObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlStateMachineObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlStateMachineObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlStateMachineObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlStateMachineObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlStateMachineObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlStateMachineObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlStateMachineObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlStateMachineObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlStateMachineObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlStateMachineObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlStateMachineObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlStateMachineObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlStateMachineObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlStateMachineObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlStateMachineObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlStateMachineObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlStateMachineObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlStateMachineObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlStateMachineObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setAbstract(isAbstract);
}

void QUmlStateMachineObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlStateMachineObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setActive(isActive);
}

void QUmlStateMachineObject::unsetActive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("active"));
}

void QUmlStateMachineObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlStateMachineObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlStateMachineObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlStateMachineObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlStateMachineObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlStateMachineObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlStateMachineObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlStateMachineObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlStateMachineObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

void QUmlStateMachineObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlStateMachineObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setContext(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlStateMachineObject::setReentrant(bool isReentrant)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setReentrant(isReentrant);
}

void QUmlStateMachineObject::unsetReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("reentrant"));
}

void QUmlStateMachineObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlStateMachineObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlStateMachineObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlStateMachineObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlStateMachineObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlStateMachineObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlStateMachineObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlStateMachineObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlStateMachineObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [StateMachine]

void QUmlStateMachineObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlStateMachineObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlStateMachineObject::addExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addExtendedStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlStateMachineObject::removeExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeExtendedStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlStateMachineObject::addRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
}

void QUmlStateMachineObject::removeRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
}

void QUmlStateMachineObject::addSubmachineState(QObject *submachineState)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addSubmachineState(qmodelingelementproperty_cast<QUmlState *>(submachineState));
}

void QUmlStateMachineObject::removeSubmachineState(QObject *submachineState)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeSubmachineState(qmodelingelementproperty_cast<QUmlState *>(submachineState));
}


void QUmlStateMachineObject::setGroupProperties()
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
}

void QUmlStateMachineObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, DocumentationRole, QStringLiteral("The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, OppositeEndRole, QStringLiteral("Pseudostate-stateMachine"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, DocumentationRole, QStringLiteral("The state machines of which this is an extension."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, RedefinedPropertiesRole, QStringLiteral("Behavior-redefinedBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, DocumentationRole, QStringLiteral("The regions owned directly by the state machine."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, OppositeEndRole, QStringLiteral("Region-stateMachine"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, DocumentationRole, QStringLiteral("References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, OppositeEndRole, QStringLiteral("State-submachine"));

}

QT_END_NAMESPACE

