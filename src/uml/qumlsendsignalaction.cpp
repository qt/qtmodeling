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

#include "qumlsendsignalaction.h"
#include "qumlsendsignalaction_p.h"

#include <QtUml/QUmlSignal>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlSendSignalActionPrivate::QUmlSendSignalActionPrivate() :
    target(0),
    signal(0)
{
}

QUmlSendSignalActionPrivate::~QUmlSendSignalActionPrivate()
{
}

/*!
    \class QUmlSendSignalAction

    \inmodule QtUml

    \brief A send signal action is an action that creates a signal instance from its inputs, and transmits it to the target object, where it may cause the firing of a state machine transition or the execution of an activity. The argument values are available to the execution of associated behaviors. The requestor continues execution immediately. Any reply message is ignored and is not transmitted to the requestor. If the input is already a signal instance, use a send object action.
 */

QUmlSendSignalAction::QUmlSendSignalAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(*new QUmlSendSignalActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlSendSignalAction::QUmlSendSignalAction(QUmlSendSignalActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlSendSignalAction::~QUmlSendSignalAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlSendSignalAction
// ---------------------------------------------------------------

/*!
    The target object to which the signal is sent.
 */
QUmlInputPin *QUmlSendSignalAction::target() const
{
    // This is a read-write association end

    Q_D(const QUmlSendSignalAction);
    return d->target;
}

void QUmlSendSignalAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    Q_D(QUmlSendSignalAction);
    if (d->target != target) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->target));

        d->target = target;

        // Adjust subsetted property(ies)
        if (target) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(target));
        }
    }
}

/*!
    The type of signal transmitted to the target object.
 */
QUmlSignal *QUmlSendSignalAction::signal() const
{
    // This is a read-write association end

    Q_D(const QUmlSendSignalAction);
    return d->signal;
}

void QUmlSendSignalAction::setSignal(QUmlSignal *signal)
{
    // This is a read-write association end

    Q_D(QUmlSendSignalAction);
    if (d->signal != signal) {
        d->signal = signal;
    }
}

void QUmlSendSignalAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("target")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("target")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("target")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The target object to which the signal is sent.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("target")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("target")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("target")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The type of signal transmitted to the target object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendSignalAction")][QString::fromLatin1("signal")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlInvocationAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlsendsignalaction.cpp"

