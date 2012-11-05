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

#include "qmessageevent.h"
#include "qmessageevent_p.h"

QT_BEGIN_NAMESPACE_QTUML

QMessageEventPrivate::QMessageEventPrivate()
{
}

QMessageEventPrivate::~QMessageEventPrivate()
{
}

/*!
    \class QMessageEvent

    \inmodule QtUml

    \brief A message event specifies the receipt by an object of either a call or a signal.
 */

QMessageEvent::QMessageEvent(QObject *parent) :
    QEvent(*new QMessageEventPrivate, parent)
{
    qRegisterMetaType<QMessageEvent *>("QMessageEvent *");
    qRegisterMetaType<const QSet<QMessageEvent *> *>("const QSet<QMessageEvent *> *");
    qRegisterMetaType<const QList<QMessageEvent *> *>("const QList<QMessageEvent *> *");
}

QMessageEvent::QMessageEvent(QMessageEventPrivate &dd, QObject *parent) :
    QEvent(dd, parent)
{
    qRegisterMetaType<QMessageEvent *>("QMessageEvent *");
    qRegisterMetaType<const QSet<QMessageEvent *> *>("const QSet<QMessageEvent *> *");
    qRegisterMetaType<const QList<QMessageEvent *> *>("const QList<QMessageEvent *> *");
}

QMessageEvent::~QMessageEvent()
{
}

#include "moc_qmessageevent.cpp"

QT_END_NAMESPACE_QTUML

