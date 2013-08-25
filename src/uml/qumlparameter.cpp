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
#include "qumlparameter_p.h"

#include <QtUml/QUmlOperation>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlParameterPrivate::QUmlParameterPrivate() :
    defaultValue(0),
    direction(QtUml::ParameterDirectionIn),
    isException(false),
    isStream(false),
    operation(0)
{
}

/*!
    \class QUmlParameter

    \inmodule QtUml

    \brief Parameters are allowed to be treated as connectable elements.A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.Parameters have support for streaming, exceptions, and parameter sets.
 */

QUmlParameter::QUmlParameter(bool create_d_ptr) :
    QUmlMultiplicityElement(false),
    QUmlConnectableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlParameterPrivate);
}

// OWNED ATTRIBUTES

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QUmlParameter::default_() const
{
    // This is a read-write derived property

    qWarning("QUmlParameter::default_(): to be implemented (this is a derived property)");

    return QString();
}

void QUmlParameter::setDefault(QString default_)
{
    // This is a read-write derived property

    qWarning("QUmlParameter::default_(): to be implemented (this is a derived property)");
    Q_UNUSED(default_);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QUmlValueSpecification *QUmlParameter::defaultValue() const
{
    // This is a read-write association end

    QM_D(const QUmlParameter);
    return d->defaultValue;
}

void QUmlParameter::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    // This is a read-write association end

    QM_D(QUmlParameter);
    if (d->defaultValue != defaultValue) {
        d->defaultValue = defaultValue;
    }
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtUml::ParameterDirectionKind QUmlParameter::direction() const
{
    // This is a read-write property

    QM_D(const QUmlParameter);
    return d->direction;
}

void QUmlParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    // This is a read-write property

    QM_D(QUmlParameter);
    if (d->direction != direction) {
        d->direction = direction;
    }
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QUmlParameter::effect() const
{
    // This is a read-write property

    QM_D(const QUmlParameter);
    return d->effect;
}

void QUmlParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    // This is a read-write property

    QM_D(QUmlParameter);
    if (d->effect != effect) {
        d->effect = effect;
    }
}

/*!
    Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 */
bool QUmlParameter::isException() const
{
    // This is a read-write property

    QM_D(const QUmlParameter);
    return d->isException;
}

void QUmlParameter::setException(bool isException)
{
    // This is a read-write property

    QM_D(QUmlParameter);
    if (d->isException != isException) {
        d->isException = isException;
    }
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QUmlParameter::isStream() const
{
    // This is a read-write property

    QM_D(const QUmlParameter);
    return d->isStream;
}

void QUmlParameter::setStream(bool isStream)
{
    // This is a read-write property

    QM_D(QUmlParameter);
    if (d->isStream != isStream) {
        d->isStream = isStream;
    }
}

/*!
    References the Operation owning this parameter.
 */
QUmlOperation *QUmlParameter::operation() const
{
    // This is a read-write association end

    QM_D(const QUmlParameter);
    return d->operation;
}

void QUmlParameter::setOperation(QUmlOperation *operation)
{
    // This is a read-write association end

    QM_D(QUmlParameter);
    if (d->operation != operation) {
        d->operation = operation;
    }
}

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
QSet<QUmlParameterSet *> QUmlParameter::parameterSet() const
{
    // This is a read-write association end

    QM_D(const QUmlParameter);
    return d->parameterSet;
}

void QUmlParameter::addParameterSet(QUmlParameterSet *parameterSet)
{
    // This is a read-write association end

    QM_D(QUmlParameter);
    if (!d->parameterSet.contains(parameterSet)) {
        d->parameterSet.insert(parameterSet);
    }
}

void QUmlParameter::removeParameterSet(QUmlParameterSet *parameterSet)
{
    // This is a read-write association end

    QM_D(QUmlParameter);
    if (d->parameterSet.contains(parameterSet)) {
        d->parameterSet.remove(parameterSet);
    }
}

QT_END_NAMESPACE

