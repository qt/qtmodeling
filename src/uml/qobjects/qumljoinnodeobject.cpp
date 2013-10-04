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
#include "qumljoinnodeobject_p.h"

#include <QtUml/QUmlJoinNode>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlJoinNodeObject::QUmlJoinNodeObject(QUmlJoinNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlJoinNodeObject::~QUmlJoinNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlJoinNodeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlJoinNodeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlJoinNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlJoinNodeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlJoinNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->name();
}

QObject *QUmlJoinNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlJoinNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->namespace_()->asQObject();
}

QString QUmlJoinNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlJoinNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlJoinNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlJoinNodeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlJoinNodeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlJoinNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlJoinNodeObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlJoinNodeObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlJoinNodeObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlJoinNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlJoinNodeObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlJoinNodeObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlJoinNodeObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [JoinNode]

bool QUmlJoinNodeObject::isCombineDuplicate() const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->isCombineDuplicate();
}

QObject *QUmlJoinNodeObject::joinSpec() const
{
    if (!qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->joinSpec())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->joinSpec()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlJoinNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlJoinNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlJoinNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlJoinNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlJoinNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlJoinNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlJoinNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlJoinNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlJoinNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlJoinNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlJoinNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlJoinNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlJoinNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlJoinNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlJoinNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlJoinNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setName(name);
}

void QUmlJoinNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlJoinNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlJoinNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlJoinNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlJoinNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlJoinNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlJoinNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlJoinNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlJoinNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlJoinNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlJoinNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlJoinNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlJoinNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlJoinNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlJoinNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlJoinNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlJoinNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlJoinNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlJoinNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlJoinNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlJoinNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlJoinNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlJoinNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlJoinNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [JoinNode]

void QUmlJoinNodeObject::setCombineDuplicate(bool isCombineDuplicate)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setCombineDuplicate(isCombineDuplicate);
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->modifiedResettableProperties() << QStringLiteral("combineDuplicate");
}

void QUmlJoinNodeObject::unsetCombineDuplicate()
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("combineDuplicate"));
}

void QUmlJoinNodeObject::setJoinSpec(QObject *joinSpec)
{
    qmodelingobjectproperty_cast<QUmlJoinNode *>(this)->setJoinSpec(qmodelingobjectproperty_cast<QUmlValueSpecification *>(joinSpec));
}

QT_END_NAMESPACE

