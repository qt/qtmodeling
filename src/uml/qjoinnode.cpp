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

#include "qjoinnode.h"
#include "qjoinnode_p.h"

#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QJoinNodePrivate::QJoinNodePrivate() :
    isCombineDuplicate(true),
    joinSpec(0)
{
}

QJoinNodePrivate::~QJoinNodePrivate()
{
}

/*!
    \class QJoinNode

    \inmodule QtUml

    \brief A join node is a control node that synchronizes multiple flows.Join nodes have a Boolean value specification using the names of the incoming edges to specify the conditions under which the join will emit a token.
 */

QJoinNode::QJoinNode(QWrappedObject *parent, QWrappedObject *wrapper) :
    QControlNode(*new QJoinNodePrivate, parent, wrapper)
{
}

QJoinNode::QJoinNode(QJoinNodePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QControlNode(dd, parent, wrapper)
{
}

QJoinNode::~QJoinNode()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QJoinNode
// ---------------------------------------------------------------

/*!
    Tells whether tokens having objects with the same identity are combined into one by the join.
 */
bool QJoinNode::isCombineDuplicate() const
{
    // This is a read-write attribute

    Q_D(const QJoinNode);
    return d->isCombineDuplicate;
}

void QJoinNode::setCombineDuplicate(bool isCombineDuplicate)
{
    // This is a read-write attribute

    Q_D(QJoinNode);
    if (d->isCombineDuplicate != isCombineDuplicate) {
        d->isCombineDuplicate = isCombineDuplicate;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QJoinNode
// ---------------------------------------------------------------

/*!
    A specification giving the conditions under which the join with emit a token. Default is "and".
 */
QValueSpecification *QJoinNode::joinSpec() const
{
    // This is a read-write association end

    Q_D(const QJoinNode);
    return d->joinSpec;
}

void QJoinNode::setJoinSpec(QValueSpecification *joinSpec)
{
    // This is a read-write association end

    Q_D(QJoinNode);
    if (d->joinSpec != joinSpec) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->joinSpec));

        d->joinSpec = joinSpec;

        // Adjust subsetted property(ies)
        if (joinSpec) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(joinSpec));
        }
    }
}

#include "moc_qjoinnode.cpp"

QT_END_NAMESPACE_QTUML

