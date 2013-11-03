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

#include "private/qumlparameterobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlParameter

    \inmodule QtUml

    \brief Parameters are allowed to be treated as connectable elements.A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.Parameters have support for streaming, exceptions, and parameter sets.
 */
QUmlParameter::QUmlParameter(bool createQModelingObject) :
    _defaultValue(0),
    _direction(QtUml::ParameterDirectionKindIn),
    _effect(QtUml::ParameterEffectKindNone),
    _isException(false),
    _isStream(false),
    _operation(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlParameterObject(this));
}

QModelingElement *QUmlParameter::clone() const
{
    QUmlParameter *c = new QUmlParameter;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QUmlValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QUmlValueSpecification *>(upperValue()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlConnectableElementTemplateParameter *>(templateParameter()->clone()));
    if (defaultValue())
        c->setDefaultValue(dynamic_cast<QUmlValueSpecification *>(defaultValue()->clone()));
    c->setDirection(direction());
    c->setEffect(effect());
    c->setException(isException());
    c->setStream(isStream());
    if (operation())
        c->setOperation(dynamic_cast<QUmlOperation *>(operation()->clone()));
    foreach (QUmlParameterSet *element, parameterSets())
        c->addParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
    return c;
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

    qWarning("QUmlParameter::setDefault(): to be implemented (this is a derived property)");
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

    return _defaultValue;
}

void QUmlParameter::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    // This is a read-write association end

    if (_defaultValue != defaultValue) {
        // Adjust subsetted properties
        removeOwnedElement(_defaultValue);

        _defaultValue = defaultValue;
        if (defaultValue && defaultValue->asQModelingObject() && this->asQModelingObject())
            QObject::connect(defaultValue->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDefaultValue()));
        defaultValue->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (defaultValue) {
            addOwnedElement(defaultValue);
        }
    }
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtUml::ParameterDirectionKind QUmlParameter::direction() const
{
    // This is a read-write property

    return _direction;
}

void QUmlParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    // This is a read-write property

    if (_direction != direction) {
        _direction = direction;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("direction");
    }
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QUmlParameter::effect() const
{
    // This is a read-write property

    return _effect;
}

void QUmlParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    // This is a read-write property

    if (_effect != effect) {
        _effect = effect;
    }
}

/*!
    Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 */
bool QUmlParameter::isException() const
{
    // This is a read-write property

    return _isException;
}

void QUmlParameter::setException(bool isException)
{
    // This is a read-write property

    if (_isException != isException) {
        _isException = isException;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isException");
    }
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QUmlParameter::isStream() const
{
    // This is a read-write property

    return _isStream;
}

void QUmlParameter::setStream(bool isStream)
{
    // This is a read-write property

    if (_isStream != isStream) {
        _isStream = isStream;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isStream");
    }
}

/*!
    References the Operation owning this parameter.
 */
QUmlOperation *QUmlParameter::operation() const
{
    // This is a read-write association end

    return _operation;
}

void QUmlParameter::setOperation(QUmlOperation *operation)
{
    // This is a read-write association end

    if (_operation != operation) {
        _operation = operation;
        if (operation && operation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(operation->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOperation()));
    }
}

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
const QSet<QUmlParameterSet *> QUmlParameter::parameterSets() const
{
    // This is a read-write association end

    return _parameterSets;
}

void QUmlParameter::addParameterSet(QUmlParameterSet *parameterSet)
{
    // This is a read-write association end

    if (!_parameterSets.contains(parameterSet)) {
        _parameterSets.insert(parameterSet);
        if (parameterSet && parameterSet->asQModelingObject() && this->asQModelingObject())
            QObject::connect(parameterSet->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeParameterSet(QObject *)));

        // Adjust opposite properties
        if (parameterSet) {
            parameterSet->addParameter(this);
        }
    }
}

void QUmlParameter::removeParameterSet(QUmlParameterSet *parameterSet)
{
    // This is a read-write association end

    if (_parameterSets.contains(parameterSet)) {
        _parameterSets.remove(parameterSet);

        // Adjust opposite properties
        if (parameterSet) {
            parameterSet->removeParameter(this);
        }
    }
}

QT_END_NAMESPACE

