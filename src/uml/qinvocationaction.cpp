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

#include "qinvocationaction.h"
#include "qinvocationaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QPort>

QT_BEGIN_NAMESPACE_QTUML

QInvocationActionPrivate::QInvocationActionPrivate() :
    arguments(new QList<QInputPin *>),
    onPort(0)
{
}

QInvocationActionPrivate::~QInvocationActionPrivate()
{
    delete arguments;
}

void QInvocationActionPrivate::addArgument(const QInputPin *argument)
{
    this->arguments->append(const_cast<QInputPin *>(argument));
    // Adjust subsetted property(ies)
    addInput(argument);
}

void QInvocationActionPrivate::removeArgument(const QInputPin *argument)
{
    this->arguments->removeAll(const_cast<QInputPin *>(argument));
    // Adjust subsetted property(ies)
    removeInput(argument);
}

void QInvocationActionPrivate::setOnPort(const QPort *onPort)
{
    this->onPort = const_cast<QPort *>(onPort);
}

/*!
    \class QInvocationAction

    \inmodule QtUml

    \brief InvocationAction is an abstract class for the various actions that invoke behavior.In addition to targeting an object, invocation actions can also invoke behavioral features on ports from where the invocation requests are routed onwards on links deriving from attached connectors. Invocation actions may also be sent to a target via a given port, either on the sending object or on another object.
 */

QInvocationAction::QInvocationAction()
{
    d_umlptr = new QInvocationActionPrivate;
}

QInvocationAction::~QInvocationAction()
{
}

/*!
    Specification of the ordered set of argument values that appears during execution.
 */
const QList<QInputPin *> *QInvocationAction::arguments() const
{
    Q_D(const QInvocationAction);
    return d->arguments;
}

void QInvocationAction::addArgument(const QInputPin *argument)
{
    Q_D(QInvocationAction);
    d->addArgument(const_cast<QInputPin *>(argument));
}

void QInvocationAction::removeArgument(const QInputPin *argument)
{
    Q_D(QInvocationAction);
    d->removeArgument(const_cast<QInputPin *>(argument));
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
QPort *QInvocationAction::onPort() const
{
    Q_D(const QInvocationAction);
    return d->onPort;
}

void QInvocationAction::setOnPort(const QPort *onPort)
{
    Q_D(QInvocationAction);
    d->setOnPort(const_cast<QPort *>(onPort));
}

QT_END_NAMESPACE_QTUML

