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
#include "qumlinvocationaction.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

/*!
    \class QUmlInvocationAction

    \inmodule QtUml

    \brief InvocationAction is an abstract class for the various actions that invoke behavior.In addition to targeting an object, invocation actions can also invoke behavioral features on ports from where the invocation requests are routed onwards on links deriving from attached connectors. Invocation actions may also be sent to a target via a given port, either on the sending object or on another object.
 */
QUmlInvocationAction::QUmlInvocationAction() :
    _onPort(0)
{
    setPropertyData();
}

QUmlInvocationAction::~QUmlInvocationAction()
{
}

QModelingObject *QUmlInvocationAction::clone() const
{
    QUmlInvocationAction *c = new QUmlInvocationAction;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegions())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartitions())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incomings())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoings())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNodes())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlInputPin *element, arguments())
        c->addArgument(dynamic_cast<QUmlInputPin *>(element->clone()));
    if (onPort())
        c->setOnPort(dynamic_cast<QUmlPort *>(onPort()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specification of the ordered set of argument values that appears during execution.
 */
const QList<QUmlInputPin *> QUmlInvocationAction::arguments() const
{
    // This is a read-write association end

    return _arguments;
}

void QUmlInvocationAction::addArgument(QUmlInputPin *argument)
{
    // This is a read-write association end

    if (!_arguments.contains(argument)) {
        _arguments.append(argument);
        if (argument && argument->asQObject() && this->asQObject())
            QObject::connect(argument->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeArgument(QObject *)));
        argument->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addInput(argument);
    }
}

void QUmlInvocationAction::removeArgument(QUmlInputPin *argument)
{
    // This is a read-write association end

    if (_arguments.contains(argument)) {
        _arguments.removeAll(argument);
        if (argument->asQObject())
            argument->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeInput(argument);
    }
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
QUmlPort *QUmlInvocationAction::onPort() const
{
    // This is a read-write association end

    return _onPort;
}

void QUmlInvocationAction::setOnPort(QUmlPort *onPort)
{
    // This is a read-write association end

    if (_onPort != onPort) {
        _onPort = onPort;
        if (onPort && onPort->asQObject() && this->asQObject())
            QObject::connect(onPort->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOnPort()));
    }
}

void QUmlInvocationAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInvocationAction");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::DocumentationRole] = QStringLiteral("Specification of the ordered set of argument values that appears during execution.");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("argument")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInvocationAction");
    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::DocumentationRole] = QStringLiteral("A optional port of the receiver object on which the behavioral feature is invoked.");
    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("onPort")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

