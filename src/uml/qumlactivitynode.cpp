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

#include "qumlactivitynode.h"
#include "qumlactivitynode_p.h"

#include "qumlactivitygroup_p.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlInterruptibleActivityRegion>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActivityNodePrivate::QUmlActivityNodePrivate() :
    activity(0),
    inStructuredNode(0)
{
}

QUmlActivityNodePrivate::~QUmlActivityNodePrivate()
{
}

void QUmlActivityNodePrivate::addInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (!this->inGroup.contains(inGroup)) {
        this->inGroup.insert(inGroup);

        // Adjust opposite property
        Q_Q(QUmlActivityNode);
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(inGroup->d_func()))->addContainedNode(q);
    }
}

void QUmlActivityNodePrivate::removeInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (this->inGroup.contains(inGroup)) {
        this->inGroup.remove(inGroup);

        // Adjust opposite property
        Q_Q(QUmlActivityNode);
        if (inGroup)
            (qwrappedobject_cast<QUmlActivityGroupPrivate *>(inGroup->d_func()))->removeContainedNode(q);
    }
}

/*!
    \class QUmlActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */

QUmlActivityNode::QUmlActivityNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(*new QUmlActivityNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityNode::QUmlActivityNode(QUmlActivityNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityNode::~QUmlActivityNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlActivityNode
// ---------------------------------------------------------------

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QSet<QUmlActivityNode *> QUmlActivityNode::redefinedNodes() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityNode);
    return d->redefinedNodes;
}

void QUmlActivityNode::addRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (!d->redefinedNodes.contains(redefinedNode)) {
        d->redefinedNodes.insert(redefinedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedNode));
    }
}

void QUmlActivityNode::removeRedefinedNode(QUmlActivityNode *redefinedNode)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (d->redefinedNodes.contains(redefinedNode)) {
        d->redefinedNodes.remove(redefinedNode);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedNode));
    }
}

/*!
    Edges that have the node as target.
 */
QSet<QUmlActivityEdge *> QUmlActivityNode::incomings() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityNode);
    return d->incomings;
}

void QUmlActivityNode::addIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (!d->incomings.contains(incoming)) {
        d->incomings.insert(incoming);

        // Adjust opposite property
        incoming->setTarget(this);
    }
}

void QUmlActivityNode::removeIncoming(QUmlActivityEdge *incoming)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (d->incomings.contains(incoming)) {
        d->incomings.remove(incoming);

        // Adjust opposite property
        incoming->setTarget(0);
    }
}

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlActivityNode::activity() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityNode);
    return d->activity;
}

void QUmlActivityNode::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (d->activity != activity) {
        // Adjust opposite property
        if (d->activity)
            d->activity->removeNode(this);

        d->activity = activity;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(activity));

        // Adjust opposite property
        if (activity)
            activity->addNode(this);
    }
}

/*!
    Groups containing the node.
 */
QSet<QUmlActivityGroup *> QUmlActivityNode::inGroup() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlActivityNode);
    return d->inGroup;
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlActivityNode::inStructuredNode() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityNode);
    return d->inStructuredNode;
}

void QUmlActivityNode::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (d->inStructuredNode != inStructuredNode) {
        // Adjust opposite property
        if (d->inStructuredNode)
            d->inStructuredNode->removeNode(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityNodePrivate *>(d))->removeInGroup(qwrappedobject_cast<QUmlActivityGroup *>(d->inStructuredNode));

        d->inStructuredNode = inStructuredNode;

        // Adjust subsetted property(ies)
        if (inStructuredNode) {
            (qwrappedobject_cast<QUmlActivityNodePrivate *>(d))->addInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inStructuredNode));
        }
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(inStructuredNode));

        // Adjust opposite property
        if (inStructuredNode)
            inStructuredNode->addNode(this);
    }
}

/*!
    Partitions containing the node.
 */
QSet<QUmlActivityPartition *> QUmlActivityNode::inPartition() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityNode);
    return d->inPartition;
}

void QUmlActivityNode::addInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (!d->inPartition.contains(inPartition)) {
        d->inPartition.insert(inPartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityNodePrivate *>(d))->addInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inPartition));

        // Adjust opposite property
        inPartition->addNode(this);
    }
}

void QUmlActivityNode::removeInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (d->inPartition.contains(inPartition)) {
        d->inPartition.remove(inPartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityNodePrivate *>(d))->removeInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inPartition));

        // Adjust opposite property
        if (inPartition)
            inPartition->removeNode(this);
    }
}

/*!
    Interruptible regions containing the node.
 */
QSet<QUmlInterruptibleActivityRegion *> QUmlActivityNode::inInterruptibleRegion() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityNode);
    return d->inInterruptibleRegion;
}

void QUmlActivityNode::addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (!d->inInterruptibleRegion.contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion.insert(inInterruptibleRegion);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityNodePrivate *>(d))->addInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inInterruptibleRegion));

        // Adjust opposite property
        inInterruptibleRegion->addNode(this);
    }
}

void QUmlActivityNode::removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (d->inInterruptibleRegion.contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion.remove(inInterruptibleRegion);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityNodePrivate *>(d))->removeInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inInterruptibleRegion));

        // Adjust opposite property
        if (inInterruptibleRegion)
            inInterruptibleRegion->removeNode(this);
    }
}

/*!
    Edges that have the node as source.
 */
QSet<QUmlActivityEdge *> QUmlActivityNode::outgoings() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityNode);
    return d->outgoings;
}

void QUmlActivityNode::addOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (!d->outgoings.contains(outgoing)) {
        d->outgoings.insert(outgoing);

        // Adjust opposite property
        outgoing->setSource(this);
    }
}

void QUmlActivityNode::removeOutgoing(QUmlActivityEdge *outgoing)
{
    // This is a read-write association end

    Q_D(QUmlActivityNode);
    if (d->outgoings.contains(outgoing)) {
        d->outgoings.remove(outgoing);

        // Adjust opposite property
        outgoing->setSource(0);
    }
}

void QUmlActivityNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Inherited nodes replaced by this node in a specialization of the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("redefinedNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges that have the node as target.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("incomings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityEdge::target");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Activity containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivity::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Groups containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inGroup")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityGroup::containedNode");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Structured activity node containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityNode::inGroup QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStructuredActivityNode::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Partitions containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityNode::inGroup");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inPartition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityPartition::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Interruptible regions containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityNode::inGroup");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("inInterruptibleRegion")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlInterruptibleActivityRegion::node");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges that have the node as source.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityNode")][QString::fromLatin1("outgoings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityEdge::source");

    QUmlRedefinableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlactivitynode.cpp"

