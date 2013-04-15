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
#include "qumlactivitygroup_p.h"

#include "qumlactivitynode_p.h"
#include "qumlactivityedge_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlActivityGroupPrivate::QUmlActivityGroupPrivate() :
    inActivity(0),
    superGroup(0)
{
}

QUmlActivityGroupPrivate::~QUmlActivityGroupPrivate()
{
}

void QUmlActivityGroupPrivate::addContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived-union association end

    if (!this->containedNodes.contains(containedNode)) {
        this->containedNodes.insert(containedNode);

        // Adjust opposite property
        Q_Q(QUmlActivityGroup);
        (qwrappedobject_cast<QUmlActivityNodePrivate *>(containedNode->d_func()))->addInGroup(q);
    }
}

void QUmlActivityGroupPrivate::removeContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived-union association end

    if (this->containedNodes.contains(containedNode)) {
        this->containedNodes.remove(containedNode);

        // Adjust opposite property
        Q_Q(QUmlActivityGroup);
        if (containedNode)
            (qwrappedobject_cast<QUmlActivityNodePrivate *>(containedNode->d_func()))->removeInGroup(q);
    }
}

void QUmlActivityGroupPrivate::addSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived-union association end

    if (!this->subgroups.contains(subgroup)) {
        this->subgroups.insert(subgroup);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(subgroup));

        // Adjust opposite property
        Q_Q(QUmlActivityGroup);
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(subgroup->d_func()))->setSuperGroup(q);
    }
}

void QUmlActivityGroupPrivate::removeSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived-union association end

    if (this->subgroups.contains(subgroup)) {
        this->subgroups.remove(subgroup);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(subgroup));

        // Adjust opposite property
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(subgroup->d_func()))->setSuperGroup(0);
    }
}

void QUmlActivityGroupPrivate::addContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived-union association end

    if (!this->containedEdges.contains(containedEdge)) {
        this->containedEdges.insert(containedEdge);

        // Adjust opposite property
        Q_Q(QUmlActivityGroup);
        (qwrappedobject_cast<QUmlActivityEdgePrivate *>(containedEdge->d_func()))->addInGroup(q);
    }
}

void QUmlActivityGroupPrivate::removeContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived-union association end

    if (this->containedEdges.contains(containedEdge)) {
        this->containedEdges.remove(containedEdge);

        // Adjust opposite property
        Q_Q(QUmlActivityGroup);
        if (containedEdge)
            (qwrappedobject_cast<QUmlActivityEdgePrivate *>(containedEdge->d_func()))->removeInGroup(q);
    }
}

void QUmlActivityGroupPrivate::setSuperGroup(QUmlActivityGroup *superGroup)
{
    // This is a read-only derived-union association end

    if (this->superGroup != superGroup) {
        Q_Q(QUmlActivityGroup);
        // Adjust opposite property
        if (this->superGroup)
            (qwrappedobject_cast<QUmlActivityGroupPrivate *>(this->superGroup->d_func()))->removeSubgroup(q);

        this->superGroup = superGroup;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->setOwner(qwrappedobject_cast<QUmlElement *>(superGroup));

        // Adjust opposite property
        if (superGroup)
            (qwrappedobject_cast<QUmlActivityGroupPrivate *>(superGroup->d_func()))->addSubgroup(q);
    }
}

/*!
    \class QUmlActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.
 */

QUmlActivityGroup::QUmlActivityGroup(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlActivityGroupPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityGroup::QUmlActivityGroup(QUmlActivityGroupPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlActivityGroup::~QUmlActivityGroup()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlActivityGroup
// ---------------------------------------------------------------

/*!
    Activity containing the group.
 */
QUmlActivity *QUmlActivityGroup::inActivity() const
{
    // This is a read-write association end

    Q_D(const QUmlActivityGroup);
    return d->inActivity;
}

void QUmlActivityGroup::setInActivity(QUmlActivity *inActivity)
{
    // This is a read-write association end

    Q_D(QUmlActivityGroup);
    if (d->inActivity != inActivity) {
        // Adjust opposite property
        if (d->inActivity)
            d->inActivity->removeGroup(this);

        d->inActivity = inActivity;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(inActivity));

        // Adjust opposite property
        if (inActivity)
            inActivity->addGroup(this);
    }
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlActivityGroup::containedNodes() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlActivityGroup);
    return d->containedNodes;
}

/*!
    Groups immediately contained in the group.
 */
QSet<QUmlActivityGroup *> QUmlActivityGroup::subgroups() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlActivityGroup);
    return d->subgroups;
}

/*!
    Edges immediately contained in the group.
 */
QSet<QUmlActivityEdge *> QUmlActivityGroup::containedEdges() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlActivityGroup);
    return d->containedEdges;
}

/*!
    Group immediately containing the group.
 */
QUmlActivityGroup *QUmlActivityGroup::superGroup() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlActivityGroup);
    return d->superGroup;
}

void QUmlActivityGroup::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Activity containing the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("inActivity")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivity::group");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityNode::inGroup");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Groups immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("subgroups")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityGroup::superGroup");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("containedEdges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityEdge::inGroup");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Group immediately containing the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlActivityGroup")][QString::fromLatin1("superGroup")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityGroup::subgroup");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlactivitygroup.cpp"

