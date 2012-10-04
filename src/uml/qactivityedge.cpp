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
//#include "qactivityedge_p.h"

QT_BEGIN_NAMESPACE_QTUML

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
    Activity containing the edge.
 */
QActivity *QActivityEdge::activity() const
{
}

void QActivityEdge::setActivity(const QActivity *activity)
{
}

/*!
    Specification evaluated at runtime to determine if the edge can be traversed.
 */
QValueSpecification *QActivityEdge::guard() const
{
}

void QActivityEdge::setGuard(const QValueSpecification *guard)
{
}

/*!
    Groups containing the edge.
 */
const QSet<QActivityGroup *> *QActivityEdge::inGroup() const
{
}

/*!
    Partitions containing the edge.
 */
const QSet<QActivityPartition *> *QActivityEdge::inPartition() const
{
}

void QActivityEdge::addInPartition(const QActivityPartition *inPartition)
{
}

void QActivityEdge::removeInPartition(const QActivityPartition *inPartition)
{
}

/*!
    Structured activity node containing the edge.
 */
QStructuredActivityNode *QActivityEdge::inStructuredNode() const
{
}

void QActivityEdge::setInStructuredNode(const QStructuredActivityNode *inStructuredNode)
{
}

/*!
    Region that the edge can interrupt.
 */
QInterruptibleActivityRegion *QActivityEdge::interrupts() const
{
}

void QActivityEdge::setInterrupts(const QInterruptibleActivityRegion *interrupts)
{
}

/*!
    Inherited edges replaced by this edge in a specialization of the activity.
 */
const QSet<QActivityEdge *> *QActivityEdge::redefinedEdges() const
{
}

void QActivityEdge::addRedefinedEdge(const QActivityEdge *redefinedEdge)
{
}

void QActivityEdge::removeRedefinedEdge(const QActivityEdge *redefinedEdge)
{
}

/*!
    Node from which tokens are taken when they traverse the edge.
 */
QActivityNode *QActivityEdge::source() const
{
}

void QActivityEdge::setSource(const QActivityNode *source)
{
}

/*!
    Node to which tokens are put when they traverse the edge.
 */
QActivityNode *QActivityEdge::target() const
{
}

void QActivityEdge::setTarget(const QActivityNode *target)
{
}

/*!
    The minimum number of tokens that must traverse the edge at the same time.
 */
QValueSpecification *QActivityEdge::weight() const
{
}

void QActivityEdge::setWeight(const QValueSpecification *weight)
{
}

QT_END_NAMESPACE_QTUML

