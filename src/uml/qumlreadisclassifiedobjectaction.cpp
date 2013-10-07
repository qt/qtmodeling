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
#include "qumlreadisclassifiedobjectaction.h"

#include "private/qumlreadisclassifiedobjectactionobject_p.h"

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
    \class QUmlReadIsClassifiedObjectAction

    \inmodule QtUml

    \brief A read is classified object action is an action that determines whether a runtime object is classified by a given classifier.
 */
QUmlReadIsClassifiedObjectAction::QUmlReadIsClassifiedObjectAction(bool createQObject) :
    _classifier(0),
    _isDirect(false),
    _object(0),
    _result(0)
{
    if (createQObject)
        _qObject = new QUmlReadIsClassifiedObjectActionObject(this);
    setPropertyData();
}

QUmlReadIsClassifiedObjectAction::~QUmlReadIsClassifiedObjectAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlReadIsClassifiedObjectAction::clone() const
{
    QUmlReadIsClassifiedObjectAction *c = new QUmlReadIsClassifiedObjectAction;
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
    if (classifier())
        c->setClassifier(dynamic_cast<QUmlClassifier *>(classifier()->clone()));
    c->setDirect(isDirect());
    if (object())
        c->setObject(dynamic_cast<QUmlInputPin *>(object()->clone()));
    if (result())
        c->setResult(dynamic_cast<QUmlOutputPin *>(result()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier against which the classification of the input object is tested.
 */
QUmlClassifier *QUmlReadIsClassifiedObjectAction::classifier() const
{
    // This is a read-write association end

    return _classifier;
}

void QUmlReadIsClassifiedObjectAction::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    if (_classifier != classifier) {
        _classifier = classifier;
        if (classifier && classifier->asQObject() && this->asQObject())
            QObject::connect(classifier->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setClassifier()));
    }
}

/*!
    Indicates whether the classifier must directly classify the input object.
 */
bool QUmlReadIsClassifiedObjectAction::isDirect() const
{
    // This is a read-write property

    return _isDirect;
}

void QUmlReadIsClassifiedObjectAction::setDirect(bool isDirect)
{
    // This is a read-write property

    if (_isDirect != isDirect) {
        _isDirect = isDirect;
        _modifiedResettableProperties << QStringLiteral("isDirect");
    }
}

/*!
    Holds the object whose classification is to be tested.
 */
QUmlInputPin *QUmlReadIsClassifiedObjectAction::object() const
{
    // This is a read-write association end

    return _object;
}

void QUmlReadIsClassifiedObjectAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;
        if (object && object->asQObject() && this->asQObject())
            QObject::connect(object->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setObject()));
        object->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

/*!
    After termination of the action, will hold the result of the test.
 */
QUmlOutputPin *QUmlReadIsClassifiedObjectAction::result() const
{
    // This is a read-write association end

    return _result;
}

void QUmlReadIsClassifiedObjectAction::setResult(QUmlOutputPin *result)
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

void QUmlReadIsClassifiedObjectAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::DocumentationRole] = QStringLiteral("The classifier against which the classification of the input object is tested.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("classifier")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::DocumentationRole] = QStringLiteral("Indicates whether the classifier must directly classify the input object.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("isDirect")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::DocumentationRole] = QStringLiteral("Holds the object whose classification is to be tested.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("object")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::DocumentationRole] = QStringLiteral("After termination of the action, will hold the result of the test.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-output");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReadIsClassifiedObjectAction")][QStringLiteral("result")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlReadIsClassifiedObjectAction::setClassForProperty()
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
    _classForProperty[QStringLiteral("classifier")] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
    _classForProperty[QStringLiteral("isDirect")] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
    _classForProperty[QStringLiteral("object")] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
    _classForProperty[QStringLiteral("result")] = QStringLiteral("QUmlReadIsClassifiedObjectAction");
}

