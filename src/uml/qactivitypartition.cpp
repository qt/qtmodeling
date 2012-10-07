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

#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>
#include <QtUml/QElement>

QT_BEGIN_NAMESPACE_QTUML

class QActivityPartitionPrivate
{
public:
    explicit QActivityPartitionPrivate();
    virtual ~QActivityPartitionPrivate();

    bool isDimension;
    bool isExternal;
    QSet<QActivityEdge *> *edges;
    QSet<QActivityNode *> *nodes;
    QElement *represents;
    QSet<QActivityPartition *> *subpartitions;
    QActivityPartition *superPartition;
};

QActivityPartitionPrivate::QActivityPartitionPrivate() :
    isDimension(false),
    isExternal(false),
    edges(new QSet<QActivityEdge *>),
    nodes(new QSet<QActivityNode *>),
    represents(0),
    subpartitions(new QSet<QActivityPartition *>),
    superPartition(0)
{
}

QActivityPartitionPrivate::~QActivityPartitionPrivate()
{
    delete edges;
    delete nodes;
    delete subpartitions;
}

/*!
    \class QActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

QActivityPartition::QActivityPartition(QObject *parent)
    : QObject(parent), d_ptr(new QActivityPartitionPrivate)
{
}

QActivityPartition::~QActivityPartition()
{
    delete d_ptr;
}

/*!
    Tells whether the partition groups other partitions along a dimension.
 */
bool QActivityPartition::isDimension() const
{
    return d_ptr->isDimension;
}

void QActivityPartition::setDimension(bool isDimension)
{
    d_ptr->isDimension = isDimension;
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QActivityPartition::isExternal() const
{
    return d_ptr->isExternal;
}

void QActivityPartition::setExternal(bool isExternal)
{
    d_ptr->isExternal = isExternal;
}

/*!
    Edges immediately contained in the group.
 */
const QSet<QActivityEdge *> *QActivityPartition::edges() const
{
    return d_ptr->edges;
}

void QActivityPartition::addEdge(const QActivityEdge *edge)
{
    d_ptr->edges->insert(const_cast<QActivityEdge *>(edge));
    // Adjust subsetted property(ies)
    addContainedEdge(edge);
}

void QActivityPartition::removeEdge(const QActivityEdge *edge)
{
    d_ptr->edges->remove(const_cast<QActivityEdge *>(edge));
    // Adjust subsetted property(ies)
    removeContainedEdge(edge);
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QActivityPartition::nodes() const
{
    return d_ptr->nodes;
}

void QActivityPartition::addNode(const QActivityNode *node)
{
    d_ptr->nodes->insert(const_cast<QActivityNode *>(node));
    // Adjust subsetted property(ies)
    addContainedNode(node);
}

void QActivityPartition::removeNode(const QActivityNode *node)
{
    d_ptr->nodes->remove(const_cast<QActivityNode *>(node));
    // Adjust subsetted property(ies)
    removeContainedNode(node);
}

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
QElement *QActivityPartition::represents() const
{
    return d_ptr->represents;
}

void QActivityPartition::setRepresents(const QElement *represents)
{
    d_ptr->represents = const_cast<QElement *>(represents);
}

/*!
    Partitions immediately contained in the partition.
 */
const QSet<QActivityPartition *> *QActivityPartition::subpartitions() const
{
    return d_ptr->subpartitions;
}

void QActivityPartition::addSubpartition(const QActivityPartition *subpartition)
{
    d_ptr->subpartitions->insert(const_cast<QActivityPartition *>(subpartition));
    // Adjust subsetted property(ies)
    addSubgroup(subpartition);
}

void QActivityPartition::removeSubpartition(const QActivityPartition *subpartition)
{
    d_ptr->subpartitions->remove(const_cast<QActivityPartition *>(subpartition));
    // Adjust subsetted property(ies)
    removeSubgroup(subpartition);
}

/*!
    Partition immediately containing the partition.
 */
QActivityPartition *QActivityPartition::superPartition() const
{
    return d_ptr->superPartition;
}

void QActivityPartition::setSuperPartition(const QActivityPartition *superPartition)
{
    d_ptr->superPartition = const_cast<QActivityPartition *>(superPartition);
}

#include "moc_qactivitypartition.cpp"

QT_END_NAMESPACE_QTUML

