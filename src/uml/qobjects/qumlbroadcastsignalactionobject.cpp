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

QUmlBroadcastSignalActionObject::QUmlBroadcastSignalActionObject(QUmlBroadcastSignalAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlBroadcastSignalActionObject::~QUmlBroadcastSignalActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlBroadcastSignalActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlBroadcastSignalActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlBroadcastSignalActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlBroadcastSignalActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->name();
}

QObject *QUmlBroadcastSignalActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlBroadcastSignalActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->namespace_()->asQObject();
}

QString QUmlBroadcastSignalActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlBroadcastSignalActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlBroadcastSignalActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlBroadcastSignalActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlBroadcastSignalActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlBroadcastSignalActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlBroadcastSignalActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlBroadcastSignalActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlBroadcastSignalActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBroadcastSignalActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlBroadcastSignalActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlBroadcastSignalActionObject::argument() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->argument())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlBroadcastSignalActionObject::onPort() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->onPort())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->onPort()->asQObject();
}

// OWNED ATTRIBUTES [BroadcastSignalAction]

QObject *QUmlBroadcastSignalActionObject::signal() const
{
    if (!qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->signal())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->signal()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlBroadcastSignalActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlBroadcastSignalActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlBroadcastSignalActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlBroadcastSignalActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlBroadcastSignalActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlBroadcastSignalActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlBroadcastSignalActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlBroadcastSignalActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlBroadcastSignalActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBroadcastSignalActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBroadcastSignalActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBroadcastSignalActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBroadcastSignalActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlBroadcastSignalActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBroadcastSignalActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBroadcastSignalActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setName(name);
}

void QUmlBroadcastSignalActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlBroadcastSignalActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlBroadcastSignalActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlBroadcastSignalActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlBroadcastSignalActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlBroadcastSignalActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlBroadcastSignalActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlBroadcastSignalActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlBroadcastSignalActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlBroadcastSignalActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlBroadcastSignalActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlBroadcastSignalActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlBroadcastSignalActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlBroadcastSignalActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlBroadcastSignalActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlBroadcastSignalActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlBroadcastSignalActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlBroadcastSignalActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlBroadcastSignalActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlBroadcastSignalActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlBroadcastSignalActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlBroadcastSignalActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlBroadcastSignalActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlBroadcastSignalActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlBroadcastSignalActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlBroadcastSignalActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlBroadcastSignalActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlBroadcastSignalActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlBroadcastSignalActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlBroadcastSignalActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlBroadcastSignalActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlBroadcastSignalActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlBroadcastSignalActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlBroadcastSignalActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlBroadcastSignalActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlBroadcastSignalActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlBroadcastSignalActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlBroadcastSignalActionObject::addArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->addArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlBroadcastSignalActionObject::removeArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->removeArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlBroadcastSignalActionObject::setOnPort(QObject *onPort)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setOnPort(qmodelingobjectproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BroadcastSignalAction]

void QUmlBroadcastSignalActionObject::setSignal(QObject *signal)
{
    qmodelingobjectproperty_cast<QUmlBroadcastSignalAction *>(this)->setSignal(qmodelingobjectproperty_cast<QUmlSignal *>(signal));
}

QT_END_NAMESPACE

