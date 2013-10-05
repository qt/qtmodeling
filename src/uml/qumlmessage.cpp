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
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>
/*!
    \class QUmlMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */
QUmlMessage::QUmlMessage(bool createQObject) :
    _connector(0),
    _interaction(0),
    _messageSort(QtUml::MessageSortSynchCall),
    _receiveEvent(0),
    _sendEvent(0),
    _signature(0)
{
    if (createQObject)
        _qObject = new QUmlMessageObject(this);
    setPropertyData();
}

QUmlMessage::~QUmlMessage()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlMessage::clone() const
{
    QUmlMessage *c = new QUmlMessage;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlValueSpecification *element, argument())
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
        if (argument && argument->asQObject() && this->asQObject())
            QObject::connect(argument->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeArgument(QObject *)));
        argument->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(argument);
    }
}

void QUmlMessage::removeArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (_argument.contains(argument)) {
        _argument.removeAll(argument);
        if (argument->asQObject())
            argument->asQObject()->setParent(0);

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
        if (connector && connector->asQObject() && this->asQObject())
            QObject::connect(connector->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setConnector()));
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
        if (interaction && interaction->asQObject() && this->asQObject())
            QObject::connect(interaction->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setInteraction()));

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

    qWarning("UmlMessage::messageKind(): to be implemented (this is a derived property)");

    return QtUml::MessageKind();
}

void QUmlMessage::setMessageKind(QtUml::MessageKind messageKind)
{
    // This is a read-only derived property

    qWarning("UmlMessage::messageKind(): to be implemented (this is a derived property)");
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
        _modifiedResettableProperties << QStringLiteral("messageSort");
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
        if (receiveEvent && receiveEvent->asQObject() && this->asQObject())
            QObject::connect(receiveEvent->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setReceiveEvent()));
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
        if (sendEvent && sendEvent->asQObject() && this->asQObject())
            QObject::connect(sendEvent->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSendEvent()));
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
        if (signature && signature->asQObject() && this->asQObject())
            QObject::connect(signature->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSignature()));
    }
}

void QUmlMessage::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::DocumentationRole] = QStringLiteral("The arguments of the Message");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("connector")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("connector")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("connector")][QtModeling::DocumentationRole] = QStringLiteral("The Connector on which this Message is sent.");
    QModelingObject::propertyDataHash[QStringLiteral("connector")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("connector")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("connector")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::DocumentationRole] = QStringLiteral("The enclosing Interaction owning the Message");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::OppositeEndRole] = QStringLiteral("Interaction-message");

    QModelingObject::propertyDataHash[QStringLiteral("messageKind")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("messageKind")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("messageKind")][QtModeling::DocumentationRole] = QStringLiteral("The derived kind of the Message (complete, lost, found or unknown)");
    QModelingObject::propertyDataHash[QStringLiteral("messageKind")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("messageKind")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("messageKind")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("messageSort")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("messageSort")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("messageSort")][QtModeling::DocumentationRole] = QStringLiteral("The sort of communication reflected by the Message");
    QModelingObject::propertyDataHash[QStringLiteral("messageSort")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("messageSort")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("messageSort")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("receiveEvent")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("receiveEvent")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("receiveEvent")][QtModeling::DocumentationRole] = QStringLiteral("References the Receiving of the Message");
    QModelingObject::propertyDataHash[QStringLiteral("receiveEvent")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("receiveEvent")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_message_messageEnd-messageEnd");
    QModelingObject::propertyDataHash[QStringLiteral("receiveEvent")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("sendEvent")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("sendEvent")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("sendEvent")][QtModeling::DocumentationRole] = QStringLiteral("References the Sending of the Message.");
    QModelingObject::propertyDataHash[QStringLiteral("sendEvent")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("sendEvent")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_message_messageEnd-messageEnd");
    QModelingObject::propertyDataHash[QStringLiteral("sendEvent")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("signature")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("signature")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("signature")][QtModeling::DocumentationRole] = QStringLiteral("The signature of the Message is the specification of its content. It refers either an Operation or a Signal.");
    QModelingObject::propertyDataHash[QStringLiteral("signature")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("signature")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("signature")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

