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
#include "qumladdstructuralfeaturevalueactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlAddStructuralFeatureValueAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlAddStructuralFeatureValueActionObject::QUmlAddStructuralFeatureValueActionObject(QUmlAddStructuralFeatureValueAction *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAddStructuralFeatureValueActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlAddStructuralFeatureValueActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->name();
}

QObject *QUmlAddStructuralFeatureValueActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlAddStructuralFeatureValueActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAddStructuralFeatureValueActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAddStructuralFeatureValueActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAddStructuralFeatureValueActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAddStructuralFeatureValueActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAddStructuralFeatureValueActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlAddStructuralFeatureValueActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlAddStructuralFeatureValueActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlAddStructuralFeatureValueActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlAddStructuralFeatureValueActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->object()->asQModelingObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::structuralFeature() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->structuralFeature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->structuralFeature()->asQModelingObject();
}

// OWNED ATTRIBUTES [WriteStructuralFeatureAction]

QObject *QUmlAddStructuralFeatureValueActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->result()->asQModelingObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->value()->asQModelingObject();
}

// OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

QObject *QUmlAddStructuralFeatureValueActionObject::insertAt() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->insertAt())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->insertAt()->asQModelingObject();
}

bool QUmlAddStructuralFeatureValueActionObject::isReplaceAll() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isReplaceAll();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAddStructuralFeatureValueActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAddStructuralFeatureValueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAddStructuralFeatureValueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAddStructuralFeatureValueActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAddStructuralFeatureValueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAddStructuralFeatureValueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAddStructuralFeatureValueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlAddStructuralFeatureValueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlAddStructuralFeatureValueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlAddStructuralFeatureValueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlAddStructuralFeatureValueActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAddStructuralFeatureValueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlAddStructuralFeatureValueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlAddStructuralFeatureValueActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlAddStructuralFeatureValueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlAddStructuralFeatureValueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlAddStructuralFeatureValueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlAddStructuralFeatureValueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAddStructuralFeatureValueActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlAddStructuralFeatureValueActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAddStructuralFeatureValueActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
    emit activityChanged(this->activity());
}

void QUmlAddStructuralFeatureValueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlAddStructuralFeatureValueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlAddStructuralFeatureValueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
    emit inInterruptibleRegionsChanged(this->inInterruptibleRegions());
}

void QUmlAddStructuralFeatureValueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
    emit inInterruptibleRegionsChanged(this->inInterruptibleRegions());
}

void QUmlAddStructuralFeatureValueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlAddStructuralFeatureValueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlAddStructuralFeatureValueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
    emit inStructuredNodeChanged(this->inStructuredNode());
}

void QUmlAddStructuralFeatureValueActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlAddStructuralFeatureValueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlAddStructuralFeatureValueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlAddStructuralFeatureValueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
    emit redefinedNodesChanged(this->redefinedNodes());
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
    emit redefinedNodesChanged(this->redefinedNodes());
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAddStructuralFeatureValueActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
    emit handlersChanged(this->handlers());
}

void QUmlAddStructuralFeatureValueActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
    emit handlersChanged(this->handlers());
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAddStructuralFeatureValueActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
    emit contextChanged(this->context());
}

void QUmlAddStructuralFeatureValueActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
    emit inputsChanged(this->inputs());
}

void QUmlAddStructuralFeatureValueActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
    emit inputsChanged(this->inputs());
}

void QUmlAddStructuralFeatureValueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    emit isLocallyReentrantChanged(this->isLocallyReentrant());
}

void QUmlAddStructuralFeatureValueActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    setLocallyReentrant(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLocallyReentrant"));
}

void QUmlAddStructuralFeatureValueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
    emit localPostconditionsChanged(this->localPostconditions());
}

void QUmlAddStructuralFeatureValueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
    emit localPostconditionsChanged(this->localPostconditions());
}

void QUmlAddStructuralFeatureValueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
    emit localPreconditionsChanged(this->localPreconditions());
}

void QUmlAddStructuralFeatureValueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
    emit localPreconditionsChanged(this->localPreconditions());
}

void QUmlAddStructuralFeatureValueActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
    emit outputsChanged(this->outputs());
}

void QUmlAddStructuralFeatureValueActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
    emit outputsChanged(this->outputs());
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlAddStructuralFeatureValueActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
    emit objectChanged(this->object());
}

void QUmlAddStructuralFeatureValueActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setStructuralFeature(qmodelingelementproperty_cast<QUmlStructuralFeature *>(structuralFeature));
    emit structuralFeatureChanged(this->structuralFeature());
}

// SLOTS FOR OWNED ATTRIBUTES [WriteStructuralFeatureAction]

void QUmlAddStructuralFeatureValueActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
    emit resultChanged(this->result());
}

void QUmlAddStructuralFeatureValueActionObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setValue(qmodelingelementproperty_cast<QUmlInputPin *>(value));
    emit valueChanged(this->value());
}

// SLOTS FOR OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

void QUmlAddStructuralFeatureValueActionObject::setInsertAt(QObject *insertAt)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setInsertAt(qmodelingelementproperty_cast<QUmlInputPin *>(insertAt));
    emit insertAtChanged(this->insertAt());
}

void QUmlAddStructuralFeatureValueActionObject::setReplaceAll(bool isReplaceAll)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setReplaceAll(isReplaceAll);
    emit isReplaceAllChanged(this->isReplaceAll());
}

void QUmlAddStructuralFeatureValueActionObject::unsetReplaceAll()
{
    Q_D(QModelingObject);
    setReplaceAll(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isReplaceAll"));
}


void QUmlAddStructuralFeatureValueActionObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlActivityNode");
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inGroups"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inInterruptibleRegions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inPartitions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStructuredNode"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedNodes"))));

    d->propertyGroups << QStringLiteral("QUmlExecutableNode");
    d->groupProperties.insert(QStringLiteral("QUmlExecutableNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("handlers"))));

    d->propertyGroups << QStringLiteral("QUmlAction");
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputs"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLocallyReentrant"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPostconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPreconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputs"))));

    d->propertyGroups << QStringLiteral("QUmlStructuralFeatureAction");
    d->groupProperties.insert(QStringLiteral("QUmlStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("object"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuralFeature"))));

    d->propertyGroups << QStringLiteral("QUmlWriteStructuralFeatureAction");
    d->groupProperties.insert(QStringLiteral("QUmlWriteStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
    d->groupProperties.insert(QStringLiteral("QUmlWriteStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));

    d->propertyGroups << QStringLiteral("QUmlAddStructuralFeatureValueAction");
    d->groupProperties.insert(QStringLiteral("QUmlAddStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("insertAt"))));
    d->groupProperties.insert(QStringLiteral("QUmlAddStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReplaceAll"))));
}

void QUmlAddStructuralFeatureValueActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyTypeRole, QStringLiteral("QSet<QUmlComment *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyTypeRole, QStringLiteral("QUmlElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyTypeRole, QStringLiteral("QSet<QUmlDependency *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyTypeRole, QStringLiteral("QUmlStringExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyTypeRole, QStringLiteral("QUmlNamespace *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlRedefinableElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyTypeRole, QStringLiteral("QSet<QUmlClassifier *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, PropertyTypeRole, QStringLiteral("QUmlActivity *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, DocumentationRole, QStringLiteral("Activity containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, OppositeEndRole, QStringLiteral("Activity-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityGroup *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, DocumentationRole, QStringLiteral("Groups containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, OppositeEndRole, QStringLiteral("ActivityGroup-containedNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, PropertyTypeRole, QStringLiteral("QSet<QUmlInterruptibleActivityRegion *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, DocumentationRole, QStringLiteral("Interruptible regions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, OppositeEndRole, QStringLiteral("InterruptibleActivityRegion-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityPartition *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, DocumentationRole, QStringLiteral("Partitions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, OppositeEndRole, QStringLiteral("ActivityPartition-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, PropertyTypeRole, QStringLiteral("QUmlStructuredActivityNode *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, DocumentationRole, QStringLiteral("Structured activity node containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, OppositeEndRole, QStringLiteral("StructuredActivityNode-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityEdge *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, DocumentationRole, QStringLiteral("Edges that have the node as target."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, OppositeEndRole, QStringLiteral("ActivityEdge-target"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityEdge *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, DocumentationRole, QStringLiteral("Edges that have the node as source."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, OppositeEndRole, QStringLiteral("ActivityEdge-source"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityNode *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, DocumentationRole, QStringLiteral("Inherited nodes replaced by this node in a specialization of the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, PropertyClassRole, QStringLiteral("QUmlExecutableNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, PropertyTypeRole, QStringLiteral("QSet<QUmlExceptionHandler *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, DocumentationRole, QStringLiteral("A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, OppositeEndRole, QStringLiteral("ExceptionHandler-protectedNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, PropertyTypeRole, QStringLiteral("QUmlClassifier *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, DocumentationRole, QStringLiteral("The classifier that owns the behavior of which this action is a part."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, PropertyTypeRole, QStringLiteral("QList<QUmlInputPin *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, DocumentationRole, QStringLiteral("The ordered set of input pins connected to the Action. These are among the total set of inputs."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, DocumentationRole, QStringLiteral("If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, PropertyTypeRole, QStringLiteral("QSet<QUmlConstraint *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, DocumentationRole, QStringLiteral("Constraint that must be satisfied when executed is completed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, PropertyTypeRole, QStringLiteral("QSet<QUmlConstraint *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, DocumentationRole, QStringLiteral("Constraint that must be satisfied when execution is started."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, PropertyTypeRole, QStringLiteral("QList<QUmlOutputPin *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, DocumentationRole, QStringLiteral("The ordered set of output pins connected to the Action. The action places its results onto pins in this set."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, PropertyClassRole, QStringLiteral("QUmlStructuralFeatureAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, PropertyTypeRole, QStringLiteral("QUmlInputPin *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, DocumentationRole, QStringLiteral("Gives the input pin from which the object whose structural feature is to be read or written is obtained."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, object, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, PropertyClassRole, QStringLiteral("QUmlStructuralFeatureAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, PropertyTypeRole, QStringLiteral("QUmlStructuralFeature *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, DocumentationRole, QStringLiteral("Structural feature to be read."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeatureAction, structuralFeature, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, PropertyClassRole, QStringLiteral("QUmlWriteStructuralFeatureAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, PropertyTypeRole, QStringLiteral("QUmlOutputPin *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, DocumentationRole, QStringLiteral("Gives the output pin on which the result is put."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, result, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, PropertyClassRole, QStringLiteral("QUmlWriteStructuralFeatureAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, PropertyTypeRole, QStringLiteral("QUmlInputPin *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, DocumentationRole, QStringLiteral("Value to be added or removed from the structural feature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlWriteStructuralFeatureAction, value, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, PropertyClassRole, QStringLiteral("QUmlAddStructuralFeatureValueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, PropertyTypeRole, QStringLiteral("QUmlInputPin *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, DocumentationRole, QStringLiteral("Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, PropertyClassRole, QStringLiteral("QUmlAddStructuralFeatureValueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, DocumentationRole, QStringLiteral("Specifies whether existing values of the structural feature of the object should be removed before adding the new value."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

