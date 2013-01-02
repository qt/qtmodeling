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

#include <QtUml/QElement>
#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QActivityPartitionPrivate::QActivityPartitionPrivate() :
    isDimension(false),
    isExternal(false),
    represents(0),
    superPartition(0)
{
}

QActivityPartitionPrivate::~QActivityPartitionPrivate()
{
}

/*!
    \class QActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

QActivityPartition::QActivityPartition(QWrappedObject *parent, QWrappedObject *wrapper) :
    QActivityGroup(*new QActivityPartitionPrivate, parent, wrapper)
{
    setPropertyData();
}

QActivityPartition::QActivityPartition(QActivityPartitionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QActivityGroup(dd, parent, wrapper)
{
    setPropertyData();
}

QActivityPartition::~QActivityPartition()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QActivityPartition
// ---------------------------------------------------------------

/*!
    Tells whether the partition groups other partitions along a dimension.
 */
bool QActivityPartition::isDimension() const
{
    // This is a read-write attribute

    Q_D(const QActivityPartition);
    return d->isDimension;
}

void QActivityPartition::setDimension(bool isDimension)
{
    // This is a read-write attribute

    Q_D(QActivityPartition);
    if (d->isDimension != isDimension) {
        d->isDimension = isDimension;
    }
}

void QActivityPartition::unsetDimension()
{
    setDimension(false);
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QActivityPartition::isExternal() const
{
    // This is a read-write attribute

    Q_D(const QActivityPartition);
    return d->isExternal;
}

void QActivityPartition::setExternal(bool isExternal)
{
    // This is a read-write attribute

    Q_D(QActivityPartition);
    if (d->isExternal != isExternal) {
        d->isExternal = isExternal;
    }
}

void QActivityPartition::unsetExternal()
{
    setExternal(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QActivityPartition
// ---------------------------------------------------------------

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
QElement *QActivityPartition::represents() const
{
    // This is a read-write association end

    Q_D(const QActivityPartition);
    return d->represents;
}

void QActivityPartition::setRepresents(QElement *represents)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (d->represents != represents) {
        d->represents = represents;
    }
}

/*!
    Partitions immediately contained in the partition.
 */
QSet<QActivityPartition *> QActivityPartition::subpartitions() const
{
    // This is a read-write association end

    Q_D(const QActivityPartition);
    return d->subpartitions;
}

void QActivityPartition::addSubpartition(QActivityPartition *subpartition)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (!d->subpartitions.contains(subpartition)) {
        d->subpartitions.insert(subpartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityGroupPrivate *>(d))->addSubgroup(qwrappedobject_cast<QActivityGroup *>(subpartition));

        // Adjust opposite property
        subpartition->setSuperPartition(this);
    }
}

void QActivityPartition::removeSubpartition(QActivityPartition *subpartition)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (d->subpartitions.contains(subpartition)) {
        d->subpartitions.remove(subpartition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityGroupPrivate *>(d))->removeSubgroup(qwrappedobject_cast<QActivityGroup *>(subpartition));

        // Adjust opposite property
        subpartition->setSuperPartition(0);
    }
}

/*!
    Partition immediately containing the partition.
 */
QActivityPartition *QActivityPartition::superPartition() const
{
    // This is a read-write association end

    Q_D(const QActivityPartition);
    return d->superPartition;
}

void QActivityPartition::setSuperPartition(QActivityPartition *superPartition)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (d->superPartition != superPartition) {
        // Adjust opposite property
        if (d->superPartition)
            d->superPartition->removeSubpartition(this);

        d->superPartition = superPartition;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityGroupPrivate *>(d))->setSuperGroup(qwrappedobject_cast<QActivityGroup *>(superPartition));

        // Adjust opposite property
        if (superPartition)
            superPartition->addSubpartition(this);
    }
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QActivityNode *> QActivityPartition::nodes() const
{
    // This is a read-write association end

    Q_D(const QActivityPartition);
    return d->nodes;
}

void QActivityPartition::addNode(QActivityNode *node)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (!d->nodes.contains(node)) {
        d->nodes.insert(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityGroupPrivate *>(d))->addContainedNode(qwrappedobject_cast<QActivityNode *>(node));

        // Adjust opposite property
        node->addInPartition(this);
    }
}

void QActivityPartition::removeNode(QActivityNode *node)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (d->nodes.contains(node)) {
        d->nodes.remove(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityGroupPrivate *>(d))->removeContainedNode(qwrappedobject_cast<QActivityNode *>(node));

        // Adjust opposite property
        if (node)
            node->removeInPartition(this);
    }
}

/*!
    Edges immediately contained in the group.
 */
QSet<QActivityEdge *> QActivityPartition::edges() const
{
    // This is a read-write association end

    Q_D(const QActivityPartition);
    return d->edges;
}

void QActivityPartition::addEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (!d->edges.contains(edge)) {
        d->edges.insert(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityGroupPrivate *>(d))->addContainedEdge(qwrappedobject_cast<QActivityEdge *>(edge));

        // Adjust opposite property
        edge->addInPartition(this);
    }
}

void QActivityPartition::removeEdge(QActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QActivityPartition);
    if (d->edges.contains(edge)) {
        d->edges.remove(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActivityGroupPrivate *>(d))->removeContainedEdge(qwrappedobject_cast<QActivityEdge *>(edge));

        // Adjust opposite property
        if (edge)
            edge->removeInPartition(this);
    }
}

void QActivityPartition::registerMetaTypes() const
{
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<QSet<QElement *>>("QSet<QElement *>");
    qRegisterMetaType<QList<QElement *>>("QList<QElement *>");

    qRegisterMetaType<QActivityEdge *>("QActivityEdge *");
    qRegisterMetaType<QSet<QActivityEdge *>>("QSet<QActivityEdge *>");
    qRegisterMetaType<QList<QActivityEdge *>>("QList<QActivityEdge *>");

    qRegisterMetaType<QActivityNode *>("QActivityNode *");
    qRegisterMetaType<QSet<QActivityNode *>>("QSet<QActivityNode *>");
    qRegisterMetaType<QList<QActivityNode *>>("QList<QActivityNode *>");

    QActivityGroup::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QActivityPartition::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the partition groups other partitions along a dimension.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isDimension")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the partition represents an entity to which the partitioning structure does not apply.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("isExternal")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An element constraining behaviors invoked by nodes in the partition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("represents")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Partitions immediately contained in the partition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivityGroup::subgroups");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("subpartitions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityPartition::superPartition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Partition immediately containing the partition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivityGroup::superGroup");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("superPartition")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityPartition::subpartition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivityGroup::containedNodes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("nodes")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityNode::inPartition");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QActivityGroup::containedEdges");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityPartition")][QString::fromLatin1("edges")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityEdge::inPartition");

    QActivityGroup::setPropertyData();
}

#include "moc_qactivitypartition.cpp"

QT_END_NAMESPACE_QTUML

