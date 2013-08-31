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

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlObjectNode>

QT_BEGIN_NAMESPACE

/*!
    \class UmlExceptionHandler

    \inmodule QtUml

    \brief An exception handler is an element that specifies a body to execute in case the specified exception occurs during the execution of the protected node.
 */

QUmlExceptionHandler::QUmlExceptionHandler(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlExceptionHandler::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlExceptionHandler::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlExceptionHandler::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [ExceptionHandler]

/*!
    An object node within the handler body. When the handler catches an exception, the exception token is placed in this node, causing the body to execute.
 */
QUmlObjectNode *QUmlExceptionHandler::exceptionInput() const
{
    return reinterpret_cast<QUmlObjectNode *>(_exceptionInput);
}

/*!
    The kind of instances that the handler catches. If an exception occurs whose type is any of the classifiers in the set, the handler catches the exception and executes its body.
 */
const QSet<QUmlClassifier *> QUmlExceptionHandler::exceptionType() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_exceptionType));
}

/*!
    A node that is executed if the handler satisfies an uncaught exception.
 */
QUmlExecutableNode *QUmlExceptionHandler::handlerBody() const
{
    return reinterpret_cast<QUmlExecutableNode *>(_handlerBody);
}

/*!
    The node protected by the handler. The handler is examined if an exception propagates to the outside of the node.
 */
QUmlExecutableNode *QUmlExceptionHandler::protectedNode() const
{
    return reinterpret_cast<QUmlExecutableNode *>(_protectedNode);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlExceptionHandler::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlExceptionHandler::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExceptionHandler::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlExceptionHandler::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [ExceptionHandler]

void QUmlExceptionHandler::setExceptionInput(QUmlObjectNode *exceptionInput)
{
    UmlExceptionHandler::setExceptionInput(exceptionInput);
}

void QUmlExceptionHandler::addExceptionType(UmlClassifier *exceptionType)
{
    UmlExceptionHandler::addExceptionType(exceptionType);
}

void QUmlExceptionHandler::removeExceptionType(UmlClassifier *exceptionType)
{
    UmlExceptionHandler::removeExceptionType(exceptionType);
}

void QUmlExceptionHandler::setHandlerBody(QUmlExecutableNode *handlerBody)
{
    UmlExceptionHandler::setHandlerBody(handlerBody);
}

void QUmlExceptionHandler::setProtectedNode(QUmlExecutableNode *protectedNode)
{
    UmlExceptionHandler::setProtectedNode(protectedNode);
}

QT_END_NAMESPACE

