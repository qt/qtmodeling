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

#include "qtimeobservation.h"
#include "qtimeobservation_p.h"

#include <QtUml/QNamedElement>

QT_BEGIN_NAMESPACE_QTUML

QTimeObservationPrivate::QTimeObservationPrivate() :
    firstEvent(true),
    event(0)
{
}

QTimeObservationPrivate::~QTimeObservationPrivate()
{
}

/*!
    \class QTimeObservation

    \inmodule QtUml

    \brief A time observation is a reference to a time instant during an execution. It points out the element in the model to observe and whether the observation is when this model element is entered or when it is exited.
 */

QTimeObservation::QTimeObservation(QWrappedObject *parent, QWrappedObject *wrapper) :
    QObservation(*new QTimeObservationPrivate, parent, wrapper)
{
}

QTimeObservation::QTimeObservation(QTimeObservationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QObservation(dd, parent, wrapper)
{
}

QTimeObservation::~QTimeObservation()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QTimeObservation
// ---------------------------------------------------------------

/*!
    The value of firstEvent is related to event. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters event. If firstEvent is false, then the corresponding observation event is the time instant the execution exits event.
 */
bool QTimeObservation::firstEvent() const
{
    // This is a read-write attribute

    Q_D(const QTimeObservation);
    return d->firstEvent;
}

void QTimeObservation::setFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    Q_D(QTimeObservation);
    if (d->firstEvent != firstEvent) {
        d->firstEvent = firstEvent;
    }
}

void QTimeObservation::unsetFirstEvent()
{
    setFirstEvent(true);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTimeObservation
// ---------------------------------------------------------------

/*!
    The observation is determined by the entering or exiting of the event element during execution.
 */
QNamedElement *QTimeObservation::event() const
{
    // This is a read-write association end

    Q_D(const QTimeObservation);
    return d->event;
}

void QTimeObservation::setEvent(QNamedElement *event)
{
    // This is a read-write association end

    Q_D(QTimeObservation);
    if (d->event != event) {
        d->event = event;
    }
}

void QTimeObservation::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QTimeObservation) *>("QT_PREPEND_NAMESPACE_QTUML(QTimeObservation) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QTimeObservation) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QTimeObservation) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QTimeObservation) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QTimeObservation) *> *");
    qRegisterMetaType<QTimeObservation *>("QTimeObservation *");
    qRegisterMetaType<const QSet<QTimeObservation *> *>("const QSet<QTimeObservation *> *");
    qRegisterMetaType<const QList<QTimeObservation *> *>("const QList<QTimeObservation *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QNamedElement) *>("QT_PREPEND_NAMESPACE_QTUML(QNamedElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QNamedElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QNamedElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QNamedElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QNamedElement) *> *");
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<const QSet<QNamedElement *> *>("const QSet<QNamedElement *> *");
    qRegisterMetaType<const QList<QNamedElement *> *>("const QList<QNamedElement *> *");

    QObservation::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qtimeobservation.cpp"

QT_END_NAMESPACE_QTUML

