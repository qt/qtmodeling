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
#include "qumlcalloperationaction.h"

#include "private/qumlcalloperationactionobject_p.h"

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
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

/*!
    \class QUmlCallOperationAction

    \inmodule QtUml

    \brief A call operation action is an action that transmits an operation call request to the target object, where it may cause the invocation of associated behavior. The argument values of the action are available to the execution of the invoked behavior. If the action is marked synchronous, the execution of the call operation action waits until the execution of the invoked behavior completes and a reply transmission is returned to the caller; otherwise execution of the action is complete when the invocation of the operation is established and the execution of the invoked operation proceeds concurrently with the execution of the calling behavior. Any values returned as part of the reply transmission are put on the result output pins of the call operation action. Upon receipt of the reply transmission, execution of the call operation action is complete.
 */
QUmlCallOperationAction::QUmlCallOperationAction(bool createQObject) :
    _operation(0),
    _target(0)
{
    if (createQObject)
        _qObject = new QUmlCallOperationActionObject(this);
    setPropertyData();
}

QUmlCallOperationAction::~QUmlCallOperationAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlCallOperationAction::clone() const
{
    QUmlCallOperationAction *c = new QUmlCallOperationAction;
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
    c->setSynchronous(isSynchronous());
    foreach (QUmlOutputPin *element, results())
        c->addResult(dynamic_cast<QUmlOutputPin *>(element->clone()));
    if (operation())
        c->setOperation(dynamic_cast<QUmlOperation *>(operation()->clone()));
    if (target())
        c->setTarget(dynamic_cast<QUmlInputPin *>(target()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The operation to be invoked by the action execution.
 */
QUmlOperation *QUmlCallOperationAction::operation() const
{
    // This is a read-write association end

    return _operation;
}

void QUmlCallOperationAction::setOperation(QUmlOperation *operation)
{
    // This is a read-write association end

    if (_operation != operation) {
        _operation = operation;
        if (operation && operation->asQObject() && this->asQObject())
            QObject::connect(operation->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOperation()));
    }
}

/*!
    The target object to which the request is sent. The classifier of the target object is used to dynamically determine a behavior to invoke. This object constitutes the context of the execution of the operation.
 */
QUmlInputPin *QUmlCallOperationAction::target() const
{
    // This is a read-write association end

    return _target;
}

void QUmlCallOperationAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    if (_target != target) {
        // Adjust subsetted properties
        removeInput(_target);

        _target = target;
        if (target && target->asQObject() && this->asQObject())
            QObject::connect(target->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setTarget()));
        target->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (target) {
            addInput(target);
        }
    }
}

void QUmlCallOperationAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlCallOperationAction");
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::DocumentationRole] = QStringLiteral("The operation to be invoked by the action execution.");
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("operation")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlCallOperationAction");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::DocumentationRole] = QStringLiteral("The target object to which the request is sent. The classifier of the target object is used to dynamically determine a behavior to invoke. This object constitutes the context of the execution of the operation.");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

