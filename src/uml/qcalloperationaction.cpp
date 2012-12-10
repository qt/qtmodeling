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

#include "qcalloperationaction.h"
#include "qcalloperationaction_p.h"

#include <QtUml/QOperation>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QCallOperationActionPrivate::QCallOperationActionPrivate() :
    operation(0),
    target(0)
{
}

QCallOperationActionPrivate::~QCallOperationActionPrivate()
{
}

/*!
    \class QCallOperationAction

    \inmodule QtUml

    \brief A call operation action is an action that transmits an operation call request to the target object, where it may cause the invocation of associated behavior. The argument values of the action are available to the execution of the invoked behavior. If the action is marked synchronous, the execution of the call operation action waits until the execution of the invoked behavior completes and a reply transmission is returned to the caller; otherwise execution of the action is complete when the invocation of the operation is established and the execution of the invoked operation proceeds concurrently with the execution of the calling behavior. Any values returned as part of the reply transmission are put on the result output pins of the call operation action. Upon receipt of the reply transmission, execution of the call operation action is complete.
 */

QCallOperationAction::QCallOperationAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QCallAction(*new QCallOperationActionPrivate, parent, wrapper)
{
}

QCallOperationAction::QCallOperationAction(QCallOperationActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QCallAction(dd, parent, wrapper)
{
}

QCallOperationAction::~QCallOperationAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCallOperationAction
// ---------------------------------------------------------------

/*!
    The operation to be invoked by the action execution.
 */
QOperation *QCallOperationAction::operation() const
{
    // This is a read-write association end

    Q_D(const QCallOperationAction);
    return d->operation;
}

void QCallOperationAction::setOperation(QOperation *operation)
{
    // This is a read-write association end

    Q_D(QCallOperationAction);
    if (d->operation != operation) {
        d->operation = operation;
    }
}

/*!
    The target object to which the request is sent. The classifier of the target object is used to dynamically determine a behavior to invoke. This object constitutes the context of the execution of the operation.
 */
QInputPin *QCallOperationAction::target() const
{
    // This is a read-write association end

    Q_D(const QCallOperationAction);
    return d->target;
}

void QCallOperationAction::setTarget(QInputPin *target)
{
    // This is a read-write association end

    Q_D(QCallOperationAction);
    if (d->target != target) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->target));

        d->target = target;

        // Adjust subsetted property(ies)
        if (target) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(target));
        }
    }
}

#include "moc_qcalloperationaction.cpp"

QT_END_NAMESPACE_QTUML

