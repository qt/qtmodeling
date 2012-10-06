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

#include <QtUml/QEvent>
#include <QtUml/QPort>

QT_BEGIN_NAMESPACE_QTUML

class QTriggerPrivate
{
public:
    explicit QTriggerPrivate();
    virtual ~QTriggerPrivate();

    QEvent *event;
    QSet<QPort *> *ports;
};

QTriggerPrivate::QTriggerPrivate() :
    ports(new QSet<QPort *>)
{
}

QTriggerPrivate::~QTriggerPrivate()
{
    delete ports;
}

/*!
    \class QTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */

QTrigger::QTrigger(QObject *parent)
    : QObject(parent), d_ptr(new QTriggerPrivate)
{
}

QTrigger::~QTrigger()
{
    delete d_ptr;
}

/*!
    The event that causes the trigger.
 */
QEvent *QTrigger::event() const
{
    return d_ptr->event;
}

void QTrigger::setEvent(const QEvent *event)
{
    d_ptr->event = const_cast<QEvent *>(event);
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
const QSet<QPort *> *QTrigger::ports() const
{
    return d_ptr->ports;
}

void QTrigger::addPort(const QPort *port)
{
    d_ptr->ports->insert(const_cast<QPort *>(port));
}

void QTrigger::removePort(const QPort *port)
{
    d_ptr->ports->remove(const_cast<QPort *>(port));
}

#include "moc_qtrigger.cpp"

QT_END_NAMESPACE_QTUML

