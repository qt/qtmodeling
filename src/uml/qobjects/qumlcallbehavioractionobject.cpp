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
#include "qumlcallbehavioractionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlCallBehaviorAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
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

QUmlCallBehaviorActionObject::QUmlCallBehaviorActionObject(QUmlCallBehaviorAction *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCallBehaviorActionObject::~QUmlCallBehaviorActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCallBehaviorActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCallBehaviorActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCallBehaviorActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCallBehaviorActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->name();
}

QObject *QUmlCallBehaviorActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCallBehaviorActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCallBehaviorActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCallBehaviorActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCallBehaviorActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCallBehaviorActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCallBehaviorActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlCallBehaviorActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlCallBehaviorActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlCallBehaviorActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlCallBehaviorActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlCallBehaviorActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlCallBehaviorActionObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->arguments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlCallBehaviorActionObject::onPort() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->onPort())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->onPort()->asQModelingObject();
}

// OWNED ATTRIBUTES [CallAction]

bool QUmlCallBehaviorActionObject::isSynchronous() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->isSynchronous();
}

const QList<QObject *> QUmlCallBehaviorActionObject::results() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->results())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [CallBehaviorAction]

QObject *QUmlCallBehaviorActionObject::behavior() const
{
    if (!qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->behavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->behavior()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCallBehaviorActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCallBehaviorActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCallBehaviorActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCallBehaviorActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCallBehaviorActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCallBehaviorActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCallBehaviorActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCallBehaviorActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCallBehaviorActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallBehaviorActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallBehaviorActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallBehaviorActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallBehaviorActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCallBehaviorActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallBehaviorActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallBehaviorActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setName(name);
}

void QUmlCallBehaviorActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCallBehaviorActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCallBehaviorActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCallBehaviorActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCallBehaviorActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setLeaf(isLeaf);
}

void QUmlCallBehaviorActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlCallBehaviorActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallBehaviorActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallBehaviorActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCallBehaviorActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCallBehaviorActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlCallBehaviorActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallBehaviorActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallBehaviorActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallBehaviorActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallBehaviorActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallBehaviorActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallBehaviorActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCallBehaviorActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallBehaviorActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallBehaviorActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallBehaviorActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallBehaviorActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCallBehaviorActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlCallBehaviorActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlCallBehaviorActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlCallBehaviorActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlCallBehaviorActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallBehaviorActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallBehaviorActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlCallBehaviorActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlCallBehaviorActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallBehaviorActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallBehaviorActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallBehaviorActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallBehaviorActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlCallBehaviorActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlCallBehaviorActionObject::addArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallBehaviorActionObject::removeArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallBehaviorActionObject::setOnPort(QObject *onPort)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setOnPort(qmodelingelementproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [CallAction]

void QUmlCallBehaviorActionObject::setSynchronous(bool isSynchronous)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setSynchronous(isSynchronous);
}

void QUmlCallBehaviorActionObject::unsetSynchronous()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("synchronous"));
}

void QUmlCallBehaviorActionObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlCallBehaviorActionObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

// SLOTS FOR OWNED ATTRIBUTES [CallBehaviorAction]

void QUmlCallBehaviorActionObject::setBehavior(QObject *behavior)
{
    qmodelingelementproperty_cast<QUmlCallBehaviorAction *>(this)->setBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(behavior));
}


void QUmlCallBehaviorActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlCallBehaviorAction");
    d->groupProperties.insert(QStringLiteral("QUmlCallBehaviorAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("behavior"))));
}

void QUmlCallBehaviorActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, PropertyClassRole, QStringLiteral("QUmlCallBehaviorAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, DocumentationRole, QStringLiteral("The invoked behavior. It must be capable of accepting and returning control."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallBehaviorAction, behavior, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

