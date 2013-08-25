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
#include "qumlactivitypartition.h"
#include "qumlactivitypartition_p.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

QUmlActivityPartitionPrivate::QUmlActivityPartitionPrivate() :
    isDimension(false),
    isExternal(false),
    represents(0),
    superPartition(0)
{
}

/*!
    \class QUmlActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

QUmlActivityPartition::QUmlActivityPartition(bool create_d_ptr) :
    QUmlActivityGroup(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlActivityPartitionPrivate);
}

// Owned attributes

/*!
    Edges immediately contained in the group.
 */
QSet<QUmlActivityEdge *> QUmlActivityPartition::edge() const
{
    return QSet<QUmlActivityEdge *>();
}

void QUmlActivityPartition::addEdge(QSet<QUmlActivityEdge *> edge)
{
    Q_UNUSED(edge);
}

void QUmlActivityPartition::removeEdge(QSet<QUmlActivityEdge *> edge)
{
    Q_UNUSED(edge);
}

/*!
    Tells whether the partition groups other partitions along a dimension.
 */
bool QUmlActivityPartition::isDimension() const
{
    return bool();
}

void QUmlActivityPartition::setDimension(bool isDimension)
{
    Q_UNUSED(isDimension);
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QUmlActivityPartition::isExternal() const
{
    return bool();
}

void QUmlActivityPartition::setExternal(bool isExternal)
{
    Q_UNUSED(isExternal);
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlActivityPartition::node() const
{
    return QSet<QUmlActivityNode *>();
}

void QUmlActivityPartition::addNode(QSet<QUmlActivityNode *> node)
{
    Q_UNUSED(node);
}

void QUmlActivityPartition::removeNode(QSet<QUmlActivityNode *> node)
{
    Q_UNUSED(node);
}

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
QUmlElement *QUmlActivityPartition::represents() const
{
    return 0;
}

void QUmlActivityPartition::setRepresents(QUmlElement *represents)
{
    Q_UNUSED(represents);
}

/*!
    Partitions immediately contained in the partition.
 */
QSet<QUmlActivityPartition *> QUmlActivityPartition::subpartition() const
{
    return QSet<QUmlActivityPartition *>();
}

void QUmlActivityPartition::addSubpartition(QSet<QUmlActivityPartition *> subpartition)
{
    Q_UNUSED(subpartition);
}

void QUmlActivityPartition::removeSubpartition(QSet<QUmlActivityPartition *> subpartition)
{
    Q_UNUSED(subpartition);
}

/*!
    Partition immediately containing the partition.
 */
QUmlActivityPartition *QUmlActivityPartition::superPartition() const
{
    return 0;
}

void QUmlActivityPartition::setSuperPartition(QUmlActivityPartition *superPartition)
{
    Q_UNUSED(superPartition);
}

QT_END_NAMESPACE

