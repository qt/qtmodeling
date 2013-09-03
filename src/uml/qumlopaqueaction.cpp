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

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

/*!
    \class QUmlOpaqueAction

    \inmodule QtUml

    \brief An action with implementation-specific semantics.
 */
QUmlOpaqueAction::QUmlOpaqueAction(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlOpaqueActionObject(this);
}

QUmlOpaqueAction::~QUmlOpaqueAction()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    Specifies the action in one or more languages.
 */
const QList<QString> 
QUmlOpaqueAction::body() const
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
const QSet<QUmlInputPin *> 
QUmlOpaqueAction::inputValue() const
{
    // This is a read-write association end

    return _inputValue;
}

void QUmlOpaqueAction::addInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    if (!_inputValue.contains(inputValue)) {
        _inputValue.insert(inputValue);
        if (inputValue->asQObject() && this->asQObject())
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
const QList<QString> 
QUmlOpaqueAction::language() const
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
const QSet<QUmlOutputPin *> 
QUmlOpaqueAction::outputValue() const
{
    // This is a read-write association end

    return _outputValue;
}

void QUmlOpaqueAction::addOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    if (!_outputValue.contains(outputValue)) {
        _outputValue.insert(outputValue);
        if (outputValue->asQObject() && this->asQObject())
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

