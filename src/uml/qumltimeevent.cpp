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

#include "qumltimeevent.h"
#include "qumltimeevent_p.h"

#include <QtUml/QUmlTimeExpression>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTimeEventPrivate::QUmlTimeEventPrivate() :
    isRelative(false),
    when(0)
{
}

QUmlTimeEventPrivate::~QUmlTimeEventPrivate()
{
}

/*!
    \class QUmlTimeEvent

    \inmodule QtUml

    \brief A time event can be defined relative to entering the current state of the executing state machine.A time event specifies a point in time. At the specified time, the event occurs.
 */

QUmlTimeEvent::QUmlTimeEvent(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlEvent(*new QUmlTimeEventPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTimeEvent::QUmlTimeEvent(QUmlTimeEventPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlEvent(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTimeEvent::~QUmlTimeEvent()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlTimeEvent
// ---------------------------------------------------------------

/*!
    Specifies whether it is relative or absolute time.
 */
bool QUmlTimeEvent::isRelative() const
{
    // This is a read-write attribute

    Q_D(const QUmlTimeEvent);
    return d->isRelative;
}

void QUmlTimeEvent::setRelative(bool isRelative)
{
    // This is a read-write attribute

    Q_D(QUmlTimeEvent);
    if (d->isRelative != isRelative) {
        d->isRelative = isRelative;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isRelative");
}

void QUmlTimeEvent::unsetRelative()
{
    setRelative(false);
    Q_D(QUmlTimeEvent);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isRelative"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTimeEvent
// ---------------------------------------------------------------

/*!
    Specifies the corresponding time deadline.
 */
QUmlTimeExpression *QUmlTimeEvent::when() const
{
    // This is a read-write association end

    Q_D(const QUmlTimeEvent);
    return d->when;
}

void QUmlTimeEvent::setWhen(QUmlTimeExpression *when)
{
    // This is a read-write association end

    Q_D(QUmlTimeEvent);
    if (d->when != when) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->when));

        d->when = when;

        // Adjust subsetted property(ies)
        if (when) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(when));
        }
    }
}

void QUmlTimeEvent::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("isRelative")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("isRelative")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("isRelative")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether it is relative or absolute time.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("isRelative")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("isRelative")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("isRelative")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("when")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("when")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("when")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the corresponding time deadline.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("when")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("when")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeEvent")][QString::fromLatin1("when")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlEvent::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltimeevent.cpp"

