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

QT_BEGIN_NAMESPACE_QTUML

QMessagePrivate::QMessagePrivate() :
    messageSort(QtUml::MessageSynchCall),
    signature(0),
    arguments(new QList<QValueSpecification *>),
    receiveEvent(0),
    interaction(0),
    sendEvent(0),
    connector(0)
{
}

QMessagePrivate::~QMessagePrivate()
{
    delete arguments;
}

/*!
    \class QMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

QMessage::QMessage(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QMessagePrivate, parent, wrapper)
{
}

QMessage::QMessage(QMessagePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
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
const QList<QValueSpecification *> *QMessage::arguments() const
{
    // This is a read-write association end

    Q_D(const QMessage);
    return d->arguments;
}

void QMessage::addArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (!d->arguments->contains(argument)) {
        d->arguments->append(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(argument));
    }
}

void QMessage::removeArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QMessage);
    if (d->arguments->contains(argument)) {
        d->arguments->removeAll(argument);

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
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QMessage) *>("QT_PREPEND_NAMESPACE_QTUML(QMessage) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QMessage) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QMessage) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QMessage) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QMessage) *> *");
    qRegisterMetaType<QMessage *>("QMessage *");
    qRegisterMetaType<const QSet<QMessage *> *>("const QSet<QMessage *> *");
    qRegisterMetaType<const QList<QMessage *> *>("const QList<QMessage *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QMessageEnd) *>("QT_PREPEND_NAMESPACE_QTUML(QMessageEnd) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QMessageEnd) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QMessageEnd) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QMessageEnd) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QMessageEnd) *> *");
    qRegisterMetaType<QMessageEnd *>("QMessageEnd *");
    qRegisterMetaType<const QSet<QMessageEnd *> *>("const QSet<QMessageEnd *> *");
    qRegisterMetaType<const QList<QMessageEnd *> *>("const QList<QMessageEnd *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *>("QT_PREPEND_NAMESPACE_QTUML(QInteraction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *");
    qRegisterMetaType<QInteraction *>("QInteraction *");
    qRegisterMetaType<const QSet<QInteraction *> *>("const QSet<QInteraction *> *");
    qRegisterMetaType<const QList<QInteraction *> *>("const QList<QInteraction *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *>("QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *");
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<const QSet<QValueSpecification *> *>("const QSet<QValueSpecification *> *");
    qRegisterMetaType<const QList<QValueSpecification *> *>("const QList<QValueSpecification *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QConnector) *>("QT_PREPEND_NAMESPACE_QTUML(QConnector) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QConnector) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QConnector) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QConnector) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QConnector) *> *");
    qRegisterMetaType<QConnector *>("QConnector *");
    qRegisterMetaType<const QSet<QConnector *> *>("const QSet<QConnector *> *");
    qRegisterMetaType<const QList<QConnector *> *>("const QList<QConnector *> *");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qmessage.cpp"

QT_END_NAMESPACE_QTUML

