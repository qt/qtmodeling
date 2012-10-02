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
//#include "qmessage_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

QMessage::QMessage(QObject *parent)
    : QObject(parent)
{
}

QMessage::~QMessage()
{
}

/*!
    The sort of communication reflected by the Message
 */
QtUml::MessageSort QMessage::messageSort() const
{
}

void QMessage::setMessageSort(QtUml::MessageSort messageSort)
{
}

/*!
    The arguments of the Message
 */
QList<QValueSpecification *> *QMessage::argument()
{
}

/*!
    The Connector on which this Message is sent.
 */
QConnector *QMessage::connector() const
{
}

void QMessage::setConnector(QConnector *connector)
{
}

/*!
    The enclosing Interaction owning the Message
 */
QInteraction *QMessage::interaction() const
{
}

void QMessage::setInteraction(QInteraction *interaction)
{
}

/*!
    References the Receiving of the Message
 */
QMessageEnd *QMessage::receiveEvent() const
{
}

void QMessage::setReceiveEvent(QMessageEnd *receiveEvent)
{
}

/*!
    References the Sending of the Message.
 */
QMessageEnd *QMessage::sendEvent() const
{
}

void QMessage::setSendEvent(QMessageEnd *sendEvent)
{
}

/*!
    The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 */
QNamedElement *QMessage::signature() const
{
}

void QMessage::setSignature(QNamedElement *signature)
{
}

/*!
    Missing derivation for Message::/messageKind : MessageKind
 */
QtUml::MessageKind QMessage::messageKind() const
{
}

#include "moc_qmessage.cpp"

QT_END_NAMESPACE_QTUML

