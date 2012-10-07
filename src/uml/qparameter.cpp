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

#include <QtUml/QValueSpecification>
#include <QtUml/QOperation>
#include <QtUml/QParameterSet>

QT_BEGIN_NAMESPACE_QTUML

class QParameterPrivate
{
public:
    explicit QParameterPrivate();
    virtual ~QParameterPrivate();

    QtUml::ParameterDirectionKind direction;
    QtUml::ParameterEffectKind effect;
    bool isException;
    bool isStream;
    QValueSpecification *defaultValue;
    QOperation *operation;
    QSet<QParameterSet *> *parameterSets;
};

QParameterPrivate::QParameterPrivate() :
    direction(QtUml::ParameterDirectionIn),
    isException(false),
    isStream(false),
    defaultValue(0),
    operation(0),
    parameterSets(new QSet<QParameterSet *>)
{
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
    : QObject(parent), d_ptr(new QParameterPrivate)
{
}

QParameter::~QParameter()
{
    delete d_ptr;
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
    return d_ptr->direction;
}

void QParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    d_ptr->direction = direction;
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QParameter::effect() const
{
    return d_ptr->effect;
}

void QParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    d_ptr->effect = effect;
}

/*!
    Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 */
bool QParameter::isException() const
{
    return d_ptr->isException;
}

void QParameter::setException(bool isException)
{
    d_ptr->isException = isException;
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QParameter::isStream() const
{
    return d_ptr->isStream;
}

void QParameter::setStream(bool isStream)
{
    d_ptr->isStream = isStream;
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QValueSpecification *QParameter::defaultValue() const
{
    return d_ptr->defaultValue;
}

void QParameter::setDefaultValue(const QValueSpecification *defaultValue)
{
    d_ptr->defaultValue = const_cast<QValueSpecification *>(defaultValue);
}

/*!
    References the Operation owning this parameter.
 */
QOperation *QParameter::operation() const
{
    return d_ptr->operation;
}

void QParameter::setOperation(const QOperation *operation)
{
    d_ptr->operation = const_cast<QOperation *>(operation);
}

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
const QSet<QParameterSet *> *QParameter::parameterSets() const
{
    return d_ptr->parameterSets;
}

void QParameter::addParameterSet(const QParameterSet *parameterSet)
{
    d_ptr->parameterSets->insert(const_cast<QParameterSet *>(parameterSet));
}

void QParameter::removeParameterSet(const QParameterSet *parameterSet)
{
    d_ptr->parameterSets->remove(const_cast<QParameterSet *>(parameterSet));
}

#include "moc_qparameter.cpp"

QT_END_NAMESPACE_QTUML

