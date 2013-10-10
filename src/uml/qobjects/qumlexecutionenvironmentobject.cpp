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
#include "qumlexecutionenvironmentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlExecutionEnvironment>
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
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlNode>
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

QUmlExecutionEnvironmentObject::QUmlExecutionEnvironmentObject(QUmlExecutionEnvironment *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlExecutionEnvironmentObject::~QUmlExecutionEnvironmentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExecutionEnvironmentObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExecutionEnvironmentObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlExecutionEnvironmentObject::name() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->name();
}

QObject *QUmlExecutionEnvironmentObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlExecutionEnvironmentObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->namespace_()->asQModelingObject();
}

QString QUmlExecutionEnvironmentObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlExecutionEnvironmentObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlExecutionEnvironmentObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlExecutionEnvironmentObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlExecutionEnvironmentObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExecutionEnvironmentObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlExecutionEnvironmentObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlExecutionEnvironmentObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionEnvironmentObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isFinalSpecialization();
}

QObject *QUmlExecutionEnvironmentObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExecutionEnvironmentObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExecutionEnvironmentObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlExecutionEnvironmentObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlExecutionEnvironmentObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionEnvironmentObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isAbstract();
}

bool QUmlExecutionEnvironmentObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isActive();
}

const QList<QObject *> QUmlExecutionEnvironmentObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlExecutionEnvironmentObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlExecutionEnvironmentObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlExecutionEnvironmentObject::deployedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->deployedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionEnvironmentObject::deployments() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->deployments())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Node]

const QSet<QObject *> QUmlExecutionEnvironmentObject::nestedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlNode *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->nestedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExecutionEnvironmentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionEnvironmentObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExecutionEnvironmentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExecutionEnvironmentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionEnvironmentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExecutionEnvironmentObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlExecutionEnvironmentObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlExecutionEnvironmentObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlExecutionEnvironmentObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionEnvironmentObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlExecutionEnvironmentObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlExecutionEnvironmentObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlExecutionEnvironmentObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExecutionEnvironmentObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlExecutionEnvironmentObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlExecutionEnvironmentObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExecutionEnvironmentObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionEnvironmentObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlExecutionEnvironmentObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlExecutionEnvironmentObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionEnvironmentObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->isTemplate();
}

bool QUmlExecutionEnvironmentObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlExecutionEnvironmentObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlExecutionEnvironmentObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExecutionEnvironmentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExecutionEnvironmentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExecutionEnvironmentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExecutionEnvironmentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExecutionEnvironmentObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExecutionEnvironmentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExecutionEnvironmentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExecutionEnvironmentObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setName(name);
}

void QUmlExecutionEnvironmentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExecutionEnvironmentObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExecutionEnvironmentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlExecutionEnvironmentObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExecutionEnvironmentObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExecutionEnvironmentObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExecutionEnvironmentObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExecutionEnvironmentObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExecutionEnvironmentObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExecutionEnvironmentObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExecutionEnvironmentObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExecutionEnvironmentObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExecutionEnvironmentObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExecutionEnvironmentObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlExecutionEnvironmentObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExecutionEnvironmentObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlExecutionEnvironmentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setVisibility(visibility);
}

void QUmlExecutionEnvironmentObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlExecutionEnvironmentObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExecutionEnvironmentObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setLeaf(isLeaf);
}

void QUmlExecutionEnvironmentObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlExecutionEnvironmentObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExecutionEnvironmentObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExecutionEnvironmentObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExecutionEnvironmentObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlExecutionEnvironmentObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlExecutionEnvironmentObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlExecutionEnvironmentObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlExecutionEnvironmentObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlExecutionEnvironmentObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlExecutionEnvironmentObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlExecutionEnvironmentObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlExecutionEnvironmentObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlExecutionEnvironmentObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlExecutionEnvironmentObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlExecutionEnvironmentObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlExecutionEnvironmentObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlExecutionEnvironmentObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlExecutionEnvironmentObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlExecutionEnvironmentObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlExecutionEnvironmentObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlExecutionEnvironmentObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlExecutionEnvironmentObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlExecutionEnvironmentObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlExecutionEnvironmentObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlExecutionEnvironmentObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlExecutionEnvironmentObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlExecutionEnvironmentObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlExecutionEnvironmentObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlExecutionEnvironmentObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlExecutionEnvironmentObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlExecutionEnvironmentObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlExecutionEnvironmentObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlExecutionEnvironmentObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlExecutionEnvironmentObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlExecutionEnvironmentObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlExecutionEnvironmentObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlExecutionEnvironmentObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlExecutionEnvironmentObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlExecutionEnvironmentObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlExecutionEnvironmentObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlExecutionEnvironmentObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlExecutionEnvironmentObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlExecutionEnvironmentObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlExecutionEnvironmentObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlExecutionEnvironmentObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlExecutionEnvironmentObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlExecutionEnvironmentObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setAbstract(isAbstract);
}

void QUmlExecutionEnvironmentObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlExecutionEnvironmentObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->setActive(isActive);
}

void QUmlExecutionEnvironmentObject::unsetActive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("active"));
}

void QUmlExecutionEnvironmentObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlExecutionEnvironmentObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlExecutionEnvironmentObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlExecutionEnvironmentObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlExecutionEnvironmentObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlExecutionEnvironmentObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlExecutionEnvironmentObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlExecutionEnvironmentObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlExecutionEnvironmentObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

void QUmlExecutionEnvironmentObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlExecutionEnvironmentObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlExecutionEnvironmentObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlExecutionEnvironmentObject::addDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlExecutionEnvironmentObject::removeDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [Node]

void QUmlExecutionEnvironmentObject::addNestedNode(QObject *nestedNode)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->addNestedNode(qmodelingelementproperty_cast<QUmlNode *>(nestedNode));
}

void QUmlExecutionEnvironmentObject::removeNestedNode(QObject *nestedNode)
{
    qmodelingelementproperty_cast<QUmlExecutionEnvironment *>(this)->removeNestedNode(qmodelingelementproperty_cast<QUmlNode *>(nestedNode));
}


void QUmlExecutionEnvironmentObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDeploymentTarget");
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployments"))));

    d->propertyGroups << QStringLiteral("QUmlNode");
    d->groupProperties.insert(QStringLiteral("QUmlNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedNodes"))));

    d->propertyGroups << QStringLiteral("QUmlExecutionEnvironment");
}

void QUmlExecutionEnvironmentObject::setPropertyData()
{
}

QT_END_NAMESPACE

