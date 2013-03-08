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

#include "qumlcallbehavioraction.h"
#include "qumlcallbehavioraction_p.h"

#include <QtUml/QUmlBehavior>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlCallBehaviorActionPrivate::QUmlCallBehaviorActionPrivate() :
    behavior(0)
{
}

QUmlCallBehaviorActionPrivate::~QUmlCallBehaviorActionPrivate()
{
}

/*!
    \class QUmlCallBehaviorAction

    \inmodule QtUml

    \brief A call behavior action is a call action that invokes a behavior directly rather than invoking a behavioral feature that, in turn, results in the invocation of that behavior. The argument values of the action are available to the execution of the invoked behavior. For synchronous calls the execution of the call behavior action waits until the execution of the invoked behavior completes and a result is returned on its output pin. The action completes immediately without a result, if the call is asynchronous. In particular, the invoked behavior may be an activity.
 */

QUmlCallBehaviorAction::QUmlCallBehaviorAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlCallAction(*new QUmlCallBehaviorActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlCallBehaviorAction::QUmlCallBehaviorAction(QUmlCallBehaviorActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlCallAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlCallBehaviorAction::~QUmlCallBehaviorAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlCallBehaviorAction
// ---------------------------------------------------------------

/*!
    The invoked behavior. It must be capable of accepting and returning control.
 */
QUmlBehavior *QUmlCallBehaviorAction::behavior() const
{
    // This is a read-write association end

    Q_D(const QUmlCallBehaviorAction);
    return d->behavior;
}

void QUmlCallBehaviorAction::setBehavior(QUmlBehavior *behavior)
{
    // This is a read-write association end

    Q_D(QUmlCallBehaviorAction);
    if (d->behavior != behavior) {
        d->behavior = behavior;
    }
}

void QUmlCallBehaviorAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The invoked behavior. It must be capable of accepting and returning control.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallBehaviorAction")][QString::fromLatin1("behavior")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlCallAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcallbehavioraction.cpp"

