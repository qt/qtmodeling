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

#include "qumlactivityedge.h"
#include "qumlactivityedge_p.h"

#include "qumlactivitygroup_p.h"

#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActivityEdgePrivate::QUmlActivityEdgePrivate() :
    source(0),
    guard(0),
    activity(0),
    interrupts(0),
    weight(0),
    inStructuredNode(0),
    target(0)
{
}

QUmlActivityEdgePrivate::~QUmlActivityEdgePrivate()
{
}

void QUmlActivityEdgePrivate::addInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (!this->inGroup.contains(inGroup)) {
        this->inGroup.insert(inGroup);

        // Adjust opposite property
        Q_Q(QUmlActivityEdge);
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(inGroup->d_func()))->addContainedEdge(q);
    }
}

void QUmlActivityEdgePrivate::removeInGroup(QUmlActivityGroup *inGroup)
{
    // This is a read-only derived-union association end

    if (this->inGroup.contains(inGroup)) {
        this->inGroup.remove(inGroup);

        // Adjust opposite property
        Q_Q(QUmlActivityEdge);
        if (inGroup)
            (qwrappedobject_cast<QUmlActivityGroupPrivate *>(inGroup->d_func()))->removeContainedEdge(q);
    }
}

/*!
    \class QUmlActivityEdge

    \inmodule QtUml

    \brief Activity edges can be contained in interruptible regions.An activity edge is an abstract class for directed connections between two activity nodes.
 */

QUmlActivityEdge::QUmlActivityEdge(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(*new QUmlActivityEdgePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityEdge::QUmlActivityEdge(QUmlActivityEdgePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityEdge::~QUmlActivityEdge()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlActivityEdge
// ---------------------------------------------------------------

/*!
    Node from which tokens are taken when they traverse the edge.
 */
QUmlActivityNode *QUmlActivityEdge::source() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->source;
}

void QUmlActivityEdge::setSource(QUmlActivityNode *source)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->source != source) {
        // Adjust opposite property
        if (d->source)
            d->source->removeOutgoing(this);

        d->source = source;

        // Adjust opposite property
        if (source)
            source->addOutgoing(this);
    }
}

/*!
    Inherited edges replaced by this edge in a specialization of the activity.
 */
QSet<QUmlActivityEdge *> QUmlActivityEdge::redefinedEdges() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->redefinedEdges;
}

void QUmlActivityEdge::addRedefinedEdge(QUmlActivityEdge *redefinedEdge)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (!d->redefinedEdges.contains(redefinedEdge)) {
        d->redefinedEdges.insert(redefinedEdge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedEdge));
    }
}

void QUmlActivityEdge::removeRedefinedEdge(QUmlActivityEdge *redefinedEdge)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->redefinedEdges.contains(redefinedEdge)) {
        d->redefinedEdges.remove(redefinedEdge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedEdge));
    }
}

/*!
    Groups containing the edge.
 */
QSet<QUmlActivityGroup *> QUmlActivityEdge::inGroup() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlActivityEdge);
    return d->inGroup;
}

/*!
    Specification evaluated at runtime to determine if the edge can be traversed.
 */
QUmlValueSpecification *QUmlActivityEdge::guard() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->guard;
}

void QUmlActivityEdge::setGuard(QUmlValueSpecification *guard)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->guard != guard) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->guard));

        d->guard = guard;

        // Adjust subsetted property(ies)
        if (guard) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(guard));
        }
    }
}

/*!
    Partitions containing the edge.
 */
QSet<QUmlActivityPartition *> QUmlActivityEdge::inPartition() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->inPartition;
}

void QUmlActivityEdge::addInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (!d->inPartition.contains(inPartition)) {
        d->inPartition.insert(inPartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityEdgePrivate *>(d))->addInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inPartition));

        // Adjust opposite property
        inPartition->addEdge(this);
    }
}

void QUmlActivityEdge::removeInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->inPartition.contains(inPartition)) {
        d->inPartition.remove(inPartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityEdgePrivate *>(d))->removeInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inPartition));

        // Adjust opposite property
        if (inPartition)
            inPartition->removeEdge(this);
    }
}

/*!
    Activity containing the edge.
 */
QUmlActivity *QUmlActivityEdge::activity() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->activity;
}

void QUmlActivityEdge::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->activity != activity) {
        // Adjust opposite property
        if (d->activity)
            d->activity->removeEdge(this);

        d->activity = activity;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(activity));

        // Adjust opposite property
        if (activity)
            activity->addEdge(this);
    }
}

/*!
    Region that the edge can interrupt.
 */
QUmlInterruptibleActivityRegion *QUmlActivityEdge::interrupts() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->interrupts;
}

void QUmlActivityEdge::setInterrupts(QUmlInterruptibleActivityRegion *interrupts)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->interrupts != interrupts) {
        // Adjust opposite property
        if (d->interrupts)
            d->interrupts->removeInterruptingEdge(this);

        d->interrupts = interrupts;

        // Adjust opposite property
        if (interrupts)
            interrupts->addInterruptingEdge(this);
    }
}

/*!
    The minimum number of tokens that must traverse the edge at the same time.
 */
QUmlValueSpecification *QUmlActivityEdge::weight() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->weight;
}

void QUmlActivityEdge::setWeight(QUmlValueSpecification *weight)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->weight != weight) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->weight));

        d->weight = weight;

        // Adjust subsetted property(ies)
        if (weight) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(weight));
        }
    }
}

/*!
    Structured activity node containing the edge.
 */
QUmlStructuredActivityNode *QUmlActivityEdge::inStructuredNode() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->inStructuredNode;
}

void QUmlActivityEdge::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->inStructuredNode != inStructuredNode) {
        // Adjust opposite property
        if (d->inStructuredNode)
            d->inStructuredNode->removeEdge(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityEdgePrivate *>(d))->removeInGroup(qwrappedobject_cast<QUmlActivityGroup *>(d->inStructuredNode));

        d->inStructuredNode = inStructuredNode;

        // Adjust subsetted property(ies)
        if (inStructuredNode) {
            (qwrappedobject_cast<QUmlActivityEdgePrivate *>(d))->addInGroup(qwrappedobject_cast<QUmlActivityGroup *>(inStructuredNode));
        }
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(inStructuredNode));

        // Adjust opposite property
        if (inStructuredNode)
            inStructuredNode->addEdge(this);
    }
}

/*!
    Node to which tokens are put when they traverse the edge.
 */
QUmlActivityNode *QUmlActivityEdge::target() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityEdge);
    return d->target;
}

void QUmlActivityEdge::setTarget(QUmlActivityNode *target)
{
    // This is a read-write association end

    Q_D(QUmlActivityEdge);
    if (d->target != target) {
        // Adjust opposite property
        if (d->target)
            d->target->removeIncoming(this);

        d->target = target;

        // Adjust opposite property
        if (target)
            target->addIncoming(this);
    }
}

void QUmlActivityEdge::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("source")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("source")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("source")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Node from which tokens are taken when they traverse the edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("source")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("source")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("source")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityNode::outgoing");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("redefinedEdges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("redefinedEdges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("redefinedEdges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Inherited edges replaced by this edge in a specialization of the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("redefinedEdges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("redefinedEdges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("redefinedEdges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inGroup")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inGroup")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inGroup")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Groups containing the edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inGroup")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inGroup")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inGroup")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityGroup::containedEdge");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("guard")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("guard")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("guard")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specification evaluated at runtime to determine if the edge can be traversed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("guard")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("guard")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("guard")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inPartition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inPartition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inPartition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Partitions containing the edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inPartition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inPartition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityEdge::inGroup");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inPartition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityPartition::edge");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("activity")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("activity")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("activity")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Activity containing the edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("activity")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("activity")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("activity")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivity::edge");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("interrupts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("interrupts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("interrupts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Region that the edge can interrupt.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("interrupts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("interrupts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("interrupts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlInterruptibleActivityRegion::interruptingEdge");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("weight")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("weight")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("weight")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The minimum number of tokens that must traverse the edge at the same time.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("weight")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("weight")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("weight")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Structured activity node containing the edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityEdge::inGroup QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("inStructuredNode")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStructuredActivityNode::edge");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("target")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("target")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("target")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Node to which tokens are put when they traverse the edge.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("target")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("target")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityEdge")][QString::fromLatin1("target")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityNode::incoming");

    QUmlRedefinableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlactivityedge.cpp"

