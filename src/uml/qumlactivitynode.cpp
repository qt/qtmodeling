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
#include "qumlactivitynode.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
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
/*!
    \class QUmlActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */
QUmlActivityNode::QUmlActivityNode() :
    _activity(0),
    _inStructuredNode(0)
{
    setPropertyData();
}

QUmlActivityNode::~QUmlActivityNode()
{
}

QModelingObject *QUmlActivityNode::clone() const
{
    QUmlActivityNode *c = new QUmlActivityNode;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegion())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartition())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incoming())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoing())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNode())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlActivityNode::activity() const
{
    // This is a read-write association end

    return _activity;
}

void QUmlActivityNode::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    if (_activity != activity) {
        // Adjust subsetted properties

        _activity = activity;
        if (activity && activity->asQObject() && this->asQObject())
            QObject::connect(activity->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setActivity()));

        // Adjust subsetted properties
        setOwner(activity);
    }
}

/*!
    Groups containing the node.
 */
const QSet<QUmlActivityGroup *> QUmlActivityNode::inGroup() const
{
    // This is a read-only derived union association end

    return _inGroup;
}

void QUmlActivityNode::addInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (!_inGroup.contains(inGroup)) {
        _inGroup.insert(inGroup);
        if (inGroup && inGroup->asQObject() && this->asQObject())
            QObject::connect(inGroup->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInGroup(QObject *)));

        // Adjust opposite properties
        if (inGroup) {
            inGroup->addContainedNode(this);
        }
    }
}

void QUmlActivityNode::removeInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived union association end

    if (_inGroup.contains(inGroup)) {
        _inGroup.remove(inGroup);

        // Adjust opposite properties
        if (inGroup) {
            inGroup->removeContainedNode(this);
        }
    }
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QUmlInterruptibleActivityRegion *> QUmlActivityNode::inInterruptibleRegion() const
{
    // This is a read-write association end

    return _inInterruptibleRegion;
}

void QUmlActivityNode::addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    if (!_inInterruptibleRegion.contains(inInterruptibleRegion)) {
        _inInterruptibleRegion.insert(inInterruptibleRegion);
        if (inInterruptibleRegion && inInterruptibleRegion->asQObject() && this->asQObject())
            QObject::connect(inInterruptibleRegion->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInInterruptibleRegion(QObject *)));

        // Adjust subsetted properties
        addInGroup(inInterruptibleRegion);

        // Adjust opposite properties
        if (inInterruptibleRegion) {
            inInterruptibleRegion->addNode(this);
        }
    }
}

void QUmlActivityNode::removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    if (_inInterruptibleRegion.contains(inInterruptibleRegion)) {
        _inInterruptibleRegion.remove(inInterruptibleRegion);

        // Adjust subsetted properties
        removeInGroup(inInterruptibleRegion);

        // Adjust opposite properties
        if (inInterruptibleRegion) {
            inInterruptibleRegion->removeNode(this);
        }
    }
}

/*!
    Partitions containing the node.
 */
const QSet<QUmlActivityPartition *> QUmlActivityNode::inPartition() const
{
    // This is a read-write association end

    return _inPartition;
}

void QUmlActivityNode::addInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (!_inPartition.contains(inPartition)) {
        _inPartition.insert(inPartition);
        if (inPartition && inPartition->asQObject() && this->asQObject())
            QObject::connect(inPartition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInPartition(QObject *)));

        // Adjust subsetted properties
        addInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->addNode(this);
        }
    }
}

void QUmlActivityNode::removeInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    if (_inPartition.contains(inPartition)) {
        _inPartition.remove(inPartition);

        // Adjust subsetted properties
        removeInGroup(inPartition);

        // Adjust opposite properties
        if (inPartition) {
            inPartition->removeNode(this);
        }
    }
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlActivityNode::inStructuredNode() const
{
    // This is a read-write association end

    return _inStructuredNode;
}

void QUmlActivityNode::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    if (_inStructuredNode != inStructuredNode) {
        // Adjust subsetted properties
        removeInGroup(_inStructuredNode);

        _inStructuredNode = inStructuredNode;
        if (inStructuredNode && inStructuredNode->asQObject() && this->asQObject())
            QObject::connect(inStructuredNode->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setInStructuredNode()));

        // Adjust subsetted properties
        if (inStructuredNode) {
            addInGroup(inStructuredNode);
        }
        setOwner(inStructuredNode);
    }
}

/*!
    Edges that have the node as target.
 */
const QSet<QUmlActivityEdge *> QUmlActivityNode::incoming() const
{
    // This is a read-write association end

    return _incoming;
}

void QUmlActivityNode::addIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    if (!_incoming.contains(incoming)) {
        _incoming.insert(incoming);
        if (incoming && incoming->asQObject() && this->asQObject())
            QObject::connect(incoming->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeIncoming(QObject *)));

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(this);
        }
    }
}

void QUmlActivityNode::removeIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    if (_incoming.contains(incoming)) {
        _incoming.remove(incoming);

        // Adjust opposite properties
        if (incoming) {
            incoming->setTarget(0);
        }
    }
}

/*!
    Edges that have the node as source.
 */
const QSet<QUmlActivityEdge *> QUmlActivityNode::outgoing() const
{
    // This is a read-write association end

    return _outgoing;
}

void QUmlActivityNode::addOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    if (!_outgoing.contains(outgoing)) {
        _outgoing.insert(outgoing);
        if (outgoing && outgoing->asQObject() && this->asQObject())
            QObject::connect(outgoing->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOutgoing(QObject *)));

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(this);
        }
    }
}

void QUmlActivityNode::removeOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    if (_outgoing.contains(outgoing)) {
        _outgoing.remove(outgoing);

        // Adjust opposite properties
        if (outgoing) {
            outgoing->setSource(0);
        }
    }
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
const QSet<QUmlActivityNode *> QUmlActivityNode::redefinedNode() const
{
    // This is a read-write association end

    return _redefinedNode;
}

void QUmlActivityNode::addRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    if (!_redefinedNode.contains(redefinedNode)) {
        _redefinedNode.insert(redefinedNode);
        if (redefinedNode && redefinedNode->asQObject() && this->asQObject())
            QObject::connect(redefinedNode->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRedefinedNode(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedNode);
    }
}

void QUmlActivityNode::removeRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    if (_redefinedNode.contains(redefinedNode)) {
        _redefinedNode.remove(redefinedNode);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedNode);
    }
}

void QUmlActivityNode::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("activity")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("activity")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("activity")][QtModeling::DocumentationRole] = QStringLiteral("Activity containing the node.");
    QModelingObject::propertyDataHash[QStringLiteral("activity")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("activity")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner");
    QModelingObject::propertyDataHash[QStringLiteral("activity")][QtModeling::OppositeEndRole] = QStringLiteral("Activity-node");

    QModelingObject::propertyDataHash[QStringLiteral("inGroup")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("inGroup")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("inGroup")][QtModeling::DocumentationRole] = QStringLiteral("Groups containing the node.");
    QModelingObject::propertyDataHash[QStringLiteral("inGroup")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inGroup")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inGroup")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityGroup-containedNode");

    QModelingObject::propertyDataHash[QStringLiteral("inInterruptibleRegion")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("inInterruptibleRegion")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("inInterruptibleRegion")][QtModeling::DocumentationRole] = QStringLiteral("Interruptible regions containing the node.");
    QModelingObject::propertyDataHash[QStringLiteral("inInterruptibleRegion")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inInterruptibleRegion")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityNode-inGroup");
    QModelingObject::propertyDataHash[QStringLiteral("inInterruptibleRegion")][QtModeling::OppositeEndRole] = QStringLiteral("InterruptibleActivityRegion-node");

    QModelingObject::propertyDataHash[QStringLiteral("inPartition")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("inPartition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("inPartition")][QtModeling::DocumentationRole] = QStringLiteral("Partitions containing the node.");
    QModelingObject::propertyDataHash[QStringLiteral("inPartition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inPartition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityNode-inGroup");
    QModelingObject::propertyDataHash[QStringLiteral("inPartition")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityPartition-node");

    QModelingObject::propertyDataHash[QStringLiteral("inStructuredNode")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("inStructuredNode")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("inStructuredNode")][QtModeling::DocumentationRole] = QStringLiteral("Structured activity node containing the node.");
    QModelingObject::propertyDataHash[QStringLiteral("inStructuredNode")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inStructuredNode")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityNode-inGroup Element-owner");
    QModelingObject::propertyDataHash[QStringLiteral("inStructuredNode")][QtModeling::OppositeEndRole] = QStringLiteral("StructuredActivityNode-node");

    QModelingObject::propertyDataHash[QStringLiteral("incoming")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("incoming")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("incoming")][QtModeling::DocumentationRole] = QStringLiteral("Edges that have the node as target.");
    QModelingObject::propertyDataHash[QStringLiteral("incoming")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("incoming")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("incoming")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-target");

    QModelingObject::propertyDataHash[QStringLiteral("outgoing")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("outgoing")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("outgoing")][QtModeling::DocumentationRole] = QStringLiteral("Edges that have the node as source.");
    QModelingObject::propertyDataHash[QStringLiteral("outgoing")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("outgoing")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("outgoing")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-source");

    QModelingObject::propertyDataHash[QStringLiteral("redefinedNode")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("redefinedNode")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("redefinedNode")][QtModeling::DocumentationRole] = QStringLiteral("Inherited nodes replaced by this node in a specialization of the activity.");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedNode")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedNode")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("RedefinableElement-redefinedElement");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedNode")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

