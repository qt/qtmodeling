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
#include "qumlexpansionnodeobject_p.h"

#include <QtUml/QUmlExpansionNode>
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
#include <QtUml/QUmlExpansionRegion>
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

QUmlExpansionNodeObject::QUmlExpansionNodeObject(QUmlExpansionNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlExpansionNodeObject::~QUmlExpansionNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExpansionNodeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExpansionNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExpansionNodeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExpansionNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->name();
}

QObject *QUmlExpansionNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExpansionNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->namespace_()->asQObject();
}

QString QUmlExpansionNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExpansionNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExpansionNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExpansionNodeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlExpansionNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlExpansionNodeObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExpansionNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlExpansionNodeObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlExpansionNodeObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlExpansionNodeObject::inState() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->inState())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpansionNodeObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlExpansionNodeObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->ordering();
}

QObject *QUmlExpansionNodeObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->selection()->asQObject();
}

QObject *QUmlExpansionNodeObject::upperBound() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->upperBound())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->upperBound()->asQObject();
}

// OWNED ATTRIBUTES [ExpansionNode]

QObject *QUmlExpansionNodeObject::regionAsInput() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->regionAsInput())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->regionAsInput()->asQObject();
}

QObject *QUmlExpansionNodeObject::regionAsOutput() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->regionAsOutput())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->regionAsOutput()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExpansionNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpansionNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExpansionNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExpansionNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpansionNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExpansionNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlExpansionNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExpansionNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExpansionNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExpansionNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setName(name);
}

void QUmlExpansionNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExpansionNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExpansionNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlExpansionNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExpansionNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlExpansionNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlExpansionNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExpansionNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlExpansionNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlExpansionNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlExpansionNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlExpansionNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlExpansionNodeObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlExpansionNodeObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlExpansionNodeObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlExpansionNodeObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setControlType(isControlType);
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->modifiedResettableProperties() << QStringLiteral("controlType");
}

void QUmlExpansionNodeObject::unsetControlType()
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("controlType"));
}

void QUmlExpansionNodeObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setOrdering(ordering);
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->modifiedResettableProperties() << QStringLiteral("ordering");
}

void QUmlExpansionNodeObject::unsetOrdering()
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordering"));
}

void QUmlExpansionNodeObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlExpansionNodeObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [ExpansionNode]

void QUmlExpansionNodeObject::setRegionAsInput(QObject *regionAsInput)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setRegionAsInput(qmodelingobjectproperty_cast<QUmlExpansionRegion *>(regionAsInput));
}

void QUmlExpansionNodeObject::setRegionAsOutput(QObject *regionAsOutput)
{
    qmodelingobjectproperty_cast<QUmlExpansionNode *>(this)->setRegionAsOutput(qmodelingobjectproperty_cast<QUmlExpansionRegion *>(regionAsOutput));
}

QT_END_NAMESPACE

