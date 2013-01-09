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

#include "qaccepteventaction.h"
#include "qaccepteventaction_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QTrigger>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QAcceptEventActionPrivate::QAcceptEventActionPrivate() :
    isUnmarshall(false)
{
}

QAcceptEventActionPrivate::~QAcceptEventActionPrivate()
{
}

/*!
    \class QAcceptEventAction

    \inmodule QtUml

    \brief A accept event action is an action that waits for the occurrence of an event meeting specified conditions.
 */

QAcceptEventAction::QAcceptEventAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QAcceptEventActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QAcceptEventAction::QAcceptEventAction(QAcceptEventActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QAcceptEventAction::~QAcceptEventAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QAcceptEventAction
// ---------------------------------------------------------------

/*!
    Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.
 */
bool QAcceptEventAction::isUnmarshall() const
{
    // This is a read-write attribute

    Q_D(const QAcceptEventAction);
    return d->isUnmarshall;
}

void QAcceptEventAction::setUnmarshall(bool isUnmarshall)
{
    // This is a read-write attribute

    Q_D(QAcceptEventAction);
    if (d->isUnmarshall != isUnmarshall) {
        d->isUnmarshall = isUnmarshall;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isUnmarshall");
}

void QAcceptEventAction::unsetUnmarshall()
{
    setUnmarshall(false);
    Q_D(QAcceptEventAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnmarshall"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QAcceptEventAction
// ---------------------------------------------------------------

/*!
    The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.
 */
QSet<QTrigger *> QAcceptEventAction::triggers() const
{
    // This is a read-write association end

    Q_D(const QAcceptEventAction);
    return d->triggers;
}

void QAcceptEventAction::addTrigger(QTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QAcceptEventAction);
    if (!d->triggers.contains(trigger)) {
        d->triggers.insert(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(trigger));
    }
}

void QAcceptEventAction::removeTrigger(QTrigger *trigger)
{
    // This is a read-write association end

    Q_D(QAcceptEventAction);
    if (d->triggers.contains(trigger)) {
        d->triggers.remove(trigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(trigger));
    }
}

/*!
    Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.
 */
QSet<QOutputPin *> QAcceptEventAction::results() const
{
    // This is a read-write association end

    Q_D(const QAcceptEventAction);
    return d->results;
}

void QAcceptEventAction::addResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QAcceptEventAction);
    if (!d->results.contains(result)) {
        d->results.insert(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
    }
}

void QAcceptEventAction::removeResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QAcceptEventAction);
    if (d->results.contains(result)) {
        d->results.remove(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(result));
    }
}

void QAcceptEventAction::registerMetaTypes() const
{
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    qRegisterMetaType<QTrigger *>("QTrigger *");
    qRegisterMetaType<QSet<QTrigger *>>("QSet<QTrigger *>");
    qRegisterMetaType<QList<QTrigger *>>("QList<QTrigger *>");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QAcceptEventAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("isUnmarshall")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("triggers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAcceptEventAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qaccepteventaction.cpp"

QT_END_NAMESPACE_QTUML

