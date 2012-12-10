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

#include "qdurationobservation.h"
#include "qdurationobservation_p.h"

#include <QtUml/QNamedElement>

QT_BEGIN_NAMESPACE_QTUML

QDurationObservationPrivate::QDurationObservationPrivate() :
    firstEvents(new QSet<bool>),
    events(new QSet<QNamedElement *>)
{
}

QDurationObservationPrivate::~QDurationObservationPrivate()
{
    delete firstEvents;
    delete events;
}

/*!
    \class QDurationObservation

    \inmodule QtUml

    \brief A duration observation is a reference to a duration during an execution. It points out the element(s) in the model to observe and whether the observations are when this model element is entered or when it is exited.
 */

QDurationObservation::QDurationObservation(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QObservation(*new QDurationObservationPrivate, parent, wrapper)
{
}

QDurationObservation::QDurationObservation(QDurationObservationPrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QObservation(dd, parent, wrapper)
{
}

QDurationObservation::~QDurationObservation()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QDurationObservation
// ---------------------------------------------------------------

/*!
    The value of firstEvent[i] is related to event[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters event[i]. If firstEvent[i] is false, then the corresponding observation event is the time instant the execution exits event[i]. Default value is true applied when event[i] refers an element that represents only one time instant.
 */
const QSet<bool> *QDurationObservation::firstEvents() const
{
    // This is a read-write attribute

    Q_D(const QDurationObservation);
    return d->firstEvents;
}

void QDurationObservation::addFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    Q_D(QDurationObservation);
    if (!d->firstEvents->contains(firstEvent)) {
        d->firstEvents->insert(firstEvent);
    }
}

void QDurationObservation::removeFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    Q_D(QDurationObservation);
    if (d->firstEvents->contains(firstEvent)) {
        d->firstEvents->remove(firstEvent);
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDurationObservation
// ---------------------------------------------------------------

/*!
    The observation is determined by the entering or exiting of the event element during execution.
 */
const QSet<QNamedElement *> *QDurationObservation::events() const
{
    // This is a read-write association end

    Q_D(const QDurationObservation);
    return d->events;
}

void QDurationObservation::addEvent(QNamedElement *event)
{
    // This is a read-write association end

    Q_D(QDurationObservation);
    if (!d->events->contains(event)) {
        d->events->insert(event);
    }
}

void QDurationObservation::removeEvent(QNamedElement *event)
{
    // This is a read-write association end

    Q_D(QDurationObservation);
    if (d->events->contains(event)) {
        d->events->remove(event);
    }
}

#include "moc_qdurationobservation.cpp"

QT_END_NAMESPACE_QTUML

