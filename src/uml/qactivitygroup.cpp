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

QT_BEGIN_NAMESPACE_QTUML

QActivityGroupPrivate::QActivityGroupPrivate() :
    inActivity(0),
    containedNodes(new QSet<QActivityNode *>),
    subgroups(new QSet<QActivityGroup *>),
    containedEdges(new QSet<QActivityEdge *>),
    superGroup(0)
{
}

QActivityGroupPrivate::~QActivityGroupPrivate()
{
    delete containedNodes;
    delete subgroups;
    delete containedEdges;
}

void QActivityGroupPrivate::addContainedNode(QActivityNode *containedNode)
{
    // This is a read-only derived-union association end

    if (!this->containedNodes->contains(containedNode)) {
        this->containedNodes->insert(containedNode);

        // Adjust opposite property
        QTUML_Q(QActivityGroup);
        (dynamic_cast<QActivityNodePrivate *>(containedNode->d_umlptr))->addInGroup(q);
    }
}

void QActivityGroupPrivate::removeContainedNode(QActivityNode *containedNode)
{
    // This is a read-only derived-union association end

    if (this->containedNodes->contains(containedNode)) {
        this->containedNodes->remove(containedNode);

        // Adjust opposite property
        QTUML_Q(QActivityGroup);
        if (containedNode)
            (dynamic_cast<QActivityNodePrivate *>(containedNode->d_umlptr))->removeInGroup(q);
    }
}

void QActivityGroupPrivate::addSubgroup(QActivityGroup *subgroup)
{
    // This is a read-only derived-union association end

    if (!this->subgroups->contains(subgroup)) {
        this->subgroups->insert(subgroup);

        // Adjust subsetted property(ies)
        addOwnedElement(subgroup);

        // Adjust opposite property
        QTUML_Q(QActivityGroup);
        (dynamic_cast<QActivityGroupPrivate *>(subgroup->d_umlptr))->setSuperGroup(q);
    }
}

void QActivityGroupPrivate::removeSubgroup(QActivityGroup *subgroup)
{
    // This is a read-only derived-union association end

    if (this->subgroups->contains(subgroup)) {
        this->subgroups->remove(subgroup);

        // Adjust subsetted property(ies)
        removeOwnedElement(subgroup);

        // Adjust opposite property
        QTUML_Q(QActivityGroup);
        (dynamic_cast<QActivityGroupPrivate *>(subgroup->d_umlptr))->setSuperGroup(0);
    }
}

void QActivityGroupPrivate::addContainedEdge(QActivityEdge *containedEdge)
{
    // This is a read-only derived-union association end

    if (!this->containedEdges->contains(containedEdge)) {
        this->containedEdges->insert(containedEdge);

        // Adjust opposite property
        QTUML_Q(QActivityGroup);
        (dynamic_cast<QActivityEdgePrivate *>(containedEdge->d_umlptr))->addInGroup(q);
    }
}

void QActivityGroupPrivate::removeContainedEdge(QActivityEdge *containedEdge)
{
    // This is a read-only derived-union association end

    if (this->containedEdges->contains(containedEdge)) {
        this->containedEdges->remove(containedEdge);

        // Adjust opposite property
        QTUML_Q(QActivityGroup);
        if (containedEdge)
            (dynamic_cast<QActivityEdgePrivate *>(containedEdge->d_umlptr))->removeInGroup(q);
    }
}

void QActivityGroupPrivate::setSuperGroup(QActivityGroup *superGroup)
{
    // This is a read-only derived-union association end

    if (this->superGroup != superGroup) {
        QTUML_Q(QActivityGroup)
        // Adjust opposite property
        if (this->superGroup)
            (dynamic_cast<QActivityGroupPrivate *>(this->superGroup->d_umlptr))->removeSubgroup(q);

        this->superGroup = superGroup;

        // Adjust subsetted property(ies)
        setOwner(superGroup);

        // Adjust opposite property
        if (superGroup)
            (dynamic_cast<QActivityGroupPrivate *>(superGroup->d_umlptr))->addSubgroup(q);
    }
}

/*!
    \class QActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.
 */

QActivityGroup::QActivityGroup()
{
}

QActivityGroup::~QActivityGroup()
{
}

/*!
    Activity containing the group.
 */
QActivity *QActivityGroup::inActivity() const
{
    // This is a read-write association end

    QTUML_D(const QActivityGroup);
    return d->inActivity;
}

void QActivityGroup::setInActivity(QActivity *inActivity)
{
    // This is a read-write association end

    QTUML_D(QActivityGroup);
    if (d->inActivity != inActivity) {
        // Adjust opposite property
        if (d->inActivity)
            d->inActivity->removeGroup(this);

        d->inActivity = inActivity;

        // Adjust subsetted property(ies)
        d->setOwner(inActivity);

        // Adjust opposite property
        if (inActivity)
            inActivity->addGroup(this);
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QActivityGroup::containedNodes() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QActivityGroup);
    return d->containedNodes;
}

/*!
    Groups immediately contained in the group.
 */
const QSet<QActivityGroup *> *QActivityGroup::subgroups() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QActivityGroup);
    return d->subgroups;
}

/*!
    Edges immediately contained in the group.
 */
const QSet<QActivityEdge *> *QActivityGroup::containedEdges() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QActivityGroup);
    return d->containedEdges;
}

/*!
    Group immediately containing the group.
 */
QActivityGroup *QActivityGroup::superGroup() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QActivityGroup);
    return d->superGroup;
}

QT_END_NAMESPACE_QTUML

