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
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
/*!
    \class QUmlActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */
QUmlActivityPartition::QUmlActivityPartition(bool createQObject) :
    _isDimension(false),
    _isExternal(false),
    _represents(0),
    _superPartition(0)
{
    if (createQObject)
        _qObject = new QUmlActivityPartitionObject(this);
    setPropertyData();
}

QUmlActivityPartition::~QUmlActivityPartition()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlActivityPartition::clone() const
{
    QUmlActivityPartition *c = new QUmlActivityPartition;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (inActivity())
        c->setInActivity(dynamic_cast<QUmlActivity *>(inActivity()->clone()));
    foreach (QUmlActivityEdge *element, edge())
        c->addEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    c->setDimension(isDimension());
    c->setExternal(isExternal());
    foreach (QUmlActivityNode *element, node())
        c->addNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    if (represents())
        c->setRepresents(dynamic_cast<QUmlElement *>(represents()->clone()));
    foreach (QUmlActivityPartition *element, subpartition())
        c->addSubpartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (superPartition())
        c->setSuperPartition(dynamic_cast<QUmlActivityPartition *>(superPartition()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Edges immediately contained in the group.
 */
const QSet<QUmlActivityEdge *> QUmlActivityPartition::edge() const
{
    // This is a read-write association end

    return _edge;
}

void QUmlActivityPartition::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    if (!_edge.contains(edge)) {
        _edge.insert(edge);
        if (edge && edge->asQObject() && this->asQObject())
            QObject::connect(edge->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeEdge(QObject *)));

        // Adjust subsetted properties
        addContainedEdge(edge);

        // Adjust opposite properties
        if (edge) {
            edge->addInPartition(this);
        }
    }
}

void QUmlActivityPartition::removeEdge(QUmlActivityEdge *edge)
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
bool QUmlActivityPartition::isDimension() const
{
    // This is a read-write property

    return _isDimension;
}

void QUmlActivityPartition::setDimension(bool isDimension)
{
    // This is a read-write property

    if (_isDimension != isDimension) {
        _isDimension = isDimension;
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

void QUmlActivityPartition::setExternal(bool isExternal)
{
    // This is a read-write property

    if (_isExternal != isExternal) {
        _isExternal = isExternal;
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QUmlActivityNode *> QUmlActivityPartition::node() const
{
    // This is a read-write association end

    return _node;
}

void QUmlActivityPartition::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_node.contains(node)) {
        _node.insert(node);
        if (node && node->asQObject() && this->asQObject())
            QObject::connect(node->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNode(QObject *)));

        // Adjust subsetted properties
        addContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->addInPartition(this);
        }
    }
}

void QUmlActivityPartition::removeNode(QUmlActivityNode *node)
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
QUmlElement *QUmlActivityPartition::represents() const
{
    // This is a read-write association end

    return _represents;
}

void QUmlActivityPartition::setRepresents(QUmlElement *represents)
{
    // This is a read-write association end

    if (_represents != represents) {
        _represents = represents;
        if (represents && represents->asQObject() && this->asQObject())
            QObject::connect(represents->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setRepresents()));
    }
}

/*!
    Partitions immediately contained in the partition.
 */
const QSet<QUmlActivityPartition *> QUmlActivityPartition::subpartition() const
{
    // This is a read-write association end

    return _subpartition;
}

void QUmlActivityPartition::addSubpartition(QUmlActivityPartition *subpartition)
{
    // This is a read-write association end

    if (!_subpartition.contains(subpartition)) {
        _subpartition.insert(subpartition);
        if (subpartition && subpartition->asQObject() && this->asQObject())
            QObject::connect(subpartition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSubpartition(QObject *)));
        subpartition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addSubgroup(subpartition);
    }
}

void QUmlActivityPartition::removeSubpartition(QUmlActivityPartition *subpartition)
{
    // This is a read-write association end

    if (_subpartition.contains(subpartition)) {
        _subpartition.remove(subpartition);
        if (subpartition->asQObject())
            subpartition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeSubgroup(subpartition);
    }
}

/*!
    Partition immediately containing the partition.
 */
QUmlActivityPartition *QUmlActivityPartition::superPartition() const
{
    // This is a read-write association end

    return _superPartition;
}

void QUmlActivityPartition::setSuperPartition(QUmlActivityPartition *superPartition)
{
    // This is a read-write association end

    if (_superPartition != superPartition) {
        // Adjust subsetted properties

        _superPartition = superPartition;
        if (superPartition && superPartition->asQObject() && this->asQObject())
            QObject::connect(superPartition->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSuperPartition()));

        // Adjust subsetted properties
        setSuperGroup(superPartition);
    }
}

void QUmlActivityPartition::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::DocumentationRole] = QStringLiteral("Edges immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-containedEdge");
    QModelingObject::propertyDataHash[QStringLiteral("edge")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-inPartition");

    QModelingObject::propertyDataHash[QStringLiteral("isDimension")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("isDimension")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isDimension")][QtModeling::DocumentationRole] = QStringLiteral("Tells whether the partition groups other partitions along a dimension.");
    QModelingObject::propertyDataHash[QStringLiteral("isDimension")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isDimension")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isDimension")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("isExternal")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("isExternal")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isExternal")][QtModeling::DocumentationRole] = QStringLiteral("Tells whether the partition represents an entity to which the partitioning structure does not apply.");
    QModelingObject::propertyDataHash[QStringLiteral("isExternal")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isExternal")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isExternal")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::DocumentationRole] = QStringLiteral("Nodes immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-containedNode");
    QModelingObject::propertyDataHash[QStringLiteral("node")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityNode-inPartition");

    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::DocumentationRole] = QStringLiteral("An element constraining behaviors invoked by nodes in the partition.");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("subpartition")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("subpartition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("subpartition")][QtModeling::DocumentationRole] = QStringLiteral("Partitions immediately contained in the partition.");
    QModelingObject::propertyDataHash[QStringLiteral("subpartition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("subpartition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-subgroup");
    QModelingObject::propertyDataHash[QStringLiteral("subpartition")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityPartition-superPartition");

    QModelingObject::propertyDataHash[QStringLiteral("superPartition")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("superPartition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("superPartition")][QtModeling::DocumentationRole] = QStringLiteral("Partition immediately containing the partition.");
    QModelingObject::propertyDataHash[QStringLiteral("superPartition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("superPartition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-superGroup");
    QModelingObject::propertyDataHash[QStringLiteral("superPartition")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityPartition-subpartition");

}

