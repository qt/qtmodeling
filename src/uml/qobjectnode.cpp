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

#include "qobjectnode.h"

#include <QtUml/QState>
#include <QtUml/QBehavior>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

class QObjectNodePrivate
{
public:
    explicit QObjectNodePrivate();
    virtual ~QObjectNodePrivate();

    bool isControlType;
    QtUml::ObjectNodeOrderingKind ordering;
    QSet<QState *> *inState;
    QBehavior *selection;
    QValueSpecification *upperBound;
};

QObjectNodePrivate::QObjectNodePrivate() :
    isControlType(false),
    ordering(QtUml::ObjectNodeOrderingFIFO),
    inState(new QSet<QState *>)
{
}

QObjectNodePrivate::~QObjectNodePrivate()
{
    delete inState;
}

/*!
    \class QObjectNode

    \inmodule QtUml

    \brief An object node is an abstract activity node that is part of defining object flow in an activity.Object nodes have support for token selection, limitation on the number of tokens, specifying the state required for tokens, and carrying control values.
 */

QObjectNode::QObjectNode()
    : d_ptr(new QObjectNodePrivate)
{
}

QObjectNode::~QObjectNode()
{
    delete d_ptr;
}

/*!
    Tells whether the type of the object node is to be treated as control.
 */
bool QObjectNode::isControlType() const
{
    return d_ptr->isControlType;
}

void QObjectNode::setControlType(bool isControlType)
{
    d_ptr->isControlType = isControlType;
}

/*!
    Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.
 */
QtUml::ObjectNodeOrderingKind QObjectNode::ordering() const
{
    return d_ptr->ordering;
}

void QObjectNode::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    d_ptr->ordering = ordering;
}

/*!
    The required states of the object available at this point in the activity.
 */
const QSet<QState *> *QObjectNode::inState() const
{
    return d_ptr->inState;
}

void QObjectNode::addInState(const QState *inState)
{
    d_ptr->inState->insert(const_cast<QState *>(inState));
}

void QObjectNode::removeInState(const QState *inState)
{
    d_ptr->inState->remove(const_cast<QState *>(inState));
}

/*!
    Selects tokens for outgoing edges.
 */
QBehavior *QObjectNode::selection() const
{
    return d_ptr->selection;
}

void QObjectNode::setSelection(const QBehavior *selection)
{
    d_ptr->selection = const_cast<QBehavior *>(selection);
}

/*!
    The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.
 */
QValueSpecification *QObjectNode::upperBound() const
{
    return d_ptr->upperBound;
}

void QObjectNode::setUpperBound(const QValueSpecification *upperBound)
{
    d_ptr->upperBound = const_cast<QValueSpecification *>(upperBound);
}

QT_END_NAMESPACE_QTUML

