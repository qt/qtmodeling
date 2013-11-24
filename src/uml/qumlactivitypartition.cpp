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

#include "private/qumlactivitypartitionobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

/*!
    Creates a new QUmlActivityPartition. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlActivityPartition::QUmlActivityPartition(bool createQModelingObject) :
    _isDimension(false),
    _isExternal(false),
    _represents(0),
    _superPartition(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlActivityPartitionObject(this));
}

/*!
    Returns a deep-copied clone of the QUmlActivityPartition.
*/
QModelingElement *QUmlActivityPartition::clone() const
{
    QUmlActivityPartition *c = new QUmlActivityPartition;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (inActivity())
        c->setInActivity(dynamic_cast<QUmlActivity *>(inActivity()->clone()));
    foreach (QUmlActivityEdge *element, edges())
        c->addEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    c->setDimension(isDimension());
    c->setExternal(isExternal());
    foreach (QUmlActivityNode *element, nodes())
        c->addNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    if (represents())
        c->setRepresents(dynamic_cast<QUmlElement *>(represents()->clone()));
    foreach (QUmlActivityPartition *element, subpartitions())
        c->addSubpartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (superPartition())
        c->setSuperPartition(dynamic_cast<QUmlActivityPartition *>(superPartition()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Edges immediately contained in the group.

    \sa addEdge(), removeEdge()

    \b {Subsetted property(ies):} QUmlActivityGroup::containedEdges().

    \b {Opposite property(ies):} QUmlActivityEdge::inPartitions().
 */
const QSet<QUmlActivityEdge *> QUmlActivityPartition::edges() const
{
    // This is a read-write association end

    return _edges;
}

/*!
    Adds \a edge to edges.

    \sa edges(), removeEdge()
 */
void QUmlActivityPartition::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edges.contains(edge)) {
        _edges.insert(edge);
        if (edge && edge->asQModelingObject() && this->asQModelingObject())
            QObject::connect(edge->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeEdge(QObject *)));

        // Adjust subsetted properties
        addContainedEdge(edge);

        // Adjust opposite properties
        if (edge) {
            edge->addInPartition(this);
        }
    }
}

/*!
    Removes \a edge from edges.

    \sa edges(), addEdge()
 */
void QUmlActivityPartition::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (_edges.contains(edge)) {
        _edges.remove(edge);

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
bool QUmlActivityPartition::isDimension() const
{
    // This is a read-write property

    return _isDimension;
}

/*!
    Adjusts isDimension to \a isDimension.
 */
void QUmlActivityPartition::setDimension(bool isDimension)
{
    // This is a read-write property

    if (_isDimension != isDimension) {
        _isDimension = isDimension;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDimension");
    }
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QUmlActivityPartition::isExternal() const
{
    // This is a read-write property

    return _isExternal;
}

/*!
    Adjusts isExternal to \a isExternal.
 */
void QUmlActivityPartition::setExternal(bool isExternal)
{
    // This is a read-write property

    if (_isExternal != isExternal) {
        _isExternal = isExternal;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isExternal");
    }
}

/*!
    Nodes immediately contained in the group.

    \sa addNode(), removeNode()

    \b {Subsetted property(ies):} QUmlActivityGroup::containedNodes().

    \b {Opposite property(ies):} QUmlActivityNode::inPartitions().
 */
const QSet<QUmlActivityNode *> QUmlActivityPartition::nodes() const
{
    // This is a read-write association end

    return _nodes;
}

/*!
    Adds \a node to nodes.

    \sa nodes(), removeNode()
 */
void QUmlActivityPartition::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_nodes.contains(node)) {
        _nodes.insert(node);
        if (node && node->asQModelingObject() && this->asQModelingObject())
            QObject::connect(node->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeNode(QObject *)));

        // Adjust subsetted properties
        addContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->addInPartition(this);
        }
    }
}

/*!
    Removes \a node from nodes.

    \sa nodes(), addNode()
 */
void QUmlActivityPartition::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (_nodes.contains(node)) {
        _nodes.remove(node);

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
QUmlElement *QUmlActivityPartition::represents() const
{
    // This is a read-write association end

    return _represents;
}

/*!
    Adjusts represents to \a represents.
 */
void QUmlActivityPartition::setRepresents(QUmlElement *represents)
{
    // This is a read-write association end

    if (_represents != represents) {
        _represents = represents;
        if (represents && represents->asQModelingObject() && this->asQModelingObject())
            QObject::connect(represents->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRepresents()));
    }
}

/*!
    Partitions immediately contained in the partition.

    \sa addSubpartition(), removeSubpartition()

    \b {Subsetted property(ies):} QUmlActivityGroup::subgroups().

    \b {Opposite property(ies):} QUmlActivityPartition::superPartition().
 */
const QSet<QUmlActivityPartition *> QUmlActivityPartition::subpartitions() const
{
    // This is a read-write association end

    return _subpartitions;
}

/*!
    Adds \a subpartition to subpartitions.

    \sa subpartitions(), removeSubpartition()
 */
void QUmlActivityPartition::addSubpartition(QUmlActivityPartition *subpartition)
{
    // This is a read-write association end

    if (!_subpartitions.contains(subpartition)) {
        _subpartitions.insert(subpartition);
        if (subpartition && subpartition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(subpartition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSubpartition(QObject *)));
        subpartition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addSubgroup(subpartition);

        // Adjust opposite properties
        if (subpartition) {
            subpartition->setSuperPartition(this);
        }
    }
}

/*!
    Removes \a subpartition from subpartitions.

    \sa subpartitions(), addSubpartition()
 */
void QUmlActivityPartition::removeSubpartition(QUmlActivityPartition *subpartition)
{
    // This is a read-write association end

    if (_subpartitions.contains(subpartition)) {
        _subpartitions.remove(subpartition);
        if (subpartition->asQModelingObject())
            subpartition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeSubgroup(subpartition);

        // Adjust opposite properties
        if (subpartition) {
            subpartition->setSuperPartition(0);
        }
    }
}

/*!
    Partition immediately containing the partition.

    \b {Subsetted property(ies):} QUmlActivityGroup::superGroup().

    \b {Opposite property(ies):} QUmlActivityPartition::subpartitions().
 */
QUmlActivityPartition *QUmlActivityPartition::superPartition() const
{
    // This is a read-write association end

    return _superPartition;
}

/*!
    Adjusts superPartition to \a superPartition.
 */
void QUmlActivityPartition::setSuperPartition(QUmlActivityPartition *superPartition)
{
    // This is a read-write association end

    if (_superPartition != superPartition) {
        // Adjust subsetted properties

        _superPartition = superPartition;
        if (superPartition && superPartition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(superPartition->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSuperPartition()));

        // Adjust subsetted properties
        setSuperGroup(superPartition);
    }
}

QT_END_NAMESPACE

