/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qactivitynode.h"
#include "qactivitynode_p.h"

#include "qactivitygroup_p.h"

#include <QtUml/QActivityEdge>
#include <QtUml/QStructuredActivityNode>
#include <QtUml/QActivityPartition>
#include <QtUml/QActivityGroup>
#include <QtUml/QActivity>
#include <QtUml/QInterruptibleActivityRegion>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QActivityNodePrivate::QActivityNodePrivate() :
    activity(0),
    inStructuredNode(0)
{
}

QActivityNodePrivate::~QActivityNodePrivate()
{
}

void QActivityNodePrivate::addInGroup(QActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (!this->inGroup.contains(inGroup)) {
        this->inGroup.insert(inGroup);

        // Adjust opposite property
        Q_Q(QActivityNode);
        (qwrappedobject_cast<QActivityGroupPrivate *>(inGroup->d_func()))->addContainedNode(q);
    }
}

void QActivityNodePrivate::removeInGroup(QActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (this->inGroup.contains(inGroup)) {
        this->inGroup.remove(inGroup);

        // Adjust opposite property
        Q_Q(QActivityNode);
        if (inGroup)
            (qwrappedobject_cast<QActivityGroupPrivate *>(inGroup->d_func()))->removeContainedNode(q);
    }
}

/*!
    \class QActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */

QActivityNode::QActivityNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QRedefinableElement(*new QActivityNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QActivityNode::QActivityNode(QActivityNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QRedefinableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QActivityNode::~QActivityNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QActivityNode
// ---------------------------------------------------------------

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QSet<QActivityNode *> QActivityNode::redefinedNodes() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->redefinedNodes;
}

void QActivityNode::addRedefinedNode(QActivityNode *redefinedNode)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->redefinedNodes.contains(redefinedNode)) {
        d->redefinedNodes.insert(redefinedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedNode));
    }
}

void QActivityNode::removeRedefinedNode(QActivityNode *redefinedNode)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->redefinedNodes.contains(redefinedNode)) {
        d->redefinedNodes.remove(redefinedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedNode));
    }
}

/*!
    Edges that have the node as target.
 */
QSet<QActivityEdge *> QActivityNode::incomings() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->incomings;
}

void QActivityNode::addIncoming(QActivityEdge *incoming)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->incomings.contains(incoming)) {
        d->incomings.insert(incoming);

        // Adjust opposite property
        incoming->setTarget(this);
    }
}

void QActivityNode::removeIncoming(QActivityEdge *incoming)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->incomings.contains(incoming)) {
        d->incomings.remove(incoming);

        // Adjust opposite property
        incoming->setTarget(0);
    }
}

/*!
    Activity containing the node.
 */
QActivity *QActivityNode::activity() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->activity;
}

void QActivityNode::setActivity(QActivity *activity)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->activity != activity) {
        // Adjust opposite property
        if (d->activity)
            d->activity->removeNode(this);

        d->activity = activity;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(activity));

        // Adjust opposite property
        if (activity)
            activity->addNode(this);
    }
}

/*!
    Groups containing the node.
 */
QSet<QActivityGroup *> QActivityNode::inGroup() const
{
    // This is a read-only derived-union association end

    Q_D(const QActivityNode);
    return d->inGroup;
}

/*!
    Structured activity node containing the node.
 */
QStructuredActivityNode *QActivityNode::inStructuredNode() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->inStructuredNode;
}

void QActivityNode::setInStructuredNode(QStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->inStructuredNode != inStructuredNode) {
        // Adjust opposite property
        if (d->inStructuredNode)
            d->inStructuredNode->removeNode(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityNodePrivate *>(d))->removeInGroup(qwrappedobject_cast<QActivityGroup *>(d->inStructuredNode));

        d->inStructuredNode = inStructuredNode;

        // Adjust subsetted property(ies)
        if (inStructuredNode) {
            (qwrappedobject_cast<QActivityNodePrivate *>(d))->addInGroup(qwrappedobject_cast<QActivityGroup *>(inStructuredNode));
        }
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(inStructuredNode));

        // Adjust opposite property
        if (inStructuredNode)
            inStructuredNode->addNode(this);
    }
}

/*!
    Partitions containing the node.
 */
QSet<QActivityPartition *> QActivityNode::inPartition() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->inPartition;
}

void QActivityNode::addInPartition(QActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->inPartition.contains(inPartition)) {
        d->inPartition.insert(inPartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityNodePrivate *>(d))->addInGroup(qwrappedobject_cast<QActivityGroup *>(inPartition));

        // Adjust opposite property
        inPartition->addNode(this);
    }
}

void QActivityNode::removeInPartition(QActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->inPartition.contains(inPartition)) {
        d->inPartition.remove(inPartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityNodePrivate *>(d))->removeInGroup(qwrappedobject_cast<QActivityGroup *>(inPartition));

        // Adjust opposite property
        if (inPartition)
            inPartition->removeNode(this);
    }
}

/*!
    Interruptible regions containing the node.
 */
QSet<QInterruptibleActivityRegion *> QActivityNode::inInterruptibleRegion() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->inInterruptibleRegion;
}

void QActivityNode::addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->inInterruptibleRegion.contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion.insert(inInterruptibleRegion);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityNodePrivate *>(d))->addInGroup(qwrappedobject_cast<QActivityGroup *>(inInterruptibleRegion));

        // Adjust opposite property
        inInterruptibleRegion->addNode(this);
    }
}

void QActivityNode::removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->inInterruptibleRegion.contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion.remove(inInterruptibleRegion);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityNodePrivate *>(d))->removeInGroup(qwrappedobject_cast<QActivityGroup *>(inInterruptibleRegion));

        // Adjust opposite property
        if (inInterruptibleRegion)
            inInterruptibleRegion->removeNode(this);
    }
}

/*!
    Edges that have the node as source.
 */
QSet<QActivityEdge *> QActivityNode::outgoings() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->outgoings;
}

void QActivityNode::addOutgoing(QActivityEdge *outgoing)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->outgoings.contains(outgoing)) {
        d->outgoings.insert(outgoing);

        // Adjust opposite property
        outgoing->setSource(this);
    }
}

void QActivityNode::removeOutgoing(QActivityEdge *outgoing)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->outgoings.contains(outgoing)) {
        d->outgoings.remove(outgoing);

        // Adjust opposite property
        outgoing->setSource(0);
    }
}

void QActivityNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Inherited nodes replaced by this node in a specialization of the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges that have the node as target.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityEdge::target");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Activity containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivity::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Groups containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityGroup::containedNode");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Structured activity node containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivityNode::inGroup QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QStructuredActivityNode::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Partitions containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivityNode::inGroup");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityPartition::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Interruptible regions containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivityNode::inGroup");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInterruptibleActivityRegion::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges that have the node as source.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityEdge::source");

    QRedefinableElement::setPropertyData();
}

#include "moc_qactivitynode.cpp"

QT_END_NAMESPACE_QTUML

