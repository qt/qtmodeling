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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QExecutableNodePrivate::QExecutableNodePrivate()
{
}

QExecutableNodePrivate::~QExecutableNodePrivate()
{
}

/*!
    \class QExecutableNode

    \inmodule QtUml

    \brief An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.
 */

QExecutableNode::QExecutableNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QActivityNode(*new QExecutableNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QExecutableNode::QExecutableNode(QExecutableNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QActivityNode(dd, wrapper, parent)
{
    setPropertyData();
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
QSet<QExceptionHandler *> QExecutableNode::handlers() const
{
    // This is a read-write association end

    Q_D(const QExecutableNode);
    return d->handlers;
}

void QExecutableNode::addHandler(QExceptionHandler *handler)
{
    // This is a read-write association end

    Q_D(QExecutableNode);
    if (!d->handlers.contains(handler)) {
        d->handlers.insert(handler);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(handler));

        // Adjust opposite property
        handler->setProtectedNode(this);
    }
}

void QExecutableNode::removeHandler(QExceptionHandler *handler)
{
    // This is a read-write association end

    Q_D(QExecutableNode);
    if (d->handlers.contains(handler)) {
        d->handlers.remove(handler);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(handler));

        // Adjust opposite property
        handler->setProtectedNode(0);
    }
}

void QExecutableNode::registerMetaTypes() const
{
    qRegisterMetaType<QExceptionHandler *>("QExceptionHandler *");
    qRegisterMetaType<QSet<QExceptionHandler *>>("QSet<QExceptionHandler *>");
    qRegisterMetaType<QList<QExceptionHandler *>>("QList<QExceptionHandler *>");

    QActivityNode::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QExecutableNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutableNode")][QString::fromLatin1("handlers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QExceptionHandler::protectedNode");

    QActivityNode::setPropertyData();
}

#include "moc_qexecutablenode.cpp"

QT_END_NAMESPACE_QTUML

