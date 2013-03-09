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

#include "qumlbroadcastsignalaction.h"
#include "qumlbroadcastsignalaction_p.h"

#include <QtUml/QUmlSignal>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlBroadcastSignalActionPrivate::QUmlBroadcastSignalActionPrivate() :
    signal(0)
{
}

QUmlBroadcastSignalActionPrivate::~QUmlBroadcastSignalActionPrivate()
{
}

/*!
    \class QUmlBroadcastSignalAction

    \inmodule QtUml

    \brief A broadcast signal action is an action that transmits a signal instance to all the potential target objects in the system, which may cause the firing of a state machine transitions or the execution of associated activities of a target object. The argument values are available to the execution of associated behaviors. The requestor continues execution immediately after the signals are sent out. It does not wait for receipt. Any reply messages are ignored and are not transmitted to the requestor.
 */

QUmlBroadcastSignalAction::QUmlBroadcastSignalAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(*new QUmlBroadcastSignalActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlBroadcastSignalAction::QUmlBroadcastSignalAction(QUmlBroadcastSignalActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlBroadcastSignalAction::~QUmlBroadcastSignalAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlBroadcastSignalAction
// ---------------------------------------------------------------

/*!
    The specification of signal object transmitted to the target objects.
 */
QUmlSignal *QUmlBroadcastSignalAction::signal() const
{
    // This is a read-write association end

    Q_D(const QUmlBroadcastSignalAction);
    return d->signal;
}

void QUmlBroadcastSignalAction::setSignal(QUmlSignal *signal)
{
    // This is a read-write association end

    Q_D(QUmlBroadcastSignalAction);
    if (d->signal != signal) {
        d->signal = signal;
    }
}

void QUmlBroadcastSignalAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of signal object transmitted to the target objects.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlBroadcastSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlInvocationAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlbroadcastsignalaction.cpp"

