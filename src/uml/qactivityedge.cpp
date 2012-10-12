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

#include "qactivityedge.h"
#include "qactivityedge_p.h"
#include "qredefinableelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QInterruptibleActivityRegion>
#include <QtUml/QStructuredActivityNode>
#include <QtUml/QActivityNode>
#include <QtUml/QActivityPartition>
#include <QtUml/QValueSpecification>
#include <QtUml/QActivity>
#include <QtUml/QActivityGroup>

QT_BEGIN_NAMESPACE_QTUML

QActivityEdgePrivate::QActivityEdgePrivate() :
    source(0),
    redefinedEdges(new QSet<QActivityEdge *>),
    inGroup(new QSet<QActivityGroup *>),
    guard(0),
    inPartition(new QSet<QActivityPartition *>),
    activity(0),
    interrupts(0),
    weight(0),
    inStructuredNode(0),
    target(0)
{
}

QActivityEdgePrivate::~QActivityEdgePrivate()
{
    delete redefinedEdges;
    delete inGroup;
    delete inPartition;
}

void QActivityEdgePrivate::setSource(QActivityNode *source)
{
    this->source = source;
}

void QActivityEdgePrivate::addRedefinedEdge(QActivityEdge *redefinedEdge)
{
    this->redefinedEdges->insert(redefinedEdge);

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedEdge);
}

void QActivityEdgePrivate::removeRedefinedEdge(QActivityEdge *redefinedEdge)
{
    this->redefinedEdges->remove(redefinedEdge);

    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedEdge);
}

void QActivityEdgePrivate::addInGroup(QActivityGroup *inGroup)
{
    this->inGroup->insert(inGroup);
}

void QActivityEdgePrivate::removeInGroup(QActivityGroup *inGroup)
{
    this->inGroup->remove(inGroup);
}

void QActivityEdgePrivate::setGuard(QValueSpecification *guard)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->guard);

    this->guard = guard;

    // Adjust subsetted property(ies)
    addOwnedElement(guard);
}

void QActivityEdgePrivate::addInPartition(QActivityPartition *inPartition)
{
    this->inPartition->insert(inPartition);

    // Adjust subsetted property(ies)
    addInGroup(inPartition);
}

void QActivityEdgePrivate::removeInPartition(QActivityPartition *inPartition)
{
    this->inPartition->remove(inPartition);

    // Adjust subsetted property(ies)
    removeInGroup(inPartition);
}

void QActivityEdgePrivate::setActivity(QActivity *activity)
{
    this->activity = activity;

    // Adjust subsetted property(ies)
    setOwner(activity);
}

void QActivityEdgePrivate::setInterrupts(QInterruptibleActivityRegion *interrupts)
{
    this->interrupts = interrupts;
}

void QActivityEdgePrivate::setWeight(QValueSpecification *weight)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->weight);

    this->weight = weight;

    // Adjust subsetted property(ies)
    addOwnedElement(weight);
}

void QActivityEdgePrivate::setInStructuredNode(QStructuredActivityNode *inStructuredNode)
{
    // Adjust subsetted property(ies)
    removeInGroup(this->inStructuredNode);

    this->inStructuredNode = inStructuredNode;

    // Adjust subsetted property(ies)
    addInGroup(inStructuredNode);
    setOwner(inStructuredNode);
}

void QActivityEdgePrivate::setTarget(QActivityNode *target)
{
    this->target = target;
}

/*!
    \class QActivityEdge

    \inmodule QtUml

    \brief Activity edges can be contained in interruptible regions.An activity edge is an abstract class for directed connections between two activity nodes.
 */

QActivityEdge::QActivityEdge()
{
}

QActivityEdge::~QActivityEdge()
{
}

/*!
    Node from which tokens are taken when they traverse the edge.
 */
QActivityNode *QActivityEdge::source() const
{
    QTUML_D(const QActivityEdge);
    return d->source;
}

void QActivityEdge::setSource(QActivityNode *source)
{
    QTUML_D(QActivityEdge);
    if (d->source != source) {
        d->setSource(source);

        // Adjust opposite property
        source->addOutgoing(this);
    }
}

/*!
    Inherited edges replaced by this edge in a specialization of the activity.
 */
const QSet<QActivityEdge *> *QActivityEdge::redefinedEdges() const
{
    QTUML_D(const QActivityEdge);
    return d->redefinedEdges;
}

void QActivityEdge::addRedefinedEdge(QActivityEdge *redefinedEdge)
{
    QTUML_D(QActivityEdge);
    if (!d->redefinedEdges->contains(redefinedEdge)) {
        d->addRedefinedEdge(redefinedEdge);
    }
}

void QActivityEdge::removeRedefinedEdge(QActivityEdge *redefinedEdge)
{
    QTUML_D(QActivityEdge);
    if (d->redefinedEdges->contains(redefinedEdge)) {
        d->removeRedefinedEdge(redefinedEdge);
    }
}

/*!
    Groups containing the edge.
 */
const QSet<QActivityGroup *> *QActivityEdge::inGroup() const
{
    QTUML_D(const QActivityEdge);
    return d->inGroup;
}

/*!
    Specification evaluated at runtime to determine if the edge can be traversed.
 */
QValueSpecification *QActivityEdge::guard() const
{
    QTUML_D(const QActivityEdge);
    return d->guard;
}

void QActivityEdge::setGuard(QValueSpecification *guard)
{
    QTUML_D(QActivityEdge);
    if (d->guard != guard) {
        d->setGuard(guard);
    }
}

/*!
    Partitions containing the edge.
 */
const QSet<QActivityPartition *> *QActivityEdge::inPartition() const
{
    QTUML_D(const QActivityEdge);
    return d->inPartition;
}

void QActivityEdge::addInPartition(QActivityPartition *inPartition)
{
    QTUML_D(QActivityEdge);
    if (!d->inPartition->contains(inPartition)) {
        d->addInPartition(inPartition);

        // Adjust opposite property
        inPartition->addEdge(this);
    }
}

void QActivityEdge::removeInPartition(QActivityPartition *inPartition)
{
    QTUML_D(QActivityEdge);
    if (d->inPartition->contains(inPartition)) {
        d->removeInPartition(inPartition);

        // Adjust opposite property
        inPartition->removeEdge(this);
    }
}

/*!
    Activity containing the edge.
 */
QActivity *QActivityEdge::activity() const
{
    QTUML_D(const QActivityEdge);
    return d->activity;
}

void QActivityEdge::setActivity(QActivity *activity)
{
    QTUML_D(QActivityEdge);
    if (d->activity != activity) {
        d->setActivity(activity);

        // Adjust opposite property
        activity->addEdge(this);
    }
}

/*!
    Region that the edge can interrupt.
 */
QInterruptibleActivityRegion *QActivityEdge::interrupts() const
{
    QTUML_D(const QActivityEdge);
    return d->interrupts;
}

void QActivityEdge::setInterrupts(QInterruptibleActivityRegion *interrupts)
{
    QTUML_D(QActivityEdge);
    if (d->interrupts != interrupts) {
        d->setInterrupts(interrupts);

        // Adjust opposite property
        interrupts->addInterruptingEdge(this);
    }
}

/*!
    The minimum number of tokens that must traverse the edge at the same time.
 */
QValueSpecification *QActivityEdge::weight() const
{
    QTUML_D(const QActivityEdge);
    return d->weight;
}

void QActivityEdge::setWeight(QValueSpecification *weight)
{
    QTUML_D(QActivityEdge);
    if (d->weight != weight) {
        d->setWeight(weight);
    }
}

/*!
    Structured activity node containing the edge.
 */
QStructuredActivityNode *QActivityEdge::inStructuredNode() const
{
    QTUML_D(const QActivityEdge);
    return d->inStructuredNode;
}

void QActivityEdge::setInStructuredNode(QStructuredActivityNode *inStructuredNode)
{
    QTUML_D(QActivityEdge);
    if (d->inStructuredNode != inStructuredNode) {
        d->setInStructuredNode(inStructuredNode);

        // Adjust opposite property
        inStructuredNode->addEdge(this);
    }
}

/*!
    Node to which tokens are put when they traverse the edge.
 */
QActivityNode *QActivityEdge::target() const
{
    QTUML_D(const QActivityEdge);
    return d->target;
}

void QActivityEdge::setTarget(QActivityNode *target)
{
    QTUML_D(QActivityEdge);
    if (d->target != target) {
        d->setTarget(target);

        // Adjust opposite property
        target->addIncoming(this);
    }
}

QT_END_NAMESPACE_QTUML

