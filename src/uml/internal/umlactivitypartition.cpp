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
#include "umlactivitypartition_p.h"

#include "private/umlactivityedge_p.h"
#include "private/umlactivitynode_p.h"
#include "private/umlelement_p.h"

/*!
    \class UmlActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

UmlActivityPartition::UmlActivityPartition() :
    _isDimension(false),
    _isExternal(false),
    _represents(0),
    _superPartition(0)
{
}

// OWNED ATTRIBUTES

/*!
    Edges immediately contained in the group.
 */
const QSet<UmlActivityEdge *> UmlActivityPartition::edge() const
{
    // This is a read-write association end

    return _edge;
}

void UmlActivityPartition::addEdge(UmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edge.contains(edge)) {
        _edge.insert(edge);

        // Adjust subsetted properties
        addContainedEdge(edge);

        // Adjust opposite properties
        if (edge) {
            edge->addInPartition(this);
        }
    }
}

void UmlActivityPartition::removeEdge(UmlActivityEdge *edge)
{
    // This is a read-write association end

    if (_edge.contains(edge)) {
        _edge.remove(edge);

        // Adjust subsetted properties
        removeContainedEdge(edge);

        // Adjust opposite properties
        if (edge) {
            edge->removeInPartition(this);
        }
    }
}

/*!
    Tells whether the partition groups other partitions along a dimension.
 */
bool UmlActivityPartition::isDimension() const
{
    // This is a read-write property

    return _isDimension;
}

void UmlActivityPartition::setDimension(bool isDimension)
{
    // This is a read-write property

    if (_isDimension != isDimension) {
        _isDimension = isDimension;
    }
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool UmlActivityPartition::isExternal() const
{
    // This is a read-write property

    return _isExternal;
}

void UmlActivityPartition::setExternal(bool isExternal)
{
    // This is a read-write property

    if (_isExternal != isExternal) {
        _isExternal = isExternal;
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<UmlActivityNode *> UmlActivityPartition::node() const
{
    // This is a read-write association end

    return _node;
}

void UmlActivityPartition::addNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (!_node.contains(node)) {
        _node.insert(node);

        // Adjust subsetted properties
        addContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->addInPartition(this);
        }
    }
}

void UmlActivityPartition::removeNode(UmlActivityNode *node)
{
    // This is a read-write association end

    if (_node.contains(node)) {
        _node.remove(node);

        // Adjust subsetted properties
        removeContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->removeInPartition(this);
        }
    }
}

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
UmlElement *UmlActivityPartition::represents() const
{
    // This is a read-write association end

    return _represents;
}

void UmlActivityPartition::setRepresents(UmlElement *represents)
{
    // This is a read-write association end

    if (_represents != represents) {
        _represents = represents;
    }
}

/*!
    Partitions immediately contained in the partition.
 */
const QSet<UmlActivityPartition *> UmlActivityPartition::subpartition() const
{
    // This is a read-write association end

    return _subpartition;
}

void UmlActivityPartition::addSubpartition(UmlActivityPartition *subpartition)
{
    // This is a read-write association end

    if (!_subpartition.contains(subpartition)) {
        _subpartition.insert(subpartition);

        // Adjust subsetted properties
        addSubgroup(subpartition);
    }
}

void UmlActivityPartition::removeSubpartition(UmlActivityPartition *subpartition)
{
    // This is a read-write association end

    if (_subpartition.contains(subpartition)) {
        _subpartition.remove(subpartition);

        // Adjust subsetted properties
        removeSubgroup(subpartition);
    }
}

/*!
    Partition immediately containing the partition.
 */
UmlActivityPartition *UmlActivityPartition::superPartition() const
{
    // This is a read-write association end

    return _superPartition;
}

void UmlActivityPartition::setSuperPartition(UmlActivityPartition *superPartition)
{
    // This is a read-write association end

    if (_superPartition != superPartition) {
        // Adjust subsetted properties

        _superPartition = superPartition;

        // Adjust subsetted properties
        setSuperGroup(superPartition);
    }
}

