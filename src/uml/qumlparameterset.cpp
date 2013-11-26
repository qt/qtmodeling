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
#include "qumlparameterset.h"

#include "private/qumlparametersetobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlParameterSet

    \inmodule QtUml

    \brief A parameter set is an element that provides alternative sets of inputs or outputs that a behavior may use.
 */

/*!
    Creates a new QUmlParameterSet. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlParameterSet::QUmlParameterSet(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlParameterSetObject(this));
}

/*!
    Destroys the QUmlParameterSet.
 */
QUmlParameterSet::~QUmlParameterSet()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlParameterSet.
*/
QModelingElement *QUmlParameterSet::clone() const
{
    QUmlParameterSet *c = new QUmlParameterSet;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlConstraint *element, conditions())
        c->addCondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.

    \sa addCondition(), removeCondition()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlConstraint *> QUmlParameterSet::conditions() const
{
    // This is a read-write association end

    return _conditions;
}

/*!
    Adds \a condition to conditions.

    \sa conditions(), removeCondition()
 */
void QUmlParameterSet::addCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    if (!_conditions.contains(condition)) {
        _conditions.insert(condition);
        if (condition && condition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(condition->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeCondition(QObject *)));
        condition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(condition);
    }
}

/*!
    Removes \a condition from conditions.

    \sa conditions(), addCondition()
 */
void QUmlParameterSet::removeCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    if (_conditions.contains(condition)) {
        _conditions.remove(condition);
        if (condition->asQModelingObject())
            condition->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(condition);
    }
}

/*!
    Parameters in the parameter set.

    \sa addParameter(), removeParameter()

    \b {Opposite property(ies):} QUmlParameter::parameterSets().
 */
const QSet<QUmlParameter *> QUmlParameterSet::parameters() const
{
    // This is a read-write association end

    return _parameters;
}

/*!
    Adds \a parameter to parameters.

    \sa parameters(), removeParameter()
 */
void QUmlParameterSet::addParameter(QUmlParameter *parameter)
{
    // This is a read-write association end

    if (!_parameters.contains(parameter)) {
        _parameters.insert(parameter);
        if (parameter && parameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(parameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeParameter(QObject *)));

        // Adjust opposite properties
        if (parameter) {
            parameter->addParameterSet(this);
        }
    }
}

/*!
    Removes \a parameter from parameters.

    \sa parameters(), addParameter()
 */
void QUmlParameterSet::removeParameter(QUmlParameter *parameter)
{
    // This is a read-write association end

    if (_parameters.contains(parameter)) {
        _parameters.remove(parameter);

        // Adjust opposite properties
        if (parameter) {
            parameter->removeParameterSet(this);
        }
    }
}

QT_END_NAMESPACE

