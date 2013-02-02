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

#include "qactivitygroup.h"
#include "qactivitygroup_p.h"

#include "qactivitynode_p.h"
#include "qactivityedge_p.h"

#include <QtUml/QActivity>
#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QActivityGroupPrivate::QActivityGroupPrivate() :
    inActivity(0),
    superGroup(0)
{
}

QActivityGroupPrivate::~QActivityGroupPrivate()
{
}

void QActivityGroupPrivate::addContainedNode(QActivityNode *containedNode)
{
    // This is a read-only derived-union association end

    if (!this->containedNodes.contains(containedNode)) {
        this->containedNodes.insert(containedNode);

        // Adjust opposite property
        Q_Q(QActivityGroup);
        (qwrappedobject_cast<QActivityNodePrivate *>(containedNode->d_func()))->addInGroup(q);
    }
}

void QActivityGroupPrivate::removeContainedNode(QActivityNode *containedNode)
{
    // This is a read-only derived-union association end

    if (this->containedNodes.contains(containedNode)) {
        this->containedNodes.remove(containedNode);

        // Adjust opposite property
        Q_Q(QActivityGroup);
        if (containedNode)
            (qwrappedobject_cast<QActivityNodePrivate *>(containedNode->d_func()))->removeInGroup(q);
    }
}

void QActivityGroupPrivate::addSubgroup(QActivityGroup *subgroup)
{
    // This is a read-only derived-union association end

    if (!this->subgroups.contains(subgroup)) {
        this->subgroups.insert(subgroup);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QElement *>(subgroup));

        // Adjust opposite property
        Q_Q(QActivityGroup);
        (qwrappedobject_cast<QActivityGroupPrivate *>(subgroup->d_func()))->setSuperGroup(q);
    }
}

void QActivityGroupPrivate::removeSubgroup(QActivityGroup *subgroup)
{
    // This is a read-only derived-union association end

    if (this->subgroups.contains(subgroup)) {
        this->subgroups.remove(subgroup);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QElement *>(subgroup));

        // Adjust opposite property
        (qwrappedobject_cast<QActivityGroupPrivate *>(subgroup->d_func()))->setSuperGroup(0);
    }
}

void QActivityGroupPrivate::addContainedEdge(QActivityEdge *containedEdge)
{
    // This is a read-only derived-union association end

    if (!this->containedEdges.contains(containedEdge)) {
        this->containedEdges.insert(containedEdge);

        // Adjust opposite property
        Q_Q(QActivityGroup);
        (qwrappedobject_cast<QActivityEdgePrivate *>(containedEdge->d_func()))->addInGroup(q);
    }
}

void QActivityGroupPrivate::removeContainedEdge(QActivityEdge *containedEdge)
{
    // This is a read-only derived-union association end

    if (this->containedEdges.contains(containedEdge)) {
        this->containedEdges.remove(containedEdge);

        // Adjust opposite property
        Q_Q(QActivityGroup);
        if (containedEdge)
            (qwrappedobject_cast<QActivityEdgePrivate *>(containedEdge->d_func()))->removeInGroup(q);
    }
}

void QActivityGroupPrivate::setSuperGroup(QActivityGroup *superGroup)
{
    // This is a read-only derived-union association end

    if (this->superGroup != superGroup) {
        Q_Q(QActivityGroup);
        // Adjust opposite property
        if (this->superGroup)
            (qwrappedobject_cast<QActivityGroupPrivate *>(this->superGroup->d_func()))->removeSubgroup(q);

        this->superGroup = superGroup;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->setOwner(qwrappedobject_cast<QElement *>(superGroup));

        // Adjust opposite property
        if (superGroup)
            (qwrappedobject_cast<QActivityGroupPrivate *>(superGroup->d_func()))->addSubgroup(q);
    }
}

/*!
    \class QActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.
 */

QActivityGroup::QActivityGroup(QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(*new QActivityGroupPrivate, wrapper, parent)
{
    setPropertyData();
}

QActivityGroup::QActivityGroup(QActivityGroupPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QActivityGroup::~QActivityGroup()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QActivityGroup
// ---------------------------------------------------------------

/*!
    Activity containing the group.
 */
QActivity *QActivityGroup::inActivity() const
{
    // This is a read-write association end

    Q_D(const QActivityGroup);
    return d->inActivity;
}

void QActivityGroup::setInActivity(QActivity *inActivity)
{
    // This is a read-write association end

    Q_D(QActivityGroup);
    if (d->inActivity != inActivity) {
        // Adjust opposite property
        if (d->inActivity)
            d->inActivity->removeGroup(this);

        d->inActivity = inActivity;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(inActivity));

        // Adjust opposite property
        if (inActivity)
            inActivity->addGroup(this);
    }
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QActivityNode *> QActivityGroup::containedNodes() const
{
    // This is a read-only derived-union association end

    Q_D(const QActivityGroup);
    return d->containedNodes;
}

/*!
    Groups immediately contained in the group.
 */
QSet<QActivityGroup *> QActivityGroup::subgroups() const
{
    // This is a read-only derived-union association end

    Q_D(const QActivityGroup);
    return d->subgroups;
}

/*!
    Edges immediately contained in the group.
 */
QSet<QActivityEdge *> QActivityGroup::containedEdges() const
{
    // This is a read-only derived-union association end

    Q_D(const QActivityGroup);
    return d->containedEdges;
}

/*!
    Group immediately containing the group.
 */
QActivityGroup *QActivityGroup::superGroup() const
{
    // This is a read-only derived-union association end

    Q_D(const QActivityGroup);
    return d->superGroup;
}

void QActivityGroup::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Activity containing the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivity::group");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityNode::inGroup");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Groups immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityGroup::superGroup");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityEdge::inGroup");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Group immediately containing the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityGroup::subgroup");

    QNamedElement::setPropertyData();
}

#include "moc_qactivitygroup.cpp"

QT_END_NAMESPACE_QTUML

