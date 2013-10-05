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
#include "qumltestidentityactionobject_p.h"

#include <QtUml/QUmlTestIdentityAction>
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

QUmlTestIdentityActionObject::QUmlTestIdentityActionObject(QUmlTestIdentityAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlTestIdentityActionObject::~QUmlTestIdentityActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTestIdentityActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTestIdentityActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTestIdentityActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTestIdentityActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->name();
}

QObject *QUmlTestIdentityActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTestIdentityActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->namespace_()->asQObject();
}

QString QUmlTestIdentityActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlTestIdentityActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlTestIdentityActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlTestIdentityActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlTestIdentityActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTestIdentityActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlTestIdentityActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlTestIdentityActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlTestIdentityActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlTestIdentityActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlTestIdentityActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlTestIdentityActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlTestIdentityActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [TestIdentityAction]

QObject *QUmlTestIdentityActionObject::first() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->first())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->first()->asQObject();
}

QObject *QUmlTestIdentityActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->result()->asQObject();
}

QObject *QUmlTestIdentityActionObject::second() const
{
    if (!qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->second())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->second()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTestIdentityActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTestIdentityActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTestIdentityActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTestIdentityActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTestIdentityActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTestIdentityActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlTestIdentityActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlTestIdentityActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTestIdentityActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTestIdentityActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTestIdentityActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTestIdentityActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTestIdentityActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTestIdentityActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTestIdentityActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTestIdentityActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setName(name);
}

void QUmlTestIdentityActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTestIdentityActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTestIdentityActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlTestIdentityActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlTestIdentityActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setLeaf(isLeaf);
}

void QUmlTestIdentityActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlTestIdentityActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlTestIdentityActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlTestIdentityActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlTestIdentityActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlTestIdentityActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlTestIdentityActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlTestIdentityActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlTestIdentityActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlTestIdentityActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlTestIdentityActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlTestIdentityActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlTestIdentityActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlTestIdentityActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlTestIdentityActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlTestIdentityActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlTestIdentityActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlTestIdentityActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlTestIdentityActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlTestIdentityActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlTestIdentityActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlTestIdentityActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlTestIdentityActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlTestIdentityActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlTestIdentityActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlTestIdentityActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlTestIdentityActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlTestIdentityActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlTestIdentityActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlTestIdentityActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlTestIdentityActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlTestIdentityActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [TestIdentityAction]

void QUmlTestIdentityActionObject::setFirst(QObject *first)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setFirst(qmodelingobjectproperty_cast<QUmlInputPin *>(first));
}

void QUmlTestIdentityActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlTestIdentityActionObject::setSecond(QObject *second)
{
    qmodelingobjectproperty_cast<QUmlTestIdentityAction *>(this)->setSecond(qmodelingobjectproperty_cast<QUmlInputPin *>(second));
}

QT_END_NAMESPACE

