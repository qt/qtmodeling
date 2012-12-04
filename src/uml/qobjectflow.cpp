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

#include "qobjectflow.h"
#include "qobjectflow_p.h"

#include <QtUml/QBehavior>

QT_BEGIN_NAMESPACE_QTUML

QObjectFlowPrivate::QObjectFlowPrivate() :
    isMultireceive(false),
    isMulticast(false),
    selection(0),
    transformation(0)
{
}

QObjectFlowPrivate::~QObjectFlowPrivate()
{
}

/*!
    \class QObjectFlow

    \inmodule QtUml

    \brief An object flow is an activity edge that can have objects or data passing along it.Object flows have support for multicast/receive, token selection from object nodes, and transformation of tokens.
 */

QObjectFlow::QObjectFlow(QUmlObject *parent, QUmlObject *wrapper) :
    QActivityEdge(*new QObjectFlowPrivate, parent, wrapper)
{
}

QObjectFlow::QObjectFlow(QObjectFlowPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QActivityEdge(dd, parent, wrapper)
{
}

QObjectFlow::~QObjectFlow()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QObjectFlow
// ---------------------------------------------------------------

/*!
    Tells whether the objects in the flow are gathered from respondents to multicasting.
 */
bool QObjectFlow::isMultireceive() const
{
    // This is a read-write attribute

    Q_D(const QObjectFlow);
    return d->isMultireceive;
}

void QObjectFlow::setMultireceive(bool isMultireceive)
{
    // This is a read-write attribute

    Q_D(QObjectFlow);
    if (d->isMultireceive != isMultireceive) {
        d->isMultireceive = isMultireceive;
    }
}

/*!
    Tells whether the objects in the flow are passed by multicasting.
 */
bool QObjectFlow::isMulticast() const
{
    // This is a read-write attribute

    Q_D(const QObjectFlow);
    return d->isMulticast;
}

void QObjectFlow::setMulticast(bool isMulticast)
{
    // This is a read-write attribute

    Q_D(QObjectFlow);
    if (d->isMulticast != isMulticast) {
        d->isMulticast = isMulticast;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QObjectFlow
// ---------------------------------------------------------------

/*!
    Selects tokens from a source object node.
 */
QBehavior *QObjectFlow::selection() const
{
    // This is a read-write association end

    Q_D(const QObjectFlow);
    return d->selection;
}

void QObjectFlow::setSelection(QBehavior *selection)
{
    // This is a read-write association end

    Q_D(QObjectFlow);
    if (d->selection != selection) {
        d->selection = selection;
    }
}

/*!
    Changes or replaces data tokens flowing along edge.
 */
QBehavior *QObjectFlow::transformation() const
{
    // This is a read-write association end

    Q_D(const QObjectFlow);
    return d->transformation;
}

void QObjectFlow::setTransformation(QBehavior *transformation)
{
    // This is a read-write association end

    Q_D(QObjectFlow);
    if (d->transformation != transformation) {
        d->transformation = transformation;
    }
}

#include "moc_qobjectflow.cpp"

QT_END_NAMESPACE_QTUML

