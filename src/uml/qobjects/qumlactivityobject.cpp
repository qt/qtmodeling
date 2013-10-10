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
#include "qumlactivityobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
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
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlActivityObject::QUmlActivityObject(QUmlActivity *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlActivityObject::~QUmlActivityObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlActivity *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActivityObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActivityObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlActivityObject::name() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->name();
}

QObject *QUmlActivityObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlActivityObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->namespace_()->asQModelingObject();
}

QString QUmlActivityObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlActivityObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlActivityObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlActivityObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlActivityObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActivityObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActivityObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlActivityObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlActivityObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isFinalSpecialization();
}

QObject *QUmlActivityObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlActivityObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlActivityObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlActivityObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlActivityObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isAbstract();
}

bool QUmlActivityObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isActive();
}

const QList<QObject *> QUmlActivityObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlActivityObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlActivityObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlActivityObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlActivityObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->context()->asQModelingObject();
}

bool QUmlActivityObject::isReentrant() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isReentrant();
}

const QList<QObject *> QUmlActivityObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlActivityObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::redefinedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->redefinedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlActivity *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivity *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [Activity]

const QSet<QObject *> QUmlActivityObject::edges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->edges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::groups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->groups())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::isReadOnly() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isReadOnly();
}

bool QUmlActivityObject::isSingleExecution() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isSingleExecution();
}

const QSet<QObject *> QUmlActivityObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->nodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::partitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->partitions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::structuredNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlStructuredActivityNode *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->structuredNodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::variables() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->variables())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActivityObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActivityObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlActivityObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActivityObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlActivityObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlActivityObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlActivityObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlActivityObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlActivityObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlActivityObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActivityObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlActivityObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlActivityObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlActivityObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlActivityObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlActivityObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->isTemplate();
}

bool QUmlActivityObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlActivity *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlActivityObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlActivityObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlActivity *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setName(name);
}

void QUmlActivityObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActivityObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActivityObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlActivityObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlActivityObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlActivityObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlActivityObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlActivityObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlActivityObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlActivityObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlActivityObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlActivityObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlActivityObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlActivityObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlActivityObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlActivityObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlActivityObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setVisibility(visibility);
}

void QUmlActivityObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlActivityObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActivityObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setLeaf(isLeaf);
}

void QUmlActivityObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlActivityObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActivityObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlActivityObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlActivityObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlActivityObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlActivityObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlActivityObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlActivityObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlActivityObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlActivityObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlActivityObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlActivityObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlActivityObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlActivityObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlActivityObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlActivityObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlActivityObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlActivityObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlActivityObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlActivityObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlActivityObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlActivityObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlActivityObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlActivityObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlActivityObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlActivityObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlActivityObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlActivityObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlActivityObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlActivityObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlActivityObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlActivityObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlActivityObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
}

void QUmlActivityObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlActivityObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlActivityObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlActivityObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlActivityObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlActivityObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlActivityObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlActivityObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlActivityObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlActivityObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlActivityObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
}

void QUmlActivityObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setAbstract(isAbstract);
}

void QUmlActivityObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlActivityObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setActive(isActive);
}

void QUmlActivityObject::unsetActive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("active"));
}

void QUmlActivityObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlActivityObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlActivityObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlActivityObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlActivityObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlActivityObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlActivityObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlActivityObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlActivityObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

void QUmlActivityObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlActivityObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setContext(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlActivityObject::setReentrant(bool isReentrant)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setReentrant(isReentrant);
}

void QUmlActivityObject::unsetReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("reentrant"));
}

void QUmlActivityObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlActivityObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlActivityObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlActivityObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlActivityObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlActivityObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlActivityObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlActivityObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlActivityObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlActivityObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeRedefinedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlActivityObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [Activity]

void QUmlActivityObject::addEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityObject::removeEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityObject::addGroup(QObject *group)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(group));
}

void QUmlActivityObject::removeGroup(QObject *group)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(group));
}

void QUmlActivityObject::setReadOnly(bool isReadOnly)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setReadOnly(isReadOnly);
}

void QUmlActivityObject::unsetReadOnly()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("readOnly"));
}

void QUmlActivityObject::setSingleExecution(bool isSingleExecution)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->setSingleExecution(isSingleExecution);
}

void QUmlActivityObject::unsetSingleExecution()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("singleExecution"));
}

void QUmlActivityObject::addNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityObject::removeNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityObject::addPartition(QObject *partition)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(partition));
}

void QUmlActivityObject::removePartition(QObject *partition)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removePartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(partition));
}

void QUmlActivityObject::addStructuredNode(QObject *structuredNode)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(structuredNode));
}

void QUmlActivityObject::removeStructuredNode(QObject *structuredNode)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(structuredNode));
}

void QUmlActivityObject::addVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->addVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

void QUmlActivityObject::removeVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlActivity *>(this)->removeVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}


void QUmlActivityObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlActivity");
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("edges"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("groups"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReadOnly"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSingleExecution"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nodes"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("partitions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuredNodes"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivity"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("variables"))));
}

void QUmlActivityObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, DocumentationRole, QStringLiteral("Edges expressing flow between nodes of the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, edges, OppositeEndRole, QStringLiteral("ActivityEdge-activity"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, DocumentationRole, QStringLiteral("Top-level groups in the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, groups, OppositeEndRole, QStringLiteral("ActivityGroup-inActivity"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, DocumentationRole, QStringLiteral("If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isReadOnly, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, DocumentationRole, QStringLiteral("If true, all invocations of the activity are handled by the same execution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, isSingleExecution, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, DocumentationRole, QStringLiteral("Nodes coordinated by the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, nodes, OppositeEndRole, QStringLiteral("ActivityNode-activity"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, DocumentationRole, QStringLiteral("Top-level partitions in the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, SubsettedPropertiesRole, QStringLiteral("Activity-group"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, partitions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, DocumentationRole, QStringLiteral("Top-level structured nodes in the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, SubsettedPropertiesRole, QStringLiteral("Activity-group Activity-node"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, structuredNodes, OppositeEndRole, QStringLiteral("StructuredActivityNode-activity"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, PropertyClassRole, QStringLiteral("QUmlActivity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, DocumentationRole, QStringLiteral("Top-level variables in the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivity, variables, OppositeEndRole, QStringLiteral("Variable-activityScope"));

}

QT_END_NAMESPACE

