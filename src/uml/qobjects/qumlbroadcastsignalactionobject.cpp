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
#include "qumlbroadcastsignalactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlBroadcastSignalAction>
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
#include <QtUml/QUmlSignal>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlBroadcastSignalActionObject::QUmlBroadcastSignalActionObject(QUmlBroadcastSignalAction *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlBroadcastSignalActionObject::~QUmlBroadcastSignalActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlBroadcastSignalActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlBroadcastSignalActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlBroadcastSignalActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlBroadcastSignalActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->name();
}

QObject *QUmlBroadcastSignalActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlBroadcastSignalActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlBroadcastSignalActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlBroadcastSignalActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlBroadcastSignalActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlBroadcastSignalActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlBroadcastSignalActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlBroadcastSignalActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlBroadcastSignalActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlBroadcastSignalActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlBroadcastSignalActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlBroadcastSignalActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlBroadcastSignalActionObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->arguments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlBroadcastSignalActionObject::onPort() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->onPort())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->onPort()->asQModelingObject();
}

// OWNED ATTRIBUTES [BroadcastSignalAction]

QObject *QUmlBroadcastSignalActionObject::signal() const
{
    if (!qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->signal())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->signal()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlBroadcastSignalActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlBroadcastSignalActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlBroadcastSignalActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlBroadcastSignalActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlBroadcastSignalActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlBroadcastSignalActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlBroadcastSignalActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlBroadcastSignalActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlBroadcastSignalActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBroadcastSignalActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBroadcastSignalActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBroadcastSignalActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBroadcastSignalActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlBroadcastSignalActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBroadcastSignalActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBroadcastSignalActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setName(name);
}

void QUmlBroadcastSignalActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlBroadcastSignalActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlBroadcastSignalActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlBroadcastSignalActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlBroadcastSignalActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setLeaf(isLeaf);
}

void QUmlBroadcastSignalActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlBroadcastSignalActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlBroadcastSignalActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlBroadcastSignalActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlBroadcastSignalActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlBroadcastSignalActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlBroadcastSignalActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlBroadcastSignalActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlBroadcastSignalActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlBroadcastSignalActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlBroadcastSignalActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlBroadcastSignalActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlBroadcastSignalActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlBroadcastSignalActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlBroadcastSignalActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlBroadcastSignalActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlBroadcastSignalActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlBroadcastSignalActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlBroadcastSignalActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlBroadcastSignalActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlBroadcastSignalActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlBroadcastSignalActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlBroadcastSignalActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlBroadcastSignalActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlBroadcastSignalActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlBroadcastSignalActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlBroadcastSignalActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlBroadcastSignalActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlBroadcastSignalActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlBroadcastSignalActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlBroadcastSignalActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlBroadcastSignalActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlBroadcastSignalActionObject::addArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->addArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlBroadcastSignalActionObject::removeArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->removeArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlBroadcastSignalActionObject::setOnPort(QObject *onPort)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setOnPort(qmodelingelementproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BroadcastSignalAction]

void QUmlBroadcastSignalActionObject::setSignal(QObject *signal)
{
    qmodelingelementproperty_cast<QUmlBroadcastSignalAction *>(this)->setSignal(qmodelingelementproperty_cast<QUmlSignal *>(signal));
}


void QUmlBroadcastSignalActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlBroadcastSignalAction");
    d->groupProperties.insert(QStringLiteral("QUmlBroadcastSignalAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signal"))));
}

void QUmlBroadcastSignalActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, PropertyClassRole, QStringLiteral("QUmlBroadcastSignalAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, DocumentationRole, QStringLiteral("The specification of signal object transmitted to the target objects."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBroadcastSignalAction, signal, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

