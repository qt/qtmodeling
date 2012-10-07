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

#include "qexceptionhandler.h"

#include <QtUml/QObjectNode>
#include <QtUml/QClassifier>
#include <QtUml/QExecutableNode>

QT_BEGIN_NAMESPACE_QTUML

class QExceptionHandlerPrivate
{
public:
    explicit QExceptionHandlerPrivate();
    virtual ~QExceptionHandlerPrivate();

    QObjectNode *exceptionInput;
    QSet<QClassifier *> *exceptionTypes;
    QExecutableNode *handlerBody;
    QExecutableNode *protectedNode;
};

QExceptionHandlerPrivate::QExceptionHandlerPrivate() :
    exceptionInput(0),
    exceptionTypes(new QSet<QClassifier *>),
    handlerBody(0),
    protectedNode(0)
{
}

QExceptionHandlerPrivate::~QExceptionHandlerPrivate()
{
    delete exceptionTypes;
}

/*!
    \class QExceptionHandler

    \inmodule QtUml

    \brief An exception handler is an element that specifies a body to execute in case the specified exception occurs during the execution of the protected node.
 */

QExceptionHandler::QExceptionHandler(QObject *parent)
    : QObject(parent), d_ptr(new QExceptionHandlerPrivate)
{
}

QExceptionHandler::~QExceptionHandler()
{
    delete d_ptr;
}

/*!
    An object node within the handler body. When the handler catches an exception, the exception token is placed in this node, causing the body to execute.
 */
QObjectNode *QExceptionHandler::exceptionInput() const
{
    return d_ptr->exceptionInput;
}

void QExceptionHandler::setExceptionInput(const QObjectNode *exceptionInput)
{
    d_ptr->exceptionInput = const_cast<QObjectNode *>(exceptionInput);
}

/*!
    The kind of instances that the handler catches. If an exception occurs whose type is any of the classifiers in the set, the handler catches the exception and executes its body.
 */
const QSet<QClassifier *> *QExceptionHandler::exceptionTypes() const
{
    return d_ptr->exceptionTypes;
}

void QExceptionHandler::addExceptionType(const QClassifier *exceptionType)
{
    d_ptr->exceptionTypes->insert(const_cast<QClassifier *>(exceptionType));
}

void QExceptionHandler::removeExceptionType(const QClassifier *exceptionType)
{
    d_ptr->exceptionTypes->remove(const_cast<QClassifier *>(exceptionType));
}

/*!
    A node that is executed if the handler satisfies an uncaught exception.
 */
QExecutableNode *QExceptionHandler::handlerBody() const
{
    return d_ptr->handlerBody;
}

void QExceptionHandler::setHandlerBody(const QExecutableNode *handlerBody)
{
    d_ptr->handlerBody = const_cast<QExecutableNode *>(handlerBody);
}

/*!
    The node protected by the handler. The handler is examined if an exception propagates to the outside of the node.
 */
QExecutableNode *QExceptionHandler::protectedNode() const
{
    return d_ptr->protectedNode;
}

void QExceptionHandler::setProtectedNode(const QExecutableNode *protectedNode)
{
    d_ptr->protectedNode = const_cast<QExecutableNode *>(protectedNode);
}

#include "moc_qexceptionhandler.cpp"

QT_END_NAMESPACE_QTUML

