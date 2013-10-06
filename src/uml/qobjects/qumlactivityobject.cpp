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

QUmlActivityObject::QUmlActivityObject(QUmlActivity *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlActivityObject::~QUmlActivityObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlActivity *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActivityObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActivityObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlActivityObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->name();
}

QObject *QUmlActivityObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->nameExpression()->asQObject();
}

QObject *QUmlActivityObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->namespace_()->asQObject();
}

QString QUmlActivityObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlActivityObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->elementImports())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->importedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->members())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedRules())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->packageImports())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlActivityObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlActivityObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlActivityObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActivityObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActivityObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlActivityObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->templateBindings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlActivityObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->attributes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->collaborationUses())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->features())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->generalizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->inheritedMembers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isFinalSpecialization();
}

QObject *QUmlActivityObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlActivityObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedUseCases())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->powertypeExtents())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->redefinedClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlActivityObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->substitutions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlActivityObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->useCases())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlActivityObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedConnectors())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->parts())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->roles())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlActivityObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedPorts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlActivityObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlActivityObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->interfaceRealizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedBehaviors())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlActivityObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->extensions())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isAbstract();
}

bool QUmlActivityObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isActive();
}

const QList<QObject *> QUmlActivityObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->nestedClassifiers())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlActivityObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedAttributes())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlActivityObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedOperations())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlActivityObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedReceptions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->superClasses())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlActivityObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->context()->asQObject();
}

bool QUmlActivityObject::isReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isReentrant();
}

const QList<QObject *> QUmlActivityObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedParameters())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlActivityObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->ownedParameterSets())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->postconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->preconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::redefinedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->redefinedBehaviors())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivity *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivity *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [Activity]

const QSet<QObject *> QUmlActivityObject::edges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->edges())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::groups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->groups())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::isReadOnly() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isReadOnly();
}

bool QUmlActivityObject::isSingleExecution() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isSingleExecution();
}

const QSet<QObject *> QUmlActivityObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->nodes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::partitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->partitions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::structuredNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlStructuredActivityNode *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->structuredNodes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityObject::variables() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->variables())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActivityObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActivityObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActivityObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActivityObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlActivityObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlActivityObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlActivityObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlActivityObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlActivityObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlActivityObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActivityObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlActivityObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlActivityObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActivityObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlActivityObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlActivityObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->isTemplate();
}

bool QUmlActivityObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlActivity *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlActivityObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlActivityObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlActivity *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setName(name);
}

void QUmlActivityObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActivityObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActivityObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlActivityObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlActivityObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlActivityObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlActivityObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlActivityObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlActivityObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlActivityObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlActivityObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlActivityObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlActivityObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlActivityObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlActivityObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlActivityObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlActivityObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setVisibility(visibility);
}

void QUmlActivityObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlActivityObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActivityObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setLeaf(isLeaf);
}

void QUmlActivityObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlActivityObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActivityObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlActivityObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlActivityObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlActivityObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlActivityObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlActivityObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlActivityObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlActivityObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlActivityObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlActivityObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlActivityObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlActivityObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlActivityObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlActivityObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlActivityObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlActivityObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlActivityObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlActivityObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlActivityObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlActivityObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlActivityObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlActivityObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlActivityObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlActivityObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlActivityObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlActivityObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlActivityObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlActivityObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlActivityObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlActivityObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlActivityObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlActivityObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlActivityObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlActivityObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlActivityObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlActivityObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlActivityObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlActivityObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlActivityObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlActivityObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlActivityObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlActivityObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlActivityObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlActivityObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setAbstract(isAbstract);
}

void QUmlActivityObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlActivityObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setActive(isActive);
}

void QUmlActivityObject::unsetActive()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("active"));
}

void QUmlActivityObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlActivityObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlActivityObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlActivityObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlActivityObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlActivityObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlActivityObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlActivityObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlActivityObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlActivityObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlActivityObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setContext(qmodelingobjectproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlActivityObject::setReentrant(bool isReentrant)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setReentrant(isReentrant);
}

void QUmlActivityObject::unsetReentrant()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("reentrant"));
}

void QUmlActivityObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlActivityObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlActivityObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlActivityObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlActivityObject::addPostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlActivityObject::removePostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removePostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlActivityObject::addPrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlActivityObject::removePrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removePrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlActivityObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlActivityObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlActivityObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [Activity]

void QUmlActivityObject::addEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityObject::removeEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityObject::addGroup(QObject *group)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(group));
}

void QUmlActivityObject::removeGroup(QObject *group)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(group));
}

void QUmlActivityObject::setReadOnly(bool isReadOnly)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setReadOnly(isReadOnly);
}

void QUmlActivityObject::unsetReadOnly()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("readOnly"));
}

void QUmlActivityObject::setSingleExecution(bool isSingleExecution)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->setSingleExecution(isSingleExecution);
}

void QUmlActivityObject::unsetSingleExecution()
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("singleExecution"));
}

void QUmlActivityObject::addNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityObject::removeNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityObject::addPartition(QObject *partition)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(partition));
}

void QUmlActivityObject::removePartition(QObject *partition)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removePartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(partition));
}

void QUmlActivityObject::addStructuredNode(QObject *structuredNode)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(structuredNode));
}

void QUmlActivityObject::removeStructuredNode(QObject *structuredNode)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(structuredNode));
}

void QUmlActivityObject::addVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->addVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

void QUmlActivityObject::removeVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlActivity *>(this)->removeVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

QT_END_NAMESPACE

