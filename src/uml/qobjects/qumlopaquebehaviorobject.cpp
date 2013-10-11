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
#include "qumlopaquebehaviorobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlOpaqueBehavior>
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

QUmlOpaqueBehaviorObject::QUmlOpaqueBehaviorObject(QUmlOpaqueBehavior *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlOpaqueBehaviorObject::~QUmlOpaqueBehaviorObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOpaqueBehaviorObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlOpaqueBehaviorObject::name() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->name();
}

QObject *QUmlOpaqueBehaviorObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlOpaqueBehaviorObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->namespace_()->asQModelingObject();
}

QString QUmlOpaqueBehaviorObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlOpaqueBehaviorObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlOpaqueBehaviorObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlOpaqueBehaviorObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlOpaqueBehaviorObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOpaqueBehaviorObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlOpaqueBehaviorObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlOpaqueBehaviorObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isFinalSpecialization();
}

QObject *QUmlOpaqueBehaviorObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlOpaqueBehaviorObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlOpaqueBehaviorObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isAbstract();
}

bool QUmlOpaqueBehaviorObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isActive();
}

const QList<QObject *> QUmlOpaqueBehaviorObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlOpaqueBehaviorObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlOpaqueBehaviorObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlOpaqueBehaviorObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->context()->asQModelingObject();
}

bool QUmlOpaqueBehaviorObject::isReentrant() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isReentrant();
}

const QList<QObject *> QUmlOpaqueBehaviorObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->redefinedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [OpaqueBehavior]

const QList<QString> QUmlOpaqueBehaviorObject::bodies() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->bodies();
}

const QList<QString> QUmlOpaqueBehaviorObject::languages() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->languages();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOpaqueBehaviorObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOpaqueBehaviorObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlOpaqueBehaviorObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOpaqueBehaviorObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlOpaqueBehaviorObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlOpaqueBehaviorObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlOpaqueBehaviorObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlOpaqueBehaviorObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlOpaqueBehaviorObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlOpaqueBehaviorObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlOpaqueBehaviorObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlOpaqueBehaviorObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlOpaqueBehaviorObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlOpaqueBehaviorObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlOpaqueBehaviorObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlOpaqueBehaviorObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->isTemplate();
}

bool QUmlOpaqueBehaviorObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlOpaqueBehaviorObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlOpaqueBehaviorObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOpaqueBehaviorObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueBehaviorObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueBehaviorObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueBehaviorObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueBehaviorObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOpaqueBehaviorObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueBehaviorObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueBehaviorObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setName(name);
}

void QUmlOpaqueBehaviorObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOpaqueBehaviorObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOpaqueBehaviorObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlOpaqueBehaviorObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOpaqueBehaviorObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOpaqueBehaviorObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOpaqueBehaviorObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOpaqueBehaviorObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOpaqueBehaviorObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOpaqueBehaviorObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOpaqueBehaviorObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOpaqueBehaviorObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOpaqueBehaviorObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOpaqueBehaviorObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlOpaqueBehaviorObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlOpaqueBehaviorObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlOpaqueBehaviorObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setVisibility(visibility);
}

void QUmlOpaqueBehaviorObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlOpaqueBehaviorObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOpaqueBehaviorObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setLeaf(isLeaf);
}

void QUmlOpaqueBehaviorObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlOpaqueBehaviorObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueBehaviorObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueBehaviorObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOpaqueBehaviorObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlOpaqueBehaviorObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlOpaqueBehaviorObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlOpaqueBehaviorObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlOpaqueBehaviorObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlOpaqueBehaviorObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlOpaqueBehaviorObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlOpaqueBehaviorObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlOpaqueBehaviorObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlOpaqueBehaviorObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlOpaqueBehaviorObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlOpaqueBehaviorObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlOpaqueBehaviorObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlOpaqueBehaviorObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlOpaqueBehaviorObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlOpaqueBehaviorObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlOpaqueBehaviorObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlOpaqueBehaviorObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlOpaqueBehaviorObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlOpaqueBehaviorObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlOpaqueBehaviorObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlOpaqueBehaviorObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlOpaqueBehaviorObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlOpaqueBehaviorObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlOpaqueBehaviorObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlOpaqueBehaviorObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlOpaqueBehaviorObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlOpaqueBehaviorObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlOpaqueBehaviorObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlOpaqueBehaviorObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlOpaqueBehaviorObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlOpaqueBehaviorObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlOpaqueBehaviorObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlOpaqueBehaviorObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlOpaqueBehaviorObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlOpaqueBehaviorObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlOpaqueBehaviorObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlOpaqueBehaviorObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlOpaqueBehaviorObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlOpaqueBehaviorObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlOpaqueBehaviorObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlOpaqueBehaviorObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlOpaqueBehaviorObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlOpaqueBehaviorObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setAbstract(isAbstract);
}

void QUmlOpaqueBehaviorObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlOpaqueBehaviorObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setActive(isActive);
}

void QUmlOpaqueBehaviorObject::unsetActive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("active"));
}

void QUmlOpaqueBehaviorObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlOpaqueBehaviorObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlOpaqueBehaviorObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlOpaqueBehaviorObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlOpaqueBehaviorObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlOpaqueBehaviorObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlOpaqueBehaviorObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlOpaqueBehaviorObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlOpaqueBehaviorObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

void QUmlOpaqueBehaviorObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlOpaqueBehaviorObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setContext(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlOpaqueBehaviorObject::setReentrant(bool isReentrant)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setReentrant(isReentrant);
}

void QUmlOpaqueBehaviorObject::unsetReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("reentrant"));
}

void QUmlOpaqueBehaviorObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOpaqueBehaviorObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOpaqueBehaviorObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlOpaqueBehaviorObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlOpaqueBehaviorObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOpaqueBehaviorObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOpaqueBehaviorObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOpaqueBehaviorObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOpaqueBehaviorObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlOpaqueBehaviorObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlOpaqueBehaviorObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueBehavior]

void QUmlOpaqueBehaviorObject::addBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addBody(body);
}

void QUmlOpaqueBehaviorObject::removeBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeBody(body);
}

void QUmlOpaqueBehaviorObject::addLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->addLanguage(language);
}

void QUmlOpaqueBehaviorObject::removeLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlOpaqueBehavior *>(this)->removeLanguage(language);
}


void QUmlOpaqueBehaviorObject::setGroupProperties()
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
}

void QUmlOpaqueBehaviorObject::setPropertyData()
{
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

