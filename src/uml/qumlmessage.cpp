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
#include "qumlmessage.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlConnector>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlMessageEnd>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

QUmlMessage::QUmlMessage() :
    _connector(0),
    _interaction(0),
    _messageSort(QtUml::MessageSortSynchCall),
    _receiveEvent(0),
    _sendEvent(0),
    _signature(0)
{
    d_ptr->object.setProperty("argument", QVariant::fromValue(&_argument));
    d_ptr->object.setProperty("connector", QVariant::fromValue((QUmlConnector *)(0)));
    d_ptr->object.setProperty("interaction", QVariant::fromValue((QUmlInteraction *)(0)));
    d_ptr->object.setProperty("messageKind", QVariant::fromValue(QtUml::MessageKindUnknown));
    d_ptr->object.setProperty("messageSort", QVariant::fromValue(QtUml::MessageSortSynchCall));
    d_ptr->object.setProperty("receiveEvent", QVariant::fromValue((QUmlMessageEnd *)(0)));
    d_ptr->object.setProperty("sendEvent", QVariant::fromValue((QUmlMessageEnd *)(0)));
    d_ptr->object.setProperty("signature", QVariant::fromValue((QUmlNamedElement *)(0)));
}

// OWNED ATTRIBUTES

/*!
    The arguments of the Message
 */
const QList<QUmlValueSpecification *> QUmlMessage::argument() const
{
    // This is a read-write association end

    return _argument;
}

void QUmlMessage::addArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (!_argument.contains(argument)) {
        _argument.append(argument);

        // Adjust subsetted properties
        addOwnedElement(argument);
    }
}

void QUmlMessage::removeArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (_argument.contains(argument)) {
        _argument.removeAll(argument);

        // Adjust subsetted properties
        removeOwnedElement(argument);
    }
}

/*!
    The Connector on which this Message is sent.
 */
QUmlConnector *QUmlMessage::connector() const
{
    // This is a read-write association end

    return _connector;
}

void QUmlMessage::setConnector(QUmlConnector *connector)
{
    // This is a read-write association end

    if (_connector != connector) {
        _connector = connector;
    }
}

/*!
    The enclosing Interaction owning the Message
 */
QUmlInteraction *QUmlMessage::interaction() const
{
    // This is a read-write association end

    return _interaction;
}

void QUmlMessage::setInteraction(QUmlInteraction *interaction)
{
    // This is a read-write association end

    if (_interaction != interaction) {
        // Adjust subsetted properties

        _interaction = interaction;

        // Adjust subsetted properties
        setNamespace(interaction);
    }
}

/*!
    The derived kind of the Message (complete, lost, found or unknown)
 */
QtUml::MessageKind QUmlMessage::messageKind() const
{
    // This is a read-only derived property

    qWarning("QUmlMessage::messageKind(): to be implemented (this is a derived property)");

    return QtUml::MessageKind();
}

void QUmlMessage::setMessageKind(QtUml::MessageKind messageKind)
{
    // This is a read-only derived property

    qWarning("QUmlMessage::messageKind(): to be implemented (this is a derived property)");
    Q_UNUSED(messageKind);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The sort of communication reflected by the Message
 */
QtUml::MessageSort QUmlMessage::messageSort() const
{
    // This is a read-write property

    return _messageSort;
}

void QUmlMessage::setMessageSort(QtUml::MessageSort messageSort)
{
    // This is a read-write property

    if (_messageSort != messageSort) {
        _messageSort = messageSort;
    }
}

/*!
    References the Receiving of the Message
 */
QUmlMessageEnd *QUmlMessage::receiveEvent() const
{
    // This is a read-write association end

    return _receiveEvent;
}

void QUmlMessage::setReceiveEvent(QUmlMessageEnd *receiveEvent)
{
    // This is a read-write association end

    if (_receiveEvent != receiveEvent) {
        _receiveEvent = receiveEvent;
    }
}

/*!
    References the Sending of the Message.
 */
QUmlMessageEnd *QUmlMessage::sendEvent() const
{
    // This is a read-write association end

    return _sendEvent;
}

void QUmlMessage::setSendEvent(QUmlMessageEnd *sendEvent)
{
    // This is a read-write association end

    if (_sendEvent != sendEvent) {
        _sendEvent = sendEvent;
    }
}

/*!
    The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 */
QUmlNamedElement *QUmlMessage::signature() const
{
    // This is a read-write association end

    return _signature;
}

void QUmlMessage::setSignature(QUmlNamedElement *signature)
{
    // This is a read-write association end

    if (_signature != signature) {
        _signature = signature;
    }
}

QT_END_NAMESPACE

