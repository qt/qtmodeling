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
#include "qumlstartobjectbehavioractionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlStartObjectBehaviorAction>
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
#include <QtUml/QUmlPort>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlStartObjectBehaviorActionObject::QUmlStartObjectBehaviorActionObject(QUmlStartObjectBehaviorAction *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlStartObjectBehaviorActionObject::~QUmlStartObjectBehaviorActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStartObjectBehaviorActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlStartObjectBehaviorActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->name();
}

QObject *QUmlStartObjectBehaviorActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlStartObjectBehaviorActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlStartObjectBehaviorActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStartObjectBehaviorActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStartObjectBehaviorActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlStartObjectBehaviorActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStartObjectBehaviorActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlStartObjectBehaviorActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlStartObjectBehaviorActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlStartObjectBehaviorActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartObjectBehaviorActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlStartObjectBehaviorActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlStartObjectBehaviorActionObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->arguments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlStartObjectBehaviorActionObject::onPort() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->onPort())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->onPort()->asQModelingObject();
}

// OWNED ATTRIBUTES [CallAction]

bool QUmlStartObjectBehaviorActionObject::isSynchronous() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->isSynchronous();
}

const QList<QObject *> QUmlStartObjectBehaviorActionObject::results() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->results())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [StartObjectBehaviorAction]

QObject *QUmlStartObjectBehaviorActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->object()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStartObjectBehaviorActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStartObjectBehaviorActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStartObjectBehaviorActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStartObjectBehaviorActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStartObjectBehaviorActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStartObjectBehaviorActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlStartObjectBehaviorActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStartObjectBehaviorActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStartObjectBehaviorActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStartObjectBehaviorActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStartObjectBehaviorActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStartObjectBehaviorActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStartObjectBehaviorActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStartObjectBehaviorActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStartObjectBehaviorActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStartObjectBehaviorActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setName(name);
}

void QUmlStartObjectBehaviorActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStartObjectBehaviorActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStartObjectBehaviorActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlStartObjectBehaviorActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStartObjectBehaviorActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setLeaf(isLeaf);
}

void QUmlStartObjectBehaviorActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlStartObjectBehaviorActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStartObjectBehaviorActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStartObjectBehaviorActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStartObjectBehaviorActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlStartObjectBehaviorActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlStartObjectBehaviorActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStartObjectBehaviorActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStartObjectBehaviorActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStartObjectBehaviorActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStartObjectBehaviorActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStartObjectBehaviorActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStartObjectBehaviorActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlStartObjectBehaviorActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStartObjectBehaviorActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStartObjectBehaviorActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStartObjectBehaviorActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStartObjectBehaviorActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlStartObjectBehaviorActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlStartObjectBehaviorActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlStartObjectBehaviorActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlStartObjectBehaviorActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlStartObjectBehaviorActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlStartObjectBehaviorActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlStartObjectBehaviorActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlStartObjectBehaviorActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlStartObjectBehaviorActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStartObjectBehaviorActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStartObjectBehaviorActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStartObjectBehaviorActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStartObjectBehaviorActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlStartObjectBehaviorActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlStartObjectBehaviorActionObject::addArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlStartObjectBehaviorActionObject::removeArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlStartObjectBehaviorActionObject::setOnPort(QObject *onPort)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setOnPort(qmodelingelementproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [CallAction]

void QUmlStartObjectBehaviorActionObject::setSynchronous(bool isSynchronous)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setSynchronous(isSynchronous);
}

void QUmlStartObjectBehaviorActionObject::unsetSynchronous()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("synchronous"));
}

void QUmlStartObjectBehaviorActionObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlStartObjectBehaviorActionObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

// SLOTS FOR OWNED ATTRIBUTES [StartObjectBehaviorAction]

void QUmlStartObjectBehaviorActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlStartObjectBehaviorAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
}


void QUmlStartObjectBehaviorActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInvocationAction");
    d->groupProperties.insert(QStringLiteral("QUmlInvocationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("arguments"))));
    d->groupProperties.insert(QStringLiteral("QUmlInvocationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("onPort"))));

    d->propertyGroups << QStringLiteral("QUmlCallAction");
    d->groupProperties.insert(QStringLiteral("QUmlCallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSynchronous"))));
    d->groupProperties.insert(QStringLiteral("QUmlCallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("results"))));

    d->propertyGroups << QStringLiteral("QUmlStartObjectBehaviorAction");
    d->groupProperties.insert(QStringLiteral("QUmlStartObjectBehaviorAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("object"))));
}

void QUmlStartObjectBehaviorActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, PropertyClassRole, QStringLiteral("QUmlStartObjectBehaviorAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, DocumentationRole, QStringLiteral("Holds the object which is either a behavior to be started or has a classifier behavior to be started."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartObjectBehaviorAction, object, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

