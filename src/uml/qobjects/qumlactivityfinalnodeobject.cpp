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
#include "qumlactivityfinalnodeobject_p.h"

#include <QtUml/QUmlActivityFinalNode>
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

QT_BEGIN_NAMESPACE

QUmlActivityFinalNodeObject::QUmlActivityFinalNodeObject(QUmlActivityFinalNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlActivityFinalNodeObject::~QUmlActivityFinalNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActivityFinalNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityFinalNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityFinalNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActivityFinalNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlActivityFinalNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->name();
}

QObject *QUmlActivityFinalNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlActivityFinalNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->namespace_()->asQObject();
}

QString QUmlActivityFinalNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActivityFinalNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActivityFinalNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActivityFinalNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityFinalNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlActivityFinalNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlActivityFinalNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityFinalNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityFinalNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityFinalNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlActivityFinalNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityFinalNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityFinalNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActivityFinalNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityFinalNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActivityFinalNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActivityFinalNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityFinalNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActivityFinalNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlActivityFinalNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActivityFinalNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityFinalNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityFinalNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityFinalNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityFinalNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityFinalNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityFinalNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityFinalNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityFinalNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setName(name);
}

void QUmlActivityFinalNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActivityFinalNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActivityFinalNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActivityFinalNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActivityFinalNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setLeaf(isLeaf);
}

void QUmlActivityFinalNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlActivityFinalNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityFinalNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityFinalNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActivityFinalNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlActivityFinalNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlActivityFinalNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActivityFinalNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActivityFinalNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActivityFinalNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActivityFinalNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActivityFinalNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActivityFinalNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlActivityFinalNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActivityFinalNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActivityFinalNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActivityFinalNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActivityFinalNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlActivityFinalNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlActivityFinalNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

QT_END_NAMESPACE

