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
#include "qumlaccepteventactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlAcceptEventAction>
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

QUmlAcceptEventActionObject::QUmlAcceptEventActionObject(QUmlAcceptEventAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlAcceptEventActionObject::~QUmlAcceptEventActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAcceptEventActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAcceptEventActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAcceptEventActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlAcceptEventActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->name();
}

QObject *QUmlAcceptEventActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlAcceptEventActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlAcceptEventActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAcceptEventActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAcceptEventActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAcceptEventActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAcceptEventActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlAcceptEventActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAcceptEventActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlAcceptEventActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAcceptEventActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAcceptEventActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlAcceptEventActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlAcceptEventActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAcceptEventActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlAcceptEventActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [AcceptEventAction]

bool QUmlAcceptEventActionObject::isUnmarshall() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->isUnmarshall();
}

const QSet<QObject *> QUmlAcceptEventActionObject::results() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->results())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::triggers() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->triggers())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAcceptEventActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAcceptEventActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAcceptEventActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAcceptEventActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAcceptEventActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAcceptEventActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAcceptEventActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAcceptEventActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAcceptEventActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptEventActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptEventActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptEventActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptEventActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAcceptEventActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptEventActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptEventActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setName(name);
}

void QUmlAcceptEventActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAcceptEventActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAcceptEventActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlAcceptEventActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAcceptEventActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setLeaf(isLeaf);
}

void QUmlAcceptEventActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlAcceptEventActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptEventActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptEventActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAcceptEventActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAcceptEventActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlAcceptEventActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptEventActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptEventActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptEventActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptEventActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptEventActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptEventActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlAcceptEventActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptEventActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptEventActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptEventActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptEventActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlAcceptEventActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAcceptEventActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlAcceptEventActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAcceptEventActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlAcceptEventActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptEventActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptEventActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlAcceptEventActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlAcceptEventActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptEventActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptEventActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptEventActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptEventActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlAcceptEventActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [AcceptEventAction]

void QUmlAcceptEventActionObject::setUnmarshall(bool isUnmarshall)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->setUnmarshall(isUnmarshall);
}

void QUmlAcceptEventActionObject::unsetUnmarshall()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unmarshall"));
}

void QUmlAcceptEventActionObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptEventActionObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptEventActionObject::addTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->addTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlAcceptEventActionObject::removeTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlAcceptEventAction *>(this)->removeTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}


void QUmlAcceptEventActionObject::setGroupProperties()
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
}

void QUmlAcceptEventActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, PropertyClassRole, QStringLiteral("QUmlAcceptEventAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, DocumentationRole, QStringLiteral("Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, isUnmarshall, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, PropertyClassRole, QStringLiteral("QUmlAcceptEventAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, DocumentationRole, QStringLiteral("Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, results, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, PropertyClassRole, QStringLiteral("QUmlAcceptEventAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, DocumentationRole, QStringLiteral("The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAcceptEventAction, triggers, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

