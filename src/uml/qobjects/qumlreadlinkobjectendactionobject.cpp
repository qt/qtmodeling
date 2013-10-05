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
#include "qumlreadlinkobjectendactionobject_p.h"

#include <QtUml/QUmlReadLinkObjectEndAction>
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
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlReadLinkObjectEndActionObject::QUmlReadLinkObjectEndActionObject(QUmlReadLinkObjectEndAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlReadLinkObjectEndActionObject::~QUmlReadLinkObjectEndActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadLinkObjectEndActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReadLinkObjectEndActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->name();
}

QObject *QUmlReadLinkObjectEndActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReadLinkObjectEndActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->namespace_()->asQObject();
}

QString QUmlReadLinkObjectEndActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadLinkObjectEndActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadLinkObjectEndActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadLinkObjectEndActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadLinkObjectEndActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadLinkObjectEndActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReadLinkObjectEndActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlReadLinkObjectEndActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReadLinkObjectEndActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ReadLinkObjectEndAction]

QObject *QUmlReadLinkObjectEndActionObject::end() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->end())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->end()->asQObject();
}

QObject *QUmlReadLinkObjectEndActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->object()->asQObject();
}

QObject *QUmlReadLinkObjectEndActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadLinkObjectEndActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadLinkObjectEndActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadLinkObjectEndActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReadLinkObjectEndActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadLinkObjectEndActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadLinkObjectEndActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadLinkObjectEndActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadLinkObjectEndActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadLinkObjectEndActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkObjectEndActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkObjectEndActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkObjectEndActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkObjectEndActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadLinkObjectEndActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkObjectEndActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkObjectEndActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setName(name);
}

void QUmlReadLinkObjectEndActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadLinkObjectEndActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadLinkObjectEndActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadLinkObjectEndActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadLinkObjectEndActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setLeaf(isLeaf);
}

void QUmlReadLinkObjectEndActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReadLinkObjectEndActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkObjectEndActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkObjectEndActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadLinkObjectEndActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadLinkObjectEndActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadLinkObjectEndActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkObjectEndActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkObjectEndActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkObjectEndActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkObjectEndActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkObjectEndActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkObjectEndActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadLinkObjectEndActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkObjectEndActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkObjectEndActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkObjectEndActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkObjectEndActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadLinkObjectEndActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadLinkObjectEndActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadLinkObjectEndActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadLinkObjectEndActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadLinkObjectEndActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkObjectEndActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkObjectEndActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReadLinkObjectEndActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadLinkObjectEndActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkObjectEndActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkObjectEndActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkObjectEndActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkObjectEndActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadLinkObjectEndActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadLinkObjectEndAction]

void QUmlReadLinkObjectEndActionObject::setEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setEnd(qmodelingobjectproperty_cast<QUmlProperty *>(end));
}

void QUmlReadLinkObjectEndActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlReadLinkObjectEndActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

