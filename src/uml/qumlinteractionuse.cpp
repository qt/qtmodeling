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
#include "qumlinteractionuse.h"

#include "private/qumlinteractionuseobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGate>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */
QUmlInteractionUse::QUmlInteractionUse(bool createQObject) :
    _refersTo(0),
    _returnValue(0),
    _returnValueRecipient(0)
{
    if (createQObject)
        _qObject = new QUmlInteractionUseObject(this);
    setPropertyData();
}

QUmlInteractionUse::~QUmlInteractionUse()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInteractionUse::clone() const
{
    QUmlInteractionUse *c = new QUmlInteractionUse;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlLifeline *element, covered())
        c->addCovered(dynamic_cast<QUmlLifeline *>(element->clone()));
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    foreach (QUmlGate *element, actualGates())
        c->addActualGate(dynamic_cast<QUmlGate *>(element->clone()));
    foreach (QUmlValueSpecification *element, arguments())
        c->addArgument(dynamic_cast<QUmlValueSpecification *>(element->clone()));
    if (refersTo())
        c->setRefersTo(dynamic_cast<QUmlInteraction *>(refersTo()->clone()));
    if (returnValue())
        c->setReturnValue(dynamic_cast<QUmlValueSpecification *>(returnValue()->clone()));
    if (returnValueRecipient())
        c->setReturnValueRecipient(dynamic_cast<QUmlProperty *>(returnValueRecipient()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The actual gates of the InteractionUse
 */
const QSet<QUmlGate *> QUmlInteractionUse::actualGates() const
{
    // This is a read-write association end

    return _actualGates;
}

void QUmlInteractionUse::addActualGate(QUmlGate *actualGate)
{
    // This is a read-write association end

    if (!_actualGates.contains(actualGate)) {
        _actualGates.insert(actualGate);
        if (actualGate && actualGate->asQObject() && this->asQObject())
            QObject::connect(actualGate->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeActualGate(QObject *)));
        actualGate->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(actualGate);
    }
}

void QUmlInteractionUse::removeActualGate(QUmlGate *actualGate)
{
    // This is a read-write association end

    if (_actualGates.contains(actualGate)) {
        _actualGates.remove(actualGate);
        if (actualGate->asQObject())
            actualGate->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(actualGate);
    }
}

/*!
    The actual arguments of the Interaction
 */
const QList<QUmlValueSpecification *> QUmlInteractionUse::arguments() const
{
    // This is a read-write association end

    return _arguments;
}

void QUmlInteractionUse::addArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (!_arguments.contains(argument)) {
        _arguments.append(argument);
        if (argument && argument->asQObject() && this->asQObject())
            QObject::connect(argument->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeArgument(QObject *)));
        argument->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(argument);
    }
}

void QUmlInteractionUse::removeArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (_arguments.contains(argument)) {
        _arguments.removeAll(argument);
        if (argument->asQObject())
            argument->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(argument);
    }
}

/*!
    Refers to the Interaction that defines its meaning
 */
QUmlInteraction *QUmlInteractionUse::refersTo() const
{
    // This is a read-write association end

    return _refersTo;
}

void QUmlInteractionUse::setRefersTo(QUmlInteraction *refersTo)
{
    // This is a read-write association end

    if (_refersTo != refersTo) {
        _refersTo = refersTo;
        if (refersTo && refersTo->asQObject() && this->asQObject())
            QObject::connect(refersTo->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setRefersTo()));
    }
}

/*!
    The value of the executed Interaction.
 */
QUmlValueSpecification *QUmlInteractionUse::returnValue() const
{
    // This is a read-write association end

    return _returnValue;
}

void QUmlInteractionUse::setReturnValue(QUmlValueSpecification *returnValue)
{
    // This is a read-write association end

    if (_returnValue != returnValue) {
        // Adjust subsetted properties
        removeOwnedElement(_returnValue);

        _returnValue = returnValue;
        if (returnValue && returnValue->asQObject() && this->asQObject())
            QObject::connect(returnValue->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setReturnValue()));
        returnValue->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (returnValue) {
            addOwnedElement(returnValue);
        }
    }
}

/*!
    The recipient of the return value.
 */
QUmlProperty *QUmlInteractionUse::returnValueRecipient() const
{
    // This is a read-write association end

    return _returnValueRecipient;
}

void QUmlInteractionUse::setReturnValueRecipient(QUmlProperty *returnValueRecipient)
{
    // This is a read-write association end

    if (_returnValueRecipient != returnValueRecipient) {
        _returnValueRecipient = returnValueRecipient;
        if (returnValueRecipient && returnValueRecipient->asQObject() && this->asQObject())
            QObject::connect(returnValueRecipient->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setReturnValueRecipient()));
    }
}

void QUmlInteractionUse::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteractionUse");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::DocumentationRole] = QStringLiteral("The actual gates of the InteractionUse");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("actualGate")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteractionUse");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::DocumentationRole] = QStringLiteral("The actual arguments of the Interaction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("argument")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteractionUse");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::DocumentationRole] = QStringLiteral("Refers to the Interaction that defines its meaning");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("refersTo")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteractionUse");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::DocumentationRole] = QStringLiteral("The value of the executed Interaction.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValue")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInteractionUse");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::DocumentationRole] = QStringLiteral("The recipient of the return value.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInteractionUse")][QStringLiteral("returnValueRecipient")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlInteractionUse::setClassForProperty()
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
    _classForProperty[QStringLiteral("covered")] = QStringLiteral("QUmlInteractionFragment");
    _classForProperty[QStringLiteral("enclosingInteraction")] = QStringLiteral("QUmlInteractionFragment");
    _classForProperty[QStringLiteral("enclosingOperand")] = QStringLiteral("QUmlInteractionFragment");
    _classForProperty[QStringLiteral("generalOrderings")] = QStringLiteral("QUmlInteractionFragment");
    _classForProperty[QStringLiteral("actualGates")] = QStringLiteral("QUmlInteractionUse");
    _classForProperty[QStringLiteral("arguments")] = QStringLiteral("QUmlInteractionUse");
    _classForProperty[QStringLiteral("refersTo")] = QStringLiteral("QUmlInteractionUse");
    _classForProperty[QStringLiteral("returnValue")] = QStringLiteral("QUmlInteractionUse");
    _classForProperty[QStringLiteral("returnValueRecipient")] = QStringLiteral("QUmlInteractionUse");
}

