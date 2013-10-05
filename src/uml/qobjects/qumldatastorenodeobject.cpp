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
#include "qumldatastorenodeobject_p.h"

#include <QtUml/QUmlDataStoreNode>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlDataStoreNodeObject::QUmlDataStoreNodeObject(QUmlDataStoreNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlDataStoreNodeObject::~QUmlDataStoreNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDataStoreNodeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataStoreNodeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDataStoreNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDataStoreNodeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDataStoreNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->name();
}

QObject *QUmlDataStoreNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDataStoreNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->namespace_()->asQObject();
}

QString QUmlDataStoreNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlDataStoreNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlDataStoreNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlDataStoreNodeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataStoreNodeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlDataStoreNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlDataStoreNodeObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataStoreNodeObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataStoreNodeObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDataStoreNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlDataStoreNodeObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataStoreNodeObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataStoreNodeObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlDataStoreNodeObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlDataStoreNodeObject::inState() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->inState())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataStoreNodeObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlDataStoreNodeObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->ordering();
}

QObject *QUmlDataStoreNodeObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->selection()->asQObject();
}

QObject *QUmlDataStoreNodeObject::upperBound() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->upperBound())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->upperBound()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDataStoreNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataStoreNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDataStoreNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDataStoreNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataStoreNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDataStoreNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlDataStoreNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlDataStoreNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDataStoreNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDataStoreNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDataStoreNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDataStoreNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDataStoreNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDataStoreNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDataStoreNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDataStoreNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setName(name);
}

void QUmlDataStoreNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDataStoreNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDataStoreNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlDataStoreNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlDataStoreNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setLeaf(isLeaf);
}

void QUmlDataStoreNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlDataStoreNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDataStoreNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDataStoreNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlDataStoreNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlDataStoreNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlDataStoreNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlDataStoreNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlDataStoreNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlDataStoreNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlDataStoreNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlDataStoreNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlDataStoreNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlDataStoreNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlDataStoreNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlDataStoreNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlDataStoreNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlDataStoreNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlDataStoreNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlDataStoreNodeObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlDataStoreNodeObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlDataStoreNodeObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlDataStoreNodeObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setControlType(isControlType);
}

void QUmlDataStoreNodeObject::unsetControlType()
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("controlType"));
}

void QUmlDataStoreNodeObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setOrdering(ordering);
}

void QUmlDataStoreNodeObject::unsetOrdering()
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordering"));
}

void QUmlDataStoreNodeObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlDataStoreNodeObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlDataStoreNode *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

QT_END_NAMESPACE

