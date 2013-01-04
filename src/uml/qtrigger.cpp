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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QTriggerPrivate::QTriggerPrivate() :
    event(0)
{
}

QTriggerPrivate::~QTriggerPrivate()
{
}

/*!
    \class QTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */

QTrigger::QTrigger(QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(*new QTriggerPrivate, wrapper, parent)
{
    setPropertyData();
}

QTrigger::QTrigger(QTriggerPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(dd, wrapper, parent)
{
    setPropertyData();
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
QSet<QPort *> QTrigger::ports() const
{
    // This is a read-write association end

    Q_D(const QTrigger);
    return d->ports;
}

void QTrigger::addPort(QPort *port)
{
    // This is a read-write association end

    Q_D(QTrigger);
    if (!d->ports.contains(port)) {
        d->ports.insert(port);
    }
}

void QTrigger::removePort(QPort *port)
{
    // This is a read-write association end

    Q_D(QTrigger);
    if (d->ports.contains(port)) {
        d->ports.remove(port);
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
    qRegisterMetaType<QEvent *>("QEvent *");
    qRegisterMetaType<QSet<QEvent *>>("QSet<QEvent *>");
    qRegisterMetaType<QList<QEvent *>>("QList<QEvent *>");

    qRegisterMetaType<QPort *>("QPort *");
    qRegisterMetaType<QSet<QPort *>>("QSet<QPort *>");
    qRegisterMetaType<QList<QPort *>>("QList<QPort *>");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QTrigger::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("ports")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("ports")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("ports")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A optional port of the receiver object on which the behavioral feature is invoked.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("ports")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("ports")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("ports")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("event")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("event")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("event")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The event that causes the trigger.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("event")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("event")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTrigger")][QString::fromLatin1("event")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QNamedElement::setPropertyData();
}

#include "moc_qtrigger.cpp"

QT_END_NAMESPACE_QTUML

