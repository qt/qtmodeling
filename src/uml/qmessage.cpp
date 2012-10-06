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

QT_BEGIN_NAMESPACE_QTUML

class QMessagePrivate
{
public:
    explicit QMessagePrivate();
    virtual ~QMessagePrivate();

    QtUml::MessageSort messageSort;
    QList<QValueSpecification *> *arguments;
    QConnector *connector;
    QInteraction *interaction;
    QMessageEnd *receiveEvent;
    QMessageEnd *sendEvent;
    QNamedElement *signature;
};

QMessagePrivate::QMessagePrivate() :
    messageSort(QtUml::MessageSynchCall),
    arguments(new QList<QValueSpecification *>)
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

QMessage::QMessage(QObject *parent)
    : QObject(parent), d_ptr(new QMessagePrivate)
{
}

QMessage::~QMessage()
{
    delete d_ptr;
}

/*!
    The derived kind of the Message (complete, lost, found or unknown)
 */
QtUml::MessageKind QMessage::messageKind() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    The sort of communication reflected by the Message
 */
QtUml::MessageSort QMessage::messageSort() const
{
    return d_ptr->messageSort;
}

void QMessage::setMessageSort(QtUml::MessageSort messageSort)
{
    d_ptr->messageSort = messageSort;
}

/*!
    The arguments of the Message
 */
const QList<QValueSpecification *> *QMessage::arguments() const
{
    return d_ptr->arguments;
}

void QMessage::addArgument(const QValueSpecification *argument)
{
    d_ptr->arguments->append(const_cast<QValueSpecification *>(argument));
}

void QMessage::removeArgument(const QValueSpecification *argument)
{
    d_ptr->arguments->removeAll(const_cast<QValueSpecification *>(argument));
}

/*!
    The Connector on which this Message is sent.
 */
QConnector *QMessage::connector() const
{
    return d_ptr->connector;
}

void QMessage::setConnector(const QConnector *connector)
{
    d_ptr->connector = const_cast<QConnector *>(connector);
}

/*!
    The enclosing Interaction owning the Message
 */
QInteraction *QMessage::interaction() const
{
    return d_ptr->interaction;
}

void QMessage::setInteraction(const QInteraction *interaction)
{
    d_ptr->interaction = const_cast<QInteraction *>(interaction);
}

/*!
    References the Receiving of the Message
 */
QMessageEnd *QMessage::receiveEvent() const
{
    return d_ptr->receiveEvent;
}

void QMessage::setReceiveEvent(const QMessageEnd *receiveEvent)
{
    d_ptr->receiveEvent = const_cast<QMessageEnd *>(receiveEvent);
}

/*!
    References the Sending of the Message.
 */
QMessageEnd *QMessage::sendEvent() const
{
    return d_ptr->sendEvent;
}

void QMessage::setSendEvent(const QMessageEnd *sendEvent)
{
    d_ptr->sendEvent = const_cast<QMessageEnd *>(sendEvent);
}

/*!
    The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 */
QNamedElement *QMessage::signature() const
{
    return d_ptr->signature;
}

void QMessage::setSignature(const QNamedElement *signature)
{
    d_ptr->signature = const_cast<QNamedElement *>(signature);
}

#include "moc_qmessage.cpp"

QT_END_NAMESPACE_QTUML

