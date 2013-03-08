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

#include "qumlsignalevent.h"
#include "qumlsignalevent_p.h"

#include <QtUml/QUmlSignal>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlSignalEventPrivate::QUmlSignalEventPrivate() :
    signal(0)
{
}

QUmlSignalEventPrivate::~QUmlSignalEventPrivate()
{
}

/*!
    \class QUmlSignalEvent

    \inmodule QtUml

    \brief A signal event represents the receipt of an asynchronous signal instance. A signal event may, for example, cause a state machine to trigger a transition.
 */

QUmlSignalEvent::QUmlSignalEvent(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlMessageEvent(*new QUmlSignalEventPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlSignalEvent::QUmlSignalEvent(QUmlSignalEventPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlMessageEvent(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlSignalEvent::~QUmlSignalEvent()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlSignalEvent
// ---------------------------------------------------------------

/*!
    The specific signal that is associated with this event.
 */
QUmlSignal *QUmlSignalEvent::signal() const
{
    // This is a read-write association end

    Q_D(const QUmlSignalEvent);
    return d->signal;
}

void QUmlSignalEvent::setSignal(QUmlSignal *signal)
{
    // This is a read-write association end

    Q_D(QUmlSignalEvent);
    if (d->signal != signal) {
        d->signal = signal;
    }
}

void QUmlSignalEvent::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSignalEvent")][QString::fromLatin1("signal")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSignalEvent")][QString::fromLatin1("signal")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSignalEvent")][QString::fromLatin1("signal")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specific signal that is associated with this event.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSignalEvent")][QString::fromLatin1("signal")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSignalEvent")][QString::fromLatin1("signal")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSignalEvent")][QString::fromLatin1("signal")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlMessageEvent::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlsignalevent.cpp"

