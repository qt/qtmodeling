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
#include "qumlexecutablenode.h"
#include "qumlexecutablenode_p.h"

#include <QtUml/QUmlExceptionHandler>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlExecutableNodePrivate::QUmlExecutableNodePrivate()
{
}

QUmlExecutableNodePrivate::~QUmlExecutableNodePrivate()
{
}

/*!
    \class QUmlExecutableNode

    \inmodule QtUml

    \brief An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.
 */

QUmlExecutableNode::QUmlExecutableNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityNode(*new QUmlExecutableNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlExecutableNode::QUmlExecutableNode(QUmlExecutableNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlActivityNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlExecutableNode::~QUmlExecutableNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlExecutableNode
// ---------------------------------------------------------------

/*!
    A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.
 */
QSet<QUmlExceptionHandler *> QUmlExecutableNode::handlers() const
{
    // This is a read-write association end

    Q_D(const QUmlExecutableNode);
    return d->handlers;
}

void QUmlExecutableNode::addHandler(QUmlExceptionHandler *handler)
{
    // This is a read-write association end

    Q_D(QUmlExecutableNode);
    if (!d->handlers.contains(handler)) {
        d->handlers.insert(handler);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(handler));

        // Adjust opposite property
        handler->setProtectedNode(this);
    }
}

void QUmlExecutableNode::removeHandler(QUmlExceptionHandler *handler)
{
    // This is a read-write association end

    Q_D(QUmlExecutableNode);
    if (d->handlers.contains(handler)) {
        d->handlers.remove(handler);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(handler));

        // Adjust opposite property
        handler->setProtectedNode(0);
    }
}

void QUmlExecutableNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlExceptionHandler::protectedNode");

    QUmlActivityNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlexecutablenode.cpp"

