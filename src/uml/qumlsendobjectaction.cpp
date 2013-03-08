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

#include "qumlsendobjectaction.h"
#include "qumlsendobjectaction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlSendObjectActionPrivate::QUmlSendObjectActionPrivate() :
    request(0),
    target(0)
{
}

QUmlSendObjectActionPrivate::~QUmlSendObjectActionPrivate()
{
}

/*!
    \class QUmlSendObjectAction

    \inmodule QtUml

    \brief A send object action is an action that transmits an object to the target object, where it may invoke behavior such as the firing of state machine transitions or the execution of an activity. The value of the object is available to the execution of invoked behaviors. The requestor continues execution immediately. Any reply message is ignored and is not transmitted to the requestor.
 */

QUmlSendObjectAction::QUmlSendObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(*new QUmlSendObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlSendObjectAction::QUmlSendObjectAction(QUmlSendObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlSendObjectAction::~QUmlSendObjectAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlSendObjectAction
// ---------------------------------------------------------------

/*!
    The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.
 */
QUmlInputPin *QUmlSendObjectAction::request() const
{
    // This is a read-write association end

    Q_D(const QUmlSendObjectAction);
    return d->request;
}

void QUmlSendObjectAction::setRequest(QUmlInputPin *request)
{
    // This is a read-write association end

    Q_D(QUmlSendObjectAction);
    if (d->request != request) {
        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlInvocationAction *>(this))->removeArgument(qwrappedobject_cast<QUmlInputPin *>(d->request));

        if (d->request)
            qTopLevelWrapper(d->request)->setParent(0);
        d->request = request;
        qTopLevelWrapper(request)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        if (request) {
            (qwrappedobject_cast<QUmlInvocationAction *>(this))->addArgument(qwrappedobject_cast<QUmlInputPin *>(request));
        }
    }
}

/*!
    The target object to which the object is sent.
 */
QUmlInputPin *QUmlSendObjectAction::target() const
{
    // This is a read-write association end

    Q_D(const QUmlSendObjectAction);
    return d->target;
}

void QUmlSendObjectAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    Q_D(QUmlSendObjectAction);
    if (d->target != target) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->target));

        d->target = target;

        // Adjust subsetted property(ies)
        if (target) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(target));
        }
    }
}

void QUmlSendObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("request")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("request")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("request")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("request")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlInvocationAction::arguments");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("request")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("request")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The target object to which the object is sent.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSendObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlInvocationAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlsendobjectaction.cpp"

