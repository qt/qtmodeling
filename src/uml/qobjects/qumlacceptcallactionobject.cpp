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
#include "qumlacceptcallactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlAcceptCallAction>
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

QUmlAcceptCallActionObject::QUmlAcceptCallActionObject(QUmlAcceptCallAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlAcceptCallActionObject::~QUmlAcceptCallActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAcceptCallActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAcceptCallActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAcceptCallActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlAcceptCallActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->name();
}

QObject *QUmlAcceptCallActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlAcceptCallActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlAcceptCallActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAcceptCallActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAcceptCallActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAcceptCallActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAcceptCallActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlAcceptCallActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAcceptCallActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlAcceptCallActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAcceptCallActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAcceptCallActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlAcceptCallActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlAcceptCallActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAcceptCallActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlAcceptCallActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [AcceptEventAction]

bool QUmlAcceptCallActionObject::isUnmarshall() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->isUnmarshall();
}

const QSet<QObject *> QUmlAcceptCallActionObject::results() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->results())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::triggers() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->triggers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [AcceptCallAction]

QObject *QUmlAcceptCallActionObject::returnInformation() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->returnInformation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->returnInformation()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAcceptCallActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAcceptCallActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAcceptCallActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAcceptCallActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAcceptCallActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAcceptCallActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAcceptCallActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAcceptCallActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAcceptCallActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptCallActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptCallActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptCallActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptCallActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAcceptCallActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptCallActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptCallActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setName(name);
}

void QUmlAcceptCallActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAcceptCallActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAcceptCallActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlAcceptCallActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAcceptCallActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setLeaf(isLeaf);
}

void QUmlAcceptCallActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlAcceptCallActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptCallActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptCallActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAcceptCallActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAcceptCallActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlAcceptCallActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptCallActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptCallActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptCallActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptCallActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptCallActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptCallActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlAcceptCallActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptCallActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptCallActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptCallActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptCallActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlAcceptCallActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAcceptCallActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlAcceptCallActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAcceptCallActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlAcceptCallActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptCallActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptCallActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlAcceptCallActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlAcceptCallActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptCallActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptCallActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptCallActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptCallActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlAcceptCallActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [AcceptEventAction]

void QUmlAcceptCallActionObject::setUnmarshall(bool isUnmarshall)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setUnmarshall(isUnmarshall);
}

void QUmlAcceptCallActionObject::unsetUnmarshall()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unmarshall"));
}

void QUmlAcceptCallActionObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptCallActionObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptCallActionObject::addTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->addTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlAcceptCallActionObject::removeTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->removeTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}

// SLOTS FOR OWNED ATTRIBUTES [AcceptCallAction]

void QUmlAcceptCallActionObject::setReturnInformation(QObject *returnInformation)
{
    qmodelingelementproperty_cast<QUmlAcceptCallAction *>(this)->setReturnInformation(qmodelingelementproperty_cast<QUmlOutputPin *>(returnInformation));
}


void QUmlAcceptCallActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlAcceptEventAction");
    d->groupProperties.insert(QStringLiteral("QUmlAcceptEventAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnmarshall"))));
    d->groupProperties.insert(QStringLiteral("QUmlAcceptEventAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("results"))));
    d->groupProperties.insert(QStringLiteral("QUmlAcceptEventAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("triggers"))));

    d->propertyGroups << QStringLiteral("QUmlAcceptCallAction");
    d->groupProperties.insert(QStringLiteral("QUmlAcceptCallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("returnInformation"))));
}

void QUmlAcceptCallActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, PropertyClassRole, QStringLiteral("QUmlAcceptCallAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, DocumentationRole, QStringLiteral("Pin where a value is placed containing sufficient information to perform a subsequent reply and return control to the caller. The contents of this value are opaque. It can be passed and copied but it cannot be manipulated by the model."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptCallAction, returnInformation, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

