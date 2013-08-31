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

QT_BEGIN_NAMESPACE

/*!
    \class UmlMessage

    \inmodule QtUml

    \brief A message defines a particular communication between lifelines of an interaction.
 */

QUmlMessage::QUmlMessage(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlMessage::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlMessage::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlMessage::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlMessage::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlMessage::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlMessage::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlMessage::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlMessage::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlMessage::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Message]

/*!
    The arguments of the Message
 */
const QList<QUmlValueSpecification *> QUmlMessage::argument() const
{
    return *(reinterpret_cast<const QList<QUmlValueSpecification *> *>(&_argument));
}

/*!
    The Connector on which this Message is sent.
 */
QUmlConnector *QUmlMessage::connector() const
{
    return reinterpret_cast<QUmlConnector *>(_connector);
}

/*!
    The enclosing Interaction owning the Message
 */
QUmlInteraction *QUmlMessage::interaction() const
{
    return reinterpret_cast<QUmlInteraction *>(_interaction);
}

/*!
    The derived kind of the Message (complete, lost, found or unknown)
 */
QtUml::MessageKind QUmlMessage::messageKind() const
{
    return UmlMessage::messageKind();
}

/*!
    The sort of communication reflected by the Message
 */
QtUml::MessageSort QUmlMessage::messageSort() const
{
    return _messageSort;
}

/*!
    References the Receiving of the Message
 */
QUmlMessageEnd *QUmlMessage::receiveEvent() const
{
    return reinterpret_cast<QUmlMessageEnd *>(_receiveEvent);
}

/*!
    References the Sending of the Message.
 */
QUmlMessageEnd *QUmlMessage::sendEvent() const
{
    return reinterpret_cast<QUmlMessageEnd *>(_sendEvent);
}

/*!
    The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
 */
QUmlNamedElement *QUmlMessage::signature() const
{
    return reinterpret_cast<QUmlNamedElement *>(_signature);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlMessage::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlMessage::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlMessage::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlMessage::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlMessage::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlMessage::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlMessage::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlMessage::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlMessage::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlMessage::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlMessage::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlMessage::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlMessage::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Message]

void QUmlMessage::addArgument(UmlValueSpecification *argument)
{
    UmlMessage::addArgument(argument);
}

void QUmlMessage::removeArgument(UmlValueSpecification *argument)
{
    UmlMessage::removeArgument(argument);
}

void QUmlMessage::setConnector(QUmlConnector *connector)
{
    UmlMessage::setConnector(connector);
}

void QUmlMessage::setInteraction(QUmlInteraction *interaction)
{
    UmlMessage::setInteraction(interaction);
}

void QUmlMessage::setMessageSort(QtUml::MessageSort messageSort)
{
    UmlMessage::setMessageSort(messageSort);
}

void QUmlMessage::setReceiveEvent(QUmlMessageEnd *receiveEvent)
{
    UmlMessage::setReceiveEvent(receiveEvent);
}

void QUmlMessage::setSendEvent(QUmlMessageEnd *sendEvent)
{
    UmlMessage::setSendEvent(sendEvent);
}

void QUmlMessage::setSignature(QUmlNamedElement *signature)
{
    UmlMessage::setSignature(signature);
}

QT_END_NAMESPACE

