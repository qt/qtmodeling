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

#include "qmessage.h"
#include "qmessage_p.h"

#include <QtUml/QMessageEnd>
#include <QtUml/QInteraction>
#include <QtUml/QValueSpecification>
#include <QtUml/QConnector>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QMessagePrivate::QMessagePrivate() :
    messageSort(QtUml::MessageSynchCall),
    signature(0),
    receiveEvent(0),
    interaction(0),
    sendEvent(0),
    connector(0)
{
}

QMessagePrivate::~QMessagePrivate()
{
}

/*!
    \class QMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

QMessage::QMessage(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QMessagePrivate, parent, wrapper)
{
    setPropertyData();
}

QMessage::QMessage(QMessagePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
    setPropertyData();
}

QMessage::~QMessage()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMessage
// ---------------------------------------------------------------

/*!
    The sort of communication reflected by the Message
 */
QtUml::MessageSort QMessage::messageSort() const
{
    // This is a read-write attribute

    Q_D(const QMessage);
    return d->messageSort;
}

void QMessage::setMessageSort(QtUml::MessageSort messageSort)
{
    // This is a read-write attribute

    Q_D(QMessage);
    if (d->messageSort != messageSort) {
        d->messageSort = messageSort;
    }
}

void QMessage::unsetMessageSort()
{
    setMessageSort(QtUml::MessageSynchCall);
}

/*!
    The derived kind of the Message (complete, lost, found or unknown)
 */
QtUml::MessageKind QMessage::messageKind() const
{
    // This is a read-only derived attribute

    qWarning("QMessage::messageKind: to be implemented (this is a derived attribute)");

    return QtUml::MessageKind(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMessage
// ---------------------------------------------------------------

/*!
    The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 */
QNamedElement *QMessage::signature() const
{
    // This is a read-write association end

    Q_D(const QMessage);
    return d->signature;
}

void QMessage::setSignature(QNamedElement *signature)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (d->signature != signature) {
        d->signature = signature;
    }
}

/*!
    The arguments of the Message
 */
QList<QValueSpecification *> QMessage::arguments() const
{
    // This is a read-write association end

    Q_D(const QMessage);
    return d->arguments;
}

void QMessage::addArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (!d->arguments.contains(argument)) {
        d->arguments.append(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(argument));
    }
}

void QMessage::removeArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (d->arguments.contains(argument)) {
        d->arguments.removeAll(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(argument));
    }
}

/*!
    References the Receiving of the Message
 */
QMessageEnd *QMessage::receiveEvent() const
{
    // This is a read-write association end

    Q_D(const QMessage);
    return d->receiveEvent;
}

void QMessage::setReceiveEvent(QMessageEnd *receiveEvent)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (d->receiveEvent != receiveEvent) {
        d->receiveEvent = receiveEvent;
    }
}

/*!
    The enclosing Interaction owning the Message
 */
QInteraction *QMessage::interaction() const
{
    // This is a read-write association end

    Q_D(const QMessage);
    return d->interaction;
}

void QMessage::setInteraction(QInteraction *interaction)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (d->interaction != interaction) {
        // Adjust opposite property
        if (d->interaction)
            d->interaction->removeMessage(this);

        d->interaction = interaction;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(interaction));

        // Adjust opposite property
        if (interaction)
            interaction->addMessage(this);
    }
}

/*!
    References the Sending of the Message.
 */
QMessageEnd *QMessage::sendEvent() const
{
    // This is a read-write association end

    Q_D(const QMessage);
    return d->sendEvent;
}

void QMessage::setSendEvent(QMessageEnd *sendEvent)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (d->sendEvent != sendEvent) {
        d->sendEvent = sendEvent;
    }
}

/*!
    The Connector on which this Message is sent.
 */
QConnector *QMessage::connector() const
{
    // This is a read-write association end

    Q_D(const QMessage);
    return d->connector;
}

void QMessage::setConnector(QConnector *connector)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (d->connector != connector) {
        d->connector = connector;
    }
}

void QMessage::registerMetaTypes() const
{
    qRegisterMetaType<QMessageEnd *>("QMessageEnd *");
    qRegisterMetaType<QSet<QMessageEnd *>>("QSet<QMessageEnd *>");
    qRegisterMetaType<QList<QMessageEnd *>>("QList<QMessageEnd *>");

    qRegisterMetaType<QInteraction *>("QInteraction *");
    qRegisterMetaType<QSet<QInteraction *>>("QSet<QInteraction *>");
    qRegisterMetaType<QList<QInteraction *>>("QList<QInteraction *>");

    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");

    qRegisterMetaType<QConnector *>("QConnector *");
    qRegisterMetaType<QSet<QConnector *>>("QSet<QConnector *>");
    qRegisterMetaType<QList<QConnector *>>("QList<QConnector *>");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QMessage::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("messageSort")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("messageSort")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The sort of communication reflected by the Message");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("messageKind")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("messageKind")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The derived kind of the Message (complete, lost, found or unknown)");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("signature")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("signature")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The signature of the Message is the specification of its content. It refers either an Operation or a Signal.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("arguments")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("arguments")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The arguments of the Message");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("receiveEvent")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("receiveEvent")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Receiving of the Message");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("interaction")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("interaction")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The enclosing Interaction owning the Message");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("sendEvent")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("sendEvent")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Sending of the Message.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("connector")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMessage")][QString::fromLatin1("connector")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Connector on which this Message is sent.");

    QNamedElement::setPropertyData();
}

#include "moc_qmessage.cpp"

QT_END_NAMESPACE_QTUML

