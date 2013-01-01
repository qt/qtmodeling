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

#include "qcallbehavioraction.h"
#include "qcallbehavioraction_p.h"

#include <QtUml/QBehavior>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QCallBehaviorActionPrivate::QCallBehaviorActionPrivate() :
    behavior(0)
{
}

QCallBehaviorActionPrivate::~QCallBehaviorActionPrivate()
{
}

/*!
    \class QCallBehaviorAction

    \inmodule QtUml

    \brief A call behavior action is a call action that invokes a behavior directly rather than invoking a behavioral feature that, in turn, results in the invocation of that behavior. The argument values of the action are available to the execution of the invoked behavior. For synchronous calls the execution of the call behavior action waits until the execution of the invoked behavior completes and a result is returned on its output pin. The action completes immediately without a result, if the call is asynchronous. In particular, the invoked behavior may be an activity.
 */

QCallBehaviorAction::QCallBehaviorAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QCallAction(*new QCallBehaviorActionPrivate, parent, wrapper)
{
    setPropertyData();
}

QCallBehaviorAction::QCallBehaviorAction(QCallBehaviorActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QCallAction(dd, parent, wrapper)
{
    setPropertyData();
}

QCallBehaviorAction::~QCallBehaviorAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCallBehaviorAction
// ---------------------------------------------------------------

/*!
    The invoked behavior. It must be capable of accepting and returning control.
 */
QBehavior *QCallBehaviorAction::behavior() const
{
    // This is a read-write association end

    Q_D(const QCallBehaviorAction);
    return d->behavior;
}

void QCallBehaviorAction::setBehavior(QBehavior *behavior)
{
    // This is a read-write association end

    Q_D(QCallBehaviorAction);
    if (d->behavior != behavior) {
        d->behavior = behavior;
    }
}

void QCallBehaviorAction::registerMetaTypes() const
{
    qRegisterMetaType<QBehavior *>("QBehavior *");
    qRegisterMetaType<QSet<QBehavior *>>("QSet<QBehavior *>");
    qRegisterMetaType<QList<QBehavior *>>("QList<QBehavior *>");

    QCallAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QCallBehaviorAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The invoked behavior. It must be capable of accepting and returning control.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QCallAction::setPropertyData();
}

#include "moc_qcallbehavioraction.cpp"

QT_END_NAMESPACE_QTUML

