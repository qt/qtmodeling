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
#include "qumlsendobjectaction.h"
#include "qumlsendobjectaction_p.h"

#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

QUmlSendObjectActionPrivate::QUmlSendObjectActionPrivate() :
    request(0),
    target(0)
{
}

/*!
    \class QUmlSendObjectAction

    \inmodule QtUml

    \brief A send object action is an action that transmits an object to the target object, where it may invoke behavior such as the firing of state machine transitions or the execution of an activity. The value of the object is available to the execution of invoked behaviors. The requestor continues execution immediately. Any reply message is ignored and is not transmitted to the requestor.
 */

QUmlSendObjectAction::QUmlSendObjectAction(bool create_d_ptr) :
    QUmlInvocationAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlSendObjectActionPrivate);
}

// OWNED ATTRIBUTES

/*!
    The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.
 */
QUmlInputPin *QUmlSendObjectAction::request() const
{
    // This is a read-write association end

    QM_D(const QUmlSendObjectAction);
    return d->request;
}

void QUmlSendObjectAction::setRequest(QUmlInputPin *request)
{
    // This is a read-write association end

    QM_D(QUmlSendObjectAction);
    if (d->request != request) {
        d->request = request;
    }
}

/*!
    The target object to which the object is sent.
 */
QUmlInputPin *QUmlSendObjectAction::target() const
{
    // This is a read-write association end

    QM_D(const QUmlSendObjectAction);
    return d->target;
}

void QUmlSendObjectAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    QM_D(QUmlSendObjectAction);
    if (d->target != target) {
        d->target = target;
    }
}

QT_END_NAMESPACE

