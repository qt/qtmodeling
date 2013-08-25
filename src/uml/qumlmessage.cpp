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
#include "qumlmessage_p.h"

#include <QtUml/QUmlConnector>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlMessageEnd>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlMessagePrivate::QUmlMessagePrivate() :
    connector(0),
    interaction(0),
    messageKind(QtUml::MessageUnknown),
    messageSort(QtUml::MessageSynchCall),
    receiveEvent(0),
    sendEvent(0),
    signature(0)
{
}

/*!
    \class QUmlMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

QUmlMessage::QUmlMessage(bool create_d_ptr) :
    QUmlNamedElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlMessagePrivate);
}

// Owned attributes

/*!
    The arguments of the Message
 */
QList<QUmlValueSpecification *> QUmlMessage::argument() const
{
    return QList<QUmlValueSpecification *>();
}

void QUmlMessage::addArgument(QList<QUmlValueSpecification *> argument)
{
    Q_UNUSED(argument);
}

void QUmlMessage::removeArgument(QList<QUmlValueSpecification *> argument)
{
    Q_UNUSED(argument);
}

/*!
    The Connector on which this Message is sent.
 */
QUmlConnector *QUmlMessage::connector() const
{
    return 0;
}

void QUmlMessage::setConnector(QUmlConnector *connector)
{
    Q_UNUSED(connector);
}

/*!
    The enclosing Interaction owning the Message
 */
QUmlInteraction *QUmlMessage::interaction() const
{
    return 0;
}

void QUmlMessage::setInteraction(QUmlInteraction *interaction)
{
    Q_UNUSED(interaction);
}

/*!
    The derived kind of the Message (complete, lost, found or unknown)
 */
QtUml::MessageKind QUmlMessage::messageKind() const
{
    return QtUml::MessageKind();
}

/*!
    The sort of communication reflected by the Message
 */
QtUml::MessageSort QUmlMessage::messageSort() const
{
    return QtUml::MessageSort();
}

void QUmlMessage::setMessageSort(QtUml::MessageSort messageSort)
{
    Q_UNUSED(messageSort);
}

/*!
    References the Receiving of the Message
 */
QUmlMessageEnd *QUmlMessage::receiveEvent() const
{
    return 0;
}

void QUmlMessage::setReceiveEvent(QUmlMessageEnd *receiveEvent)
{
    Q_UNUSED(receiveEvent);
}

/*!
    References the Sending of the Message.
 */
QUmlMessageEnd *QUmlMessage::sendEvent() const
{
    return 0;
}

void QUmlMessage::setSendEvent(QUmlMessageEnd *sendEvent)
{
    Q_UNUSED(sendEvent);
}

/*!
    The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 */
QUmlNamedElement *QUmlMessage::signature() const
{
    return 0;
}

void QUmlMessage::setSignature(QUmlNamedElement *signature)
{
    Q_UNUSED(signature);
}

QT_END_NAMESPACE

