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

#include "qumldurationobservation.h"
#include "qumldurationobservation_p.h"

#include <QtUml/QUmlNamedElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDurationObservationPrivate::QUmlDurationObservationPrivate()
{
}

QUmlDurationObservationPrivate::~QUmlDurationObservationPrivate()
{
}

/*!
    \class QUmlDurationObservation

    \inmodule QtUml

    \brief A duration observation is a reference to a duration during an execution. It points out the element(s) in the model to observe and whether the observations are when this model element is entered or when it is exited.
 */

QUmlDurationObservation::QUmlDurationObservation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlObservation(*new QUmlDurationObservationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDurationObservation::QUmlDurationObservation(QUmlDurationObservationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlObservation(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDurationObservation::~QUmlDurationObservation()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlDurationObservation
// ---------------------------------------------------------------

/*!
    The value of firstEvent[i] is related to event[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters event[i]. If firstEvent[i] is false, then the corresponding observation event is the time instant the execution exits event[i]. Default value is true applied when event[i] refers an element that represents only one time instant.
 */
QSet<bool> QUmlDurationObservation::firstEvents() const
{
    // This is a read-write attribute

    Q_D(const QUmlDurationObservation);
    return d->firstEvents;
}

void QUmlDurationObservation::addFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    Q_D(QUmlDurationObservation);
    if (!d->firstEvents.contains(firstEvent)) {
        d->firstEvents.insert(firstEvent);
    }
}

void QUmlDurationObservation::removeFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    Q_D(QUmlDurationObservation);
    if (d->firstEvents.contains(firstEvent)) {
        d->firstEvents.remove(firstEvent);
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDurationObservation
// ---------------------------------------------------------------

/*!
    The observation is determined by the entering or exiting of the event element during execution.
 */
QSet<QUmlNamedElement *> QUmlDurationObservation::events() const
{
    // This is a read-write association end

    Q_D(const QUmlDurationObservation);
    return d->events;
}

void QUmlDurationObservation::addEvent(QUmlNamedElement *event)
{
    // This is a read-write association end

    Q_D(QUmlDurationObservation);
    if (!d->events.contains(event)) {
        d->events.insert(event);
    }
}

void QUmlDurationObservation::removeEvent(QUmlNamedElement *event)
{
    // This is a read-write association end

    Q_D(QUmlDurationObservation);
    if (d->events.contains(event)) {
        d->events.remove(event);
    }
}

void QUmlDurationObservation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("firstEvents")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("firstEvents")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("firstEvents")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of firstEvent[i] is related to event[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters event[i]. If firstEvent[i] is false, then the corresponding observation event is the time instant the execution exits event[i]. Default value is true applied when event[i] refers an element that represents only one time instant.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("firstEvents")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("firstEvents")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("firstEvents")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("events")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("events")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("events")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The observation is determined by the entering or exiting of the event element during execution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("events")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("events")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationObservation")][QString::fromLatin1("events")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlObservation::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldurationobservation.cpp"

