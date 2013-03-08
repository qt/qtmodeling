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

#include "qumlactivitypartition.h"
#include "qumlactivitypartition_p.h"

#include <QtUml/QUmlElement>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActivityPartitionPrivate::QUmlActivityPartitionPrivate() :
    isDimension(false),
    isExternal(false),
    represents(0),
    superPartition(0)
{
}

QUmlActivityPartitionPrivate::~QUmlActivityPartitionPrivate()
{
}

/*!
    \class QUmlActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

QUmlActivityPartition::QUmlActivityPartition(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityGroup(*new QUmlActivityPartitionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityPartition::QUmlActivityPartition(QUmlActivityPartitionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityGroup(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityPartition::~QUmlActivityPartition()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlActivityPartition
// ---------------------------------------------------------------

/*!
    Tells whether the partition groups other partitions along a dimension.
 */
bool QUmlActivityPartition::isDimension() const
{
    // This is a read-write attribute

    Q_D(const QUmlActivityPartition);
    return d->isDimension;
}

void QUmlActivityPartition::setDimension(bool isDimension)
{
    // This is a read-write attribute

    Q_D(QUmlActivityPartition);
    if (d->isDimension != isDimension) {
        d->isDimension = isDimension;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDimension");
}

void QUmlActivityPartition::unsetDimension()
{
    setDimension(false);
    Q_D(QUmlActivityPartition);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDimension"));
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QUmlActivityPartition::isExternal() const
{
    // This is a read-write attribute

    Q_D(const QUmlActivityPartition);
    return d->isExternal;
}

void QUmlActivityPartition::setExternal(bool isExternal)
{
    // This is a read-write attribute

    Q_D(QUmlActivityPartition);
    if (d->isExternal != isExternal) {
        d->isExternal = isExternal;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isExternal");
}

void QUmlActivityPartition::unsetExternal()
{
    setExternal(false);
    Q_D(QUmlActivityPartition);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isExternal"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlActivityPartition
// ---------------------------------------------------------------

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
QUmlElement *QUmlActivityPartition::represents() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityPartition);
    return d->represents;
}

void QUmlActivityPartition::setRepresents(QUmlElement *represents)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (d->represents != represents) {
        d->represents = represents;
    }
}

/*!
    Partitions immediately contained in the partition.
 */
QSet<QUmlActivityPartition *> QUmlActivityPartition::subpartitions() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityPartition);
    return d->subpartitions;
}

void QUmlActivityPartition::addSubpartition(QUmlActivityPartition *subpartition)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (!d->subpartitions.contains(subpartition)) {
        d->subpartitions.insert(subpartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->addSubgroup(qwrappedobject_cast<QUmlActivityGroup *>(subpartition));

        // Adjust opposite property
        subpartition->setSuperPartition(this);
    }
}

void QUmlActivityPartition::removeSubpartition(QUmlActivityPartition *subpartition)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (d->subpartitions.contains(subpartition)) {
        d->subpartitions.remove(subpartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->removeSubgroup(qwrappedobject_cast<QUmlActivityGroup *>(subpartition));

        // Adjust opposite property
        subpartition->setSuperPartition(0);
    }
}

/*!
    Partition immediately containing the partition.
 */
QUmlActivityPartition *QUmlActivityPartition::superPartition() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityPartition);
    return d->superPartition;
}

void QUmlActivityPartition::setSuperPartition(QUmlActivityPartition *superPartition)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (d->superPartition != superPartition) {
        // Adjust opposite property
        if (d->superPartition)
            d->superPartition->removeSubpartition(this);

        d->superPartition = superPartition;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->setSuperGroup(qwrappedobject_cast<QUmlActivityGroup *>(superPartition));

        // Adjust opposite property
        if (superPartition)
            superPartition->addSubpartition(this);
    }
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlActivityPartition::nodes() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityPartition);
    return d->nodes;
}

void QUmlActivityPartition::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (!d->nodes.contains(node)) {
        d->nodes.insert(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->addContainedNode(qwrappedobject_cast<QUmlActivityNode *>(node));

        // Adjust opposite property
        node->addInPartition(this);
    }
}

void QUmlActivityPartition::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (d->nodes.contains(node)) {
        d->nodes.remove(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->removeContainedNode(qwrappedobject_cast<QUmlActivityNode *>(node));

        // Adjust opposite property
        if (node)
            node->removeInPartition(this);
    }
}

/*!
    Edges immediately contained in the group.
 */
QSet<QUmlActivityEdge *> QUmlActivityPartition::edges() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityPartition);
    return d->edges;
}

void QUmlActivityPartition::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (!d->edges.contains(edge)) {
        d->edges.insert(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->addContainedEdge(qwrappedobject_cast<QUmlActivityEdge *>(edge));

        // Adjust opposite property
        edge->addInPartition(this);
    }
}

void QUmlActivityPartition::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QUmlActivityPartition);
    if (d->edges.contains(edge)) {
        d->edges.remove(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->removeContainedEdge(qwrappedobject_cast<QUmlActivityEdge *>(edge));

        // Adjust opposite property
        if (edge)
            edge->removeInPartition(this);
    }
}

void QUmlActivityPartition::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the partition groups other partitions along a dimension.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the partition represents an entity to which the partitioning structure does not apply.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An element constraining behaviors invoked by nodes in the partition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Partitions immediately contained in the partition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::subgroups");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityPartition::superPartition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Partition immediately containing the partition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::superGroup");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityPartition::subpartition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::containedNodes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityNode::inPartition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::containedEdges");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityEdge::inPartition");

    QUmlActivityGroup::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlactivitypartition.cpp"

