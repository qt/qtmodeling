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
#include "qumltestidentityactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTestIdentityAction>
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
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlTestIdentityActionObject::QUmlTestIdentityActionObject(QUmlTestIdentityAction *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTestIdentityActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTestIdentityActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTestIdentityActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlTestIdentityActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->name();
}

QObject *QUmlTestIdentityActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlTestIdentityActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlTestIdentityActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlTestIdentityActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlTestIdentityActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlTestIdentityActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlTestIdentityActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTestIdentityActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlTestIdentityActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlTestIdentityActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlTestIdentityActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlTestIdentityActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlTestIdentityActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlTestIdentityActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlTestIdentityActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [TestIdentityAction]

QObject *QUmlTestIdentityActionObject::first() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->first())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->first()->asQModelingObject();
}

QObject *QUmlTestIdentityActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->result()->asQModelingObject();
}

QObject *QUmlTestIdentityActionObject::second() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->second())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->second()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTestIdentityActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTestIdentityActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTestIdentityActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlTestIdentityActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTestIdentityActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTestIdentityActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlTestIdentityActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlTestIdentityActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTestIdentityActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlTestIdentityActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlTestIdentityActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlTestIdentityActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlTestIdentityActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTestIdentityActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlTestIdentityActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlTestIdentityActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlTestIdentityActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlTestIdentityActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlTestIdentityActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlTestIdentityActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlTestIdentityActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlTestIdentityActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlTestIdentityActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlTestIdentityActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlTestIdentityActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlTestIdentityActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlTestIdentityActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
    emit activityChanged(this->activity());
}

void QUmlTestIdentityActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlTestIdentityActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlTestIdentityActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
    emit inInterruptibleRegionsChanged(this->inInterruptibleRegions());
}

void QUmlTestIdentityActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
    emit inInterruptibleRegionsChanged(this->inInterruptibleRegions());
}

void QUmlTestIdentityActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlTestIdentityActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlTestIdentityActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
    emit inStructuredNodeChanged(this->inStructuredNode());
}

void QUmlTestIdentityActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlTestIdentityActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlTestIdentityActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlTestIdentityActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlTestIdentityActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
    emit redefinedNodesChanged(this->redefinedNodes());
}

void QUmlTestIdentityActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
    emit redefinedNodesChanged(this->redefinedNodes());
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlTestIdentityActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
    emit handlersChanged(this->handlers());
}

void QUmlTestIdentityActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
    emit handlersChanged(this->handlers());
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlTestIdentityActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
    emit contextChanged(this->context());
}

void QUmlTestIdentityActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
    emit inputsChanged(this->inputs());
}

void QUmlTestIdentityActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
    emit inputsChanged(this->inputs());
}

void QUmlTestIdentityActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    emit isLocallyReentrantChanged(this->isLocallyReentrant());
}

void QUmlTestIdentityActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    setLocallyReentrant(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLocallyReentrant"));
}

void QUmlTestIdentityActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
    emit localPostconditionsChanged(this->localPostconditions());
}

void QUmlTestIdentityActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
    emit localPostconditionsChanged(this->localPostconditions());
}

void QUmlTestIdentityActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
    emit localPreconditionsChanged(this->localPreconditions());
}

void QUmlTestIdentityActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
    emit localPreconditionsChanged(this->localPreconditions());
}

void QUmlTestIdentityActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
    emit outputsChanged(this->outputs());
}

void QUmlTestIdentityActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
    emit outputsChanged(this->outputs());
}

// SLOTS FOR OWNED ATTRIBUTES [TestIdentityAction]

void QUmlTestIdentityActionObject::setFirst(QObject *first)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setFirst(qmodelingelementproperty_cast<QUmlInputPin *>(first));
    emit firstChanged(this->first());
}

void QUmlTestIdentityActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
    emit resultChanged(this->result());
}

void QUmlTestIdentityActionObject::setSecond(QObject *second)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setSecond(qmodelingelementproperty_cast<QUmlInputPin *>(second));
    emit secondChanged(this->second());
}


void QUmlTestIdentityActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTestIdentityAction");
    d->groupProperties.insert(QStringLiteral("QUmlTestIdentityAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("first"))));
    d->groupProperties.insert(QStringLiteral("QUmlTestIdentityAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
    d->groupProperties.insert(QStringLiteral("QUmlTestIdentityAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("second"))));
}

void QUmlTestIdentityActionObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, PropertyClassRole, QStringLiteral("QUmlTestIdentityAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, PropertyTypeRole, QStringLiteral("QUmlInputPin *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, DocumentationRole, QStringLiteral("Gives the pin on which an object is placed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, PropertyClassRole, QStringLiteral("QUmlTestIdentityAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, PropertyTypeRole, QStringLiteral("QUmlOutputPin *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, DocumentationRole, QStringLiteral("Tells whether the two input objects are identical."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, PropertyClassRole, QStringLiteral("QUmlTestIdentityAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, PropertyTypeRole, QStringLiteral("QUmlInputPin *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, DocumentationRole, QStringLiteral("Gives the pin on which an object is placed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

