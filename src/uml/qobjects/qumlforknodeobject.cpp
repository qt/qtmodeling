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
#include "qumlforknodeobject_p.h"

#include <QtUml/QUmlForkNode>
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

QUmlForkNodeObject::QUmlForkNodeObject(QUmlForkNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlForkNodeObject::~QUmlForkNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlForkNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlForkNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlForkNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlForkNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlForkNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlForkNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlForkNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->name();
}

QObject *QUmlForkNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlForkNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlForkNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlForkNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->namespace_()->asQObject();
}

QString QUmlForkNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlForkNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlForkNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlForkNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlForkNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlForkNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlForkNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlForkNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlForkNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlForkNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlForkNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlForkNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlForkNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlForkNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlForkNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlForkNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlForkNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlForkNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlForkNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlForkNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlForkNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlForkNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlForkNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlForkNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlForkNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlForkNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlForkNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlForkNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlForkNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlForkNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlForkNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlForkNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlForkNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setName(name);
}

void QUmlForkNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlForkNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlForkNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlForkNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlForkNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setLeaf(isLeaf);
}

void QUmlForkNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlForkNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlForkNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlForkNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlForkNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlForkNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlForkNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlForkNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlForkNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlForkNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlForkNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlForkNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlForkNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlForkNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlForkNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlForkNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlForkNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlForkNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlForkNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlForkNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

QT_END_NAMESPACE

