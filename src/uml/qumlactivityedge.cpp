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
#include "qumlactivityedge.h"
#include "qumlactivityedge_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlActivityEdgePrivate::QUmlActivityEdgePrivate() :
    activity(0),
    guard(0),
    inStructuredNode(0),
    interrupts(0),
    source(0),
    target(0),
    weight(0)
{
}

/*!
    \class QUmlActivityEdge

    \inmodule QtUml

    \brief Activity edges can be contained in interruptible regions.An activity edge is an abstract class for directed connections between two activity nodes.
 */

QUmlActivityEdge::QUmlActivityEdge(bool create_d_ptr) :
    QUmlRedefinableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlActivityEdgePrivate);
}

// OWNED ATTRIBUTES

/*!
    Activity containing the edge.
 */
QUmlActivity *QUmlActivityEdge::activity() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->activity;
}

void QUmlActivityEdge::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->activity != activity) {
        d->activity = activity;
    }
}

/*!
    Specification evaluated at runtime to determine if the edge can be traversed.
 */
QUmlValueSpecification *QUmlActivityEdge::guard() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->guard;
}

void QUmlActivityEdge::setGuard(QUmlValueSpecification *guard)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->guard != guard) {
        d->guard = guard;
    }
}

/*!
    Groups containing the edge.
 */
QSet<QUmlActivityGroup *> QUmlActivityEdge::inGroup() const
{
    // This is a read-only derived union association end

    QM_D(const QUmlActivityEdge);
    return d->inGroup;
}

/*!
    Partitions containing the edge.
 */
QSet<QUmlActivityPartition *> QUmlActivityEdge::inPartition() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->inPartition;
}

void QUmlActivityEdge::addInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (!d->inPartition.contains(inPartition)) {
        d->inPartition.insert(inPartition);
    }
}

void QUmlActivityEdge::removeInPartition(QUmlActivityPartition *inPartition)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->inPartition.contains(inPartition)) {
        d->inPartition.remove(inPartition);
    }
}

/*!
    Structured activity node containing the edge.
 */
QUmlStructuredActivityNode *QUmlActivityEdge::inStructuredNode() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->inStructuredNode;
}

void QUmlActivityEdge::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->inStructuredNode != inStructuredNode) {
        d->inStructuredNode = inStructuredNode;
    }
}

/*!
    Region that the edge can interrupt.
 */
QUmlInterruptibleActivityRegion *QUmlActivityEdge::interrupts() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->interrupts;
}

void QUmlActivityEdge::setInterrupts(QUmlInterruptibleActivityRegion *interrupts)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->interrupts != interrupts) {
        d->interrupts = interrupts;
    }
}

/*!
    Inherited edges replaced by this edge in a specialization of the activity.
 */
QSet<QUmlActivityEdge *> QUmlActivityEdge::redefinedEdge() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->redefinedEdge;
}

void QUmlActivityEdge::addRedefinedEdge(QUmlActivityEdge *redefinedEdge)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (!d->redefinedEdge.contains(redefinedEdge)) {
        d->redefinedEdge.insert(redefinedEdge);
    }
}

void QUmlActivityEdge::removeRedefinedEdge(QUmlActivityEdge *redefinedEdge)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->redefinedEdge.contains(redefinedEdge)) {
        d->redefinedEdge.remove(redefinedEdge);
    }
}

/*!
    Node from which tokens are taken when they traverse the edge.
 */
QUmlActivityNode *QUmlActivityEdge::source() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->source;
}

void QUmlActivityEdge::setSource(QUmlActivityNode *source)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->source != source) {
        d->source = source;
    }
}

/*!
    Node to which tokens are put when they traverse the edge.
 */
QUmlActivityNode *QUmlActivityEdge::target() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->target;
}

void QUmlActivityEdge::setTarget(QUmlActivityNode *target)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->target != target) {
        d->target = target;
    }
}

/*!
    The minimum number of tokens that must traverse the edge at the same time.
 */
QUmlValueSpecification *QUmlActivityEdge::weight() const
{
    // This is a read-write association end

    QM_D(const QUmlActivityEdge);
    return d->weight;
}

void QUmlActivityEdge::setWeight(QUmlValueSpecification *weight)
{
    // This is a read-write association end

    QM_D(QUmlActivityEdge);
    if (d->weight != weight) {
        d->weight = weight;
    }
}

QT_END_NAMESPACE

