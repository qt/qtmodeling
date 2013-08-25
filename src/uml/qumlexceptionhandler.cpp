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
#include "qumlexceptionhandler_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlObjectNode>

QT_BEGIN_NAMESPACE

QUmlExceptionHandlerPrivate::QUmlExceptionHandlerPrivate() :
    exceptionInput(0),
    handlerBody(0),
    protectedNode(0)
{
}

/*!
    \class QUmlExceptionHandler

    \inmodule QtUml

    \brief An exception handler is an element that specifies a body to execute in case the specified exception occurs during the execution of the protected node.
 */

QUmlExceptionHandler::QUmlExceptionHandler(bool create_d_ptr) :
    QUmlElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlExceptionHandlerPrivate);
}

// OWNED ATTRIBUTES

/*!
    An object node within the handler body. When the handler catches an exception, the exception token is placed in this node, causing the body to execute.
 */
QUmlObjectNode *QUmlExceptionHandler::exceptionInput() const
{
    // This is a read-write association end

    QM_D(const QUmlExceptionHandler);
    return d->exceptionInput;
}

void QUmlExceptionHandler::setExceptionInput(QUmlObjectNode *exceptionInput)
{
    // This is a read-write association end

    QM_D(QUmlExceptionHandler);
    if (d->exceptionInput != exceptionInput) {
        d->exceptionInput = exceptionInput;
    }
}

/*!
    The kind of instances that the handler catches. If an exception occurs whose type is any of the classifiers in the set, the handler catches the exception and executes its body.
 */
QSet<QUmlClassifier *> QUmlExceptionHandler::exceptionType() const
{
    // This is a read-write association end

    QM_D(const QUmlExceptionHandler);
    return d->exceptionType;
}

void QUmlExceptionHandler::addExceptionType(QUmlClassifier *exceptionType)
{
    // This is a read-write association end

    QM_D(QUmlExceptionHandler);
    if (!d->exceptionType.contains(exceptionType)) {
        d->exceptionType.insert(exceptionType);
    }
}

void QUmlExceptionHandler::removeExceptionType(QUmlClassifier *exceptionType)
{
    // This is a read-write association end

    QM_D(QUmlExceptionHandler);
    if (d->exceptionType.contains(exceptionType)) {
        d->exceptionType.remove(exceptionType);
    }
}

/*!
    A node that is executed if the handler satisfies an uncaught exception.
 */
QUmlExecutableNode *QUmlExceptionHandler::handlerBody() const
{
    // This is a read-write association end

    QM_D(const QUmlExceptionHandler);
    return d->handlerBody;
}

void QUmlExceptionHandler::setHandlerBody(QUmlExecutableNode *handlerBody)
{
    // This is a read-write association end

    QM_D(QUmlExceptionHandler);
    if (d->handlerBody != handlerBody) {
        d->handlerBody = handlerBody;
    }
}

/*!
    The node protected by the handler. The handler is examined if an exception propagates to the outside of the node.
 */
QUmlExecutableNode *QUmlExceptionHandler::protectedNode() const
{
    // This is a read-write association end

    QM_D(const QUmlExceptionHandler);
    return d->protectedNode;
}

void QUmlExceptionHandler::setProtectedNode(QUmlExecutableNode *protectedNode)
{
    // This is a read-write association end

    QM_D(QUmlExceptionHandler);
    if (d->protectedNode != protectedNode) {
        d->protectedNode = protectedNode;
    }
}

QT_END_NAMESPACE

