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
#include "qumltestidentityaction.h"

#include "private/qumltestidentityactionobject_p.h"

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

/*!
    \class QUmlTestIdentityAction

    \inmodule QtUml

    \brief A test identity action is an action that tests if two values are identical objects.
 */
QUmlTestIdentityAction::QUmlTestIdentityAction(bool createQObject) :
    _first(0),
    _result(0),
    _second(0)
{
    if (createQObject)
        _qObject = new QUmlTestIdentityActionObject(this);
    setPropertyData();
}

QUmlTestIdentityAction::~QUmlTestIdentityAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlTestIdentityAction::clone() const
{
    QUmlTestIdentityAction *c = new QUmlTestIdentityAction;
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
    if (first())
        c->setFirst(dynamic_cast<QUmlInputPin *>(first()->clone()));
    if (result())
        c->setResult(dynamic_cast<QUmlOutputPin *>(result()->clone()));
    if (second())
        c->setSecond(dynamic_cast<QUmlInputPin *>(second()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Gives the pin on which an object is placed.
 */
QUmlInputPin *QUmlTestIdentityAction::first() const
{
    // This is a read-write association end

    return _first;
}

void QUmlTestIdentityAction::setFirst(QUmlInputPin *first)
{
    // This is a read-write association end

    if (_first != first) {
        // Adjust subsetted properties
        removeInput(_first);

        _first = first;
        if (first && first->asQObject() && this->asQObject())
            QObject::connect(first->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setFirst()));
        first->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (first) {
            addInput(first);
        }
    }
}

/*!
    Tells whether the two input objects are identical.
 */
QUmlOutputPin *QUmlTestIdentityAction::result() const
{
    // This is a read-write association end

    return _result;
}

void QUmlTestIdentityAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_result != result) {
        // Adjust subsetted properties
        removeOutput(_result);

        _result = result;
        if (result && result->asQObject() && this->asQObject())
            QObject::connect(result->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setResult()));
        result->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (result) {
            addOutput(result);
        }
    }
}

/*!
    Gives the pin on which an object is placed.
 */
QUmlInputPin *QUmlTestIdentityAction::second() const
{
    // This is a read-write association end

    return _second;
}

void QUmlTestIdentityAction::setSecond(QUmlInputPin *second)
{
    // This is a read-write association end

    if (_second != second) {
        // Adjust subsetted properties
        removeInput(_second);

        _second = second;
        if (second && second->asQObject() && this->asQObject())
            QObject::connect(second->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSecond()));
        second->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (second) {
            addInput(second);
        }
    }
}

void QUmlTestIdentityAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTestIdentityAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::DocumentationRole] = QStringLiteral("Gives the pin on which an object is placed.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("first")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTestIdentityAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::DocumentationRole] = QStringLiteral("Tells whether the two input objects are identical.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-output");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("result")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTestIdentityAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::DocumentationRole] = QStringLiteral("Gives the pin on which an object is placed.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTestIdentityAction")][QStringLiteral("second")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlTestIdentityAction::setClassForProperty()
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
    _classForProperty[QStringLiteral("first")] = QStringLiteral("QUmlTestIdentityAction");
    _classForProperty[QStringLiteral("result")] = QStringLiteral("QUmlTestIdentityAction");
    _classForProperty[QStringLiteral("second")] = QStringLiteral("QUmlTestIdentityAction");
}

