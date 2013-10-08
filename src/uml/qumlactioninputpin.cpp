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
#include "qumlactioninputpin.h"

#include "private/qumlactioninputpinobject_p.h"

#include <QtUml/QUmlAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlActionInputPin

    \inmodule QtUml

    \brief An action input pin is a kind of pin that executes an action to determine the values to input to another.
 */
QUmlActionInputPin::QUmlActionInputPin(bool createQObject) :
    QUmlInputPin(false),
    _fromAction(0)
{
    if (createQObject)
        _qObject = new QUmlActionInputPinObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlActionInputPin::~QUmlActionInputPin()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlActionInputPin::clone() const
{
    QUmlActionInputPin *c = new QUmlActionInputPin;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QUmlValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QUmlValueSpecification *>(upperValue()->clone()));
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
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    foreach (QUmlState *element, inStates())
        c->addInState(dynamic_cast<QUmlState *>(element->clone()));
    c->setControlType(isControlType());
    c->setOrdering(ordering());
    if (selection())
        c->setSelection(dynamic_cast<QUmlBehavior *>(selection()->clone()));
    if (upperBound())
        c->setUpperBound(dynamic_cast<QUmlValueSpecification *>(upperBound()->clone()));
    c->setControl(isControl());
    if (fromAction())
        c->setFromAction(dynamic_cast<QUmlAction *>(fromAction()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The action used to provide values.
 */
QUmlAction *QUmlActionInputPin::fromAction() const
{
    // This is a read-write association end

    return _fromAction;
}

void QUmlActionInputPin::setFromAction(QUmlAction *fromAction)
{
    // This is a read-write association end

    if (_fromAction != fromAction) {
        // Adjust subsetted properties
        removeOwnedElement(_fromAction);

        _fromAction = fromAction;
        if (fromAction && fromAction->asQObject() && this->asQObject())
            QObject::connect(fromAction->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setFromAction()));
        fromAction->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (fromAction) {
            addOwnedElement(fromAction);
        }
    }
}

void QUmlActionInputPin::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("isOrdered")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("isUnique")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("lower")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("lowerValue")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("upper")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("upperValue")] = QStringLiteral("QUmlMultiplicityElement");
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
    _classForProperty[QStringLiteral("type")] = QStringLiteral("QUmlTypedElement");
    _classForProperty[QStringLiteral("inStates")] = QStringLiteral("QUmlObjectNode");
    _classForProperty[QStringLiteral("isControlType")] = QStringLiteral("QUmlObjectNode");
    _classForProperty[QStringLiteral("ordering")] = QStringLiteral("QUmlObjectNode");
    _classForProperty[QStringLiteral("selection")] = QStringLiteral("QUmlObjectNode");
    _classForProperty[QStringLiteral("upperBound")] = QStringLiteral("QUmlObjectNode");
    _classForProperty[QStringLiteral("isControl")] = QStringLiteral("QUmlPin");
    _classForProperty[QStringLiteral("fromAction")] = QStringLiteral("QUmlActionInputPin");
}

void QUmlActionInputPin::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActionInputPin");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::DocumentationRole] = QStringLiteral("The action used to provide values.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionInputPin")][QStringLiteral("fromAction")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

