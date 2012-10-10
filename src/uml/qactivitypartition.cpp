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

#include "qactivitypartition.h"
#include "qactivitypartition_p.h"
#include "qactivitygroup_p.h"
#include "qactivitygroup_p.h"
#include "qactivitygroup_p.h"
#include "qactivitygroup_p.h"

#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>
#include <QtUml/QElement>

QT_BEGIN_NAMESPACE_QTUML

QActivityPartitionPrivate::QActivityPartitionPrivate() :
    isDimension(false),
    isExternal(false),
    represents(0),
    subpartitions(new QSet<QActivityPartition *>),
    superPartition(0),
    nodes(new QSet<QActivityNode *>),
    edges(new QSet<QActivityEdge *>)
{
}

QActivityPartitionPrivate::~QActivityPartitionPrivate()
{
    delete subpartitions;
    delete nodes;
    delete edges;
}

void QActivityPartitionPrivate::setDimension(bool isDimension)
{
    this->isDimension = isDimension;
}

void QActivityPartitionPrivate::setExternal(bool isExternal)
{
    this->isExternal = isExternal;
}
  
void QActivityPartitionPrivate::setRepresents(const QElement *represents) 
{  
    this->represents = const_cast<QElement *>(represents);   
}
  
void QActivityPartitionPrivate::addSubpartition(const QActivityPartition *subpartition) 
{   
    this->subpartitions->insert(const_cast<QActivityPartition *>(subpartition)); 

    // Adjust subsetted property(ies)
    addSubgroup(subpartition); 
}
 
void QActivityPartitionPrivate::removeSubpartition(const QActivityPartition *subpartition) 
{    
    this->subpartitions->remove(const_cast<QActivityPartition *>(subpartition)); 

    // Adjust subsetted property(ies)
    removeSubgroup(subpartition);
}
  
void QActivityPartitionPrivate::setSuperPartition(const QActivityPartition *superPartition) 
{  
    this->superPartition = const_cast<QActivityPartition *>(superPartition);   
}
  
void QActivityPartitionPrivate::addNode(const QActivityNode *node) 
{   
    this->nodes->insert(const_cast<QActivityNode *>(node)); 

    // Adjust subsetted property(ies)
    addContainedNode(node); 
}
 
void QActivityPartitionPrivate::removeNode(const QActivityNode *node) 
{    
    this->nodes->remove(const_cast<QActivityNode *>(node)); 

    // Adjust subsetted property(ies)
    removeContainedNode(node);
}
  
void QActivityPartitionPrivate::addEdge(const QActivityEdge *edge) 
{   
    this->edges->insert(const_cast<QActivityEdge *>(edge)); 

    // Adjust subsetted property(ies)
    addContainedEdge(edge); 
}
 
void QActivityPartitionPrivate::removeEdge(const QActivityEdge *edge) 
{    
    this->edges->remove(const_cast<QActivityEdge *>(edge)); 

    // Adjust subsetted property(ies)
    removeContainedEdge(edge);
}

/*!
    \class QActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

QActivityPartition::QActivityPartition(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QActivityPartitionPrivate;
}

QActivityPartition::QActivityPartition(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QActivityPartitionPrivate;
}

QActivityPartition::~QActivityPartition()
{
}

/*!
    Tells whether the partition groups other partitions along a dimension.
 */
bool QActivityPartition::isDimension() const
{
    Q_D(const QActivityPartition);
    return d->isDimension;
}

void QActivityPartition::setDimension(bool isDimension)
{
    Q_D(QActivityPartition);
    d->setDimension(isDimension);
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QActivityPartition::isExternal() const
{
    Q_D(const QActivityPartition);
    return d->isExternal;
}

void QActivityPartition::setExternal(bool isExternal)
{
    Q_D(QActivityPartition);
    d->setExternal(isExternal);
}

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
QElement *QActivityPartition::represents() const
{
    Q_D(const QActivityPartition);
    return d->represents;
}

void QActivityPartition::setRepresents(const QElement *represents)
{
    Q_D(QActivityPartition);
    d->setRepresents(const_cast<QElement *>(represents));
}

/*!
    Partitions immediately contained in the partition.
 */
const QSet<QActivityPartition *> *QActivityPartition::subpartitions() const
{
    Q_D(const QActivityPartition);
    return d->subpartitions;
}

void QActivityPartition::addSubpartition(const QActivityPartition *subpartition)
{
    Q_D(QActivityPartition);
    d->addSubpartition(const_cast<QActivityPartition *>(subpartition));
}

void QActivityPartition::removeSubpartition(const QActivityPartition *subpartition)
{
    Q_D(QActivityPartition);
    d->removeSubpartition(const_cast<QActivityPartition *>(subpartition));
}

/*!
    Partition immediately containing the partition.
 */
QActivityPartition *QActivityPartition::superPartition() const
{
    Q_D(const QActivityPartition);
    return d->superPartition;
}

void QActivityPartition::setSuperPartition(const QActivityPartition *superPartition)
{
    Q_D(QActivityPartition);
    d->setSuperPartition(const_cast<QActivityPartition *>(superPartition));
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QActivityPartition::nodes() const
{
    Q_D(const QActivityPartition);
    return d->nodes;
}

void QActivityPartition::addNode(const QActivityNode *node)
{
    Q_D(QActivityPartition);
    d->addNode(const_cast<QActivityNode *>(node));
}

void QActivityPartition::removeNode(const QActivityNode *node)
{
    Q_D(QActivityPartition);
    d->removeNode(const_cast<QActivityNode *>(node));
}

/*!
    Edges immediately contained in the group.
 */
const QSet<QActivityEdge *> *QActivityPartition::edges() const
{
    Q_D(const QActivityPartition);
    return d->edges;
}

void QActivityPartition::addEdge(const QActivityEdge *edge)
{
    Q_D(QActivityPartition);
    d->addEdge(const_cast<QActivityEdge *>(edge));
}

void QActivityPartition::removeEdge(const QActivityEdge *edge)
{
    Q_D(QActivityPartition);
    d->removeEdge(const_cast<QActivityEdge *>(edge));
}

#include "moc_qactivitypartition.cpp"

QT_END_NAMESPACE_QTUML

