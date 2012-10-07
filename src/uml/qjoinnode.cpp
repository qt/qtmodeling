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

#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

class QJoinNodePrivate
{
public:
    explicit QJoinNodePrivate();
    virtual ~QJoinNodePrivate();

    bool isCombineDuplicate;
    QValueSpecification *joinSpec;
};

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

QJoinNode::QJoinNode(QObject *parent)
    : QObject(parent), d_ptr(new QJoinNodePrivate)
{
}

QJoinNode::~QJoinNode()
{
    delete d_ptr;
}

/*!
    Tells whether tokens having objects with the same identity are combined into one by the join.
 */
bool QJoinNode::isCombineDuplicate() const
{
    return d_ptr->isCombineDuplicate;
}

void QJoinNode::setCombineDuplicate(bool isCombineDuplicate)
{
    d_ptr->isCombineDuplicate = isCombineDuplicate;
}

/*!
    A specification giving the conditions under which the join with emit a token. Default is "and".
 */
QValueSpecification *QJoinNode::joinSpec() const
{
    return d_ptr->joinSpec;
}

void QJoinNode::setJoinSpec(const QValueSpecification *joinSpec)
{
    d_ptr->joinSpec = const_cast<QValueSpecification *>(joinSpec);
}

#include "moc_qjoinnode.cpp"

QT_END_NAMESPACE_QTUML

