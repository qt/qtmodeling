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
#include "qumlexceptionhandler.h"

#include "private/qumlexceptionhandlerobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlObjectNode>

/*!
    \class QUmlExceptionHandler

    \inmodule QtUml

    \brief An exception handler is an element that specifies a body to execute in case the specified exception occurs during the execution of the protected node.
 */
QUmlExceptionHandler::QUmlExceptionHandler(bool createQObject) :
    _exceptionInput(0),
    _handlerBody(0),
    _protectedNode(0)
{
    if (createQObject)
        _qObject = new QUmlExceptionHandlerObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlExceptionHandler::~QUmlExceptionHandler()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlExceptionHandler::clone() const
{
    QUmlExceptionHandler *c = new QUmlExceptionHandler;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (exceptionInput())
        c->setExceptionInput(dynamic_cast<QUmlObjectNode *>(exceptionInput()->clone()));
    foreach (QUmlClassifier *element, exceptionTypes())
        c->addExceptionType(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (handlerBody())
        c->setHandlerBody(dynamic_cast<QUmlExecutableNode *>(handlerBody()->clone()));
    if (protectedNode())
        c->setProtectedNode(dynamic_cast<QUmlExecutableNode *>(protectedNode()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An object node within the handler body. When the handler catches an exception, the exception token is placed in this node, causing the body to execute.
 */
QUmlObjectNode *QUmlExceptionHandler::exceptionInput() const
{
    // This is a read-write association end

    return _exceptionInput;
}

void QUmlExceptionHandler::setExceptionInput(QUmlObjectNode *exceptionInput)
{
    // This is a read-write association end

    if (_exceptionInput != exceptionInput) {
        _exceptionInput = exceptionInput;
        if (exceptionInput && exceptionInput->asQObject() && this->asQObject())
            QObject::connect(exceptionInput->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setExceptionInput()));
    }
}

/*!
    The kind of instances that the handler catches. If an exception occurs whose type is any of the classifiers in the set, the handler catches the exception and executes its body.
 */
const QSet<QUmlClassifier *> QUmlExceptionHandler::exceptionTypes() const
{
    // This is a read-write association end

    return _exceptionTypes;
}

void QUmlExceptionHandler::addExceptionType(QUmlClassifier *exceptionType)
{
    // This is a read-write association end

    if (!_exceptionTypes.contains(exceptionType)) {
        _exceptionTypes.insert(exceptionType);
        if (exceptionType && exceptionType->asQObject() && this->asQObject())
            QObject::connect(exceptionType->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeExceptionType(QObject *)));
    }
}

void QUmlExceptionHandler::removeExceptionType(QUmlClassifier *exceptionType)
{
    // This is a read-write association end

    if (_exceptionTypes.contains(exceptionType)) {
        _exceptionTypes.remove(exceptionType);
    }
}

/*!
    A node that is executed if the handler satisfies an uncaught exception.
 */
QUmlExecutableNode *QUmlExceptionHandler::handlerBody() const
{
    // This is a read-write association end

    return _handlerBody;
}

void QUmlExceptionHandler::setHandlerBody(QUmlExecutableNode *handlerBody)
{
    // This is a read-write association end

    if (_handlerBody != handlerBody) {
        _handlerBody = handlerBody;
        if (handlerBody && handlerBody->asQObject() && this->asQObject())
            QObject::connect(handlerBody->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setHandlerBody()));
    }
}

/*!
    The node protected by the handler. The handler is examined if an exception propagates to the outside of the node.
 */
QUmlExecutableNode *QUmlExceptionHandler::protectedNode() const
{
    // This is a read-write association end

    return _protectedNode;
}

void QUmlExceptionHandler::setProtectedNode(QUmlExecutableNode *protectedNode)
{
    // This is a read-write association end

    if (_protectedNode != protectedNode) {
        // Adjust subsetted properties

        _protectedNode = protectedNode;
        if (protectedNode && protectedNode->asQObject() && this->asQObject())
            QObject::connect(protectedNode->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setProtectedNode()));

        // Adjust subsetted properties
        setOwner(protectedNode);
    }
}

void QUmlExceptionHandler::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("exceptionInput"))));
    _groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("exceptionTypes"))));
    _groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("handlerBody"))));
    _groupProperties.insert(QStringLiteral("QUmlExceptionHandler"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("protectedNode"))));
}

void QUmlExceptionHandler::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExceptionHandler");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::DocumentationRole] = QStringLiteral("An object node within the handler body. When the handler catches an exception, the exception token is placed in this node, causing the body to execute.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionInput")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExceptionHandler");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::DocumentationRole] = QStringLiteral("The kind of instances that the handler catches. If an exception occurs whose type is any of the classifiers in the set, the handler catches the exception and executes its body.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("exceptionTypes")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExceptionHandler");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::DocumentationRole] = QStringLiteral("A node that is executed if the handler satisfies an uncaught exception.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("handlerBody")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExceptionHandler");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::DocumentationRole] = QStringLiteral("The node protected by the handler. The handler is examined if an exception propagates to the outside of the node.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExceptionHandler")][QStringLiteral("protectedNode")][QtModeling::OppositeEndRole] = QStringLiteral("ExecutableNode-handler");

}

