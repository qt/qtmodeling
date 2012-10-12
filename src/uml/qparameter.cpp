/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qparameter.h"
#include "qparameter_p.h"
#include "qelement_p.h"

#include <QtUml/QValueSpecification>
#include <QtUml/QOperation>
#include <QtUml/QParameterSet>

QT_BEGIN_NAMESPACE_QTUML

QParameterPrivate::QParameterPrivate() :
    isException(false),
    direction(QtUml::ParameterDirectionIn),
    isStream(false),
    operation(0),
    defaultValue(0),
    parameterSets(new QSet<QParameterSet *>)
{
}

QParameterPrivate::~QParameterPrivate()
{
    delete parameterSets;
}

void QParameterPrivate::setException(bool isException)
{
    this->isException = isException;
}

void QParameterPrivate::setDirection(QtUml::ParameterDirectionKind direction)
{
    this->direction = direction;
}

void QParameterPrivate::setStream(bool isStream)
{
    this->isStream = isStream;
}

void QParameterPrivate::setEffect(QtUml::ParameterEffectKind effect)
{
    this->effect = effect;
}

void QParameterPrivate::setOperation(QOperation *operation)
{
    this->operation = operation;
}

void QParameterPrivate::setDefaultValue(QValueSpecification *defaultValue)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->defaultValue);

    this->defaultValue = defaultValue;

    // Adjust subsetted property(ies)
    addOwnedElement(defaultValue);
}

void QParameterPrivate::addParameterSet(QParameterSet *parameterSet)
{
    this->parameterSets->insert(parameterSet);
}

void QParameterPrivate::removeParameterSet(QParameterSet *parameterSet)
{
    this->parameterSets->remove(parameterSet);
}

/*!
    \class QParameter

    \inmodule QtUml

    \brief Parameters are allowed to be treated as connectable elements.A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.Parameters have support for streaming, exceptions, and parameter sets.
 */

QParameter::QParameter(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QParameterPrivate;
}

QParameter::QParameter(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QParameterPrivate;
}

QParameter::~QParameter()
{
}

/*!
    Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 */
bool QParameter::isException() const
{
    QTUML_D(const QParameter);
    return d->isException;
}

void QParameter::setException(bool isException)
{
    QTUML_D(QParameter);
    if (d->isException != isException) {
        d->setException(isException);
    }
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QParameter::default_() const
{
    qWarning("QParameter::default_: to be implemented (this is a derived attribute)");
}

void QParameter::setDefault_(QString default_)
{
    qWarning("QParameter::setDefault_: to be implemented (this is a derived attribute)");
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtUml::ParameterDirectionKind QParameter::direction() const
{
    QTUML_D(const QParameter);
    return d->direction;
}

void QParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    QTUML_D(QParameter);
    if (d->direction != direction) {
        d->setDirection(direction);
    }
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QParameter::isStream() const
{
    QTUML_D(const QParameter);
    return d->isStream;
}

void QParameter::setStream(bool isStream)
{
    QTUML_D(QParameter);
    if (d->isStream != isStream) {
        d->setStream(isStream);
    }
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QParameter::effect() const
{
    QTUML_D(const QParameter);
    return d->effect;
}

void QParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    QTUML_D(QParameter);
    if (d->effect != effect) {
        d->setEffect(effect);
    }
}

/*!
    References the Operation owning this parameter.
 */
QOperation *QParameter::operation() const
{
    QTUML_D(const QParameter);
    return d->operation;
}

void QParameter::setOperation(QOperation *operation)
{
    QTUML_D(QParameter);
    if (d->operation != operation) {
        d->setOperation(operation);

        // Adjust opposite property
        operation->addOwnedParameter(this);
    }
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QValueSpecification *QParameter::defaultValue() const
{
    QTUML_D(const QParameter);
    return d->defaultValue;
}

void QParameter::setDefaultValue(QValueSpecification *defaultValue)
{
    QTUML_D(QParameter);
    if (d->defaultValue != defaultValue) {
        d->setDefaultValue(defaultValue);
    }
}

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
const QSet<QParameterSet *> *QParameter::parameterSets() const
{
    QTUML_D(const QParameter);
    return d->parameterSets;
}

void QParameter::addParameterSet(QParameterSet *parameterSet)
{
    QTUML_D(QParameter);
    if (!d->parameterSets->contains(parameterSet)) {
        d->addParameterSet(parameterSet);

        // Adjust opposite property
        parameterSet->addParameter(this);
    }
}

void QParameter::removeParameterSet(QParameterSet *parameterSet)
{
    QTUML_D(QParameter);
    if (d->parameterSets->contains(parameterSet)) {
        d->removeParameterSet(parameterSet);

        // Adjust opposite property
        parameterSet->removeParameter(this);
    }
}

#include "moc_qparameter.cpp"

QT_END_NAMESPACE_QTUML

