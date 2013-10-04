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
#include "qumlreadisclassifiedobjectactionobject_p.h"

#include <QtUml/QUmlReadIsClassifiedObjectAction>
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

QUmlReadIsClassifiedObjectActionObject::QUmlReadIsClassifiedObjectActionObject(QUmlReadIsClassifiedObjectAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlReadIsClassifiedObjectActionObject::~QUmlReadIsClassifiedObjectActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadIsClassifiedObjectActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReadIsClassifiedObjectActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->name();
}

QObject *QUmlReadIsClassifiedObjectActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReadIsClassifiedObjectActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->namespace_()->asQObject();
}

QString QUmlReadIsClassifiedObjectActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadIsClassifiedObjectActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadIsClassifiedObjectActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadIsClassifiedObjectActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadIsClassifiedObjectActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadIsClassifiedObjectActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReadIsClassifiedObjectActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlReadIsClassifiedObjectActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReadIsClassifiedObjectActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ReadIsClassifiedObjectAction]

QObject *QUmlReadIsClassifiedObjectActionObject::classifier() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->classifier())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->classifier()->asQObject();
}

bool QUmlReadIsClassifiedObjectActionObject::isDirect() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->isDirect();
}

QObject *QUmlReadIsClassifiedObjectActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->object()->asQObject();
}

QObject *QUmlReadIsClassifiedObjectActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadIsClassifiedObjectActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadIsClassifiedObjectActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReadIsClassifiedObjectActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadIsClassifiedObjectActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadIsClassifiedObjectActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadIsClassifiedObjectActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadIsClassifiedObjectActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadIsClassifiedObjectActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadIsClassifiedObjectActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadIsClassifiedObjectActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadIsClassifiedObjectActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadIsClassifiedObjectActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadIsClassifiedObjectActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadIsClassifiedObjectActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadIsClassifiedObjectActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setName(name);
}

void QUmlReadIsClassifiedObjectActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadIsClassifiedObjectActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadIsClassifiedObjectActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadIsClassifiedObjectActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadIsClassifiedObjectActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlReadIsClassifiedObjectActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReadIsClassifiedObjectActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadIsClassifiedObjectActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadIsClassifiedObjectActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadIsClassifiedObjectActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadIsClassifiedObjectActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadIsClassifiedObjectActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadIsClassifiedObjectActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadIsClassifiedObjectActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadIsClassifiedObjectActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadIsClassifiedObjectActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadIsClassifiedObjectActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadIsClassifiedObjectActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadIsClassifiedObjectActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadIsClassifiedObjectActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadIsClassifiedObjectActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadIsClassifiedObjectActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadIsClassifiedObjectActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadIsClassifiedObjectActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadIsClassifiedObjectActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadIsClassifiedObjectActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadIsClassifiedObjectActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadIsClassifiedObjectActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadIsClassifiedObjectActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadIsClassifiedObjectActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlReadIsClassifiedObjectActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadIsClassifiedObjectActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadIsClassifiedObjectActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadIsClassifiedObjectActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadIsClassifiedObjectActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadIsClassifiedObjectActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadIsClassifiedObjectActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadIsClassifiedObjectAction]

void QUmlReadIsClassifiedObjectActionObject::setClassifier(QObject *classifier)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(classifier));
}

void QUmlReadIsClassifiedObjectActionObject::setDirect(bool isDirect)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setDirect(isDirect);
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->modifiedResettableProperties() << QStringLiteral("direct");
}

void QUmlReadIsClassifiedObjectActionObject::unsetDirect()
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("direct"));
}

void QUmlReadIsClassifiedObjectActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlReadIsClassifiedObjectActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlReadIsClassifiedObjectAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

