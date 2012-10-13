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

void QActivityPartitionPrivate::setRepresents(QElement *represents)
{
    this->represents = represents;
}

void QActivityPartitionPrivate::addSubpartition(QActivityPartition *subpartition)
{
    this->subpartitions->insert(subpartition);

    // Adjust subsetted property(ies)
    addSubgroup(subpartition);
}

void QActivityPartitionPrivate::removeSubpartition(QActivityPartition *subpartition)
{
    this->subpartitions->remove(subpartition);

    // Adjust subsetted property(ies)
    removeSubgroup(subpartition);
}

void QActivityPartitionPrivate::setSuperPartition(QActivityPartition *superPartition)
{
    this->superPartition = superPartition;

    // Adjust subsetted property(ies)
    setSuperGroup(superPartition);
}

void QActivityPartitionPrivate::addNode(QActivityNode *node)
{
    this->nodes->insert(node);

    // Adjust subsetted property(ies)
    addContainedNode(node);
}

void QActivityPartitionPrivate::removeNode(QActivityNode *node)
{
    this->nodes->remove(node);

    // Adjust subsetted property(ies)
    removeContainedNode(node);
}

void QActivityPartitionPrivate::addEdge(QActivityEdge *edge)
{
    this->edges->insert(edge);

    // Adjust subsetted property(ies)
    addContainedEdge(edge);
}

void QActivityPartitionPrivate::removeEdge(QActivityEdge *edge)
{
    this->edges->remove(edge);

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
    QTUML_D(const QActivityPartition);
    return d->isDimension;
}

void QActivityPartition::setDimension(bool isDimension)
{
    QTUML_D(QActivityPartition);
    if (d->isDimension != isDimension) {
        d->setDimension(isDimension);
    }
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QActivityPartition::isExternal() const
{
    QTUML_D(const QActivityPartition);
    return d->isExternal;
}

void QActivityPartition::setExternal(bool isExternal)
{
    QTUML_D(QActivityPartition);
    if (d->isExternal != isExternal) {
        d->setExternal(isExternal);
    }
}

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
QElement *QActivityPartition::represents() const
{
    QTUML_D(const QActivityPartition);
    return d->represents;
}

void QActivityPartition::setRepresents(QElement *represents)
{
    QTUML_D(QActivityPartition);
    if (d->represents != represents) {
        d->setRepresents(represents);
    }
}

/*!
    Partitions immediately contained in the partition.
 */
const QSet<QActivityPartition *> *QActivityPartition::subpartitions() const
{
    QTUML_D(const QActivityPartition);
    return d->subpartitions;
}

void QActivityPartition::addSubpartition(QActivityPartition *subpartition)
{
    QTUML_D(QActivityPartition);
    if (!d->subpartitions->contains(subpartition)) {
        d->addSubpartition(subpartition);

        // Adjust opposite property
        subpartition->setSuperPartition(this);
    }
}

void QActivityPartition::removeSubpartition(QActivityPartition *subpartition)
{
    QTUML_D(QActivityPartition);
    if (d->subpartitions->contains(subpartition)) {
        d->removeSubpartition(subpartition);

        // Adjust opposite property
        subpartition->setSuperPartition(0);
    }
}

/*!
    Partition immediately containing the partition.
 */
QActivityPartition *QActivityPartition::superPartition() const
{
    QTUML_D(const QActivityPartition);
    return d->superPartition;
}

void QActivityPartition::setSuperPartition(QActivityPartition *superPartition)
{
    QTUML_D(QActivityPartition);
    if (d->superPartition != superPartition) {
        d->setSuperPartition(superPartition);

        // Adjust opposite property
        superPartition->addSubpartition(this);
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QActivityPartition::nodes() const
{
    QTUML_D(const QActivityPartition);
    return d->nodes;
}

void QActivityPartition::addNode(QActivityNode *node)
{
    QTUML_D(QActivityPartition);
    if (!d->nodes->contains(node)) {
        d->addNode(node);

        // Adjust opposite property
        node->addInPartition(this);
    }
}

void QActivityPartition::removeNode(QActivityNode *node)
{
    QTUML_D(QActivityPartition);
    if (d->nodes->contains(node)) {
        d->removeNode(node);

        // Adjust opposite property
        node->removeInPartition(this);
    }
}

/*!
    Edges immediately contained in the group.
 */
const QSet<QActivityEdge *> *QActivityPartition::edges() const
{
    QTUML_D(const QActivityPartition);
    return d->edges;
}

void QActivityPartition::addEdge(QActivityEdge *edge)
{
    QTUML_D(QActivityPartition);
    if (!d->edges->contains(edge)) {
        d->addEdge(edge);

        // Adjust opposite property
        edge->addInPartition(this);
    }
}

void QActivityPartition::removeEdge(QActivityEdge *edge)
{
    QTUML_D(QActivityPartition);
    if (d->edges->contains(edge)) {
        d->removeEdge(edge);

        // Adjust opposite property
        edge->removeInPartition(this);
    }
}

#include "moc_qactivitypartition.cpp"

QT_END_NAMESPACE_QTUML

