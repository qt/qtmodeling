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
#include "qumlopaqueaction.h"

#include "private/qumlopaqueactionobject_p.h"

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
    \class QUmlOpaqueAction

    \inmodule QtUml

    \brief An action with implementation-specific semantics.
 */
QUmlOpaqueAction::QUmlOpaqueAction(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlOpaqueActionObject(this);
    setPropertyData();
}

QUmlOpaqueAction::~QUmlOpaqueAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlOpaqueAction::clone() const
{
    QUmlOpaqueAction *c = new QUmlOpaqueAction;
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
    foreach (QString element, bodies())
        c->addBody(element);
    foreach (QUmlInputPin *element, inputValues())
        c->addInputValue(dynamic_cast<QUmlInputPin *>(element->clone()));
    foreach (QString element, languages())
        c->addLanguage(element);
    foreach (QUmlOutputPin *element, outputValues())
        c->addOutputValue(dynamic_cast<QUmlOutputPin *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the action in one or more languages.
 */
const QList<QString> QUmlOpaqueAction::bodies() const
{
    // This is a read-write property

    return _bodies;
}

void QUmlOpaqueAction::addBody(QString body)
{
    // This is a read-write property

    if (!_bodies.contains(body)) {
        _bodies.append(body);
    }
}

void QUmlOpaqueAction::removeBody(QString body)
{
    // This is a read-write property

    if (_bodies.contains(body)) {
        _bodies.removeAll(body);
    }
}

/*!
    Provides input to the action.
 */
const QSet<QUmlInputPin *> QUmlOpaqueAction::inputValues() const
{
    // This is a read-write association end

    return _inputValues;
}

void QUmlOpaqueAction::addInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    if (!_inputValues.contains(inputValue)) {
        _inputValues.insert(inputValue);
        if (inputValue && inputValue->asQObject() && this->asQObject())
            QObject::connect(inputValue->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInputValue(QObject *)));
        inputValue->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addInput(inputValue);
    }
}

void QUmlOpaqueAction::removeInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    if (_inputValues.contains(inputValue)) {
        _inputValues.remove(inputValue);
        if (inputValue->asQObject())
            inputValue->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeInput(inputValue);
    }
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
const QList<QString> QUmlOpaqueAction::languages() const
{
    // This is a read-write property

    return _languages;
}

void QUmlOpaqueAction::addLanguage(QString language)
{
    // This is a read-write property

    if (!_languages.contains(language)) {
        _languages.append(language);
    }
}

void QUmlOpaqueAction::removeLanguage(QString language)
{
    // This is a read-write property

    if (_languages.contains(language)) {
        _languages.removeAll(language);
    }
}

/*!
    Takes output from the action.
 */
const QSet<QUmlOutputPin *> QUmlOpaqueAction::outputValues() const
{
    // This is a read-write association end

    return _outputValues;
}

void QUmlOpaqueAction::addOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    if (!_outputValues.contains(outputValue)) {
        _outputValues.insert(outputValue);
        if (outputValue && outputValue->asQObject() && this->asQObject())
            QObject::connect(outputValue->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOutputValue(QObject *)));
        outputValue->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOutput(outputValue);
    }
}

void QUmlOpaqueAction::removeOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    if (_outputValues.contains(outputValue)) {
        _outputValues.remove(outputValue);
        if (outputValue->asQObject())
            outputValue->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(outputValue);
    }
}

void QUmlOpaqueAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the action in one or more languages.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("body")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::DocumentationRole] = QStringLiteral("Provides input to the action.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValue")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::DocumentationRole] = QStringLiteral("Languages the body strings use, in the same order as the body strings");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("language")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::DocumentationRole] = QStringLiteral("Takes output from the action.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-output");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValue")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlOpaqueAction::setClassForProperty()
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
    _classForProperty[QStringLiteral("bodies")] = QStringLiteral("QUmlOpaqueAction");
    _classForProperty[QStringLiteral("inputValues")] = QStringLiteral("QUmlOpaqueAction");
    _classForProperty[QStringLiteral("languages")] = QStringLiteral("QUmlOpaqueAction");
    _classForProperty[QStringLiteral("outputValues")] = QStringLiteral("QUmlOpaqueAction");
}

