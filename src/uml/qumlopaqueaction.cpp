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
    setGroupProperties();
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

void QUmlOpaqueAction::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inGroups"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inInterruptibleRegions"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inPartitions"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStructuredNode"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedNodes"))));
    _groupProperties.insert(QStringLiteral("QUmlExecutableNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("handlers"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputs"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLocallyReentrant"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPostconditions"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPreconditions"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputs"))));
    _groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodies"))));
    _groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputValues"))));
    _groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("languages"))));
    _groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputValues"))));
}

void QUmlOpaqueAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the action in one or more languages.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("bodies")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::DocumentationRole] = QStringLiteral("Provides input to the action.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("inputValues")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::DocumentationRole] = QStringLiteral("Languages the body strings use, in the same order as the body strings");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("languages")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlOpaqueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::DocumentationRole] = QStringLiteral("Takes output from the action.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-output");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlOpaqueAction")][QStringLiteral("outputValues")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

