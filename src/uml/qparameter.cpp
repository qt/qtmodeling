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

#include <QtUml/QValueSpecification>
#include <QtUml/QOperation>
#include <QtUml/QParameterSet>

QT_BEGIN_NAMESPACE_QTUML

QParameterPrivate::QParameterPrivate(QParameter *q_umlptr) :
    isException(false),
    direction(QtUml::ParameterDirectionIn),
    isStream(false),
    operation(0),
    defaultValue(0),
    parameterSets(new QSet<QParameterSet *>)
{
    this->q_umlptr = q_umlptr;
}

QParameterPrivate::~QParameterPrivate()
{
    delete parameterSets;
}

/*!
    \class QParameter

    \inmodule QtUml

    \brief Parameters are allowed to be treated as connectable elements.A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.Parameters have support for streaming, exceptions, and parameter sets.
 */

QParameter::QParameter(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QParameterPrivate(this);
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
    // This is a read-write attribute

    QTUML_D(const QParameter);
    return d->isException;
}

void QParameter::setException(bool isException)
{
    // This is a read-write attribute

    QTUML_D(QParameter);
    if (d->isException != isException) {
        d->isException = isException;
    }
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QParameter::default_() const
{
    // This is a read-write derived attribute

    qWarning("QParameter::default_: to be implemented (this is a derived attribute)");

    //QTUML_D(const QParameter);
    //return <derived-return>;
}

void QParameter::setDefault_(QString default_)
{
    // This is a read-write derived attribute

    qWarning("QParameter::setDefault_: to be implemented (this is a derived attribute)");

    //QTUML_D(QParameter);
    if (false /* <derived-change-criteria> */) {
        // <derived-code>
    }
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtUml::ParameterDirectionKind QParameter::direction() const
{
    // This is a read-write attribute

    QTUML_D(const QParameter);
    return d->direction;
}

void QParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    // This is a read-write attribute

    QTUML_D(QParameter);
    if (d->direction != direction) {
        d->direction = direction;
    }
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QParameter::isStream() const
{
    // This is a read-write attribute

    QTUML_D(const QParameter);
    return d->isStream;
}

void QParameter::setStream(bool isStream)
{
    // This is a read-write attribute

    QTUML_D(QParameter);
    if (d->isStream != isStream) {
        d->isStream = isStream;
    }
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QParameter::effect() const
{
    // This is a read-write attribute

    QTUML_D(const QParameter);
    return d->effect;
}

void QParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    // This is a read-write attribute

    QTUML_D(QParameter);
    if (d->effect != effect) {
        d->effect = effect;
    }
}

/*!
    References the Operation owning this parameter.
 */
QOperation *QParameter::operation() const
{
    // This is a read-write association end

    QTUML_D(const QParameter);
    return d->operation;
}

void QParameter::setOperation(QOperation *operation)
{
    // This is a read-write association end

    QTUML_D(QParameter);
    if (d->operation != operation) {
        // Adjust opposite property
        if (d->operation)
            d->operation->removeOwnedParameter(this);

        d->operation = operation;

        // Adjust subsetted property(ies)
        d->QNamedElementPrivate::setNamespace_(dynamic_cast<QNamespace *>(operation));

        // Adjust opposite property
        if (operation)
            operation->addOwnedParameter(this);
    }
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QValueSpecification *QParameter::defaultValue() const
{
    // This is a read-write association end

    QTUML_D(const QParameter);
    return d->defaultValue;
}

void QParameter::setDefaultValue(QValueSpecification *defaultValue)
{
    // This is a read-write association end

    QTUML_D(QParameter);
    if (d->defaultValue != defaultValue) {
        // Adjust subsetted property(ies)
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(defaultValue));
        }
    }
}

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
const QSet<QParameterSet *> *QParameter::parameterSets() const
{
    // This is a read-write association end

    QTUML_D(const QParameter);
    return d->parameterSets;
}

void QParameter::addParameterSet(QParameterSet *parameterSet)
{
    // This is a read-write association end

    QTUML_D(QParameter);
    if (!d->parameterSets->contains(parameterSet)) {
        d->parameterSets->insert(parameterSet);

        // Adjust opposite property
        parameterSet->addParameter(this);
    }
}

void QParameter::removeParameterSet(QParameterSet *parameterSet)
{
    // This is a read-write association end

    QTUML_D(QParameter);
    if (d->parameterSets->contains(parameterSet)) {
        d->parameterSets->remove(parameterSet);

        // Adjust opposite property
        if (parameterSet)
            parameterSet->removeParameter(this);
    }
}

#include "moc_qparameter.cpp"

QT_END_NAMESPACE_QTUML

