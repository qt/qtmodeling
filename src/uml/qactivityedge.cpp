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

#include <QtUml/QInterruptibleActivityRegion>
#include <QtUml/QStructuredActivityNode>
#include <QtUml/QActivityNode>
#include <QtUml/QActivityPartition>
#include <QtUml/QValueSpecification>
#include <QtUml/QActivity>
#include <QtUml/QActivityGroup>

QT_BEGIN_NAMESPACE_QTUML

class QActivityEdgePrivate
{
public:
    explicit QActivityEdgePrivate();
    virtual ~QActivityEdgePrivate();

    QActivity *activity;
    QValueSpecification *guard;
    QSet<QActivityGroup *> *inGroup;
    QSet<QActivityPartition *> *inPartition;
    QStructuredActivityNode *inStructuredNode;
    QInterruptibleActivityRegion *interrupts;
    QSet<QActivityEdge *> *redefinedEdges;
    QActivityNode *source;
    QActivityNode *target;
    QValueSpecification *weight;
};

QActivityEdgePrivate::QActivityEdgePrivate() :
    inGroup(new QSet<QActivityGroup *>),
    inPartition(new QSet<QActivityPartition *>),
    redefinedEdges(new QSet<QActivityEdge *>)
{
}

QActivityEdgePrivate::~QActivityEdgePrivate()
{
    delete inGroup;
    delete inPartition;
    delete redefinedEdges;
}

/*!
    \class QActivityEdge

    \inmodule QtUml

    \brief Activity edges can be contained in interruptible regions.An activity edge is an abstract class for directed connections between two activity nodes.
 */

QActivityEdge::QActivityEdge()
    : d_ptr(new QActivityEdgePrivate)
{
}

QActivityEdge::~QActivityEdge()
{
    delete d_ptr;
}

/*!
    Activity containing the edge.
 */
QActivity *QActivityEdge::activity() const
{
    return d_ptr->activity;
}

void QActivityEdge::setActivity(const QActivity *activity)
{
    d_ptr->activity = const_cast<QActivity *>(activity);
}

/*!
    Specification evaluated at runtime to determine if the edge can be traversed.
 */
QValueSpecification *QActivityEdge::guard() const
{
    return d_ptr->guard;
}

void QActivityEdge::setGuard(const QValueSpecification *guard)
{
    d_ptr->guard = const_cast<QValueSpecification *>(guard);
}

/*!
    Groups containing the edge.
 */
const QSet<QActivityGroup *> *QActivityEdge::inGroup() const
{
    return d_ptr->inGroup;
}

void QActivityEdge::addInGroup(const QActivityGroup *inGroup)
{
    d_ptr->inGroup->insert(const_cast<QActivityGroup *>(inGroup));
}

void QActivityEdge::removeInGroup(const QActivityGroup *inGroup)
{
    d_ptr->inGroup->remove(const_cast<QActivityGroup *>(inGroup));
}

/*!
    Partitions containing the edge.
 */
const QSet<QActivityPartition *> *QActivityEdge::inPartition() const
{
    return d_ptr->inPartition;
}

void QActivityEdge::addInPartition(const QActivityPartition *inPartition)
{
    d_ptr->inPartition->insert(const_cast<QActivityPartition *>(inPartition));
    // Adjust subsetted property(ies)
    addInGroup(inPartition);
}

void QActivityEdge::removeInPartition(const QActivityPartition *inPartition)
{
    d_ptr->inPartition->remove(const_cast<QActivityPartition *>(inPartition));
    // Adjust subsetted property(ies)
    removeInGroup(inPartition);
}

/*!
    Structured activity node containing the edge.
 */
QStructuredActivityNode *QActivityEdge::inStructuredNode() const
{
    return d_ptr->inStructuredNode;
}

void QActivityEdge::setInStructuredNode(const QStructuredActivityNode *inStructuredNode)
{
    d_ptr->inStructuredNode = const_cast<QStructuredActivityNode *>(inStructuredNode);
}

/*!
    Region that the edge can interrupt.
 */
QInterruptibleActivityRegion *QActivityEdge::interrupts() const
{
    return d_ptr->interrupts;
}

void QActivityEdge::setInterrupts(const QInterruptibleActivityRegion *interrupts)
{
    d_ptr->interrupts = const_cast<QInterruptibleActivityRegion *>(interrupts);
}

/*!
    Inherited edges replaced by this edge in a specialization of the activity.
 */
const QSet<QActivityEdge *> *QActivityEdge::redefinedEdges() const
{
    return d_ptr->redefinedEdges;
}

void QActivityEdge::addRedefinedEdge(const QActivityEdge *redefinedEdge)
{
    d_ptr->redefinedEdges->insert(const_cast<QActivityEdge *>(redefinedEdge));
    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedEdge);
}

void QActivityEdge::removeRedefinedEdge(const QActivityEdge *redefinedEdge)
{
    d_ptr->redefinedEdges->remove(const_cast<QActivityEdge *>(redefinedEdge));
    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedEdge);
}

/*!
    Node from which tokens are taken when they traverse the edge.
 */
QActivityNode *QActivityEdge::source() const
{
    return d_ptr->source;
}

void QActivityEdge::setSource(const QActivityNode *source)
{
    d_ptr->source = const_cast<QActivityNode *>(source);
}

/*!
    Node to which tokens are put when they traverse the edge.
 */
QActivityNode *QActivityEdge::target() const
{
    return d_ptr->target;
}

void QActivityEdge::setTarget(const QActivityNode *target)
{
    d_ptr->target = const_cast<QActivityNode *>(target);
}

/*!
    The minimum number of tokens that must traverse the edge at the same time.
 */
QValueSpecification *QActivityEdge::weight() const
{
    return d_ptr->weight;
}

void QActivityEdge::setWeight(const QValueSpecification *weight)
{
    d_ptr->weight = const_cast<QValueSpecification *>(weight);
}

QT_END_NAMESPACE_QTUML

