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

#include "qumlmessageend.h"
#include "qumlmessageend_p.h"

#include <QtUml/QUmlMessage>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlMessageEndPrivate::QUmlMessageEndPrivate() :
    message(0)
{
}

QUmlMessageEndPrivate::~QUmlMessageEndPrivate()
{
}

/*!
    \class QUmlMessageEnd

    \inmodule QtUml

    \brief MessageEnd is an abstract specialization of NamedElement that represents what can occur at the end of a message.
 */

QUmlMessageEnd::QUmlMessageEnd(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlMessageEndPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlMessageEnd::QUmlMessageEnd(QUmlMessageEndPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlMessageEnd::~QUmlMessageEnd()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlMessageEnd
// ---------------------------------------------------------------

/*!
    References a Message.
 */
QUmlMessage *QUmlMessageEnd::message() const
{
    // This is a read-write association end

    Q_D(const QUmlMessageEnd);
    return d->message;
}

void QUmlMessageEnd::setMessage(QUmlMessage *message)
{
    // This is a read-write association end

    Q_D(QUmlMessageEnd);
    if (d->message != message) {
        d->message = message;
    }
}

void QUmlMessageEnd::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMessageEnd")][QString::fromLatin1("message")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMessageEnd")][QString::fromLatin1("message")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMessageEnd")][QString::fromLatin1("message")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a Message.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMessageEnd")][QString::fromLatin1("message")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMessageEnd")][QString::fromLatin1("message")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMessageEnd")][QString::fromLatin1("message")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlmessageend.cpp"

