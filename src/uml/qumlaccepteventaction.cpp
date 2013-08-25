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
#include "qumlaccepteventaction.h"
#include "qumlaccepteventaction_p.h"

#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

QUmlAcceptEventActionPrivate::QUmlAcceptEventActionPrivate() :
    isUnmarshall(false)
{
}

/*!
    \class QUmlAcceptEventAction

    \inmodule QtUml

    \brief A accept event action is an action that waits for the occurrence of an event meeting specified conditions.
 */

QUmlAcceptEventAction::QUmlAcceptEventAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlAcceptEventActionPrivate);
}

// OWNED ATTRIBUTES

/*!
    Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.
 */
bool QUmlAcceptEventAction::isUnmarshall() const
{
    // This is a read-write property

    QM_D(const QUmlAcceptEventAction);
    return d->isUnmarshall;
}

void QUmlAcceptEventAction::setUnmarshall(bool isUnmarshall)
{
    // This is a read-write property

    QM_D(QUmlAcceptEventAction);
    if (d->isUnmarshall != isUnmarshall) {
        d->isUnmarshall = isUnmarshall;
    }
}

/*!
    Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.
 */
QSet<QUmlOutputPin *> QUmlAcceptEventAction::result() const
{
    // This is a read-write association end

    QM_D(const QUmlAcceptEventAction);
    return d->result;
}

void QUmlAcceptEventAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    QM_D(QUmlAcceptEventAction);
    if (!d->result.contains(result)) {
        d->result.insert(result);
    }
}

void QUmlAcceptEventAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    QM_D(QUmlAcceptEventAction);
    if (d->result.contains(result)) {
        d->result.remove(result);
    }
}

/*!
    The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.
 */
QSet<QUmlTrigger *> QUmlAcceptEventAction::trigger() const
{
    // This is a read-write association end

    QM_D(const QUmlAcceptEventAction);
    return d->trigger;
}

void QUmlAcceptEventAction::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    QM_D(QUmlAcceptEventAction);
    if (!d->trigger.contains(trigger)) {
        d->trigger.insert(trigger);
    }
}

void QUmlAcceptEventAction::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    QM_D(QUmlAcceptEventAction);
    if (d->trigger.contains(trigger)) {
        d->trigger.remove(trigger);
    }
}

QT_END_NAMESPACE

