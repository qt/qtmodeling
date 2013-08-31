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
#include "umlinteractionuse_p.h"

#include "private/umlgate_p.h"
#include "private/umlinteraction_p.h"
#include "private/umlproperty_p.h"
#include "private/umlvaluespecification_p.h"

UmlInteractionUse::UmlInteractionUse() :
    _refersTo(0),
    _returnValue(0),
    _returnValueRecipient(0)
{
}

// OWNED ATTRIBUTES

const QSet<UmlGate *> UmlInteractionUse::actualGate() const
{
    // This is a read-write association end

    return _actualGate;
}

void UmlInteractionUse::addActualGate(UmlGate *actualGate)
{
    // This is a read-write association end

    if (!_actualGate.contains(actualGate)) {
        _actualGate.insert(actualGate);

        // Adjust subsetted properties
        addOwnedElement(actualGate);
    }
}

void UmlInteractionUse::removeActualGate(UmlGate *actualGate)
{
    // This is a read-write association end

    if (_actualGate.contains(actualGate)) {
        _actualGate.remove(actualGate);

        // Adjust subsetted properties
        removeOwnedElement(actualGate);
    }
}

const QList<UmlValueSpecification *> UmlInteractionUse::argument() const
{
    // This is a read-write association end

    return _argument;
}

void UmlInteractionUse::addArgument(UmlValueSpecification *argument)
{
    // This is a read-write association end

    if (!_argument.contains(argument)) {
        _argument.append(argument);

        // Adjust subsetted properties
        addOwnedElement(argument);
    }
}

void UmlInteractionUse::removeArgument(UmlValueSpecification *argument)
{
    // This is a read-write association end

    if (_argument.contains(argument)) {
        _argument.removeAll(argument);

        // Adjust subsetted properties
        removeOwnedElement(argument);
    }
}

UmlInteraction *UmlInteractionUse::refersTo() const
{
    // This is a read-write association end

    return _refersTo;
}

void UmlInteractionUse::setRefersTo(UmlInteraction *refersTo)
{
    // This is a read-write association end

    if (_refersTo != refersTo) {
        _refersTo = refersTo;
    }
}

UmlValueSpecification *UmlInteractionUse::returnValue() const
{
    // This is a read-write association end

    return _returnValue;
}

void UmlInteractionUse::setReturnValue(UmlValueSpecification *returnValue)
{
    // This is a read-write association end

    if (_returnValue != returnValue) {
        // Adjust subsetted properties
        removeOwnedElement(_returnValue);

        _returnValue = returnValue;

        // Adjust subsetted properties
        if (returnValue) {
            addOwnedElement(returnValue);
        }
    }
}

UmlProperty *UmlInteractionUse::returnValueRecipient() const
{
    // This is a read-write association end

    return _returnValueRecipient;
}

void UmlInteractionUse::setReturnValueRecipient(UmlProperty *returnValueRecipient)
{
    // This is a read-write association end

    if (_returnValueRecipient != returnValueRecipient) {
        _returnValueRecipient = returnValueRecipient;
    }
}

