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
#include "qumldurationobservation.h"
#include "qumldurationobservation_p.h"

#include <QtUml/QUmlNamedElement>

QT_BEGIN_NAMESPACE

QUmlDurationObservationPrivate::QUmlDurationObservationPrivate() :
    event(0)
{
}

/*!
    \class QUmlDurationObservation

    \inmodule QtUml

    \brief A duration observation is a reference to a duration during an execution. It points out the element(s) in the model to observe and whether the observations are when this model element is entered or when it is exited.
 */

QUmlDurationObservation::QUmlDurationObservation(bool create_d_ptr) :
    QUmlObservation(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlDurationObservationPrivate);
}

// OWNED ATTRIBUTES

/*!
    The observation is determined by the entering or exiting of the event element during execution.
 */
QUmlNamedElement *QUmlDurationObservation::event() const
{
    // This is a read-write association end

    QM_D(const QUmlDurationObservation);
    return d->event;
}

void QUmlDurationObservation::setEvent(QUmlNamedElement *event)
{
    // This is a read-write association end

    QM_D(QUmlDurationObservation);
    if (d->event != event) {
        d->event = event;
    }
}

/*!
    The value of firstEvent[i] is related to event[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters event[i]. If firstEvent[i] is false, then the corresponding observation event is the time instant the execution exits event[i]. Default value is true applied when event[i] refers an element that represents only one time instant.
 */
bool QUmlDurationObservation::firstEvent() const
{
    // This is a read-write property

    QM_D(const QUmlDurationObservation);
    return d->firstEvent;
}

void QUmlDurationObservation::setFirstEvent(bool firstEvent)
{
    // This is a read-write property

    QM_D(QUmlDurationObservation);
    if (d->firstEvent != firstEvent) {
        d->firstEvent = firstEvent;
    }
}

QT_END_NAMESPACE

