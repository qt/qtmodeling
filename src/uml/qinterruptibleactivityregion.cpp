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

#include "qinterruptibleactivityregion.h"
#include "qinterruptibleactivityregion_p.h"
#include "qactivitygroup_p.h"

#include <QtUml/QActivityEdge>
#include <QtUml/QActivityNode>

QT_BEGIN_NAMESPACE_QTUML

QInterruptibleActivityRegionPrivate::QInterruptibleActivityRegionPrivate() :
    interruptingEdges(new QSet<QActivityEdge *>),
    nodes(new QSet<QActivityNode *>)
{
}

QInterruptibleActivityRegionPrivate::~QInterruptibleActivityRegionPrivate()
{
    delete interruptingEdges;
    delete nodes;
}

void QInterruptibleActivityRegionPrivate::addInterruptingEdge(const QActivityEdge *interruptingEdge)
{
    this->interruptingEdges->insert(const_cast<QActivityEdge *>(interruptingEdge));
}

void QInterruptibleActivityRegionPrivate::removeInterruptingEdge(const QActivityEdge *interruptingEdge)
{
    this->interruptingEdges->remove(const_cast<QActivityEdge *>(interruptingEdge));
}

void QInterruptibleActivityRegionPrivate::addNode(const QActivityNode *node)
{
    this->nodes->insert(const_cast<QActivityNode *>(node));

    // Adjust subsetted property(ies)
    addContainedNode(node);
}

void QInterruptibleActivityRegionPrivate::removeNode(const QActivityNode *node)
{
    this->nodes->remove(const_cast<QActivityNode *>(node));

    // Adjust subsetted property(ies)
    removeContainedNode(node);
}

/*!
    \class QInterruptibleActivityRegion

    \inmodule QtUml

    \brief An interruptible activity region is an activity group that supports termination of tokens flowing in the portions of an activity.
 */

QInterruptibleActivityRegion::QInterruptibleActivityRegion(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInterruptibleActivityRegionPrivate;
}

QInterruptibleActivityRegion::QInterruptibleActivityRegion(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QInterruptibleActivityRegionPrivate;
}

QInterruptibleActivityRegion::~QInterruptibleActivityRegion()
{
}

/*!
    The edges leaving the region that will abort other tokens flowing in the region.
 */
const QSet<QActivityEdge *> *QInterruptibleActivityRegion::interruptingEdges() const
{
    QTUML_D(const QInterruptibleActivityRegion);
    return d->interruptingEdges;
}

void QInterruptibleActivityRegion::addInterruptingEdge(const QActivityEdge *interruptingEdge)
{
    QTUML_D(QInterruptibleActivityRegion);
    d->addInterruptingEdge(const_cast<QActivityEdge *>(interruptingEdge));
}

void QInterruptibleActivityRegion::removeInterruptingEdge(const QActivityEdge *interruptingEdge)
{
    QTUML_D(QInterruptibleActivityRegion);
    d->removeInterruptingEdge(const_cast<QActivityEdge *>(interruptingEdge));
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QActivityNode *> *QInterruptibleActivityRegion::nodes() const
{
    QTUML_D(const QInterruptibleActivityRegion);
    return d->nodes;
}

void QInterruptibleActivityRegion::addNode(const QActivityNode *node)
{
    QTUML_D(QInterruptibleActivityRegion);
    d->addNode(const_cast<QActivityNode *>(node));
}

void QInterruptibleActivityRegion::removeNode(const QActivityNode *node)
{
    QTUML_D(QInterruptibleActivityRegion);
    d->removeNode(const_cast<QActivityNode *>(node));
}

#include "moc_qinterruptibleactivityregion.cpp"

QT_END_NAMESPACE_QTUML

