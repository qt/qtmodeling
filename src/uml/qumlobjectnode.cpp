/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlobjectnode.h"
#include "qumlobjectnode_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlState>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlObjectNodePrivate::QUmlObjectNodePrivate() :
    isControlType(false),
    ordering(QtUml::ObjectNodeOrderingFIFO),
    selection(0),
    upperBound(0)
{
}

/*!
    \class QUmlObjectNode

    \inmodule QtUml

    \brief An object node is an abstract activity node that is part of defining object flow in an activity.Object nodes have support for token selection, limitation on the number of tokens, specifying the state required for tokens, and carrying control values.
 */

QUmlObjectNode::QUmlObjectNode(bool create_d_ptr) :
    QUmlActivityNode(false),
    QUmlTypedElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlObjectNodePrivate);
}

// OWNED ATTRIBUTES

/*!
    The required states of the object available at this point in the activity.
 */
QSet<QUmlState *> QUmlObjectNode::inState() const
{
    // This is a read-write association end

    QM_D(const QUmlObjectNode);
    return d->inState;
}

void QUmlObjectNode::addInState(QUmlState *inState)
{
    // This is a read-write association end

    QM_D(QUmlObjectNode);
    if (!d->inState.contains(inState)) {
        d->inState.insert(inState);
    }
}

void QUmlObjectNode::removeInState(QUmlState *inState)
{
    // This is a read-write association end

    QM_D(QUmlObjectNode);
    if (d->inState.contains(inState)) {
        d->inState.remove(inState);
    }
}

/*!
    Tells whether the type of the object node is to be treated as control.
 */
bool QUmlObjectNode::isControlType() const
{
    // This is a read-write property

    QM_D(const QUmlObjectNode);
    return d->isControlType;
}

void QUmlObjectNode::setControlType(bool isControlType)
{
    // This is a read-write property

    QM_D(QUmlObjectNode);
    if (d->isControlType != isControlType) {
        d->isControlType = isControlType;
    }
}

/*!
    Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.
 */
QtUml::ObjectNodeOrderingKind QUmlObjectNode::ordering() const
{
    // This is a read-write property

    QM_D(const QUmlObjectNode);
    return d->ordering;
}

void QUmlObjectNode::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    // This is a read-write property

    QM_D(QUmlObjectNode);
    if (d->ordering != ordering) {
        d->ordering = ordering;
    }
}

/*!
    Selects tokens for outgoing edges.
 */
QUmlBehavior *QUmlObjectNode::selection() const
{
    // This is a read-write association end

    QM_D(const QUmlObjectNode);
    return d->selection;
}

void QUmlObjectNode::setSelection(QUmlBehavior *selection)
{
    // This is a read-write association end

    QM_D(QUmlObjectNode);
    if (d->selection != selection) {
        d->selection = selection;
    }
}

/*!
    The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.
 */
QUmlValueSpecification *QUmlObjectNode::upperBound() const
{
    // This is a read-write association end

    QM_D(const QUmlObjectNode);
    return d->upperBound;
}

void QUmlObjectNode::setUpperBound(QUmlValueSpecification *upperBound)
{
    // This is a read-write association end

    QM_D(QUmlObjectNode);
    if (d->upperBound != upperBound) {
        d->upperBound = upperBound;
    }
}

QT_END_NAMESPACE

