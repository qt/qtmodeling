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
#include "qobjectnode_p.h"
#include "qelement_p.h"

#include <QtUml/QState>
#include <QtUml/QBehavior>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QObjectNodePrivate::QObjectNodePrivate() :
    isControlType(false),
    ordering(QtUml::ObjectNodeOrderingFIFO),
    upperBound(0),
    selection(0),
    inState(new QSet<QState *>)
{
}

QObjectNodePrivate::~QObjectNodePrivate()
{
    delete inState;
}

void QObjectNodePrivate::setControlType(bool isControlType)
{
    // This is a read-write attribute

    this->isControlType = isControlType;
}

void QObjectNodePrivate::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    // This is a read-write attribute

    this->ordering = ordering;
}

void QObjectNodePrivate::setUpperBound(QValueSpecification *upperBound)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeOwnedElement(this->upperBound);

    this->upperBound = upperBound;

    // Adjust subsetted property(ies)
    addOwnedElement(upperBound);
}

void QObjectNodePrivate::setSelection(QBehavior *selection)
{
    // This is a read-write association end

    this->selection = selection;
}

void QObjectNodePrivate::addInState(QState *inState)
{
    // This is a read-write association end

    this->inState->insert(inState);
}

void QObjectNodePrivate::removeInState(QState *inState)
{
    // This is a read-write association end

    this->inState->remove(inState);
}

/*!
    \class QObjectNode

    \inmodule QtUml

    \brief An object node is an abstract activity node that is part of defining object flow in an activity.Object nodes have support for token selection, limitation on the number of tokens, specifying the state required for tokens, and carrying control values.
 */

QObjectNode::QObjectNode()
{
}

QObjectNode::~QObjectNode()
{
}

/*!
    Tells whether the type of the object node is to be treated as control.
 */
bool QObjectNode::isControlType() const
{
    // This is a read-write attribute

    QTUML_D(const QObjectNode);
    return d->isControlType;
}

void QObjectNode::setControlType(bool isControlType)
{
    // This is a read-write attribute

    QTUML_D(QObjectNode);
    if (d->isControlType != isControlType) {
        d->setControlType(isControlType);
    }
}

/*!
    Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.
 */
QtUml::ObjectNodeOrderingKind QObjectNode::ordering() const
{
    // This is a read-write attribute

    QTUML_D(const QObjectNode);
    return d->ordering;
}

void QObjectNode::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    // This is a read-write attribute

    QTUML_D(QObjectNode);
    if (d->ordering != ordering) {
        d->setOrdering(ordering);
    }
}

/*!
    The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.
 */
QValueSpecification *QObjectNode::upperBound() const
{
    // This is a read-write association end

    QTUML_D(const QObjectNode);
    return d->upperBound;
}

void QObjectNode::setUpperBound(QValueSpecification *upperBound)
{
    // This is a read-write association end

    QTUML_D(QObjectNode);
    if (d->upperBound != upperBound) {
        d->setUpperBound(upperBound);
    }
}

/*!
    Selects tokens for outgoing edges.
 */
QBehavior *QObjectNode::selection() const
{
    // This is a read-write association end

    QTUML_D(const QObjectNode);
    return d->selection;
}

void QObjectNode::setSelection(QBehavior *selection)
{
    // This is a read-write association end

    QTUML_D(QObjectNode);
    if (d->selection != selection) {
        d->setSelection(selection);
    }
}

/*!
    The required states of the object available at this point in the activity.
 */
const QSet<QState *> *QObjectNode::inState() const
{
    // This is a read-write association end

    QTUML_D(const QObjectNode);
    return d->inState;
}

void QObjectNode::addInState(QState *inState)
{
    // This is a read-write association end

    QTUML_D(QObjectNode);
    if (!d->inState->contains(inState)) {
        d->addInState(inState);
    }
}

void QObjectNode::removeInState(QState *inState)
{
    // This is a read-write association end

    QTUML_D(QObjectNode);
    if (d->inState->contains(inState)) {
        d->removeInState(inState);
    }
}

QT_END_NAMESPACE_QTUML

