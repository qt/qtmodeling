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
#include "qumlobjectflow.h"
#include "qumlobjectflow_p.h"

#include <QtUml/QUmlBehavior>

QT_BEGIN_NAMESPACE

QUmlObjectFlowPrivate::QUmlObjectFlowPrivate() :
    isMulticast(false),
    isMultireceive(false),
    selection(0),
    transformation(0)
{
}

/*!
    \class QUmlObjectFlow

    \inmodule QtUml

    \brief An object flow is an activity edge that can have objects or data passing along it.Object flows have support for multicast/receive, token selection from object nodes, and transformation of tokens.
 */

QUmlObjectFlow::QUmlObjectFlow(bool create_d_ptr) :
    QUmlActivityEdge(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlObjectFlowPrivate);
}

// OWNED ATTRIBUTES

/*!
    Tells whether the objects in the flow are passed by multicasting.
 */
bool QUmlObjectFlow::isMulticast() const
{
    // This is a read-write property

    QM_D(const QUmlObjectFlow);
    return d->isMulticast;
}

void QUmlObjectFlow::setMulticast(bool isMulticast)
{
    // This is a read-write property

    QM_D(QUmlObjectFlow);
    if (d->isMulticast != isMulticast) {
        d->isMulticast = isMulticast;
    }
}

/*!
    Tells whether the objects in the flow are gathered from respondents to multicasting.
 */
bool QUmlObjectFlow::isMultireceive() const
{
    // This is a read-write property

    QM_D(const QUmlObjectFlow);
    return d->isMultireceive;
}

void QUmlObjectFlow::setMultireceive(bool isMultireceive)
{
    // This is a read-write property

    QM_D(QUmlObjectFlow);
    if (d->isMultireceive != isMultireceive) {
        d->isMultireceive = isMultireceive;
    }
}

/*!
    Selects tokens from a source object node.
 */
QUmlBehavior *QUmlObjectFlow::selection() const
{
    // This is a read-write association end

    QM_D(const QUmlObjectFlow);
    return d->selection;
}

void QUmlObjectFlow::setSelection(QUmlBehavior *selection)
{
    // This is a read-write association end

    QM_D(QUmlObjectFlow);
    if (d->selection != selection) {
        d->selection = selection;
    }
}

/*!
    Changes or replaces data tokens flowing along edge.
 */
QUmlBehavior *QUmlObjectFlow::transformation() const
{
    // This is a read-write association end

    QM_D(const QUmlObjectFlow);
    return d->transformation;
}

void QUmlObjectFlow::setTransformation(QUmlBehavior *transformation)
{
    // This is a read-write association end

    QM_D(QUmlObjectFlow);
    if (d->transformation != transformation) {
        d->transformation = transformation;
    }
}

QT_END_NAMESPACE

