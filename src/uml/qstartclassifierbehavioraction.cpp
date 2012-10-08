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

#include "qstartclassifierbehavioraction.h"
#include "qstartclassifierbehavioraction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QStartClassifierBehaviorActionPrivate::QStartClassifierBehaviorActionPrivate() :
    object(0)
{
}

QStartClassifierBehaviorActionPrivate::~QStartClassifierBehaviorActionPrivate()
{
}

/*!
    \class QStartClassifierBehaviorAction

    \inmodule QtUml

    \brief A start classifier behavior action is an action that starts the classifier behavior of the input.
 */

QStartClassifierBehaviorAction::QStartClassifierBehaviorAction(QObject *parent)
    : QObject(parent), d_ptr(new QStartClassifierBehaviorActionPrivate)
{
}

QStartClassifierBehaviorAction::~QStartClassifierBehaviorAction()
{
    delete d_ptr;
}

/*!
    Holds the object on which to start the owned behavior.
 */
QInputPin *QStartClassifierBehaviorAction::object() const
{
    return d_ptr->object;
}

void QStartClassifierBehaviorAction::setObject(const QInputPin *object)
{
    d_ptr->object = const_cast<QInputPin *>(object);
}

#include "moc_qstartclassifierbehavioraction.cpp"

QT_END_NAMESPACE_QTUML

