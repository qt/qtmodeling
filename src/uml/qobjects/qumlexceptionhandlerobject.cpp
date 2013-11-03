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
#include "qumlexceptionhandlerobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlObjectNode>

QT_BEGIN_NAMESPACE

QUmlExceptionHandlerObject::QUmlExceptionHandlerObject(QUmlExceptionHandler *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExceptionHandlerObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExceptionHandlerObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExceptionHandlerObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ExceptionHandler]

QObject *QUmlExceptionHandlerObject::exceptionInput() const
{
    if (!qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->exceptionInput())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->exceptionInput()->asQModelingObject();
}

const QSet<QObject *> QUmlExceptionHandlerObject::exceptionTypes() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->exceptionTypes())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExceptionHandlerObject::handlerBody() const
{
    if (!qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->handlerBody())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->handlerBody()->asQModelingObject();
}

QObject *QUmlExceptionHandlerObject::protectedNode() const
{
    if (!qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->protectedNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->protectedNode()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExceptionHandlerObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExceptionHandlerObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExceptionHandlerObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlExceptionHandlerObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlExceptionHandlerObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlExceptionHandlerObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlExceptionHandlerObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [ExceptionHandler]

void QUmlExceptionHandlerObject::setExceptionInput(QObject *exceptionInput)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->setExceptionInput(qmodelingelementproperty_cast<QUmlObjectNode *>(exceptionInput));
    emit exceptionInputChanged(this->exceptionInput());
}

void QUmlExceptionHandlerObject::addExceptionType(QObject *exceptionType)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->addExceptionType(qmodelingelementproperty_cast<QUmlClassifier *>(exceptionType));
    emit exceptionTypesChanged(this->exceptionTypes());
}

void QUmlExceptionHandlerObject::removeExceptionType(QObject *exceptionType)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->removeExceptionType(qmodelingelementproperty_cast<QUmlClassifier *>(exceptionType));
    emit exceptionTypesChanged(this->exceptionTypes());
}

void QUmlExceptionHandlerObject::setHandlerBody(QObject *handlerBody)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->setHandlerBody(qmodelingelementproperty_cast<QUmlExecutableNode *>(handlerBody));
    emit handlerBodyChanged(this->handlerBody());
}

void QUmlExceptionHandlerObject::setProtectedNode(QObject *protectedNode)
{
    qmodelingelementproperty_cast<QUmlExceptionHandler *>(this)->setProtectedNode(qmodelingelementproperty_cast<QUmlExecutableNode *>(protectedNode));
    emit protectedNodeChanged(this->protectedNode());
}


void QUmlExceptionHandlerObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlExceptionHandler");
    d->groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("exceptionInput"))));
    d->groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("exceptionTypes"))));
    d->groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("handlerBody"))));
    d->groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("protectedNode"))));
}

void QUmlExceptionHandlerObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, PropertyClassRole, QStringLiteral("QUmlExceptionHandler"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, DocumentationRole, QStringLiteral("An object node within the handler body. When the handler catches an exception, the exception token is placed in this node, causing the body to execute."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionInput, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, PropertyClassRole, QStringLiteral("QUmlExceptionHandler"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, DocumentationRole, QStringLiteral("The kind of instances that the handler catches. If an exception occurs whose type is any of the classifiers in the set, the handler catches the exception and executes its body."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, exceptionTypes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, PropertyClassRole, QStringLiteral("QUmlExceptionHandler"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, DocumentationRole, QStringLiteral("A node that is executed if the handler satisfies an uncaught exception."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, handlerBody, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, PropertyClassRole, QStringLiteral("QUmlExceptionHandler"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, DocumentationRole, QStringLiteral("The node protected by the handler. The handler is examined if an exception propagates to the outside of the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExceptionHandler, protectedNode, OppositeEndRole, QStringLiteral("ExecutableNode-handler"));

}

QT_END_NAMESPACE

