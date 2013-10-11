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
#include "qumlfunctionbehaviorobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlFunctionBehavior>
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

QUmlFunctionBehaviorObject::QUmlFunctionBehaviorObject(QUmlFunctionBehavior *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlFunctionBehaviorObject::~QUmlFunctionBehaviorObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlFunctionBehaviorObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlFunctionBehaviorObject::name() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->name();
}

QObject *QUmlFunctionBehaviorObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlFunctionBehaviorObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->namespace_()->asQModelingObject();
}

QString QUmlFunctionBehaviorObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlFunctionBehaviorObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlFunctionBehaviorObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlFunctionBehaviorObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlFunctionBehaviorObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlFunctionBehaviorObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isLeaf();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlFunctionBehaviorObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlFunctionBehaviorObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isFinalSpecialization();
}

QObject *QUmlFunctionBehaviorObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlFunctionBehaviorObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlFunctionBehaviorObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isAbstract();
}

bool QUmlFunctionBehaviorObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isActive();
}

const QList<QObject *> QUmlFunctionBehaviorObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlFunctionBehaviorObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlFunctionBehaviorObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlFunctionBehaviorObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->context()->asQModelingObject();
}

bool QUmlFunctionBehaviorObject::isReentrant() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isReentrant();
}

const QList<QObject *> QUmlFunctionBehaviorObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->redefinedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [OpaqueBehavior]

const QList<QString> QUmlFunctionBehaviorObject::bodies() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->bodies();
}

const QList<QString> QUmlFunctionBehaviorObject::languages() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->languages();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlFunctionBehaviorObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFunctionBehaviorObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlFunctionBehaviorObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlFunctionBehaviorObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlFunctionBehaviorObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlFunctionBehaviorObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlFunctionBehaviorObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlFunctionBehaviorObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFunctionBehaviorObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlFunctionBehaviorObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlFunctionBehaviorObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlFunctionBehaviorObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlFunctionBehaviorObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlFunctionBehaviorObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlFunctionBehaviorObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlFunctionBehaviorObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFunctionBehaviorObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlFunctionBehaviorObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlFunctionBehaviorObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->isTemplate();
}

bool QUmlFunctionBehaviorObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlFunctionBehaviorObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlFunctionBehaviorObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlFunctionBehaviorObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlFunctionBehaviorObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlFunctionBehaviorObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFunctionBehaviorObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFunctionBehaviorObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlFunctionBehaviorObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFunctionBehaviorObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFunctionBehaviorObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setName(name);
}

void QUmlFunctionBehaviorObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlFunctionBehaviorObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlFunctionBehaviorObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlFunctionBehaviorObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFunctionBehaviorObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFunctionBehaviorObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFunctionBehaviorObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFunctionBehaviorObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFunctionBehaviorObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFunctionBehaviorObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFunctionBehaviorObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFunctionBehaviorObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFunctionBehaviorObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFunctionBehaviorObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlFunctionBehaviorObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlFunctionBehaviorObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlFunctionBehaviorObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setVisibility(visibility);
}

void QUmlFunctionBehaviorObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlFunctionBehaviorObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlFunctionBehaviorObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setLeaf(isLeaf);
}

void QUmlFunctionBehaviorObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlFunctionBehaviorObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlFunctionBehaviorObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlFunctionBehaviorObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlFunctionBehaviorObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlFunctionBehaviorObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlFunctionBehaviorObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlFunctionBehaviorObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlFunctionBehaviorObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlFunctionBehaviorObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlFunctionBehaviorObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlFunctionBehaviorObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlFunctionBehaviorObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlFunctionBehaviorObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlFunctionBehaviorObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlFunctionBehaviorObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlFunctionBehaviorObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlFunctionBehaviorObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlFunctionBehaviorObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlFunctionBehaviorObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlFunctionBehaviorObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlFunctionBehaviorObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlFunctionBehaviorObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlFunctionBehaviorObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlFunctionBehaviorObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlFunctionBehaviorObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlFunctionBehaviorObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlFunctionBehaviorObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlFunctionBehaviorObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlFunctionBehaviorObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlFunctionBehaviorObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlFunctionBehaviorObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlFunctionBehaviorObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlFunctionBehaviorObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlFunctionBehaviorObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlFunctionBehaviorObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlFunctionBehaviorObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlFunctionBehaviorObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlFunctionBehaviorObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlFunctionBehaviorObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlFunctionBehaviorObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlFunctionBehaviorObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlFunctionBehaviorObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlFunctionBehaviorObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlFunctionBehaviorObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlFunctionBehaviorObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlFunctionBehaviorObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlFunctionBehaviorObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setAbstract(isAbstract);
}

void QUmlFunctionBehaviorObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlFunctionBehaviorObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setActive(isActive);
}

void QUmlFunctionBehaviorObject::unsetActive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("active"));
}

void QUmlFunctionBehaviorObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlFunctionBehaviorObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlFunctionBehaviorObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlFunctionBehaviorObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlFunctionBehaviorObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlFunctionBehaviorObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlFunctionBehaviorObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlFunctionBehaviorObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlFunctionBehaviorObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

void QUmlFunctionBehaviorObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlFunctionBehaviorObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setContext(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlFunctionBehaviorObject::setReentrant(bool isReentrant)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setReentrant(isReentrant);
}

void QUmlFunctionBehaviorObject::unsetReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("reentrant"));
}

void QUmlFunctionBehaviorObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlFunctionBehaviorObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlFunctionBehaviorObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlFunctionBehaviorObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlFunctionBehaviorObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlFunctionBehaviorObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlFunctionBehaviorObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlFunctionBehaviorObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlFunctionBehaviorObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlFunctionBehaviorObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlFunctionBehaviorObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueBehavior]

void QUmlFunctionBehaviorObject::addBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addBody(body);
}

void QUmlFunctionBehaviorObject::removeBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeBody(body);
}

void QUmlFunctionBehaviorObject::addLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->addLanguage(language);
}

void QUmlFunctionBehaviorObject::removeLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlFunctionBehavior *>(this)->removeLanguage(language);
}


void QUmlFunctionBehaviorObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlOpaqueBehavior");
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodies"))));
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("languages"))));

    d->propertyGroups << QStringLiteral("QUmlFunctionBehavior");
}

void QUmlFunctionBehaviorObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, DocumentationRole, QStringLiteral("The formal template parameter that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, SubsettedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-ownedParameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, PropertyClassRole, QStringLiteral("QUmlType"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, DocumentationRole, QStringLiteral("Specifies the owning package of this classifier, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, SubsettedPropertiesRole, QStringLiteral("A_packagedElement_owningPackage-owningPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, OppositeEndRole, QStringLiteral("Package-ownedType"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, OppositeEndRole, QStringLiteral("TemplateSignature-template"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, DocumentationRole, QStringLiteral("The optional bindings from this element to templates."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, OppositeEndRole, QStringLiteral("TemplateBinding-boundElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, DocumentationRole, QStringLiteral("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, DocumentationRole, QStringLiteral("References the collaboration uses owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, DocumentationRole, QStringLiteral("Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, OppositeEndRole, QStringLiteral("Feature-featuringClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, DocumentationRole, QStringLiteral("Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, DocumentationRole, QStringLiteral("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, OppositeEndRole, QStringLiteral("Generalization-specific"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, DocumentationRole, QStringLiteral("Specifies all elements inherited by this classifier from the general classifiers."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, DocumentationRole, QStringLiteral("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral("TemplateableElement-ownedTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, OppositeEndRole, QStringLiteral("RedefinableTemplateSignature-classifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, DocumentationRole, QStringLiteral("References the use cases owned by this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, DocumentationRole, QStringLiteral("Designates the GeneralizationSet of which the associated Classifier is a power type."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, OppositeEndRole, QStringLiteral("GeneralizationSet-powertype"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, DocumentationRole, QStringLiteral("References the Classifiers that are redefined by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, DocumentationRole, QStringLiteral("References a collaboration use which indicates the collaboration that represents this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, SubsettedPropertiesRole, QStringLiteral("Classifier-collaborationUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, DocumentationRole, QStringLiteral("References the substitutions that are owned by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, OppositeEndRole, QStringLiteral("Substitution-substitutingClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, RedefinedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, OppositeEndRole, QStringLiteral("ClassifierTemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, DocumentationRole, QStringLiteral("The set of use cases for which this Classifier is the subject."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, OppositeEndRole, QStringLiteral("UseCase-subject"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, DocumentationRole, QStringLiteral("References the properties owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Classifier-attribute Namespace-ownedMember StructuredClassifier-role"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, DocumentationRole, QStringLiteral("References the connectors owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, DocumentationRole, QStringLiteral("References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, DocumentationRole, QStringLiteral("References the roles that instances may play in this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, PropertyClassRole, QStringLiteral("QUmlEncapsulatedClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, DocumentationRole, QStringLiteral("References a set of ports that an encapsulated classifier owns."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, SubsettedPropertiesRole, QStringLiteral("StructuredClassifier-ownedAttribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, DocumentationRole, QStringLiteral("A behavior specification that specifies the behavior of the classifier itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, SubsettedPropertiesRole, QStringLiteral("BehavioredClassifier-ownedBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, DocumentationRole, QStringLiteral("The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, OppositeEndRole, QStringLiteral("InterfaceRealization-implementingClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, DocumentationRole, QStringLiteral("References behavior specifications owned by a classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, DocumentationRole, QStringLiteral("References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, OppositeEndRole, QStringLiteral("Extension-metaclass"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, RedefinedPropertiesRole, QStringLiteral("Classifier-isAbstract"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, DocumentationRole, QStringLiteral("Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, DocumentationRole, QStringLiteral("References all the Classifiers that are defined (nested) within the Class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, SubsettedPropertiesRole, QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, DocumentationRole, QStringLiteral("The attributes (i.e. the properties) owned by the class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, RedefinedPropertiesRole, QStringLiteral("StructuredClassifier-ownedAttribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember Classifier-attribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, OppositeEndRole, QStringLiteral("Property-class"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, DocumentationRole, QStringLiteral("The operations owned by the class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, OppositeEndRole, QStringLiteral("Operation-class"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, DocumentationRole, QStringLiteral("Receptions that objects of this class are willing to accept."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, SubsettedPropertiesRole, QStringLiteral("Classifier-feature Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, DocumentationRole, QStringLiteral("This gives the superclasses of a class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, RedefinedPropertiesRole, QStringLiteral("Classifier-general"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, DocumentationRole, QStringLiteral("The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, DocumentationRole, QStringLiteral("Tells whether the behavior can be invoked while it is still executing from a previous invocation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, DocumentationRole, QStringLiteral("References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, DocumentationRole, QStringLiteral("The ParameterSets owned by this Behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, DocumentationRole, QStringLiteral("An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, DocumentationRole, QStringLiteral("An optional set of Constraints specifying what must be fulfilled when the behavior is invoked."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, DocumentationRole, QStringLiteral("References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, SubsettedPropertiesRole, QStringLiteral("Classifier-redefinedClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, DocumentationRole, QStringLiteral("Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, OppositeEndRole, QStringLiteral("BehavioralFeature-method"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, PropertyClassRole, QStringLiteral("QUmlOpaqueBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, DocumentationRole, QStringLiteral("Specifies the behavior in one or more languages."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, bodies, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, PropertyClassRole, QStringLiteral("QUmlOpaqueBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, DocumentationRole, QStringLiteral("Languages the body strings use in the same order as the body strings."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueBehavior, languages, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

