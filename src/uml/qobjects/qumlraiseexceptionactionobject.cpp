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
#include "qumlraiseexceptionactionobject_p.h"

#include <QtUml/QUmlRaiseExceptionAction>
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

QUmlRaiseExceptionActionObject::QUmlRaiseExceptionActionObject(QUmlRaiseExceptionAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlRaiseExceptionActionObject::~QUmlRaiseExceptionActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRaiseExceptionActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRaiseExceptionActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRaiseExceptionActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlRaiseExceptionActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->name();
}

QObject *QUmlRaiseExceptionActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlRaiseExceptionActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->namespace_()->asQObject();
}

QString QUmlRaiseExceptionActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRaiseExceptionActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRaiseExceptionActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlRaiseExceptionActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRaiseExceptionActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlRaiseExceptionActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlRaiseExceptionActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlRaiseExceptionActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlRaiseExceptionActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlRaiseExceptionActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [RaiseExceptionAction]

QObject *QUmlRaiseExceptionActionObject::exception() const
{
    if (!qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->exception())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->exception()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRaiseExceptionActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRaiseExceptionActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRaiseExceptionActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlRaiseExceptionActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRaiseExceptionActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRaiseExceptionActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlRaiseExceptionActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlRaiseExceptionActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRaiseExceptionActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRaiseExceptionActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRaiseExceptionActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRaiseExceptionActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRaiseExceptionActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRaiseExceptionActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRaiseExceptionActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRaiseExceptionActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setName(name);
}

void QUmlRaiseExceptionActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRaiseExceptionActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRaiseExceptionActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlRaiseExceptionActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRaiseExceptionActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlRaiseExceptionActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlRaiseExceptionActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRaiseExceptionActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRaiseExceptionActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRaiseExceptionActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlRaiseExceptionActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlRaiseExceptionActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRaiseExceptionActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRaiseExceptionActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRaiseExceptionActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRaiseExceptionActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRaiseExceptionActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRaiseExceptionActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlRaiseExceptionActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRaiseExceptionActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRaiseExceptionActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRaiseExceptionActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRaiseExceptionActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlRaiseExceptionActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlRaiseExceptionActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlRaiseExceptionActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlRaiseExceptionActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlRaiseExceptionActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlRaiseExceptionActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlRaiseExceptionActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlRaiseExceptionActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlRaiseExceptionActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRaiseExceptionActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRaiseExceptionActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRaiseExceptionActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRaiseExceptionActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlRaiseExceptionActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [RaiseExceptionAction]

void QUmlRaiseExceptionActionObject::setException(QObject *exception)
{
    qmodelingobjectproperty_cast<QUmlRaiseExceptionAction *>(this)->setException(qmodelingobjectproperty_cast<QUmlInputPin *>(exception));
}

QT_END_NAMESPACE

