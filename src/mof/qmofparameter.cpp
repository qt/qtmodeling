/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofparameter.h"

#include "private/qmofparameterobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofOperation>
#include <QtMof/QMofType>
#include <QtMof/QMofValueSpecification>

/*!
    \class QMofParameter

    \inmodule QtMof

    \brief A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.
 */
QMofParameter::QMofParameter(bool createQModelingObject) :
    _defaultValue(0),
    _direction(QtMof::ParameterDirectionKindIn),
    _operation(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofParameterObject(this));
}

QModelingElement *QMofParameter::clone() const
{
    QMofParameter *c = new QMofParameter;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QMofType *>(type()->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QMofValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QMofValueSpecification *>(upperValue()->clone()));
    if (defaultValue())
        c->setDefaultValue(dynamic_cast<QMofValueSpecification *>(defaultValue()->clone()));
    c->setDirection(direction());
    if (operation())
        c->setOperation(dynamic_cast<QMofOperation *>(operation()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QMofParameter::default_() const
{
    // This is a read-only derived property

    qWarning("MofParameter::default_(): to be implemented (this is a derived property)");

    return QString();
}

void QMofParameter::setDefault(QString default_)
{
    // This is a read-only derived property

    qWarning("MofParameter::setDefault(): to be implemented (this is a derived property)");
    Q_UNUSED(default_);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QMofValueSpecification *QMofParameter::defaultValue() const
{
    // This is a read-write association end

    return _defaultValue;
}

void QMofParameter::setDefaultValue(QMofValueSpecification *defaultValue)
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
QtMof::ParameterDirectionKind QMofParameter::direction() const
{
    // This is a read-write property

    return _direction;
}

void QMofParameter::setDirection(QtMof::ParameterDirectionKind direction)
{
    // This is a read-write property

    if (_direction != direction) {
        _direction = direction;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("direction");
    }
}

/*!
    References the Operation owning this parameter.
 */
QMofOperation *QMofParameter::operation() const
{
    // This is a read-write association end

    return _operation;
}

void QMofParameter::setOperation(QMofOperation *operation)
{
    // This is a read-write association end

    if (_operation != operation) {
        _operation = operation;
        if (operation && operation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(operation->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOperation()));
    }
}

