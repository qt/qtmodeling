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
#include "qelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>
#include <QtUml/QActivity>

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

void QActivityGroupPrivate::setInActivity(QActivity *inActivity)
{
    this->inActivity = inActivity;

    // Adjust subsetted property(ies)
    setOwner(inActivity);
}

void QActivityGroupPrivate::addContainedNode(QActivityNode *containedNode)
{
    this->containedNodes->insert(containedNode);
}

void QActivityGroupPrivate::removeContainedNode(QActivityNode *containedNode)
{
    this->containedNodes->remove(containedNode);
}

void QActivityGroupPrivate::addSubgroup(QActivityGroup *subgroup)
{
    this->subgroups->insert(subgroup);

    // Adjust subsetted property(ies)
    addOwnedElement(subgroup);
}

void QActivityGroupPrivate::removeSubgroup(QActivityGroup *subgroup)
{
    this->subgroups->remove(subgroup);

    // Adjust subsetted property(ies)
    removeOwnedElement(subgroup);
}

void QActivityGroupPrivate::addContainedEdge(QActivityEdge *containedEdge)
{
    this->containedEdges->insert(containedEdge);
}

void QActivityGroupPrivate::removeContainedEdge(QActivityEdge *containedEdge)
{
    this->containedEdges->remove(containedEdge);
}

void QActivityGroupPrivate::setSuperGroup(QActivityGroup *superGroup)
{
    this->superGroup = superGroup;

    // Adjust subsetted property(ies)
    setOwner(superGroup);
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
    QTUML_D(const QActivityGroup);
    return d->inActivity;
}

void QActivityGroup::setInActivity(QActivity *inActivity)
{
    QTUML_D(QActivityGroup);
    if (d->inActivity != inActivity) {
        d->setInActivity(inActivity);

        // Adjust opposite property
        inActivity->addGroup(this);
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QActivityGroup::containedNodes() const
{
    QTUML_D(const QActivityGroup);
    return d->containedNodes;
}

/*!
    Groups immediately contained in the group.
 */
const QSet<QActivityGroup *> *QActivityGroup::subgroups() const
{
    QTUML_D(const QActivityGroup);
    return d->subgroups;
}

/*!
    Edges immediately contained in the group.
 */
const QSet<QActivityEdge *> *QActivityGroup::containedEdges() const
{
    QTUML_D(const QActivityGroup);
    return d->containedEdges;
}

/*!
    Group immediately containing the group.
 */
QActivityGroup *QActivityGroup::superGroup() const
{
    QTUML_D(const QActivityGroup);
    return d->superGroup;
}

QT_END_NAMESPACE_QTUML

