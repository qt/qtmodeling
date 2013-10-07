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
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlParameterSet

    \inmodule QtUml

    \brief A parameter set is an element that provides alternative sets of inputs or outputs that a behavior may use.
 */
QUmlParameterSet::QUmlParameterSet(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlParameterSetObject(this);
    setPropertyData();
}

QUmlParameterSet::~QUmlParameterSet()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlParameterSet::clone() const
{
    QUmlParameterSet *c = new QUmlParameterSet;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlConstraint *element, conditions())
        c->addCondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlParameter *element, parameters())
        c->addParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.
 */
const QSet<QUmlConstraint *> QUmlParameterSet::conditions() const
{
    // This is a read-write association end

    return _conditions;
}

void QUmlParameterSet::addCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    if (!_conditions.contains(condition)) {
        _conditions.insert(condition);
        if (condition && condition->asQObject() && this->asQObject())
            QObject::connect(condition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeCondition(QObject *)));
        condition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(condition);
    }
}

void QUmlParameterSet::removeCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    if (_conditions.contains(condition)) {
        _conditions.remove(condition);
        if (condition->asQObject())
            condition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(condition);
    }
}

/*!
    Parameters in the parameter set.
 */
const QSet<QUmlParameter *> QUmlParameterSet::parameters() const
{
    // This is a read-write association end

    return _parameters;
}

void QUmlParameterSet::addParameter(QUmlParameter *parameter)
{
    // This is a read-write association end

    if (!_parameters.contains(parameter)) {
        _parameters.insert(parameter);
        if (parameter && parameter->asQObject() && this->asQObject())
            QObject::connect(parameter->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeParameter(QObject *)));

        // Adjust opposite properties
        if (parameter) {
            parameter->addParameterSet(this);
        }
    }
}

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

void QUmlParameterSet::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlParameterSet");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::DocumentationRole] = QStringLiteral("Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("condition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlParameterSet");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::DocumentationRole] = QStringLiteral("Parameters in the parameter set.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlParameterSet")][QStringLiteral("parameter")][QtModeling::OppositeEndRole] = QStringLiteral("Parameter-parameterSet");

}

void QUmlParameterSet::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("conditions")] = QStringLiteral("QUmlParameterSet");
    _classForProperty[QStringLiteral("parameters")] = QStringLiteral("QUmlParameterSet");
}

