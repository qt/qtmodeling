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

#include "qtimeevent.h"
#include "qtimeevent_p.h"
#include "qelement_p.h"

#include <QtUml/QTimeExpression>

QT_BEGIN_NAMESPACE_QTUML

QTimeEventPrivate::QTimeEventPrivate() :
    isRelative(false),
    when(0)
{
}

QTimeEventPrivate::~QTimeEventPrivate()
{
}

void QTimeEventPrivate::setRelative(bool isRelative)
{
    // This is a read-write attribute

    this->isRelative = isRelative;
}

void QTimeEventPrivate::setWhen(QTimeExpression *when)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeOwnedElement(this->when);

    this->when = when;

    // Adjust subsetted property(ies)
    addOwnedElement(when);
}

/*!
    \class QTimeEvent

    \inmodule QtUml

    \brief A time event can be defined relative to entering the current state of the executing state machine.A time event specifies a point in time. At the specified time, the event occurs.
 */

QTimeEvent::QTimeEvent(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QTimeEventPrivate;
}

QTimeEvent::QTimeEvent(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QTimeEventPrivate;
}

QTimeEvent::~QTimeEvent()
{
}

/*!
    Specifies whether it is relative or absolute time.
 */
bool QTimeEvent::isRelative() const
{
    // This is a read-write attribute

    QTUML_D(const QTimeEvent);
    return d->isRelative;
}

void QTimeEvent::setRelative(bool isRelative)
{
    // This is a read-write attribute

    QTUML_D(QTimeEvent);
    if (d->isRelative != isRelative) {
        d->setRelative(isRelative);
    }
}

/*!
    Specifies the corresponding time deadline.
 */
QTimeExpression *QTimeEvent::when() const
{
    // This is a read-write association end

    QTUML_D(const QTimeEvent);
    return d->when;
}

void QTimeEvent::setWhen(QTimeExpression *when)
{
    // This is a read-write association end

    QTUML_D(QTimeEvent);
    if (d->when != when) {
        d->setWhen(when);
    }
}

#include "moc_qtimeevent.cpp"

QT_END_NAMESPACE_QTUML

