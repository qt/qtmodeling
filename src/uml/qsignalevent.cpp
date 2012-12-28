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

#include "qsignalevent.h"
#include "qsignalevent_p.h"

#include <QtUml/QSignal>

QT_BEGIN_NAMESPACE_QTUML

QSignalEventPrivate::QSignalEventPrivate() :
    signal(0)
{
}

QSignalEventPrivate::~QSignalEventPrivate()
{
}

/*!
    \class QSignalEvent

    \inmodule QtUml

    \brief A signal event represents the receipt of an asynchronous signal instance. A signal event may, for example, cause a state machine to trigger a transition.
 */

QSignalEvent::QSignalEvent(QWrappedObject *parent, QWrappedObject *wrapper) :
    QMessageEvent(*new QSignalEventPrivate, parent, wrapper)
{
}

QSignalEvent::QSignalEvent(QSignalEventPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QMessageEvent(dd, parent, wrapper)
{
}

QSignalEvent::~QSignalEvent()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QSignalEvent
// ---------------------------------------------------------------

/*!
    The specific signal that is associated with this event.
 */
QSignal *QSignalEvent::signal() const
{
    // This is a read-write association end

    Q_D(const QSignalEvent);
    return d->signal;
}

void QSignalEvent::setSignal(QSignal *signal)
{
    // This is a read-write association end

    Q_D(QSignalEvent);
    if (d->signal != signal) {
        d->signal = signal;
    }
}

#include "moc_qsignalevent.cpp"

QT_END_NAMESPACE_QTUML

