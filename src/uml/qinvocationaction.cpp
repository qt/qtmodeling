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

/*!
    \class QInvocationAction

    \inmodule QtUml

    \brief InvocationAction is an abstract class for the various actions that invoke behavior.In addition to targeting an object, invocation actions can also invoke behavioral features on ports from where the invocation requests are routed onwards on links deriving from attached connectors. Invocation actions may also be sent to a target via a given port, either on the sending object or on another object.
 */

QInvocationAction::QInvocationAction(QObject *parent) :
    QAction(*new QInvocationActionPrivate, parent)
{
    qRegisterMetaType<QInvocationAction *>("QInvocationAction *");
    qRegisterMetaType<const QSet<QInvocationAction *> *>("const QSet<QInvocationAction *> *");
    qRegisterMetaType<const QList<QInvocationAction *> *>("const QList<QInvocationAction *> *");
}

QInvocationAction::QInvocationAction(QInvocationActionPrivate &dd, QObject *parent) :
    QAction(dd, parent)
{
    qRegisterMetaType<QInvocationAction *>("QInvocationAction *");
    qRegisterMetaType<const QSet<QInvocationAction *> *>("const QSet<QInvocationAction *> *");
    qRegisterMetaType<const QList<QInvocationAction *> *>("const QList<QInvocationAction *> *");
}

QInvocationAction::~QInvocationAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInvocationAction
// ---------------------------------------------------------------

/*!
    Specification of the ordered set of argument values that appears during execution.
 */
const QList<QInputPin *> *QInvocationAction::arguments() const
{
    // This is a read-write association end

    Q_D(const QInvocationAction);
    return d->arguments;
}

void QInvocationAction::addArgument(QInputPin *argument)
{
    // This is a read-write association end

    Q_D(QInvocationAction);
    if (!d->arguments->contains(argument)) {
        d->arguments->append(argument);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActionPrivate *>(d))->addInput(qtuml_object_cast<QInputPin *>(argument));
    }
}

void QInvocationAction::removeArgument(QInputPin *argument)
{
    // This is a read-write association end

    Q_D(QInvocationAction);
    if (d->arguments->contains(argument)) {
        d->arguments->removeAll(argument);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActionPrivate *>(d))->removeInput(qtuml_object_cast<QInputPin *>(argument));
    }
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
QPort *QInvocationAction::onPort() const
{
    // This is a read-write association end

    Q_D(const QInvocationAction);
    return d->onPort;
}

void QInvocationAction::setOnPort(QPort *onPort)
{
    // This is a read-write association end

    Q_D(QInvocationAction);
    if (d->onPort != onPort) {
        d->onPort = onPort;
    }
}

#include "moc_qinvocationaction.cpp"

QT_END_NAMESPACE_QTUML

