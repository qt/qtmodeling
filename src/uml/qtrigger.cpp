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

#include "qtrigger.h"
#include "qtrigger_p.h"

#include <QtUml/QEvent>
#include <QtUml/QPort>

QT_BEGIN_NAMESPACE_QTUML

QTriggerPrivate::QTriggerPrivate() :
    ports(new QSet<QPort *>),
    event(0)
{
}

QTriggerPrivate::~QTriggerPrivate()
{
    delete ports;
}

void QTriggerPrivate::addPort(const QPort *port)
{
    this->ports->insert(const_cast<QPort *>(port));
}

void QTriggerPrivate::removePort(const QPort *port)
{
    this->ports->remove(const_cast<QPort *>(port));
}

void QTriggerPrivate::setEvent(const QEvent *event)
{
    this->event = const_cast<QEvent *>(event);
}

/*!
    \class QTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */

QTrigger::QTrigger(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QTriggerPrivate;
}

QTrigger::QTrigger(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QTriggerPrivate;
}

QTrigger::~QTrigger()
{
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
const QSet<QPort *> *QTrigger::ports() const
{
    QTUML_D(const QTrigger);
    return d->ports;
}

void QTrigger::addPort(const QPort *port)
{
    QTUML_D(QTrigger);
    d->addPort(const_cast<QPort *>(port));
}

void QTrigger::removePort(const QPort *port)
{
    QTUML_D(QTrigger);
    d->removePort(const_cast<QPort *>(port));
}

/*!
    The event that causes the trigger.
 */
QEvent *QTrigger::event() const
{
    QTUML_D(const QTrigger);
    return d->event;
}

void QTrigger::setEvent(const QEvent *event)
{
    QTUML_D(QTrigger);
    d->setEvent(const_cast<QEvent *>(event));
}

#include "moc_qtrigger.cpp"

QT_END_NAMESPACE_QTUML

