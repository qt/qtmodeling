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
#include "qelement_p.h"
#include "qnamedelement_p.h"

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

void QMessagePrivate::setMessageSort(QtUml::MessageSort messageSort)
{
    this->messageSort = messageSort;
}

void QMessagePrivate::setSignature(const QNamedElement *signature)
{
    this->signature = const_cast<QNamedElement *>(signature);
}

void QMessagePrivate::addArgument(const QValueSpecification *argument)
{
    this->arguments->append(const_cast<QValueSpecification *>(argument));

    // Adjust subsetted property(ies)
    addOwnedElement(argument);
}

void QMessagePrivate::removeArgument(const QValueSpecification *argument)
{
    this->arguments->removeAll(const_cast<QValueSpecification *>(argument));

    // Adjust subsetted property(ies)
    removeOwnedElement(argument);
}

void QMessagePrivate::setReceiveEvent(const QMessageEnd *receiveEvent)
{
    this->receiveEvent = const_cast<QMessageEnd *>(receiveEvent);
}

void QMessagePrivate::setInteraction(const QInteraction *interaction)
{
    this->interaction = const_cast<QInteraction *>(interaction);

    // Adjust subsetted property(ies)
    setNamespace_(interaction);
}

void QMessagePrivate::setSendEvent(const QMessageEnd *sendEvent)
{
    this->sendEvent = const_cast<QMessageEnd *>(sendEvent);
}

void QMessagePrivate::setConnector(const QConnector *connector)
{
    this->connector = const_cast<QConnector *>(connector);
}

/*!
    \class QMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

QMessage::QMessage(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QMessagePrivate;
}

QMessage::QMessage(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QMessagePrivate;
}

QMessage::~QMessage()
{
}

/*!
    The sort of communication reflected by the Message
 */
QtUml::MessageSort QMessage::messageSort() const
{
    Q_D(const QMessage);
    return d->messageSort;
}

void QMessage::setMessageSort(QtUml::MessageSort messageSort)
{
    Q_D(QMessage);
    d->setMessageSort(messageSort);
}

/*!
    The derived kind of the Message (complete, lost, found or unknown)
 */
QtUml::MessageKind QMessage::messageKind() const
{
    qWarning("QMessage::messageKind: to be implemented (this is a derived attribute)");
}

/*!
    The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 */
QNamedElement *QMessage::signature() const
{
    Q_D(const QMessage);
    return d->signature;
}

void QMessage::setSignature(const QNamedElement *signature)
{
    Q_D(QMessage);
    d->setSignature(const_cast<QNamedElement *>(signature));
}

/*!
    The arguments of the Message
 */
const QList<QValueSpecification *> *QMessage::arguments() const
{
    Q_D(const QMessage);
    return d->arguments;
}

void QMessage::addArgument(const QValueSpecification *argument)
{
    Q_D(QMessage);
    d->addArgument(const_cast<QValueSpecification *>(argument));
}

void QMessage::removeArgument(const QValueSpecification *argument)
{
    Q_D(QMessage);
    d->removeArgument(const_cast<QValueSpecification *>(argument));
}

/*!
    References the Receiving of the Message
 */
QMessageEnd *QMessage::receiveEvent() const
{
    Q_D(const QMessage);
    return d->receiveEvent;
}

void QMessage::setReceiveEvent(const QMessageEnd *receiveEvent)
{
    Q_D(QMessage);
    d->setReceiveEvent(const_cast<QMessageEnd *>(receiveEvent));
}

/*!
    The enclosing Interaction owning the Message
 */
QInteraction *QMessage::interaction() const
{
    Q_D(const QMessage);
    return d->interaction;
}

void QMessage::setInteraction(const QInteraction *interaction)
{
    Q_D(QMessage);
    d->setInteraction(const_cast<QInteraction *>(interaction));
}

/*!
    References the Sending of the Message.
 */
QMessageEnd *QMessage::sendEvent() const
{
    Q_D(const QMessage);
    return d->sendEvent;
}

void QMessage::setSendEvent(const QMessageEnd *sendEvent)
{
    Q_D(QMessage);
    d->setSendEvent(const_cast<QMessageEnd *>(sendEvent));
}

/*!
    The Connector on which this Message is sent.
 */
QConnector *QMessage::connector() const
{
    Q_D(const QMessage);
    return d->connector;
}

void QMessage::setConnector(const QConnector *connector)
{
    Q_D(QMessage);
    d->setConnector(const_cast<QConnector *>(connector));
}

#include "moc_qmessage.cpp"

QT_END_NAMESPACE_QTUML

