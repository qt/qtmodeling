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

QUmlInteractionObject::QUmlInteractionObject(QUmlInteraction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlInteractionObject::~QUmlInteractionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInteraction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInteractionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInteractionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInteractionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->name();
}

QObject *QUmlInteractionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInteractionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->namespace_()->asQObject();
}

QString QUmlInteractionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlInteractionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->elementImports())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->importedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->members())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedRules())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->packageImports())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInteractionObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInteractionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlInteractionObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlInteractionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlInteractionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlInteractionObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->templateBindings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlInteractionObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->attributes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->collaborationUses())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->features())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->generalizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->inheritedMembers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isFinalSpecialization();
}

QObject *QUmlInteractionObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlInteractionObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedUseCases())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->powertypeExtents())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->redefinedClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlInteractionObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->substitutions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlInteractionObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->useCases())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlInteractionObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedConnectors())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->parts())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->roles())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlInteractionObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedPorts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlInteractionObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlInteractionObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->interfaceRealizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedBehaviors())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlInteractionObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->extensions())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isAbstract();
}

bool QUmlInteractionObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isActive();
}

const QList<QObject *> QUmlInteractionObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->nestedClassifiers())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlInteractionObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedAttributes())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlInteractionObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedOperations())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlInteractionObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedReceptions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->superClasses())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlInteractionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->context()->asQObject();
}

bool QUmlInteractionObject::isReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isReentrant();
}

const QList<QObject *> QUmlInteractionObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedParameters())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlInteractionObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->ownedParameterSets())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->postconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->preconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::redefinedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->redefinedBehaviors())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlInteractionObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlInteractionObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteraction *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlInteractionObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->generalOrderings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Interaction]

const QSet<QObject *> QUmlInteractionObject::actions() const
{
    QSet<QObject *> set;
    foreach (QUmlAction *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->actions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::formalGates() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->formalGates())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlInteractionObject::fragments() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionFragment *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->fragments())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlInteractionObject::lifelines() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->lifelines())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionObject::messages() const
{
    QSet<QObject *> set;
    foreach (QUmlMessage *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->messages())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInteractionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInteractionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInteractionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInteractionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlInteractionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlInteractionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlInteractionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlInteractionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInteractionObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlInteractionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlInteractionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlInteractionObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlInteractionObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInteractionObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlInteractionObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlInteractionObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->isTemplate();
}

bool QUmlInteractionObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlInteraction *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlInteractionObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlInteractionObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInteraction *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInteractionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInteractionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setName(name);
}

void QUmlInteractionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInteractionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInteractionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlInteractionObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlInteractionObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInteractionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInteractionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setVisibility(visibility);
}

void QUmlInteractionObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlInteractionObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlInteractionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setLeaf(isLeaf);
}

void QUmlInteractionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlInteractionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInteractionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInteractionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlInteractionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlInteractionObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlInteractionObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlInteractionObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInteractionObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInteractionObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInteractionObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInteractionObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlInteractionObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlInteractionObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInteractionObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInteractionObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInteractionObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInteractionObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlInteractionObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlInteractionObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlInteractionObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInteractionObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInteractionObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInteractionObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInteractionObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInteractionObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInteractionObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlInteractionObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInteractionObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInteractionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlInteractionObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlInteractionObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlInteractionObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlInteractionObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlInteractionObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlInteractionObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlInteractionObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlInteractionObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlInteractionObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlInteractionObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlInteractionObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlInteractionObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlInteractionObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlInteractionObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlInteractionObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlInteractionObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlInteractionObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlInteractionObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setAbstract(isAbstract);
}

void QUmlInteractionObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlInteractionObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setActive(isActive);
}

void QUmlInteractionObject::unsetActive()
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("active"));
}

void QUmlInteractionObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlInteractionObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlInteractionObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlInteractionObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlInteractionObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlInteractionObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlInteractionObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlInteractionObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlInteractionObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlInteractionObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlInteractionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlInteractionObject::setReentrant(bool isReentrant)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setReentrant(isReentrant);
}

void QUmlInteractionObject::unsetReentrant()
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("reentrant"));
}

void QUmlInteractionObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlInteractionObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlInteractionObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlInteractionObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlInteractionObject::addPostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlInteractionObject::removePostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removePostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlInteractionObject::addPrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlInteractionObject::removePrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removePrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlInteractionObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlInteractionObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlInteractionObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlInteractionObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlInteractionObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlInteractionObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlInteractionObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [Interaction]

void QUmlInteractionObject::addAction(QObject *action)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addAction(qmodelingobjectproperty_cast<QUmlAction *>(action));
}

void QUmlInteractionObject::removeAction(QObject *action)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeAction(qmodelingobjectproperty_cast<QUmlAction *>(action));
}

void QUmlInteractionObject::addFormalGate(QObject *formalGate)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addFormalGate(qmodelingobjectproperty_cast<QUmlGate *>(formalGate));
}

void QUmlInteractionObject::removeFormalGate(QObject *formalGate)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeFormalGate(qmodelingobjectproperty_cast<QUmlGate *>(formalGate));
}

void QUmlInteractionObject::addFragment(QObject *fragment)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addFragment(qmodelingobjectproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionObject::removeFragment(QObject *fragment)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeFragment(qmodelingobjectproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionObject::addLifeline(QObject *lifeline)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addLifeline(qmodelingobjectproperty_cast<QUmlLifeline *>(lifeline));
}

void QUmlInteractionObject::removeLifeline(QObject *lifeline)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeLifeline(qmodelingobjectproperty_cast<QUmlLifeline *>(lifeline));
}

void QUmlInteractionObject::addMessage(QObject *message)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->addMessage(qmodelingobjectproperty_cast<QUmlMessage *>(message));
}

void QUmlInteractionObject::removeMessage(QObject *message)
{
    qmodelingobjectproperty_cast<QUmlInteraction *>(this)->removeMessage(qmodelingobjectproperty_cast<QUmlMessage *>(message));
}

QT_END_NAMESPACE

