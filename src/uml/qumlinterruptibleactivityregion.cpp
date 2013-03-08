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

#include "qumlinterruptibleactivityregion.h"
#include "qumlinterruptibleactivityregion_p.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInterruptibleActivityRegionPrivate::QUmlInterruptibleActivityRegionPrivate()
{
}

QUmlInterruptibleActivityRegionPrivate::~QUmlInterruptibleActivityRegionPrivate()
{
}

/*!
    \class QUmlInterruptibleActivityRegion

    \inmodule QtUml

    \brief An interruptible activity region is an activity group that supports termination of tokens flowing in the portions of an activity.
 */

QUmlInterruptibleActivityRegion::QUmlInterruptibleActivityRegion(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityGroup(*new QUmlInterruptibleActivityRegionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlInterruptibleActivityRegion::QUmlInterruptibleActivityRegion(QUmlInterruptibleActivityRegionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityGroup(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlInterruptibleActivityRegion::~QUmlInterruptibleActivityRegion()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInterruptibleActivityRegion
// ---------------------------------------------------------------

/*!
    The edges leaving the region that will abort other tokens flowing in the region.
 */
QSet<QUmlActivityEdge *> QUmlInterruptibleActivityRegion::interruptingEdges() const
{
    // This is a read-write association end

    Q_D(const QUmlInterruptibleActivityRegion);
    return d->interruptingEdges;
}

void QUmlInterruptibleActivityRegion::addInterruptingEdge(QUmlActivityEdge *interruptingEdge)
{
    // This is a read-write association end

    Q_D(QUmlInterruptibleActivityRegion);
    if (!d->interruptingEdges.contains(interruptingEdge)) {
        d->interruptingEdges.insert(interruptingEdge);

        // Adjust opposite property
        interruptingEdge->setInterrupts(this);
    }
}

void QUmlInterruptibleActivityRegion::removeInterruptingEdge(QUmlActivityEdge *interruptingEdge)
{
    // This is a read-write association end

    Q_D(QUmlInterruptibleActivityRegion);
    if (d->interruptingEdges.contains(interruptingEdge)) {
        d->interruptingEdges.remove(interruptingEdge);

        // Adjust opposite property
        interruptingEdge->setInterrupts(0);
    }
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlInterruptibleActivityRegion::nodes() const
{
    // This is a read-write association end

    Q_D(const QUmlInterruptibleActivityRegion);
    return d->nodes;
}

void QUmlInterruptibleActivityRegion::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlInterruptibleActivityRegion);
    if (!d->nodes.contains(node)) {
        d->nodes.insert(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->addContainedNode(qwrappedobject_cast<QUmlActivityNode *>(node));

        // Adjust opposite property
        node->addInInterruptibleRegion(this);
    }
}

void QUmlInterruptibleActivityRegion::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlInterruptibleActivityRegion);
    if (d->nodes.contains(node)) {
        d->nodes.remove(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->removeContainedNode(qwrappedobject_cast<QUmlActivityNode *>(node));

        // Adjust opposite property
        if (node)
            node->removeInInterruptibleRegion(this);
    }
}

void QUmlInterruptibleActivityRegion::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("interruptingEdges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("interruptingEdges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("interruptingEdges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The edges leaving the region that will abort other tokens flowing in the region.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("interruptingEdges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("interruptingEdges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("interruptingEdges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityEdge::interrupts");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("nodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("nodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("nodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("nodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("nodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::containedNodes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterruptibleActivityRegion")][QString::fromLatin1("nodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QActivityNode::inInterruptibleRegion");

    QUmlActivityGroup::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinterruptibleactivityregion.cpp"

