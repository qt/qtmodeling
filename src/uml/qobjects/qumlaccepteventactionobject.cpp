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

QUmlAcceptEventActionObject::QUmlAcceptEventActionObject(QUmlAcceptEventAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlAcceptEventActionObject::~QUmlAcceptEventActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAcceptEventActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAcceptEventActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAcceptEventActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlAcceptEventActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->name();
}

QObject *QUmlAcceptEventActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlAcceptEventActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->namespace_()->asQObject();
}

QString QUmlAcceptEventActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAcceptEventActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAcceptEventActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAcceptEventActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAcceptEventActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlAcceptEventActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAcceptEventActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlAcceptEventActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAcceptEventActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAcceptEventActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlAcceptEventActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlAcceptEventActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAcceptEventActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlAcceptEventActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [AcceptEventAction]

bool QUmlAcceptEventActionObject::isUnmarshall() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->isUnmarshall();
}

const QSet<QObject *> QUmlAcceptEventActionObject::result() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->result())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptEventActionObject::trigger() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->trigger())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAcceptEventActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAcceptEventActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAcceptEventActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAcceptEventActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAcceptEventActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAcceptEventActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAcceptEventActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAcceptEventActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAcceptEventActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptEventActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptEventActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptEventActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptEventActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAcceptEventActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptEventActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptEventActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setName(name);
}

void QUmlAcceptEventActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAcceptEventActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAcceptEventActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlAcceptEventActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAcceptEventActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setLeaf(isLeaf);
}

void QUmlAcceptEventActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlAcceptEventActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptEventActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptEventActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAcceptEventActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAcceptEventActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlAcceptEventActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptEventActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptEventActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptEventActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptEventActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptEventActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptEventActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlAcceptEventActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptEventActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptEventActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptEventActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptEventActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlAcceptEventActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAcceptEventActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlAcceptEventActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAcceptEventActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlAcceptEventActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptEventActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptEventActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlAcceptEventActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlAcceptEventActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptEventActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptEventActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptEventActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptEventActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlAcceptEventActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [AcceptEventAction]

void QUmlAcceptEventActionObject::setUnmarshall(bool isUnmarshall)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->setUnmarshall(isUnmarshall);
}

void QUmlAcceptEventActionObject::unsetUnmarshall()
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unmarshall"));
}

void QUmlAcceptEventActionObject::addResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptEventActionObject::removeResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptEventActionObject::addTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->addTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlAcceptEventActionObject::removeTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlAcceptEventAction *>(this)->removeTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

QT_END_NAMESPACE

