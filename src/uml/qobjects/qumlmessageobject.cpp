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
#include "qumlmessageobject_p.h"

#include <QtUml/QUmlMessage>
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

QUmlMessageObject::QUmlMessageObject(QUmlMessage *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlMessageObject::~QUmlMessageObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlMessage *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlMessageObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlMessage *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlMessageObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlMessage *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlMessageObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlMessageObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlMessage *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlMessageObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->name();
}

QObject *QUmlMessageObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->nameExpression()->asQObject();
}

QObject *QUmlMessageObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->namespace_()->asQObject();
}

QString QUmlMessageObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlMessageObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->visibility();
}

// OWNED ATTRIBUTES [Message]

const QList<QObject *> QUmlMessageObject::argument() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingobjectproperty_cast<QUmlMessage *>(this)->argument())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlMessageObject::connector() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->connector())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->connector()->asQObject();
}

QObject *QUmlMessageObject::interaction() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->interaction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->interaction()->asQObject();
}

QtUml::MessageKind QUmlMessageObject::messageKind() const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->messageKind();
}

QtUml::MessageSort QUmlMessageObject::messageSort() const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->messageSort();
}

QObject *QUmlMessageObject::receiveEvent() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->receiveEvent())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->receiveEvent()->asQObject();
}

QObject *QUmlMessageObject::sendEvent() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->sendEvent())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->sendEvent()->asQObject();
}

QObject *QUmlMessageObject::signature() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessage *>(this)->signature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessage *>(this)->signature()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlMessageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlMessage *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlMessageObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlMessageObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlMessage *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlMessageObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlMessage *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlMessageObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlMessageObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlMessage *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlMessageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlMessageObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setName(name);
}

void QUmlMessageObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlMessageObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlMessageObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setQualifiedName(qualifiedName);
}

void QUmlMessageObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Message]

void QUmlMessageObject::addArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->addArgument(qmodelingobjectproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlMessageObject::removeArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->removeArgument(qmodelingobjectproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlMessageObject::setConnector(QObject *connector)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setConnector(qmodelingobjectproperty_cast<QUmlConnector *>(connector));
}

void QUmlMessageObject::setInteraction(QObject *interaction)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(interaction));
}

void QUmlMessageObject::setMessageKind(QtUml::MessageKind messageKind)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setMessageKind(messageKind);
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->modifiedResettableProperties() << QStringLiteral("messageKind");
}

void QUmlMessageObject::unsetMessageKind()
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("messageKind"));
}

void QUmlMessageObject::setMessageSort(QtUml::MessageSort messageSort)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setMessageSort(messageSort);
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->modifiedResettableProperties() << QStringLiteral("messageSort");
}

void QUmlMessageObject::unsetMessageSort()
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("messageSort"));
}

void QUmlMessageObject::setReceiveEvent(QObject *receiveEvent)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setReceiveEvent(qmodelingobjectproperty_cast<QUmlMessageEnd *>(receiveEvent));
}

void QUmlMessageObject::setSendEvent(QObject *sendEvent)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setSendEvent(qmodelingobjectproperty_cast<QUmlMessageEnd *>(sendEvent));
}

void QUmlMessageObject::setSignature(QObject *signature)
{
    qmodelingobjectproperty_cast<QUmlMessage *>(this)->setSignature(qmodelingobjectproperty_cast<QUmlNamedElement *>(signature));
}

QT_END_NAMESPACE

