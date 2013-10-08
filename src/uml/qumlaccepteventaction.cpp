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
#include "qumlaccepteventaction.h"

#include "private/qumlaccepteventactionobject_p.h"

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
    \class QUmlAcceptEventAction

    \inmodule QtUml

    \brief A accept event action is an action that waits for the occurrence of an event meeting specified conditions.
 */
QUmlAcceptEventAction::QUmlAcceptEventAction(bool createQObject) :
    _isUnmarshall(false)
{
    if (createQObject)
        _qObject = new QUmlAcceptEventActionObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlAcceptEventAction::~QUmlAcceptEventAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlAcceptEventAction::clone() const
{
    QUmlAcceptEventAction *c = new QUmlAcceptEventAction;
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
    c->setUnmarshall(isUnmarshall());
    foreach (QUmlOutputPin *element, results())
        c->addResult(dynamic_cast<QUmlOutputPin *>(element->clone()));
    foreach (QUmlTrigger *element, triggers())
        c->addTrigger(dynamic_cast<QUmlTrigger *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.
 */
bool QUmlAcceptEventAction::isUnmarshall() const
{
    // This is a read-write property

    return _isUnmarshall;
}

void QUmlAcceptEventAction::setUnmarshall(bool isUnmarshall)
{
    // This is a read-write property

    if (_isUnmarshall != isUnmarshall) {
        _isUnmarshall = isUnmarshall;
        _modifiedResettableProperties << QStringLiteral("isUnmarshall");
    }
}

/*!
    Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.
 */
const QSet<QUmlOutputPin *> QUmlAcceptEventAction::results() const
{
    // This is a read-write association end

    return _results;
}

void QUmlAcceptEventAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (!_results.contains(result)) {
        _results.insert(result);
        if (result && result->asQObject() && this->asQObject())
            QObject::connect(result->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeResult(QObject *)));
        result->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOutput(result);
    }
}

void QUmlAcceptEventAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_results.contains(result)) {
        _results.remove(result);
        if (result->asQObject())
            result->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(result);
    }
}

/*!
    The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.
 */
const QSet<QUmlTrigger *> QUmlAcceptEventAction::triggers() const
{
    // This is a read-write association end

    return _triggers;
}

void QUmlAcceptEventAction::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (!_triggers.contains(trigger)) {
        _triggers.insert(trigger);
        if (trigger && trigger->asQObject() && this->asQObject())
            QObject::connect(trigger->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeTrigger(QObject *)));
        trigger->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(trigger);
    }
}

void QUmlAcceptEventAction::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (_triggers.contains(trigger)) {
        _triggers.remove(trigger);
        if (trigger->asQObject())
            trigger->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(trigger);
    }
}

void QUmlAcceptEventAction::setClassForProperty()
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
    _classForProperty[QStringLiteral("isUnmarshall")] = QStringLiteral("QUmlAcceptEventAction");
    _classForProperty[QStringLiteral("results")] = QStringLiteral("QUmlAcceptEventAction");
    _classForProperty[QStringLiteral("triggers")] = QStringLiteral("QUmlAcceptEventAction");
}

void QUmlAcceptEventAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAcceptEventAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::DocumentationRole] = QStringLiteral("Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("isUnmarshall")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAcceptEventAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::DocumentationRole] = QStringLiteral("Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-output");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("results")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAcceptEventAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::DocumentationRole] = QStringLiteral("The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAcceptEventAction")][QStringLiteral("triggers")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

