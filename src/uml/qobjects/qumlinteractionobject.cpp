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
#include "qumlinteractionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlAction>
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
#include <QtUml/QUmlGate>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>
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

QUmlInteractionObject::QUmlInteractionObject(QUmlInteraction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlInteractionObject::~QUmlInteractionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInteraction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInteractionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInteractionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlInteractionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->name();
}

QObject *QUmlInteractionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlInteractionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlInteractionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlInteractionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInteractionObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInteractionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlInteractionObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlInteractionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlInteractionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlInteractionObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlInteractionObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isFinalSpecialization();
}

QObject *QUmlInteractionObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlInteractionObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlInteractionObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlInteractionObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlInteractionObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlInteractionObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlInteractionObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlInteractionObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlInteractionObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isAbstract();
}

bool QUmlInteractionObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isActive();
}

const QList<QObject *> QUmlInteractionObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlInteractionObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlInteractionObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlInteractionObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlInteractionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->context()->asQModelingObject();
}

bool QUmlInteractionObject::isReentrant() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isReentrant();
}

const QList<QObject *> QUmlInteractionObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlInteractionObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::redefinedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->redefinedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlInteractionObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlInteractionObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlInteraction *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteraction *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlInteractionObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Interaction]

const QSet<QObject *> QUmlInteractionObject::actions() const
{
    QSet<QObject *> set;
    foreach (QUmlAction *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->actions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::formalGates() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->formalGates())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlInteractionObject::fragments() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionFragment *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->fragments())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlInteractionObject::lifelines() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->lifelines())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::messages() const
{
    QSet<QObject *> set;
    foreach (QUmlMessage *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->messages())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInteractionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInteractionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInteractionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInteractionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlInteractionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlInteractionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlInteractionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlInteractionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInteractionObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlInteractionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlInteractionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlInteractionObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlInteractionObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInteractionObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlInteractionObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlInteractionObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->isTemplate();
}

bool QUmlInteractionObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlInteraction *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlInteractionObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlInteractionObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInteraction *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInteractionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInteractionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setName(name);
}

void QUmlInteractionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInteractionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInteractionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlInteractionObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlInteractionObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInteractionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInteractionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setVisibility(visibility);
}

void QUmlInteractionObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlInteractionObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlInteractionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setLeaf(isLeaf);
}

void QUmlInteractionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlInteractionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInteractionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInteractionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlInteractionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlInteractionObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlInteractionObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlInteractionObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInteractionObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInteractionObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInteractionObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInteractionObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlInteractionObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlInteractionObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInteractionObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInteractionObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInteractionObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInteractionObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlInteractionObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlInteractionObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlInteractionObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInteractionObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInteractionObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInteractionObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInteractionObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInteractionObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInteractionObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlInteractionObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInteractionObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInteractionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlInteractionObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlInteractionObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlInteractionObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlInteractionObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlInteractionObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlInteractionObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlInteractionObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlInteractionObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlInteractionObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlInteractionObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlInteractionObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlInteractionObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlInteractionObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlInteractionObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlInteractionObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlInteractionObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlInteractionObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlInteractionObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setAbstract(isAbstract);
}

void QUmlInteractionObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlInteractionObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setActive(isActive);
}

void QUmlInteractionObject::unsetActive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("active"));
}

void QUmlInteractionObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlInteractionObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlInteractionObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlInteractionObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlInteractionObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlInteractionObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlInteractionObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlInteractionObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlInteractionObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

void QUmlInteractionObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlInteractionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setContext(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlInteractionObject::setReentrant(bool isReentrant)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setReentrant(isReentrant);
}

void QUmlInteractionObject::unsetReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("reentrant"));
}

void QUmlInteractionObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlInteractionObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlInteractionObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlInteractionObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlInteractionObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlInteractionObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlInteractionObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlInteractionObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlInteractionObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlInteractionObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlInteractionObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlInteractionObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlInteractionObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlInteractionObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlInteractionObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [Interaction]

void QUmlInteractionObject::addAction(QObject *action)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addAction(qmodelingelementproperty_cast<QUmlAction *>(action));
}

void QUmlInteractionObject::removeAction(QObject *action)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeAction(qmodelingelementproperty_cast<QUmlAction *>(action));
}

void QUmlInteractionObject::addFormalGate(QObject *formalGate)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addFormalGate(qmodelingelementproperty_cast<QUmlGate *>(formalGate));
}

void QUmlInteractionObject::removeFormalGate(QObject *formalGate)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeFormalGate(qmodelingelementproperty_cast<QUmlGate *>(formalGate));
}

void QUmlInteractionObject::addFragment(QObject *fragment)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addFragment(qmodelingelementproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionObject::removeFragment(QObject *fragment)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeFragment(qmodelingelementproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionObject::addLifeline(QObject *lifeline)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addLifeline(qmodelingelementproperty_cast<QUmlLifeline *>(lifeline));
}

void QUmlInteractionObject::removeLifeline(QObject *lifeline)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeLifeline(qmodelingelementproperty_cast<QUmlLifeline *>(lifeline));
}

void QUmlInteractionObject::addMessage(QObject *message)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->addMessage(qmodelingelementproperty_cast<QUmlMessage *>(message));
}

void QUmlInteractionObject::removeMessage(QObject *message)
{
    qmodelingelementproperty_cast<QUmlInteraction *>(this)->removeMessage(qmodelingelementproperty_cast<QUmlMessage *>(message));
}


void QUmlInteractionObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedBehaviors"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));

    d->propertyGroups << QStringLiteral("QUmlInteractionFragment");
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingInteraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingOperand"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalOrderings"))));

    d->propertyGroups << QStringLiteral("QUmlInteraction");
    d->groupProperties.insert(QStringLiteral("QUmlInteraction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("actions"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteraction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("formalGates"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteraction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("fragments"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteraction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lifelines"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteraction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("messages"))));
}

void QUmlInteractionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, PropertyClassRole, QStringLiteral("QUmlInteraction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, DocumentationRole, QStringLiteral("Actions owned by the Interaction."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, actions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, PropertyClassRole, QStringLiteral("QUmlInteraction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, DocumentationRole, QStringLiteral("Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, formalGates, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, PropertyClassRole, QStringLiteral("QUmlInteraction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, DocumentationRole, QStringLiteral("The ordered set of fragments in the Interaction."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, fragments, OppositeEndRole, QStringLiteral("InteractionFragment-enclosingInteraction"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, PropertyClassRole, QStringLiteral("QUmlInteraction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, DocumentationRole, QStringLiteral("Specifies the participants in this Interaction."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, lifelines, OppositeEndRole, QStringLiteral("Lifeline-interaction"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, PropertyClassRole, QStringLiteral("QUmlInteraction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, DocumentationRole, QStringLiteral("The Messages contained in this Interaction."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteraction, messages, OppositeEndRole, QStringLiteral("Message-interaction"));

}

QT_END_NAMESPACE

