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

#include "qexecutablenode.h"
#include "qexecutablenode_p.h"

#include <QtUml/QExceptionHandler>

QT_BEGIN_NAMESPACE_QTUML

QExecutableNodePrivate::QExecutableNodePrivate() :
    handlers(new QSet<QExceptionHandler *>)
{
}

QExecutableNodePrivate::~QExecutableNodePrivate()
{
    delete handlers;
}

/*!
    \class QExecutableNode

    \inmodule QtUml

    \brief An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.
 */

QExecutableNode::QExecutableNode(QObject *parent) :
    QActivityNode(*new QExecutableNodePrivate, parent)
{
}

QExecutableNode::QExecutableNode(QExecutableNodePrivate &dd, QObject *parent) :
    QActivityNode(dd, parent)
{
}

QExecutableNode::~QExecutableNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExecutableNode
// ---------------------------------------------------------------

/*!
    A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.
 */
const QSet<QExceptionHandler *> *QExecutableNode::handlers() const
{
    // This is a read-write association end

    Q_D(const QExecutableNode);
    return d->handlers;
}

void QExecutableNode::addHandler(QExceptionHandler *handler)
{
    // This is a read-write association end

    Q_D(QExecutableNode);
    if (!d->handlers->contains(handler)) {
        d->handlers->insert(handler);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(handler));

        // Adjust opposite property
        handler->setProtectedNode(this);
    }
}

void QExecutableNode::removeHandler(QExceptionHandler *handler)
{
    // This is a read-write association end

    Q_D(QExecutableNode);
    if (d->handlers->contains(handler)) {
        d->handlers->remove(handler);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(handler));

        // Adjust opposite property
        handler->setProtectedNode(0);
    }
}

#include "moc_qexecutablenode.cpp"

QT_END_NAMESPACE_QTUML

