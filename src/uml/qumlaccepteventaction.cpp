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

#include "qumlaccepteventaction.h"
#include "qumlaccepteventaction_p.h"

#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlTrigger>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlAcceptEventActionPrivate::QUmlAcceptEventActionPrivate() :
    isUnmarshall(false)
{
}

QUmlAcceptEventActionPrivate::~QUmlAcceptEventActionPrivate()
{
}

/*!
    \class QUmlAcceptEventAction

    \inmodule QtUml

    \brief A accept event action is an action that waits for the occurrence of an event meeting specified conditions.
 */

QUmlAcceptEventAction::QUmlAcceptEventAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlAcceptEventActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlAcceptEventAction::QUmlAcceptEventAction(QUmlAcceptEventActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlAcceptEventAction::~QUmlAcceptEventAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlAcceptEventAction
// ---------------------------------------------------------------

/*!
    Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.
 */
bool QUmlAcceptEventAction::isUnmarshall() const
{
    // This is a read-write attribute

    Q_D(const QUmlAcceptEventAction);
    return d->isUnmarshall;
}

void QUmlAcceptEventAction::setUnmarshall(bool isUnmarshall)
{
    // This is a read-write attribute

    Q_D(QUmlAcceptEventAction);
    if (d->isUnmarshall != isUnmarshall) {
        d->isUnmarshall = isUnmarshall;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isUnmarshall");
}

void QUmlAcceptEventAction::unsetUnmarshall()
{
    setUnmarshall(false);
    Q_D(QUmlAcceptEventAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnmarshall"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlAcceptEventAction
// ---------------------------------------------------------------

/*!
    The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.
 */
QSet<QUmlTrigger *> QUmlAcceptEventAction::triggers() const
{
    // This is a read-write association end

    Q_D(const QUmlAcceptEventAction);
    return d->triggers;
}

void QUmlAcceptEventAction::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QUmlAcceptEventAction);
    if (!d->triggers.contains(trigger)) {
        d->triggers.insert(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(trigger));
    }
}

void QUmlAcceptEventAction::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QUmlAcceptEventAction);
    if (d->triggers.contains(trigger)) {
        d->triggers.remove(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(trigger));
    }
}

/*!
    Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.
 */
QSet<QUmlOutputPin *> QUmlAcceptEventAction::results() const
{
    // This is a read-write association end

    Q_D(const QUmlAcceptEventAction);
    return d->results;
}

void QUmlAcceptEventAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlAcceptEventAction);
    if (!d->results.contains(result)) {
        d->results.insert(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

void QUmlAcceptEventAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlAcceptEventAction);
    if (d->results.contains(result)) {
        d->results.remove(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

void QUmlAcceptEventAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlaccepteventaction.cpp"

