/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlcallevent.h"
#include "qumlcallevent_p.h"

#include <QtUml/QUmlOperation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlCallEventPrivate::QUmlCallEventPrivate() :
    operation(0)
{
}

QUmlCallEventPrivate::~QUmlCallEventPrivate()
{
}

/*!
    \class QUmlCallEvent

    \inmodule QtUml

    \brief A call event models the receipt by an object of a message invoking a call of an operation.
 */

QUmlCallEvent::QUmlCallEvent(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlMessageEvent(*new QUmlCallEventPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlCallEvent::QUmlCallEvent(QUmlCallEventPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlMessageEvent(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlCallEvent::~QUmlCallEvent()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlCallEvent
// ---------------------------------------------------------------

/*!
    Designates the operation whose invocation raised the call event.
 */
QUmlOperation *QUmlCallEvent::operation() const
{
    // This is a read-write association end

    Q_D(const QUmlCallEvent);
    return d->operation;
}

void QUmlCallEvent::setOperation(QUmlOperation *operation)
{
    // This is a read-write association end

    Q_D(QUmlCallEvent);
    if (d->operation != operation) {
        d->operation = operation;
    }
}

void QUmlCallEvent::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallEvent")][QString::fromLatin1("operation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallEvent")][QString::fromLatin1("operation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallEvent")][QString::fromLatin1("operation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the operation whose invocation raised the call event.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallEvent")][QString::fromLatin1("operation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallEvent")][QString::fromLatin1("operation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallEvent")][QString::fromLatin1("operation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlMessageEvent::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcallevent.cpp"

