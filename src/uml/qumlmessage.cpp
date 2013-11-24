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

#include "private/qumlmessageobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlMessageEnd>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

/*!
    Creates a new QUmlMessage. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlMessage::QUmlMessage(bool createQModelingObject) :
    _connector(0),
    _interaction(0),
    _messageSort(QtUml::MessageSortSynchCall),
    _receiveEvent(0),
    _sendEvent(0),
    _signature(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlMessageObject(this));
}

/*!
    Returns a deep-copied clone of the QUmlMessage.
*/
QModelingElement *QUmlMessage::clone() const
{
    QUmlMessage *c = new QUmlMessage;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlValueSpecification *element, arguments())
        c->addArgument(dynamic_cast<QUmlValueSpecification *>(element->clone()));
    if (connector())
        c->setConnector(dynamic_cast<QUmlConnector *>(connector()->clone()));
    if (interaction())
        c->setInteraction(dynamic_cast<QUmlInteraction *>(interaction()->clone()));
    c->setMessageSort(messageSort());
    if (receiveEvent())
        c->setReceiveEvent(dynamic_cast<QUmlMessageEnd *>(receiveEvent()->clone()));
    if (sendEvent())
        c->setSendEvent(dynamic_cast<QUmlMessageEnd *>(sendEvent()->clone()));
    if (signature())
        c->setSignature(dynamic_cast<QUmlNamedElement *>(signature()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The arguments of the Message

    \sa addArgument(), removeArgument()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QList<QUmlValueSpecification *> QUmlMessage::arguments() const
{
    // This is a read-write association end

    return _arguments;
}

/*!
    Adds \a argument to arguments.

    \sa arguments(), removeArgument()
 */
void QUmlMessage::addArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (!_arguments.contains(argument)) {
        _arguments.append(argument);
        if (argument && argument->asQModelingObject() && this->asQModelingObject())
            QObject::connect(argument->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeArgument(QObject *)));
        argument->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(argument);
    }
}

/*!
    Removes \a argument from arguments.

    \sa arguments(), addArgument()
 */
void QUmlMessage::removeArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (_arguments.contains(argument)) {
        _arguments.removeAll(argument);
        if (argument->asQModelingObject())
            argument->asQModelingObject()->setParent(0);

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

/*!
    Adjusts connector to \a connector.
 */
void QUmlMessage::setConnector(QUmlConnector *connector)
{
    // This is a read-write association end

    if (_connector != connector) {
        _connector = connector;
        if (connector && connector->asQModelingObject() && this->asQModelingObject())
            QObject::connect(connector->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setConnector()));
    }
}

/*!
    The enclosing Interaction owning the Message

    \b {Subsetted property(ies):} QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlInteraction::messages().
 */
QUmlInteraction *QUmlMessage::interaction() const
{
    // This is a read-write association end

    return _interaction;
}

/*!
    Adjusts interaction to \a interaction.
 */
void QUmlMessage::setInteraction(QUmlInteraction *interaction)
{
    // This is a read-write association end

    if (_interaction != interaction) {
        // Adjust subsetted properties

        _interaction = interaction;
        if (interaction && interaction->asQModelingObject() && this->asQModelingObject())
            QObject::connect(interaction->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInteraction()));

        // Adjust subsetted properties
        setNamespace(interaction);
    }
}

/*!
    The derived kind of the Message (complete, lost, found or unknown)

    \b {This is a read-only derived property.}
 */
QtUml::MessageKind QUmlMessage::messageKind() const
{
    // This is a read-only derived property

    qWarning("QUmlMessage::messageKind(): to be implemented (this is a derived property)");

    return QtUml::MessageKind();
}

/*!
    Adjusts messageKind to \a messageKind.
 */
void QUmlMessage::setMessageKind(QtUml::MessageKind messageKind)
{
    // This is a read-only derived property

    qWarning("QUmlMessage::setMessageKind(): to be implemented (this is a derived property)");
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

/*!
    Adjusts messageSort to \a messageSort.
 */
void QUmlMessage::setMessageSort(QtUml::MessageSort messageSort)
{
    // This is a read-write property

    if (_messageSort != messageSort) {
        _messageSort = messageSort;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("messageSort");
    }
}

/*!
    References the Receiving of the Message

    \b {Subsetted property(ies):} .
 */
QUmlMessageEnd *QUmlMessage::receiveEvent() const
{
    // This is a read-write association end

    return _receiveEvent;
}

/*!
    Adjusts receiveEvent to \a receiveEvent.
 */
void QUmlMessage::setReceiveEvent(QUmlMessageEnd *receiveEvent)
{
    // This is a read-write association end

    if (_receiveEvent != receiveEvent) {
        _receiveEvent = receiveEvent;
        if (receiveEvent && receiveEvent->asQModelingObject() && this->asQModelingObject())
            QObject::connect(receiveEvent->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setReceiveEvent()));
    }
}

/*!
    References the Sending of the Message.

    \b {Subsetted property(ies):} .
 */
QUmlMessageEnd *QUmlMessage::sendEvent() const
{
    // This is a read-write association end

    return _sendEvent;
}

/*!
    Adjusts sendEvent to \a sendEvent.
 */
void QUmlMessage::setSendEvent(QUmlMessageEnd *sendEvent)
{
    // This is a read-write association end

    if (_sendEvent != sendEvent) {
        _sendEvent = sendEvent;
        if (sendEvent && sendEvent->asQModelingObject() && this->asQModelingObject())
            QObject::connect(sendEvent->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSendEvent()));
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

/*!
    Adjusts signature to \a signature.
 */
void QUmlMessage::setSignature(QUmlNamedElement *signature)
{
    // This is a read-write association end

    if (_signature != signature) {
        _signature = signature;
        if (signature && signature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(signature->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSignature()));
    }
}

QT_END_NAMESPACE

