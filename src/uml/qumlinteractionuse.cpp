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
QUmlInteractionUse::QUmlInteractionUse(bool createQModelingObject) :
    _refersTo(0),
    _returnValue(0),
    _returnValueRecipient(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlInteractionUseObject(this));
}

QUmlInteractionUse::~QUmlInteractionUse()
{
    if (!deletingFromQModelingObject) {
        if (_qModelingObject)
            _qModelingObject->setProperty("deletingFromModelingObject", true);
        delete _qModelingObject;
    }
}

QModelingElement *QUmlInteractionUse::clone() const
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
        if (actualGate && actualGate->asQModelingObject() && this->asQModelingObject())
            QObject::connect(actualGate->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeActualGate(QObject *)));
        actualGate->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(actualGate);
    }
}

void QUmlInteractionUse::removeActualGate(QUmlGate *actualGate)
{
    // This is a read-write association end

    if (_actualGates.contains(actualGate)) {
        _actualGates.remove(actualGate);
        if (actualGate->asQModelingObject())
            actualGate->asQModelingObject()->setParent(0);

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
        if (argument && argument->asQModelingObject() && this->asQModelingObject())
            QObject::connect(argument->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeArgument(QObject *)));
        argument->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(argument);
    }
}

void QUmlInteractionUse::removeArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    if (_arguments.contains(argument)) {
        _arguments.removeAll(argument);
        if (argument->asQModelingObject())
            argument->asQModelingObject()->setParent(0);

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
        if (refersTo && refersTo->asQModelingObject() && this->asQModelingObject())
            QObject::connect(refersTo->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRefersTo()));
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
        if (returnValue && returnValue->asQModelingObject() && this->asQModelingObject())
            QObject::connect(returnValue->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setReturnValue()));
        returnValue->asQModelingObject()->setParent(this->asQModelingObject());

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
        if (returnValueRecipient && returnValueRecipient->asQModelingObject() && this->asQModelingObject())
            QObject::connect(returnValueRecipient->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setReturnValueRecipient()));
    }
}

