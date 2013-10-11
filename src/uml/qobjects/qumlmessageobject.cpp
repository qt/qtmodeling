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
#include "private/qmodelingobject_p.h"

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

QUmlMessageObject::QUmlMessageObject(QUmlMessage *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlMessageObject::~QUmlMessageObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlMessage *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlMessageObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlMessage *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlMessageObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlMessage *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlMessageObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlMessageObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlMessage *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlMessageObject::name() const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->name();
}

QObject *QUmlMessageObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlMessageObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->namespace_()->asQModelingObject();
}

QString QUmlMessageObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlMessageObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->visibility();
}

// OWNED ATTRIBUTES [Message]

const QList<QObject *> QUmlMessageObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingelementproperty_cast<QUmlMessage *>(this)->arguments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlMessageObject::connector() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->connector())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->connector()->asQModelingObject();
}

QObject *QUmlMessageObject::interaction() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->interaction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->interaction()->asQModelingObject();
}

QtUml::MessageKind QUmlMessageObject::messageKind() const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->messageKind();
}

QtUml::MessageSort QUmlMessageObject::messageSort() const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->messageSort();
}

QObject *QUmlMessageObject::receiveEvent() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->receiveEvent())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->receiveEvent()->asQModelingObject();
}

QObject *QUmlMessageObject::sendEvent() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->sendEvent())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->sendEvent()->asQModelingObject();
}

QObject *QUmlMessageObject::signature() const
{
    if (!qmodelingelementproperty_cast<QUmlMessage *>(this)->signature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessage *>(this)->signature()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlMessageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlMessage *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlMessageObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlMessageObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlMessage *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlMessageObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlMessage *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlMessageObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlMessageObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlMessage *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlMessageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlMessageObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setName(name);
}

void QUmlMessageObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlMessageObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlMessageObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setQualifiedName(qualifiedName);
}

void QUmlMessageObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Message]

void QUmlMessageObject::addArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->addArgument(qmodelingelementproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlMessageObject::removeArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->removeArgument(qmodelingelementproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlMessageObject::setConnector(QObject *connector)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setConnector(qmodelingelementproperty_cast<QUmlConnector *>(connector));
}

void QUmlMessageObject::setInteraction(QObject *interaction)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(interaction));
}

void QUmlMessageObject::setMessageKind(QtUml::MessageKind messageKind)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setMessageKind(messageKind);
}

void QUmlMessageObject::unsetMessageKind()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("messageKind"));
}

void QUmlMessageObject::setMessageSort(QtUml::MessageSort messageSort)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setMessageSort(messageSort);
}

void QUmlMessageObject::unsetMessageSort()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("messageSort"));
}

void QUmlMessageObject::setReceiveEvent(QObject *receiveEvent)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setReceiveEvent(qmodelingelementproperty_cast<QUmlMessageEnd *>(receiveEvent));
}

void QUmlMessageObject::setSendEvent(QObject *sendEvent)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setSendEvent(qmodelingelementproperty_cast<QUmlMessageEnd *>(sendEvent));
}

void QUmlMessageObject::setSignature(QObject *signature)
{
    qmodelingelementproperty_cast<QUmlMessage *>(this)->setSignature(qmodelingelementproperty_cast<QUmlNamedElement *>(signature));
}


void QUmlMessageObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlMessage");
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("arguments"))));
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("connector"))));
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interaction"))));
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("messageKind"))));
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("messageSort"))));
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("receiveEvent"))));
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sendEvent"))));
    d->groupProperties.insert(QStringLiteral("QUmlMessage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signature"))));
}

void QUmlMessageObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, DocumentationRole, QStringLiteral("The arguments of the Message"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, arguments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, DocumentationRole, QStringLiteral("The Connector on which this Message is sent."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, connector, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, DocumentationRole, QStringLiteral("The enclosing Interaction owning the Message"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, interaction, OppositeEndRole, QStringLiteral("Interaction-message"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, DocumentationRole, QStringLiteral("The derived kind of the Message (complete, lost, found or unknown)"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageKind, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, DocumentationRole, QStringLiteral("The sort of communication reflected by the Message"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, messageSort, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, DocumentationRole, QStringLiteral("References the Receiving of the Message"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, SubsettedPropertiesRole, QStringLiteral("A_message_messageEnd-messageEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, receiveEvent, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, DocumentationRole, QStringLiteral("References the Sending of the Message."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, SubsettedPropertiesRole, QStringLiteral("A_message_messageEnd-messageEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, sendEvent, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, PropertyClassRole, QStringLiteral("QUmlMessage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, DocumentationRole, QStringLiteral("The signature of the Message is the specification of its content. It refers either an Operation or a Signal."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMessage, signature, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

