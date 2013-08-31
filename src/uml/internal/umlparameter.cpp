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
#include "umlparameter_p.h"

#include "private/umloperation_p.h"
#include "private/umlparameterset_p.h"
#include "private/umlvaluespecification_p.h"

UmlParameter::UmlParameter() :
    _defaultValue(0),
    _direction(QtUml::ParameterDirectionKindIn),
    _isException(false),
    _isStream(false),
    _operation(0)
{
}

// OWNED ATTRIBUTES

QString UmlParameter::default_() const
{
    // This is a read-write derived property

    qWarning("UmlParameter::default_(): to be implemented (this is a derived property)");

    return QString();
}

void UmlParameter::setDefault(QString default_)
{
    // This is a read-write derived property

    qWarning("UmlParameter::default_(): to be implemented (this is a derived property)");
    Q_UNUSED(default_);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlValueSpecification *UmlParameter::defaultValue() const
{
    // This is a read-write association end

    return _defaultValue;
}

void UmlParameter::setDefaultValue(UmlValueSpecification *defaultValue)
{
    // This is a read-write association end

    if (_defaultValue != defaultValue) {
        // Adjust subsetted properties
        removeOwnedElement(_defaultValue);

        _defaultValue = defaultValue;

        // Adjust subsetted properties
        if (defaultValue) {
            addOwnedElement(defaultValue);
        }
    }
}

QtUml::ParameterDirectionKind UmlParameter::direction() const
{
    // This is a read-write property

    return _direction;
}

void UmlParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    // This is a read-write property

    if (_direction != direction) {
        _direction = direction;
    }
}

QtUml::ParameterEffectKind UmlParameter::effect() const
{
    // This is a read-write property

    return _effect;
}

void UmlParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    // This is a read-write property

    if (_effect != effect) {
        _effect = effect;
    }
}

bool UmlParameter::isException() const
{
    // This is a read-write property

    return _isException;
}

void UmlParameter::setException(bool isException)
{
    // This is a read-write property

    if (_isException != isException) {
        _isException = isException;
    }
}

bool UmlParameter::isStream() const
{
    // This is a read-write property

    return _isStream;
}

void UmlParameter::setStream(bool isStream)
{
    // This is a read-write property

    if (_isStream != isStream) {
        _isStream = isStream;
    }
}

UmlOperation *UmlParameter::operation() const
{
    // This is a read-write association end

    return _operation;
}

void UmlParameter::setOperation(UmlOperation *operation)
{
    // This is a read-write association end

    if (_operation != operation) {
        _operation = operation;
    }
}

const QSet<UmlParameterSet *> UmlParameter::parameterSet() const
{
    // This is a read-write association end

    return _parameterSet;
}

void UmlParameter::addParameterSet(UmlParameterSet *parameterSet)
{
    // This is a read-write association end

    if (!_parameterSet.contains(parameterSet)) {
        _parameterSet.insert(parameterSet);

        // Adjust opposite properties
        if (parameterSet) {
            parameterSet->addParameter(this);
        }
    }
}

void UmlParameter::removeParameterSet(UmlParameterSet *parameterSet)
{
    // This is a read-write association end

    if (_parameterSet.contains(parameterSet)) {
        _parameterSet.remove(parameterSet);

        // Adjust opposite properties
        if (parameterSet) {
            parameterSet->removeParameter(this);
        }
    }
}

