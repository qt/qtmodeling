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
#include "qumlreplyaction.h"

#include "private/qumlreplyactionobject_p.h"

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
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlTrigger>
/*!
    \class QUmlReplyAction

    \inmodule QtUml

    \brief A reply action is an action that accepts a set of return values and a value containing return information produced by a previous accept call action. The reply action returns the values to the caller of the previous call, completing execution of the call.
 */
QUmlReplyAction::QUmlReplyAction(bool createQObject) :
    _replyToCall(0),
    _returnInformation(0)
{
    if (createQObject)
        _qObject = new QUmlReplyActionObject(this);
    setPropertyData();
}

QUmlReplyAction::~QUmlReplyAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlReplyAction::clone() const
{
    QUmlReplyAction *c = new QUmlReplyAction;
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
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostcondition())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPrecondition())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    if (replyToCall())
        c->setReplyToCall(dynamic_cast<QUmlTrigger *>(replyToCall()->clone()));
    foreach (QUmlInputPin *element, replyValue())
        c->addReplyValue(dynamic_cast<QUmlInputPin *>(element->clone()));
    if (returnInformation())
        c->setReturnInformation(dynamic_cast<QUmlInputPin *>(returnInformation()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The trigger specifying the operation whose call is being replied to.
 */
QUmlTrigger *QUmlReplyAction::replyToCall() const
{
    // This is a read-write association end

    return _replyToCall;
}

void QUmlReplyAction::setReplyToCall(QUmlTrigger *replyToCall)
{
    // This is a read-write association end

    if (_replyToCall != replyToCall) {
        _replyToCall = replyToCall;
        if (replyToCall && replyToCall->asQObject() && this->asQObject())
            QObject::connect(replyToCall->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setReplyToCall()));
    }
}

/*!
    A list of pins containing the reply values of the operation. These values are returned to the caller.
 */
const QSet<QUmlInputPin *> QUmlReplyAction::replyValue() const
{
    // This is a read-write association end

    return _replyValue;
}

void QUmlReplyAction::addReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    if (!_replyValue.contains(replyValue)) {
        _replyValue.insert(replyValue);
        if (replyValue && replyValue->asQObject() && this->asQObject())
            QObject::connect(replyValue->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeReplyValue(QObject *)));
        replyValue->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addInput(replyValue);
    }
}

void QUmlReplyAction::removeReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    if (_replyValue.contains(replyValue)) {
        _replyValue.remove(replyValue);
        if (replyValue->asQObject())
            replyValue->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeInput(replyValue);
    }
}

/*!
    A pin containing the return information value produced by an earlier AcceptCallAction.
 */
QUmlInputPin *QUmlReplyAction::returnInformation() const
{
    // This is a read-write association end

    return _returnInformation;
}

void QUmlReplyAction::setReturnInformation(QUmlInputPin *returnInformation)
{
    // This is a read-write association end

    if (_returnInformation != returnInformation) {
        // Adjust subsetted properties
        removeInput(_returnInformation);

        _returnInformation = returnInformation;
        if (returnInformation && returnInformation->asQObject() && this->asQObject())
            QObject::connect(returnInformation->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setReturnInformation()));
        returnInformation->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (returnInformation) {
            addInput(returnInformation);
        }
    }
}

void QUmlReplyAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("replyToCall")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("replyToCall")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("replyToCall")][QtModeling::DocumentationRole] = QStringLiteral("The trigger specifying the operation whose call is being replied to.");
    QModelingObject::propertyDataHash[QStringLiteral("replyToCall")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("replyToCall")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("replyToCall")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("replyValue")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("replyValue")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("replyValue")][QtModeling::DocumentationRole] = QStringLiteral("A list of pins containing the reply values of the operation. These values are returned to the caller.");
    QModelingObject::propertyDataHash[QStringLiteral("replyValue")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("replyValue")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("replyValue")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("returnInformation")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("returnInformation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("returnInformation")][QtModeling::DocumentationRole] = QStringLiteral("A pin containing the return information value produced by an earlier AcceptCallAction.");
    QModelingObject::propertyDataHash[QStringLiteral("returnInformation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("returnInformation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("returnInformation")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

