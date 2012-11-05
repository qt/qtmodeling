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
#include "qexceptionhandler_p.h"

#include <QtUml/QObjectNode>
#include <QtUml/QClassifier>
#include <QtUml/QExecutableNode>

QT_BEGIN_NAMESPACE_QTUML

QExceptionHandlerPrivate::QExceptionHandlerPrivate() :
    handlerBody(0),
    exceptionTypes(new QSet<QClassifier *>),
    protectedNode(0),
    exceptionInput(0)
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

QExceptionHandler::QExceptionHandler(QObject *parent) :
    QElement(*new QExceptionHandlerPrivate, parent)
{
    qRegisterMetaType<QExceptionHandler *>("QExceptionHandler *");
    qRegisterMetaType<const QSet<QExceptionHandler *> *>("const QSet<QExceptionHandler *> *");
    qRegisterMetaType<const QList<QExceptionHandler *> *>("const QList<QExceptionHandler *> *");
}

QExceptionHandler::QExceptionHandler(QExceptionHandlerPrivate &dd, QObject *parent) :
    QElement(dd, parent)
{
    qRegisterMetaType<QExceptionHandler *>("QExceptionHandler *");
    qRegisterMetaType<const QSet<QExceptionHandler *> *>("const QSet<QExceptionHandler *> *");
    qRegisterMetaType<const QList<QExceptionHandler *> *>("const QList<QExceptionHandler *> *");
}

QExceptionHandler::~QExceptionHandler()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExceptionHandler
// ---------------------------------------------------------------

/*!
    A node that is executed if the handler satisfies an uncaught exception.
 */
QExecutableNode *QExceptionHandler::handlerBody() const
{
    // This is a read-write association end

    Q_D(const QExceptionHandler);
    return d->handlerBody;
}

void QExceptionHandler::setHandlerBody(QExecutableNode *handlerBody)
{
    // This is a read-write association end

    Q_D(QExceptionHandler);
    if (d->handlerBody != handlerBody) {
        d->handlerBody = handlerBody;
    }
}

/*!
    The kind of instances that the handler catches. If an exception occurs whose type is any of the classifiers in the set, the handler catches the exception and executes its body.
 */
const QSet<QClassifier *> *QExceptionHandler::exceptionTypes() const
{
    // This is a read-write association end

    Q_D(const QExceptionHandler);
    return d->exceptionTypes;
}

void QExceptionHandler::addExceptionType(QClassifier *exceptionType)
{
    // This is a read-write association end

    Q_D(QExceptionHandler);
    if (!d->exceptionTypes->contains(exceptionType)) {
        d->exceptionTypes->insert(exceptionType);
    }
}

void QExceptionHandler::removeExceptionType(QClassifier *exceptionType)
{
    // This is a read-write association end

    Q_D(QExceptionHandler);
    if (d->exceptionTypes->contains(exceptionType)) {
        d->exceptionTypes->remove(exceptionType);
    }
}

/*!
    The node protected by the handler. The handler is examined if an exception propagates to the outside of the node.
 */
QExecutableNode *QExceptionHandler::protectedNode() const
{
    // This is a read-write association end

    Q_D(const QExceptionHandler);
    return d->protectedNode;
}

void QExceptionHandler::setProtectedNode(QExecutableNode *protectedNode)
{
    // This is a read-write association end

    Q_D(QExceptionHandler);
    if (d->protectedNode != protectedNode) {
        // Adjust opposite property
        if (d->protectedNode)
            d->protectedNode->removeHandler(this);

        d->protectedNode = protectedNode;

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->setOwner(qtuml_object_cast<QElement *>(protectedNode));

        // Adjust opposite property
        if (protectedNode)
            protectedNode->addHandler(this);
    }
}

/*!
    An object node within the handler body. When the handler catches an exception, the exception token is placed in this node, causing the body to execute.
 */
QObjectNode *QExceptionHandler::exceptionInput() const
{
    // This is a read-write association end

    Q_D(const QExceptionHandler);
    return d->exceptionInput;
}

void QExceptionHandler::setExceptionInput(QObjectNode *exceptionInput)
{
    // This is a read-write association end

    Q_D(QExceptionHandler);
    if (d->exceptionInput != exceptionInput) {
        d->exceptionInput = exceptionInput;
    }
}

#include "moc_qexceptionhandler.cpp"

QT_END_NAMESPACE_QTUML

