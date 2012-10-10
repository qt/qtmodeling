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
  
void QActivityEdgePrivate::setSource(const QActivityNode *source) 
{  
    this->source = const_cast<QActivityNode *>(source);   
}
  
void QActivityEdgePrivate::addRedefinedEdge(const QActivityEdge *redefinedEdge) 
{   
    this->redefinedEdges->insert(const_cast<QActivityEdge *>(redefinedEdge)); 

    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedEdge); 
}
 
void QActivityEdgePrivate::removeRedefinedEdge(const QActivityEdge *redefinedEdge) 
{    
    this->redefinedEdges->remove(const_cast<QActivityEdge *>(redefinedEdge)); 

    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedEdge);
}
  
void QActivityEdgePrivate::addInGroup(const QActivityGroup *inGroup) 
{   
    this->inGroup->insert(const_cast<QActivityGroup *>(inGroup));  
}
 
void QActivityEdgePrivate::removeInGroup(const QActivityGroup *inGroup) 
{    
    this->inGroup->remove(const_cast<QActivityGroup *>(inGroup)); 
}
  
void QActivityEdgePrivate::setGuard(const QValueSpecification *guard) 
{  
    this->guard = const_cast<QValueSpecification *>(guard);   
}
  
void QActivityEdgePrivate::addInPartition(const QActivityPartition *inPartition) 
{   
    this->inPartition->insert(const_cast<QActivityPartition *>(inPartition)); 

    // Adjust subsetted property(ies)
    addInGroup(inPartition); 
}
 
void QActivityEdgePrivate::removeInPartition(const QActivityPartition *inPartition) 
{    
    this->inPartition->remove(const_cast<QActivityPartition *>(inPartition)); 

    // Adjust subsetted property(ies)
    removeInGroup(inPartition);
}
  
void QActivityEdgePrivate::setActivity(const QActivity *activity) 
{  
    this->activity = const_cast<QActivity *>(activity);   
}
  
void QActivityEdgePrivate::setInterrupts(const QInterruptibleActivityRegion *interrupts) 
{  
    this->interrupts = const_cast<QInterruptibleActivityRegion *>(interrupts);   
}
  
void QActivityEdgePrivate::setWeight(const QValueSpecification *weight) 
{  
    this->weight = const_cast<QValueSpecification *>(weight);   
}
  
void QActivityEdgePrivate::setInStructuredNode(const QStructuredActivityNode *inStructuredNode) 
{  
    this->inStructuredNode = const_cast<QStructuredActivityNode *>(inStructuredNode);   
}
  
void QActivityEdgePrivate::setTarget(const QActivityNode *target) 
{  
    this->target = const_cast<QActivityNode *>(target);   
}

/*!
    \class QActivityEdge

    \inmodule QtUml

    \brief Activity edges can be contained in interruptible regions.An activity edge is an abstract class for directed connections between two activity nodes.
 */

QActivityEdge::QActivityEdge()
{
    d_umlptr = new QActivityEdgePrivate;
}

QActivityEdge::~QActivityEdge()
{
}

/*!
    Node from which tokens are taken when they traverse the edge.
 */
QActivityNode *QActivityEdge::source() const
{
    Q_D(const QActivityEdge);
    return d->source;
}

void QActivityEdge::setSource(const QActivityNode *source)
{
    Q_D(QActivityEdge);
    d->setSource(const_cast<QActivityNode *>(source));
}

/*!
    Inherited edges replaced by this edge in a specialization of the activity.
 */
const QSet<QActivityEdge *> *QActivityEdge::redefinedEdges() const
{
    Q_D(const QActivityEdge);
    return d->redefinedEdges;
}

void QActivityEdge::addRedefinedEdge(const QActivityEdge *redefinedEdge)
{
    Q_D(QActivityEdge);
    d->addRedefinedEdge(const_cast<QActivityEdge *>(redefinedEdge));
}

void QActivityEdge::removeRedefinedEdge(const QActivityEdge *redefinedEdge)
{
    Q_D(QActivityEdge);
    d->removeRedefinedEdge(const_cast<QActivityEdge *>(redefinedEdge));
}

/*!
    Groups containing the edge.
 */
const QSet<QActivityGroup *> *QActivityEdge::inGroup() const
{
    Q_D(const QActivityEdge);
    return d->inGroup;
}

/*!
    Specification evaluated at runtime to determine if the edge can be traversed.
 */
QValueSpecification *QActivityEdge::guard() const
{
    Q_D(const QActivityEdge);
    return d->guard;
}

void QActivityEdge::setGuard(const QValueSpecification *guard)
{
    Q_D(QActivityEdge);
    d->setGuard(const_cast<QValueSpecification *>(guard));
}

/*!
    Partitions containing the edge.
 */
const QSet<QActivityPartition *> *QActivityEdge::inPartition() const
{
    Q_D(const QActivityEdge);
    return d->inPartition;
}

void QActivityEdge::addInPartition(const QActivityPartition *inPartition)
{
    Q_D(QActivityEdge);
    d->addInPartition(const_cast<QActivityPartition *>(inPartition));
}

void QActivityEdge::removeInPartition(const QActivityPartition *inPartition)
{
    Q_D(QActivityEdge);
    d->removeInPartition(const_cast<QActivityPartition *>(inPartition));
}

/*!
    Activity containing the edge.
 */
QActivity *QActivityEdge::activity() const
{
    Q_D(const QActivityEdge);
    return d->activity;
}

void QActivityEdge::setActivity(const QActivity *activity)
{
    Q_D(QActivityEdge);
    d->setActivity(const_cast<QActivity *>(activity));
}

/*!
    Region that the edge can interrupt.
 */
QInterruptibleActivityRegion *QActivityEdge::interrupts() const
{
    Q_D(const QActivityEdge);
    return d->interrupts;
}

void QActivityEdge::setInterrupts(const QInterruptibleActivityRegion *interrupts)
{
    Q_D(QActivityEdge);
    d->setInterrupts(const_cast<QInterruptibleActivityRegion *>(interrupts));
}

/*!
    The minimum number of tokens that must traverse the edge at the same time.
 */
QValueSpecification *QActivityEdge::weight() const
{
    Q_D(const QActivityEdge);
    return d->weight;
}

void QActivityEdge::setWeight(const QValueSpecification *weight)
{
    Q_D(QActivityEdge);
    d->setWeight(const_cast<QValueSpecification *>(weight));
}

/*!
    Structured activity node containing the edge.
 */
QStructuredActivityNode *QActivityEdge::inStructuredNode() const
{
    Q_D(const QActivityEdge);
    return d->inStructuredNode;
}

void QActivityEdge::setInStructuredNode(const QStructuredActivityNode *inStructuredNode)
{
    Q_D(QActivityEdge);
    d->setInStructuredNode(const_cast<QStructuredActivityNode *>(inStructuredNode));
}

/*!
    Node to which tokens are put when they traverse the edge.
 */
QActivityNode *QActivityEdge::target() const
{
    Q_D(const QActivityEdge);
    return d->target;
}

void QActivityEdge::setTarget(const QActivityNode *target)
{
    Q_D(QActivityEdge);
    d->setTarget(const_cast<QActivityNode *>(target));
}

QT_END_NAMESPACE_QTUML

