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

#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>
#include <QtUml/QActivity>

QT_BEGIN_NAMESPACE_QTUML

class QActivityGroupPrivate
{
public:
    explicit QActivityGroupPrivate();
    virtual ~QActivityGroupPrivate();

    QSet<QActivityEdge *> *containedEdges;
    QSet<QActivityNode *> *containedNodes;
    QActivity *inActivity;
    QSet<QActivityGroup *> *subgroups;
    QActivityGroup *superGroup;
};

QActivityGroupPrivate::QActivityGroupPrivate() :
    containedEdges(new QSet<QActivityEdge *>),
    containedNodes(new QSet<QActivityNode *>),
    inActivity(0),
    subgroups(new QSet<QActivityGroup *>),
    superGroup(0)
{
}

QActivityGroupPrivate::~QActivityGroupPrivate()
{
    delete containedEdges;
    delete containedNodes;
    delete subgroups;
}

/*!
    \class QActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.
 */

QActivityGroup::QActivityGroup()
    : d_ptr(new QActivityGroupPrivate)
{
}

QActivityGroup::~QActivityGroup()
{
    delete d_ptr;
}

/*!
    Edges immediately contained in the group.
 */
const QSet<QActivityEdge *> *QActivityGroup::containedEdges() const
{
    return d_ptr->containedEdges;
}

void QActivityGroup::addContainedEdge(const QActivityEdge *containedEdge)
{
    d_ptr->containedEdges->insert(const_cast<QActivityEdge *>(containedEdge));
}

void QActivityGroup::removeContainedEdge(const QActivityEdge *containedEdge)
{
    d_ptr->containedEdges->remove(const_cast<QActivityEdge *>(containedEdge));
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QActivityGroup::containedNodes() const
{
    return d_ptr->containedNodes;
}

void QActivityGroup::addContainedNode(const QActivityNode *containedNode)
{
    d_ptr->containedNodes->insert(const_cast<QActivityNode *>(containedNode));
}

void QActivityGroup::removeContainedNode(const QActivityNode *containedNode)
{
    d_ptr->containedNodes->remove(const_cast<QActivityNode *>(containedNode));
}

/*!
    Activity containing the group.
 */
QActivity *QActivityGroup::inActivity() const
{
    return d_ptr->inActivity;
}

void QActivityGroup::setInActivity(const QActivity *inActivity)
{
    d_ptr->inActivity = const_cast<QActivity *>(inActivity);
}

/*!
    Groups immediately contained in the group.
 */
const QSet<QActivityGroup *> *QActivityGroup::subgroups() const
{
    return d_ptr->subgroups;
}

void QActivityGroup::addSubgroup(const QActivityGroup *subgroup)
{
    d_ptr->subgroups->insert(const_cast<QActivityGroup *>(subgroup));
    // Adjust subsetted property(ies)
    addOwnedElement(subgroup);
}

void QActivityGroup::removeSubgroup(const QActivityGroup *subgroup)
{
    d_ptr->subgroups->remove(const_cast<QActivityGroup *>(subgroup));
    // Adjust subsetted property(ies)
    removeOwnedElement(subgroup);
}

/*!
    Group immediately containing the group.
 */
QActivityGroup *QActivityGroup::superGroup() const
{
    return d_ptr->superGroup;
}

QT_END_NAMESPACE_QTUML

