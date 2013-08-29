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
#include "umlopaqueaction_p.h"

#include "private/umlinputpin_p.h"
#include "private/umloutputpin_p.h"

/*!
    \class UmlOpaqueAction

    \inmodule QtUml

    \brief An action with implementation-specific semantics.
 */

UmlOpaqueAction::UmlOpaqueAction()
{
}

// OWNED ATTRIBUTES

/*!
    Specifies the action in one or more languages.
 */
const QList<QString> UmlOpaqueAction::body() const
{
    // This is a read-write property

    return _body;
}

void UmlOpaqueAction::addBody(QString body)
{
    // This is a read-write property

    if (!_body.contains(body)) {
        _body.append(body);
    }
}

void UmlOpaqueAction::removeBody(QString body)
{
    // This is a read-write property

    if (_body.contains(body)) {
        _body.removeAll(body);
    }
}

/*!
    Provides input to the action.
 */
const QSet<UmlInputPin *> UmlOpaqueAction::inputValue() const
{
    // This is a read-write association end

    return _inputValue;
}

void UmlOpaqueAction::addInputValue(UmlInputPin *inputValue)
{
    // This is a read-write association end

    if (!_inputValue.contains(inputValue)) {
        _inputValue.insert(inputValue);

        // Adjust subsetted properties
        addInput(inputValue);
    }
}

void UmlOpaqueAction::removeInputValue(UmlInputPin *inputValue)
{
    // This is a read-write association end

    if (_inputValue.contains(inputValue)) {
        _inputValue.remove(inputValue);

        // Adjust subsetted properties
        removeInput(inputValue);
    }
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
const QList<QString> UmlOpaqueAction::language() const
{
    // This is a read-write property

    return _language;
}

void UmlOpaqueAction::addLanguage(QString language)
{
    // This is a read-write property

    if (!_language.contains(language)) {
        _language.append(language);
    }
}

void UmlOpaqueAction::removeLanguage(QString language)
{
    // This is a read-write property

    if (_language.contains(language)) {
        _language.removeAll(language);
    }
}

/*!
    Takes output from the action.
 */
const QSet<UmlOutputPin *> UmlOpaqueAction::outputValue() const
{
    // This is a read-write association end

    return _outputValue;
}

void UmlOpaqueAction::addOutputValue(UmlOutputPin *outputValue)
{
    // This is a read-write association end

    if (!_outputValue.contains(outputValue)) {
        _outputValue.insert(outputValue);

        // Adjust subsetted properties
        addOutput(outputValue);
    }
}

void UmlOpaqueAction::removeOutputValue(UmlOutputPin *outputValue)
{
    // This is a read-write association end

    if (_outputValue.contains(outputValue)) {
        _outputValue.remove(outputValue);

        // Adjust subsetted properties
        removeOutput(outputValue);
    }
}

