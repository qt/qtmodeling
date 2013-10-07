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
#include "qumlsendobjectaction.h"

#include "private/qumlsendobjectactionobject_p.h"

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
    \class QUmlSendObjectAction

    \inmodule QtUml

    \brief A send object action is an action that transmits an object to the target object, where it may invoke behavior such as the firing of state machine transitions or the execution of an activity. The value of the object is available to the execution of invoked behaviors. The requestor continues execution immediately. Any reply message is ignored and is not transmitted to the requestor.
 */
QUmlSendObjectAction::QUmlSendObjectAction(bool createQObject) :
    _request(0),
    _target(0)
{
    if (createQObject)
        _qObject = new QUmlSendObjectActionObject(this);
    setPropertyData();
}

QUmlSendObjectAction::~QUmlSendObjectAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlSendObjectAction::clone() const
{
    QUmlSendObjectAction *c = new QUmlSendObjectAction;
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
    if (onPort())
        c->setOnPort(dynamic_cast<QUmlPort *>(onPort()->clone()));
    if (request())
        c->setRequest(dynamic_cast<QUmlInputPin *>(request()->clone()));
    if (target())
        c->setTarget(dynamic_cast<QUmlInputPin *>(target()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.
 */
QUmlInputPin *QUmlSendObjectAction::request() const
{
    // This is a read-write association end

    return _request;
}

void QUmlSendObjectAction::setRequest(QUmlInputPin *request)
{
    // This is a read-write association end

    if (_request != request) {
        _request = request;
        if (request && request->asQObject() && this->asQObject())
            QObject::connect(request->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setRequest()));
        request->asQObject()->setParent(this->asQObject());
    }
}

/*!
    The target object to which the object is sent.
 */
QUmlInputPin *QUmlSendObjectAction::target() const
{
    // This is a read-write association end

    return _target;
}

void QUmlSendObjectAction::setTarget(QUmlInputPin *target)
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

void QUmlSendObjectAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlSendObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::DocumentationRole] = QStringLiteral("The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("InvocationAction-argument");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("request")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlSendObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::DocumentationRole] = QStringLiteral("The target object to which the object is sent.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlSendObjectAction")][QStringLiteral("target")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlSendObjectAction::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("activity")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inGroups")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inInterruptibleRegions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inPartitions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inStructuredNode")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("incomings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("outgoings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("redefinedNodes")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("handlers")] = QStringLiteral("QUmlExecutableNode");
    _classForProperty[QStringLiteral("context")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("inputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("isLocallyReentrant")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPostconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPreconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("outputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("onPort")] = QStringLiteral("QUmlInvocationAction");
    _classForProperty[QStringLiteral("request")] = QStringLiteral("QUmlSendObjectAction");
    _classForProperty[QStringLiteral("target")] = QStringLiteral("QUmlSendObjectAction");
}

