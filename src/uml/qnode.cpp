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

#include "qnode.h"
#include "qnode_p.h"
#include "qnamespace_p.h"


QT_BEGIN_NAMESPACE_QTUML

QNodePrivate::QNodePrivate() :
    nestedNodes(new QSet<QNode *>)
{
}

QNodePrivate::~QNodePrivate()
{
    delete nestedNodes;
}

void QNodePrivate::addNestedNode(QNode *nestedNode)
{
    this->nestedNodes->insert(nestedNode);

    // Adjust subsetted property(ies)
    addOwnedMember(nestedNode);
}

void QNodePrivate::removeNestedNode(QNode *nestedNode)
{
    this->nestedNodes->remove(nestedNode);

    // Adjust subsetted property(ies)
    removeOwnedMember(nestedNode);
}

/*!
    \class QNode

    \inmodule QtUml

    \brief A node is computational resource upon which artifacts may be deployed for execution. Nodes can be interconnected through communication paths to define network structures.
 */

QNode::QNode(QObject *parent)
    : QClass(false, parent)
{
    d_umlptr = new QNodePrivate;
}

QNode::QNode(bool createPimpl, QObject *parent)
    : QClass(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QNodePrivate;
}

QNode::~QNode()
{
}

/*!
    The Nodes that are defined (nested) within the Node.
 */
const QSet<QNode *> *QNode::nestedNodes() const
{
    QTUML_D(const QNode);
    return d->nestedNodes;
}

void QNode::addNestedNode(QNode *nestedNode)
{
    QTUML_D(QNode);
    if (!d->nestedNodes->contains(nestedNode)) {
        d->addNestedNode(nestedNode);
    }
}

void QNode::removeNestedNode(QNode *nestedNode)
{
    QTUML_D(QNode);
    if (d->nestedNodes->contains(nestedNode)) {
        d->removeNestedNode(nestedNode);
    }
}

#include "moc_qnode.cpp"

QT_END_NAMESPACE_QTUML

