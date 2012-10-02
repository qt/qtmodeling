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

#include "qstartobjectbehavioraction.h"
//#include "qstartobjectbehavioraction_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QStartObjectBehaviorAction

    \inmodule QtUml

    \brief StartObjectBehaviorAction is an action that starts the execution either of a directly instantiated behavior or of the classifier behavior of an object. Argument values may be supplied for the input parameters of the behavior. If the behavior is invoked synchronously, then output values may be obtained for output parameters.
 */

QStartObjectBehaviorAction::QStartObjectBehaviorAction(QObject *parent)
    : QObject(parent)
{
}

QStartObjectBehaviorAction::~QStartObjectBehaviorAction()
{
}

/*!
    Holds the object which is either a behavior to be started or has a classifier behavior to be started.
 */
QInputPin *QStartObjectBehaviorAction::object() const
{
}

void QStartObjectBehaviorAction::setObject(QInputPin *object)
{
}

#include "moc_qstartobjectbehavioraction.cpp"

QT_END_NAMESPACE_QTUML

