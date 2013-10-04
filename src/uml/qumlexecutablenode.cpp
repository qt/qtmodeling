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

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
/*!
    \class QUmlExecutableNode

    \inmodule QtUml

    \brief An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.
 */
QUmlExecutableNode::QUmlExecutableNode()
{
    setPropertyData();
}

QUmlExecutableNode::~QUmlExecutableNode()
{
}

QModelingObject *QUmlExecutableNode::clone() const
{
    QUmlExecutableNode *c = new QUmlExecutableNode;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegion())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartition())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incoming())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoing())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNode())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlExceptionHandler *element, handler())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.
 */
const QSet<QUmlExceptionHandler *> QUmlExecutableNode::handler() const
{
    // This is a read-write association end

    return _handler;
}

void QUmlExecutableNode::addHandler(QUmlExceptionHandler *handler)
{
    // This is a read-write association end

    if (!_handler.contains(handler)) {
        _handler.insert(handler);
        if (handler && handler->asQObject() && this->asQObject())
            QObject::connect(handler->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeHandler(QObject *)));
        handler->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(handler);

        // Adjust opposite properties
        if (handler) {
            handler->setProtectedNode(this);
        }
    }
}

void QUmlExecutableNode::removeHandler(QUmlExceptionHandler *handler)
{
    // This is a read-write association end

    if (_handler.contains(handler)) {
        _handler.remove(handler);
        if (handler->asQObject())
            handler->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(handler);

        // Adjust opposite properties
        if (handler) {
            handler->setProtectedNode(0);
        }
    }
}

void QUmlExecutableNode::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("handler")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("handler")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("handler")][QtModeling::DocumentationRole] = QStringLiteral("A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.");
    QModelingObject::propertyDataHash[QStringLiteral("handler")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("handler")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("handler")][QtModeling::OppositeEndRole] = QStringLiteral("ExceptionHandler-protectedNode");

}

