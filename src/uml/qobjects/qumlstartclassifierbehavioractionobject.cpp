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
#include "qumlstartclassifierbehavioractionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlStartClassifierBehaviorAction>
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

QUmlStartClassifierBehaviorActionObject::QUmlStartClassifierBehaviorActionObject(QUmlStartClassifierBehaviorAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlStartClassifierBehaviorActionObject::~QUmlStartClassifierBehaviorActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStartClassifierBehaviorActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlStartClassifierBehaviorActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->name();
}

QObject *QUmlStartClassifierBehaviorActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlStartClassifierBehaviorActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlStartClassifierBehaviorActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStartClassifierBehaviorActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStartClassifierBehaviorActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlStartClassifierBehaviorActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStartClassifierBehaviorActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlStartClassifierBehaviorActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlStartClassifierBehaviorActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlStartClassifierBehaviorActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlStartClassifierBehaviorActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [StartClassifierBehaviorAction]

QObject *QUmlStartClassifierBehaviorActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->object()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStartClassifierBehaviorActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStartClassifierBehaviorActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStartClassifierBehaviorActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStartClassifierBehaviorActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStartClassifierBehaviorActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStartClassifierBehaviorActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlStartClassifierBehaviorActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStartClassifierBehaviorActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStartClassifierBehaviorActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStartClassifierBehaviorActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStartClassifierBehaviorActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStartClassifierBehaviorActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStartClassifierBehaviorActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStartClassifierBehaviorActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStartClassifierBehaviorActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStartClassifierBehaviorActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setName(name);
}

void QUmlStartClassifierBehaviorActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStartClassifierBehaviorActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStartClassifierBehaviorActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlStartClassifierBehaviorActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStartClassifierBehaviorActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setLeaf(isLeaf);
}

void QUmlStartClassifierBehaviorActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlStartClassifierBehaviorActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStartClassifierBehaviorActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStartClassifierBehaviorActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStartClassifierBehaviorActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlStartClassifierBehaviorActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlStartClassifierBehaviorActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStartClassifierBehaviorActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStartClassifierBehaviorActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStartClassifierBehaviorActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStartClassifierBehaviorActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStartClassifierBehaviorActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStartClassifierBehaviorActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlStartClassifierBehaviorActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStartClassifierBehaviorActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStartClassifierBehaviorActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStartClassifierBehaviorActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStartClassifierBehaviorActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlStartClassifierBehaviorActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlStartClassifierBehaviorActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlStartClassifierBehaviorActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlStartClassifierBehaviorActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlStartClassifierBehaviorActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlStartClassifierBehaviorActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlStartClassifierBehaviorActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlStartClassifierBehaviorActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlStartClassifierBehaviorActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStartClassifierBehaviorActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStartClassifierBehaviorActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStartClassifierBehaviorActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStartClassifierBehaviorActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlStartClassifierBehaviorActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StartClassifierBehaviorAction]

void QUmlStartClassifierBehaviorActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
}


void QUmlStartClassifierBehaviorActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlStartClassifierBehaviorAction");
    d->groupProperties.insert(QStringLiteral("QUmlStartClassifierBehaviorAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("object"))));
}

void QUmlStartClassifierBehaviorActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, PropertyClassRole, QStringLiteral("QUmlStartClassifierBehaviorAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, DocumentationRole, QStringLiteral("Holds the object on which to start the owned behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStartClassifierBehaviorAction, object, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

