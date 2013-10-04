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

QUmlAcceptCallActionObject::QUmlAcceptCallActionObject(QUmlAcceptCallAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlAcceptCallActionObject::~QUmlAcceptCallActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAcceptCallActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAcceptCallActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAcceptCallActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlAcceptCallActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->name();
}

QObject *QUmlAcceptCallActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlAcceptCallActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->namespace_()->asQObject();
}

QString QUmlAcceptCallActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAcceptCallActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAcceptCallActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAcceptCallActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAcceptCallActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlAcceptCallActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAcceptCallActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlAcceptCallActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAcceptCallActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAcceptCallActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlAcceptCallActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlAcceptCallActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAcceptCallActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlAcceptCallActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [AcceptEventAction]

bool QUmlAcceptCallActionObject::isUnmarshall() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->isUnmarshall();
}

const QSet<QObject *> QUmlAcceptCallActionObject::result() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->result())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAcceptCallActionObject::trigger() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->trigger())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [AcceptCallAction]

QObject *QUmlAcceptCallActionObject::returnInformation() const
{
    if (!qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->returnInformation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->returnInformation()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAcceptCallActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAcceptCallActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAcceptCallActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAcceptCallActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAcceptCallActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAcceptCallActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAcceptCallActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAcceptCallActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAcceptCallActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptCallActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAcceptCallActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptCallActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAcceptCallActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAcceptCallActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptCallActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAcceptCallActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setName(name);
}

void QUmlAcceptCallActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAcceptCallActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAcceptCallActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlAcceptCallActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAcceptCallActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlAcceptCallActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlAcceptCallActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptCallActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAcceptCallActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAcceptCallActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAcceptCallActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlAcceptCallActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptCallActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAcceptCallActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptCallActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAcceptCallActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptCallActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAcceptCallActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlAcceptCallActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptCallActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAcceptCallActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptCallActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAcceptCallActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlAcceptCallActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAcceptCallActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlAcceptCallActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAcceptCallActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlAcceptCallActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptCallActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAcceptCallActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlAcceptCallActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlAcceptCallActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptCallActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAcceptCallActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptCallActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAcceptCallActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlAcceptCallActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [AcceptEventAction]

void QUmlAcceptCallActionObject::setUnmarshall(bool isUnmarshall)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setUnmarshall(isUnmarshall);
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->modifiedResettableProperties() << QStringLiteral("unmarshall");
}

void QUmlAcceptCallActionObject::unsetUnmarshall()
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unmarshall"));
}

void QUmlAcceptCallActionObject::addResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptCallActionObject::removeResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAcceptCallActionObject::addTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->addTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlAcceptCallActionObject::removeTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->removeTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

// SLOTS FOR OWNED ATTRIBUTES [AcceptCallAction]

void QUmlAcceptCallActionObject::setReturnInformation(QObject *returnInformation)
{
    qmodelingobjectproperty_cast<QUmlAcceptCallAction *>(this)->setReturnInformation(qmodelingobjectproperty_cast<QUmlOutputPin *>(returnInformation));
}

QT_END_NAMESPACE

