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

QT_BEGIN_NAMESPACE_QTUML

QActivityNodePrivate::QActivityNodePrivate() :
    redefinedNodes(new QSet<QActivityNode *>),
    incomings(new QSet<QActivityEdge *>),
    activity(0),
    inGroup(new QSet<QActivityGroup *>),
    inStructuredNode(0),
    inPartition(new QSet<QActivityPartition *>),
    inInterruptibleRegion(new QSet<QInterruptibleActivityRegion *>),
    outgoings(new QSet<QActivityEdge *>)
{
}

QActivityNodePrivate::~QActivityNodePrivate()
{
    delete redefinedNodes;
    delete incomings;
    delete inGroup;
    delete inPartition;
    delete inInterruptibleRegion;
    delete outgoings;
}

void QActivityNodePrivate::addInGroup(QActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (!this->inGroup->contains(inGroup)) {
        this->inGroup->insert(inGroup);

        // Adjust opposite property
        Q_Q(QActivityNode);
        (qmofobject_cast<QActivityGroupPrivate *>(inGroup->d_func()))->addContainedNode(q);
    }
}

void QActivityNodePrivate::removeInGroup(QActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (this->inGroup->contains(inGroup)) {
        this->inGroup->remove(inGroup);

        // Adjust opposite property
        Q_Q(QActivityNode);
        if (inGroup)
            (qmofobject_cast<QActivityGroupPrivate *>(inGroup->d_func()))->removeContainedNode(q);
    }
}

/*!
    \class QActivityNode

    \inmodule QtUml

    \brief ActivityNode is an abstract class for points in the flow of an activity connected by edges.
 */

QActivityNode::QActivityNode(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QRedefinableElement(*new QActivityNodePrivate, parent, wrapper)
{
}

QActivityNode::QActivityNode(QActivityNodePrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QRedefinableElement(dd, parent, wrapper)
{
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
const QSet<QActivityNode *> *QActivityNode::redefinedNodes() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->redefinedNodes;
}

void QActivityNode::addRedefinedNode(QActivityNode *redefinedNode)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->redefinedNodes->contains(redefinedNode)) {
        d->redefinedNodes->insert(redefinedNode);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qmofobject_cast<QRedefinableElement *>(redefinedNode));
    }
}

void QActivityNode::removeRedefinedNode(QActivityNode *redefinedNode)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->redefinedNodes->contains(redefinedNode)) {
        d->redefinedNodes->remove(redefinedNode);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qmofobject_cast<QRedefinableElement *>(redefinedNode));
    }
}

/*!
    Edges that have the node as target.
 */
const QSet<QActivityEdge *> *QActivityNode::incomings() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->incomings;
}

void QActivityNode::addIncoming(QActivityEdge *incoming)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->incomings->contains(incoming)) {
        d->incomings->insert(incoming);

        // Adjust opposite property
        incoming->setTarget(this);
    }
}

void QActivityNode::removeIncoming(QActivityEdge *incoming)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->incomings->contains(incoming)) {
        d->incomings->remove(incoming);

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
        (qmofobject_cast<QElementPrivate *>(d))->setOwner(qmofobject_cast<QElement *>(activity));

        // Adjust opposite property
        if (activity)
            activity->addNode(this);
    }
}

/*!
    Groups containing the node.
 */
const QSet<QActivityGroup *> *QActivityNode::inGroup() const
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
        (qmofobject_cast<QActivityNodePrivate *>(d))->removeInGroup(qmofobject_cast<QActivityGroup *>(d->inStructuredNode));

        d->inStructuredNode = inStructuredNode;

        // Adjust subsetted property(ies)
        if (inStructuredNode) {
            (qmofobject_cast<QActivityNodePrivate *>(d))->addInGroup(qmofobject_cast<QActivityGroup *>(inStructuredNode));
        }
        (qmofobject_cast<QElementPrivate *>(d))->setOwner(qmofobject_cast<QElement *>(inStructuredNode));

        // Adjust opposite property
        if (inStructuredNode)
            inStructuredNode->addNode(this);
    }
}

/*!
    Partitions containing the node.
 */
const QSet<QActivityPartition *> *QActivityNode::inPartition() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->inPartition;
}

void QActivityNode::addInPartition(QActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->inPartition->contains(inPartition)) {
        d->inPartition->insert(inPartition);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QActivityNodePrivate *>(d))->addInGroup(qmofobject_cast<QActivityGroup *>(inPartition));

        // Adjust opposite property
        inPartition->addNode(this);
    }
}

void QActivityNode::removeInPartition(QActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->inPartition->contains(inPartition)) {
        d->inPartition->remove(inPartition);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QActivityNodePrivate *>(d))->removeInGroup(qmofobject_cast<QActivityGroup *>(inPartition));

        // Adjust opposite property
        if (inPartition)
            inPartition->removeNode(this);
    }
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QInterruptibleActivityRegion *> *QActivityNode::inInterruptibleRegion() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->inInterruptibleRegion;
}

void QActivityNode::addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->inInterruptibleRegion->contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion->insert(inInterruptibleRegion);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QActivityNodePrivate *>(d))->addInGroup(qmofobject_cast<QActivityGroup *>(inInterruptibleRegion));

        // Adjust opposite property
        inInterruptibleRegion->addNode(this);
    }
}

void QActivityNode::removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->inInterruptibleRegion->contains(inInterruptibleRegion)) {
        d->inInterruptibleRegion->remove(inInterruptibleRegion);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QActivityNodePrivate *>(d))->removeInGroup(qmofobject_cast<QActivityGroup *>(inInterruptibleRegion));

        // Adjust opposite property
        if (inInterruptibleRegion)
            inInterruptibleRegion->removeNode(this);
    }
}

/*!
    Edges that have the node as source.
 */
const QSet<QActivityEdge *> *QActivityNode::outgoings() const
{
    // This is a read-write association end

    Q_D(const QActivityNode);
    return d->outgoings;
}

void QActivityNode::addOutgoing(QActivityEdge *outgoing)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (!d->outgoings->contains(outgoing)) {
        d->outgoings->insert(outgoing);

        // Adjust opposite property
        outgoing->setSource(this);
    }
}

void QActivityNode::removeOutgoing(QActivityEdge *outgoing)
{
    // This is a read-write association end

    Q_D(QActivityNode);
    if (d->outgoings->contains(outgoing)) {
        d->outgoings->remove(outgoing);

        // Adjust opposite property
        outgoing->setSource(0);
    }
}

#include "moc_qactivitynode.cpp"

QT_END_NAMESPACE_QTUML

