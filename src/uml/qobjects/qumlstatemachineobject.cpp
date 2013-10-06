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

QUmlStateMachineObject::QUmlStateMachineObject(QUmlStateMachine *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlStateMachineObject::~QUmlStateMachineObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStateMachineObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateMachineObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStateMachineObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlStateMachineObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->name();
}

QObject *QUmlStateMachineObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->nameExpression()->asQObject();
}

QObject *QUmlStateMachineObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->namespace_()->asQObject();
}

QString QUmlStateMachineObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlStateMachineObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->elementImports())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->importedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->members())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedRules())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->packageImports())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlStateMachineObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlStateMachineObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlStateMachineObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStateMachineObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStateMachineObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlStateMachineObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->templateBindings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlStateMachineObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->attributes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->collaborationUses())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->features())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->generalizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->inheritedMembers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateMachineObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isFinalSpecialization();
}

QObject *QUmlStateMachineObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlStateMachineObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedUseCases())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->powertypeExtents())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->redefinedClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateMachineObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlStateMachineObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->substitutions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateMachineObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlStateMachineObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->useCases())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlStateMachineObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedConnectors())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->parts())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->roles())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlStateMachineObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedPorts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlStateMachineObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlStateMachineObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->interfaceRealizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedBehaviors())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlStateMachineObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->extensions())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateMachineObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isAbstract();
}

bool QUmlStateMachineObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isActive();
}

const QList<QObject *> QUmlStateMachineObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->nestedClassifiers())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlStateMachineObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedAttributes())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlStateMachineObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedOperations())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlStateMachineObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedReceptions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->superClasses())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlStateMachineObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->context()->asQObject();
}

bool QUmlStateMachineObject::isReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isReentrant();
}

const QList<QObject *> QUmlStateMachineObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedParameters())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlStateMachineObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ownedParameterSets())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->postconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->preconditions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateMachineObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [StateMachine]

const QSet<QObject *> QUmlStateMachineObject::connectionPoints() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->connectionPoints())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::extendedStateMachines() const
{
    QSet<QObject *> set;
    foreach (QUmlStateMachine *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->extendedStateMachines())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::regions() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->regions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::submachineStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->submachineStates())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStateMachineObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateMachineObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStateMachineObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStateMachineObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateMachineObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStateMachineObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlStateMachineObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlStateMachineObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlStateMachineObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateMachineObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlStateMachineObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlStateMachineObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]
// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlStateMachineObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlStateMachineObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStateMachineObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateMachineObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlStateMachineObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlStateMachineObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateMachineObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isTemplate();
}

bool QUmlStateMachineObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlStateMachineObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlStateMachineObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [StateMachine]

QObject *QUmlStateMachineObject::LCA(QObject *s1, QObject *s2) const
{
    if (!qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->LCA(qmodelingobjectproperty_cast<QUmlState *>(s1), qmodelingobjectproperty_cast<QUmlState *>(s2)))
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->LCA(qmodelingobjectproperty_cast<QUmlState *>(s1), qmodelingobjectproperty_cast<QUmlState *>(s2))->asQObject();
}

bool QUmlStateMachineObject::ancestor(QObject *s1, QObject *s2) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->ancestor(qmodelingobjectproperty_cast<QUmlState *>(s1), qmodelingobjectproperty_cast<QUmlState *>(s2));
}

bool QUmlStateMachineObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStateMachineObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlStateMachine *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStateMachineObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateMachineObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateMachineObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateMachineObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateMachineObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStateMachineObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateMachineObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateMachineObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setName(name);
}

void QUmlStateMachineObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStateMachineObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStateMachineObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlStateMachineObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStateMachineObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStateMachineObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStateMachineObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStateMachineObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStateMachineObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStateMachineObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStateMachineObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStateMachineObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStateMachineObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStateMachineObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlStateMachineObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlStateMachineObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlStateMachineObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setVisibility(visibility);
}

void QUmlStateMachineObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlStateMachineObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStateMachineObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setLeaf(isLeaf);
}

void QUmlStateMachineObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlStateMachineObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStateMachineObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStateMachineObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStateMachineObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlStateMachineObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlStateMachineObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlStateMachineObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlStateMachineObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlStateMachineObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlStateMachineObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlStateMachineObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlStateMachineObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlStateMachineObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlStateMachineObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlStateMachineObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlStateMachineObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlStateMachineObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlStateMachineObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlStateMachineObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlStateMachineObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlStateMachineObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlStateMachineObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlStateMachineObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlStateMachineObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlStateMachineObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlStateMachineObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlStateMachineObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlStateMachineObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlStateMachineObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlStateMachineObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlStateMachineObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlStateMachineObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlStateMachineObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlStateMachineObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlStateMachineObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlStateMachineObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlStateMachineObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlStateMachineObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlStateMachineObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlStateMachineObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlStateMachineObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlStateMachineObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlStateMachineObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlStateMachineObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlStateMachineObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlStateMachineObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlStateMachineObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setAbstract(isAbstract);
}

void QUmlStateMachineObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlStateMachineObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setActive(isActive);
}

void QUmlStateMachineObject::unsetActive()
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("active"));
}

void QUmlStateMachineObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlStateMachineObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlStateMachineObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlStateMachineObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlStateMachineObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlStateMachineObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlStateMachineObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlStateMachineObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlStateMachineObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlStateMachineObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlStateMachineObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setContext(qmodelingobjectproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlStateMachineObject::setReentrant(bool isReentrant)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setReentrant(isReentrant);
}

void QUmlStateMachineObject::unsetReentrant()
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("reentrant"));
}

void QUmlStateMachineObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlStateMachineObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlStateMachineObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlStateMachineObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlStateMachineObject::addPostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlStateMachineObject::removePostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removePostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlStateMachineObject::addPrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlStateMachineObject::removePrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removePrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlStateMachineObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [StateMachine]

void QUmlStateMachineObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlStateMachineObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlStateMachineObject::addExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addExtendedStateMachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlStateMachineObject::removeExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeExtendedStateMachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(extendedStateMachine));
}

void QUmlStateMachineObject::addRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlStateMachineObject::removeRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlStateMachineObject::addSubmachineState(QObject *submachineState)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->addSubmachineState(qmodelingobjectproperty_cast<QUmlState *>(submachineState));
}

void QUmlStateMachineObject::removeSubmachineState(QObject *submachineState)
{
    qmodelingobjectproperty_cast<QUmlStateMachine *>(this)->removeSubmachineState(qmodelingobjectproperty_cast<QUmlState *>(submachineState));
}

QT_END_NAMESPACE

