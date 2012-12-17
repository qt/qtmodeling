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

/*!
    \class QTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */

QTrigger::QTrigger(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QTriggerPrivate, parent, wrapper)
{
}

QTrigger::QTrigger(QTriggerPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
}

QTrigger::~QTrigger()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTrigger
// ---------------------------------------------------------------

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
const QSet<QPort *> *QTrigger::ports() const
{
    // This is a read-write association end

    Q_D(const QTrigger);
    return d->ports;
}

void QTrigger::addPort(QPort *port)
{
    // This is a read-write association end

    Q_D(QTrigger);
    if (!d->ports->contains(port)) {
        d->ports->insert(port);
    }
}

void QTrigger::removePort(QPort *port)
{
    // This is a read-write association end

    Q_D(QTrigger);
    if (d->ports->contains(port)) {
        d->ports->remove(port);
    }
}

/*!
    The event that causes the trigger.
 */
QEvent *QTrigger::event() const
{
    // This is a read-write association end

    Q_D(const QTrigger);
    return d->event;
}

void QTrigger::setEvent(QEvent *event)
{
    // This is a read-write association end

    Q_D(QTrigger);
    if (d->event != event) {
        d->event = event;
    }
}

void QTrigger::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QTrigger) *>("QT_PREPEND_NAMESPACE_QTUML(QTrigger) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QTrigger) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QTrigger) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QTrigger) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QTrigger) *> *");
    qRegisterMetaType<QTrigger *>("QTrigger *");
    qRegisterMetaType<const QSet<QTrigger *> *>("const QSet<QTrigger *> *");
    qRegisterMetaType<const QList<QTrigger *> *>("const QList<QTrigger *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QEvent) *>("QT_PREPEND_NAMESPACE_QTUML(QEvent) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QEvent) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QEvent) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QEvent) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QEvent) *> *");
    qRegisterMetaType<QEvent *>("QEvent *");
    qRegisterMetaType<const QSet<QEvent *> *>("const QSet<QEvent *> *");
    qRegisterMetaType<const QList<QEvent *> *>("const QList<QEvent *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QPort) *>("QT_PREPEND_NAMESPACE_QTUML(QPort) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *");
    qRegisterMetaType<QPort *>("QPort *");
    qRegisterMetaType<const QSet<QPort *> *>("const QSet<QPort *> *");
    qRegisterMetaType<const QList<QPort *> *>("const QList<QPort *> *");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qtrigger.cpp"

QT_END_NAMESPACE_QTUML

