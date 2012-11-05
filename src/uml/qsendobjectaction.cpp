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

#include "qsendobjectaction.h"
#include "qsendobjectaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QSendObjectActionPrivate::QSendObjectActionPrivate() :
    request(0),
    target(0)
{
}

QSendObjectActionPrivate::~QSendObjectActionPrivate()
{
    delete request;
}

/*!
    \class QSendObjectAction

    \inmodule QtUml

    \brief A send object action is an action that transmits an object to the target object, where it may invoke behavior such as the firing of state machine transitions or the execution of an activity. The value of the object is available to the execution of invoked behaviors. The requestor continues execution immediately. Any reply message is ignored and is not transmitted to the requestor.
 */

QSendObjectAction::QSendObjectAction(QObject *parent) :
    QInvocationAction(*new QSendObjectActionPrivate, parent)
{
}

QSendObjectAction::QSendObjectAction(QSendObjectActionPrivate &dd, QObject *parent) :
    QInvocationAction(dd, parent)
{
}

QSendObjectAction::~QSendObjectAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QSendObjectAction
// ---------------------------------------------------------------

/*!
    The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.
 */
QInputPin *QSendObjectAction::request() const
{
    // This is a read-write association end

    Q_D(const QSendObjectAction);
    return d->request;
}

void QSendObjectAction::setRequest(QInputPin *request)
{
    // This is a read-write association end

    Q_D(QSendObjectAction);
    if (d->request != request) {
        d->request = request;
    }
}

/*!
    The target object to which the object is sent.
 */
QInputPin *QSendObjectAction::target() const
{
    // This is a read-write association end

    Q_D(const QSendObjectAction);
    return d->target;
}

void QSendObjectAction::setTarget(QInputPin *target)
{
    // This is a read-write association end

    Q_D(QSendObjectAction);
    if (d->target != target) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActionPrivate *>(d))->removeInput(qtuml_object_cast<QInputPin *>(d->target));

        d->target = target;

        // Adjust subsetted property(ies)
        if (target) {
            (qtuml_object_cast<QActionPrivate *>(d))->addInput(qtuml_object_cast<QInputPin *>(target));
        }
    }
}

#include "moc_qsendobjectaction.cpp"

QT_END_NAMESPACE_QTUML

