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
    foreach (QString element, body())
        c->addBody(element);
    foreach (QUmlInputPin *element, inputValue())
        c->addInputValue(dynamic_cast<QUmlInputPin *>(element->clone()));
    foreach (QString element, language())
        c->addLanguage(element);
    foreach (QUmlOutputPin *element, outputValue())
        c->addOutputValue(dynamic_cast<QUmlOutputPin *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the action in one or more languages.
 */
const QList<QString> QUmlOpaqueAction::body() const
{
    // This is a read-write property

    return _body;
}

void QUmlOpaqueAction::addBody(QString body)
{
    // This is a read-write property

    if (!_body.contains(body)) {
        _body.append(body);
    }
}

void QUmlOpaqueAction::removeBody(QString body)
{
    // This is a read-write property

    if (_body.contains(body)) {
        _body.removeAll(body);
    }
}

/*!
    Provides input to the action.
 */
const QSet<QUmlInputPin *> QUmlOpaqueAction::inputValue() const
{
    // This is a read-write association end

    return _inputValue;
}

void QUmlOpaqueAction::addInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    if (!_inputValue.contains(inputValue)) {
        _inputValue.insert(inputValue);
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

    if (_inputValue.contains(inputValue)) {
        _inputValue.remove(inputValue);
        if (inputValue->asQObject())
            inputValue->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeInput(inputValue);
    }
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
const QList<QString> QUmlOpaqueAction::language() const
{
    // This is a read-write property

    return _language;
}

void QUmlOpaqueAction::addLanguage(QString language)
{
    // This is a read-write property

    if (!_language.contains(language)) {
        _language.append(language);
    }
}

void QUmlOpaqueAction::removeLanguage(QString language)
{
    // This is a read-write property

    if (_language.contains(language)) {
        _language.removeAll(language);
    }
}

/*!
    Takes output from the action.
 */
const QSet<QUmlOutputPin *> QUmlOpaqueAction::outputValue() const
{
    // This is a read-write association end

    return _outputValue;
}

void QUmlOpaqueAction::addOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    if (!_outputValue.contains(outputValue)) {
        _outputValue.insert(outputValue);
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

    if (_outputValue.contains(outputValue)) {
        _outputValue.remove(outputValue);
        if (outputValue->asQObject())
            outputValue->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(outputValue);
    }
}

void QUmlOpaqueAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("body")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("body")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("body")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the action in one or more languages.");
    QModelingObject::propertyDataHash[QStringLiteral("body")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("body")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("body")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::DocumentationRole] = QStringLiteral("Provides input to the action.");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("language")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("language")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("language")][QtModeling::DocumentationRole] = QStringLiteral("Languages the body strings use, in the same order as the body strings");
    QModelingObject::propertyDataHash[QStringLiteral("language")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("language")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("language")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("outputValue")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("outputValue")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("outputValue")][QtModeling::DocumentationRole] = QStringLiteral("Takes output from the action.");
    QModelingObject::propertyDataHash[QStringLiteral("outputValue")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("outputValue")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-output");
    QModelingObject::propertyDataHash[QStringLiteral("outputValue")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

