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
#include "qumlreplyactionobject_p.h"

#include <QtUml/QUmlReplyAction>
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
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

QUmlReplyActionObject::QUmlReplyActionObject(QUmlReplyAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlReplyActionObject::~QUmlReplyActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReplyActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReplyActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReplyActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReplyActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReplyActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->name();
}

QObject *QUmlReplyActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReplyActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->namespace_()->asQObject();
}

QString QUmlReplyActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReplyActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReplyActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReplyActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReplyActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReplyActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReplyActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReplyActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReplyActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReplyActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReplyActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReplyActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReplyActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReplyActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReplyActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReplyActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlReplyActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReplyActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReplyActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReplyActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ReplyAction]

QObject *QUmlReplyActionObject::replyToCall() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->replyToCall())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->replyToCall()->asQObject();
}

const QSet<QObject *> QUmlReplyActionObject::replyValues() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->replyValues())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReplyActionObject::returnInformation() const
{
    if (!qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->returnInformation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->returnInformation()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReplyActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReplyActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReplyActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReplyActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReplyActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReplyActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReplyActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReplyActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReplyActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReplyActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReplyActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReplyActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReplyActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReplyActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReplyActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReplyActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setName(name);
}

void QUmlReplyActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReplyActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReplyActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReplyActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReplyActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setLeaf(isLeaf);
}

void QUmlReplyActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReplyActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReplyActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReplyActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReplyActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReplyActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReplyActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReplyActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReplyActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReplyActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReplyActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReplyActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReplyActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReplyActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReplyActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReplyActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReplyActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReplyActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReplyActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReplyActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReplyActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReplyActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReplyActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReplyActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReplyActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReplyActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReplyActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReplyActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReplyActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReplyActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReplyActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReplyActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReplyAction]

void QUmlReplyActionObject::setReplyToCall(QObject *replyToCall)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setReplyToCall(qmodelingobjectproperty_cast<QUmlTrigger *>(replyToCall));
}

void QUmlReplyActionObject::addReplyValue(QObject *replyValue)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->addReplyValue(qmodelingobjectproperty_cast<QUmlInputPin *>(replyValue));
}

void QUmlReplyActionObject::removeReplyValue(QObject *replyValue)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->removeReplyValue(qmodelingobjectproperty_cast<QUmlInputPin *>(replyValue));
}

void QUmlReplyActionObject::setReturnInformation(QObject *returnInformation)
{
    qmodelingobjectproperty_cast<QUmlReplyAction *>(this)->setReturnInformation(qmodelingobjectproperty_cast<QUmlInputPin *>(returnInformation));
}

QT_END_NAMESPACE

