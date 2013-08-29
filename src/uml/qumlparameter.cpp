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
#include "qumlparameter.h"

#include <QtUml/QUmlOperation>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlParameter::QUmlParameter(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QString QUmlParameter::default_() const
{
    return UmlParameter::default_();
}

void QUmlParameter::setDefault(QString default_)
{
    UmlParameter::setDefault(default_);
}

QUmlValueSpecification *QUmlParameter::defaultValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_defaultValue);
}

void QUmlParameter::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    UmlParameter::setDefaultValue(defaultValue);
}

QtUml::ParameterDirectionKind QUmlParameter::direction() const
{
    return _direction;
}

void QUmlParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    UmlParameter::setDirection(direction);
}

QtUml::ParameterEffectKind QUmlParameter::effect() const
{
    return _effect;
}

void QUmlParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    UmlParameter::setEffect(effect);
}

bool QUmlParameter::isException() const
{
    return _isException;
}

void QUmlParameter::setException(bool isException)
{
    UmlParameter::setException(isException);
}

bool QUmlParameter::isStream() const
{
    return _isStream;
}

void QUmlParameter::setStream(bool isStream)
{
    UmlParameter::setStream(isStream);
}

QUmlOperation *QUmlParameter::operation() const
{
    return reinterpret_cast<QUmlOperation *>(_operation);
}

void QUmlParameter::setOperation(QUmlOperation *operation)
{
    UmlParameter::setOperation(operation);
}

const QSet<QUmlParameterSet *> QUmlParameter::parameterSet() const
{
    return *(reinterpret_cast<const QSet<QUmlParameterSet *> *>(&_parameterSet));
}

void QUmlParameter::addParameterSet(UmlParameterSet *parameterSet)
{
    UmlParameter::addParameterSet(parameterSet);
}

void QUmlParameter::removeParameterSet(UmlParameterSet *parameterSet)
{
    UmlParameter::removeParameterSet(parameterSet);
}

QT_END_NAMESPACE

