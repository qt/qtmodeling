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
#include "qumlactivitygroup.h"

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

/*!
    \class QUmlActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.
 */
QUmlActivityGroup::QUmlActivityGroup() :
    _inActivity(0),
    _superGroup(0)
{
    setClassForProperty();
    setPropertyData();
}

QUmlActivityGroup::~QUmlActivityGroup()
{
}

QModelingObject *QUmlActivityGroup::clone() const
{
    QUmlActivityGroup *c = new QUmlActivityGroup;
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
    return c;
}

// OWNED ATTRIBUTES

/*!
    Edges immediately contained in the group.
 */
const QSet<QUmlActivityEdge *> QUmlActivityGroup::containedEdges() const
{
    // This is a read-only derived union association end

    return _containedEdges;
}

void QUmlActivityGroup::addContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived union association end

    if (!_containedEdges.contains(containedEdge)) {
        _containedEdges.insert(containedEdge);
        if (containedEdge && containedEdge->asQObject() && this->asQObject())
            QObject::connect(containedEdge->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeContainedEdge(QObject *)));

        // Adjust opposite properties
        if (containedEdge) {
            containedEdge->addInGroup(this);
        }
    }
}

void QUmlActivityGroup::removeContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived union association end

    if (_containedEdges.contains(containedEdge)) {
        _containedEdges.remove(containedEdge);

        // Adjust opposite properties
        if (containedEdge) {
            containedEdge->removeInGroup(this);
        }
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QUmlActivityNode *> QUmlActivityGroup::containedNodes() const
{
    // This is a read-only derived union association end

    return _containedNodes;
}

void QUmlActivityGroup::addContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived union association end

    if (!_containedNodes.contains(containedNode)) {
        _containedNodes.insert(containedNode);
        if (containedNode && containedNode->asQObject() && this->asQObject())
            QObject::connect(containedNode->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeContainedNode(QObject *)));

        // Adjust opposite properties
        if (containedNode) {
            containedNode->addInGroup(this);
        }
    }
}

void QUmlActivityGroup::removeContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived union association end

    if (_containedNodes.contains(containedNode)) {
        _containedNodes.remove(containedNode);

        // Adjust opposite properties
        if (containedNode) {
            containedNode->removeInGroup(this);
        }
    }
}

/*!
    Activity containing the group.
 */
QUmlActivity *QUmlActivityGroup::inActivity() const
{
    // This is a read-write association end

    return _inActivity;
}

void QUmlActivityGroup::setInActivity(QUmlActivity *inActivity)
{
    // This is a read-write association end

    if (_inActivity != inActivity) {
        // Adjust subsetted properties

        _inActivity = inActivity;
        if (inActivity && inActivity->asQObject() && this->asQObject())
            QObject::connect(inActivity->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setInActivity()));

        // Adjust subsetted properties
        setOwner(inActivity);
    }
}

/*!
    Groups immediately contained in the group.
 */
const QSet<QUmlActivityGroup *> QUmlActivityGroup::subgroups() const
{
    // This is a read-only derived union association end

    return _subgroups;
}

void QUmlActivityGroup::addSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived union association end

    if (!_subgroups.contains(subgroup)) {
        _subgroups.insert(subgroup);
        if (subgroup && subgroup->asQObject() && this->asQObject())
            QObject::connect(subgroup->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSubgroup(QObject *)));
        subgroup->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(subgroup);
    }
}

void QUmlActivityGroup::removeSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived union association end

    if (_subgroups.contains(subgroup)) {
        _subgroups.remove(subgroup);
        if (subgroup->asQObject())
            subgroup->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(subgroup);
    }
}

/*!
    Group immediately containing the group.
 */
QUmlActivityGroup *QUmlActivityGroup::superGroup() const
{
    // This is a read-only derived union association end

    return _superGroup;
}

void QUmlActivityGroup::setSuperGroup(QUmlActivityGroup *superGroup)
{
    // This is a read-only derived union association end

    if (_superGroup != superGroup) {
        // Adjust subsetted properties

        _superGroup = superGroup;
        if (superGroup && superGroup->asQObject() && this->asQObject())
            QObject::connect(superGroup->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSuperGroup()));

        // Adjust subsetted properties
        setOwner(superGroup);
    }
}

void QUmlActivityGroup::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("containedEdges")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("containedNodes")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("inActivity")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("subgroups")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("superGroup")] = QStringLiteral("QUmlActivityGroup");
}

void QUmlActivityGroup::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivityGroup");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::DocumentationRole] = QStringLiteral("Edges immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedEdges")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-inGroup");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivityGroup");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::DocumentationRole] = QStringLiteral("Nodes immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("containedNodes")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityNode-inGroup");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivityGroup");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::DocumentationRole] = QStringLiteral("Activity containing the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("inActivity")][QtModeling::OppositeEndRole] = QStringLiteral("Activity-group");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivityGroup");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::DocumentationRole] = QStringLiteral("Groups immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("subgroups")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityGroup-superGroup");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActivityGroup");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::DocumentationRole] = QStringLiteral("Group immediately containing the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActivityGroup")][QStringLiteral("superGroup")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityGroup-subgroup");

}

