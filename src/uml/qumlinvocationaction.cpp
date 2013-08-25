/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlinvocationaction.h"
#include "qumlinvocationaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlPort>

QT_BEGIN_NAMESPACE

QUmlInvocationActionPrivate::QUmlInvocationActionPrivate() :
    onPort(0)
{
}

/*!
    \class QUmlInvocationAction

    \inmodule QtUml

    \brief InvocationAction is an abstract class for the various actions that invoke behavior.In addition to targeting an object, invocation actions can also invoke behavioral features on ports from where the invocation requests are routed onwards on links deriving from attached connectors. Invocation actions may also be sent to a target via a given port, either on the sending object or on another object.
 */

QUmlInvocationAction::QUmlInvocationAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInvocationActionPrivate);
}

// Owned attributes

/*!
    Specification of the ordered set of argument values that appears during execution.
 */
QList<QUmlInputPin *> QUmlInvocationAction::argument() const
{
    return QList<QUmlInputPin *>();
}

void QUmlInvocationAction::addArgument(QList<QUmlInputPin *> argument)
{
    Q_UNUSED(argument);
}

void QUmlInvocationAction::removeArgument(QList<QUmlInputPin *> argument)
{
    Q_UNUSED(argument);
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
QUmlPort *QUmlInvocationAction::onPort() const
{
    return 0;
}

void QUmlInvocationAction::setOnPort(QUmlPort *onPort)
{
    Q_UNUSED(onPort);
}

QT_END_NAMESPACE

