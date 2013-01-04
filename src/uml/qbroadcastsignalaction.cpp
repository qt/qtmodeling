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

#include "qbroadcastsignalaction.h"
#include "qbroadcastsignalaction_p.h"

#include <QtUml/QSignal>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QBroadcastSignalActionPrivate::QBroadcastSignalActionPrivate() :
    signal(0)
{
}

QBroadcastSignalActionPrivate::~QBroadcastSignalActionPrivate()
{
}

/*!
    \class QBroadcastSignalAction

    \inmodule QtUml

    \brief A broadcast signal action is an action that transmits a signal instance to all the potential target objects in the system, which may cause the firing of a state machine transitions or the execution of associated activities of a target object. The argument values are available to the execution of associated behaviors. The requestor continues execution immediately after the signals are sent out. It does not wait for receipt. Any reply messages are ignored and are not transmitted to the requestor.
 */

QBroadcastSignalAction::QBroadcastSignalAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInvocationAction(*new QBroadcastSignalActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QBroadcastSignalAction::QBroadcastSignalAction(QBroadcastSignalActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInvocationAction(dd, wrapper, parent)
{
    setPropertyData();
}

QBroadcastSignalAction::~QBroadcastSignalAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QBroadcastSignalAction
// ---------------------------------------------------------------

/*!
    The specification of signal object transmitted to the target objects.
 */
QSignal *QBroadcastSignalAction::signal() const
{
    // This is a read-write association end

    Q_D(const QBroadcastSignalAction);
    return d->signal;
}

void QBroadcastSignalAction::setSignal(QSignal *signal)
{
    // This is a read-write association end

    Q_D(QBroadcastSignalAction);
    if (d->signal != signal) {
        d->signal = signal;
    }
}

void QBroadcastSignalAction::registerMetaTypes() const
{
    qRegisterMetaType<QSignal *>("QSignal *");
    qRegisterMetaType<QSet<QSignal *>>("QSet<QSignal *>");
    qRegisterMetaType<QList<QSignal *>>("QList<QSignal *>");

    QInvocationAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QBroadcastSignalAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of signal object transmitted to the target objects.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInvocationAction::setPropertyData();
}

#include "moc_qbroadcastsignalaction.cpp"

QT_END_NAMESPACE_QTUML

