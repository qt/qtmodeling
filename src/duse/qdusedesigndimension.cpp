/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtDuse module of the Qt Toolkit.
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
#include "qdusedesigndimension.h"

#include "private/qdusedesigndimensionobject_p.h"

#include <QtDuse/QDuseDesignDimensionInstance>
#include <QtDuse/QDuseVariationPoint>
#include <QtUml/QUmlOpaqueExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QDuseDesignDimension

    \inmodule QtDuse

    \brief A design dimension captures a specific degree of freedom when designing architectures in the given application domain. A design dimension entails a set of variation points which denote alternative solutions for such degree of freedom. Optionally, a variation point may define validation rules which should return a true value if that variation point is to be considered valid for the corresponding input model. A variation point may also specify a set of other variation points which should be previously evaluated, defining a sort of design dimension dependency.
 */

/*!
    Creates a new QDuseDesignDimension. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QDuseDesignDimension::QDuseDesignDimension(bool createQModelingObject) :
    _instanceSelectionRule(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QDuseDesignDimensionObject(this));
}

/*!
    Returns a deep-copied clone of the QDuseDesignDimension.
*/
QModelingElement *QDuseDesignDimension::clone() const
{
    QDuseDesignDimension *c = new QDuseDesignDimension;
    c->setName(name());
    if (instanceSelectionRule())
        c->setInstanceSelectionRule(dynamic_cast<QUmlOpaqueExpression *>(instanceSelectionRule()->clone()));
    foreach (QDuseDesignDimension *element, requiredPreviousEvaluations())
        c->addRequiredPreviousEvaluation(dynamic_cast<QDuseDesignDimension *>(element->clone()));
    foreach (QDuseVariationPoint *element, variationPoints())
        c->addVariationPoint(dynamic_cast<QDuseVariationPoint *>(element->clone()));
    foreach (QDuseDesignDimensionInstance *element, designDimensionInstances())
        c->addDesignDimensionInstance(dynamic_cast<QDuseDesignDimensionInstance *>(element->clone()));
    c->setEnabled(enabled());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The design dimension's name.
 */
QString QDuseDesignDimension::name() const
{
    // This is a read-write property

    return _name;
}

/*!
    Adjusts name to \a name.
 */
void QDuseDesignDimension::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
    }
}

/*!
    The rule for detecting a specific locus of architectural decision related to this design dimension. Such rule relies on the accompanying UML profile for the specific application domain, in order to identify the decision loci.
 */
QUmlOpaqueExpression *QDuseDesignDimension::instanceSelectionRule() const
{
    // This is a read-write property

    return _instanceSelectionRule;
}

/*!
    Adjusts instanceSelectionRule to \a instanceSelectionRule.
 */
void QDuseDesignDimension::setInstanceSelectionRule(QUmlOpaqueExpression *instanceSelectionRule)
{
    // This is a read-write property

    if (_instanceSelectionRule != instanceSelectionRule) {
        _instanceSelectionRule = instanceSelectionRule;
        if (instanceSelectionRule && instanceSelectionRule->asQModelingObject() && this->asQModelingObject())
            QObject::connect(instanceSelectionRule->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInstanceSelectionRule()));
        instanceSelectionRule->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

/*!
    The design dimensions that must be previously evaluated before this design dimension. Such dependency may be required in order to tackle dependent design dimensions and identify invalid design space locations.

    \sa addRequiredPreviousEvaluation(), removeRequiredPreviousEvaluation()
 */
const QSet<QDuseDesignDimension *> QDuseDesignDimension::requiredPreviousEvaluations() const
{
    // This is a read-write property

    return _requiredPreviousEvaluations;
}

/*!
    Adds \a requiredPreviousEvaluation to requiredPreviousEvaluations.

    \sa requiredPreviousEvaluations(), removeRequiredPreviousEvaluation()
 */
void QDuseDesignDimension::addRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation)
{
    // This is a read-write property

    if (!_requiredPreviousEvaluations.contains(requiredPreviousEvaluation)) {
        _requiredPreviousEvaluations.insert(requiredPreviousEvaluation);
        if (requiredPreviousEvaluation && requiredPreviousEvaluation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(requiredPreviousEvaluation->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRequiredPreviousEvaluation(QObject *)));
    }
}

/*!
    Removes \a requiredPreviousEvaluation from requiredPreviousEvaluations.

    \sa requiredPreviousEvaluations(), addRequiredPreviousEvaluation()
 */
void QDuseDesignDimension::removeRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation)
{
    // This is a read-write property

    if (_requiredPreviousEvaluations.contains(requiredPreviousEvaluation)) {
        _requiredPreviousEvaluations.remove(requiredPreviousEvaluation);
    }
}

/*!
    The design dimension's variation points (alternative solutions for the design dimension's concern).

    \sa addVariationPoint(), removeVariationPoint()
 */
const QList<QDuseVariationPoint *> QDuseDesignDimension::variationPoints() const
{
    // This is a read-write property

    return _variationPoints;
}

/*!
    Adds \a variationPoint to variationPoints.

    \sa variationPoints(), removeVariationPoint()
 */
void QDuseDesignDimension::addVariationPoint(QDuseVariationPoint *variationPoint)
{
    // This is a read-write property

    if (!_variationPoints.contains(variationPoint)) {
        _variationPoints.append(variationPoint);
        if (variationPoint && variationPoint->asQModelingObject() && this->asQModelingObject())
            QObject::connect(variationPoint->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeVariationPoint(QObject *)));
        variationPoint->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

/*!
    Removes \a variationPoint from variationPoints.

    \sa variationPoints(), addVariationPoint()
 */
void QDuseDesignDimension::removeVariationPoint(QDuseVariationPoint *variationPoint)
{
    // This is a read-write property

    if (_variationPoints.contains(variationPoint)) {
        _variationPoints.removeAll(variationPoint);
        if (variationPoint->asQModelingObject())
            variationPoint->asQModelingObject()->setParent(0);
    }
}

/*!
    A specific design dimension instance created for a identified locus of architectural decision.

    \sa addDesignDimensionInstance(), removeDesignDimensionInstance()
 */
const QSet<QDuseDesignDimensionInstance *> QDuseDesignDimension::designDimensionInstances() const
{
    // This is a read-write property

    return _designDimensionInstances;
}

/*!
    Adds \a designDimensionInstance to designDimensionInstances.

    \sa designDimensionInstances(), removeDesignDimensionInstance()
 */
void QDuseDesignDimension::addDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance)
{
    // This is a read-write property

    if (!_designDimensionInstances.contains(designDimensionInstance)) {
        _designDimensionInstances.insert(designDimensionInstance);
        if (designDimensionInstance && designDimensionInstance->asQModelingObject() && this->asQModelingObject())
            QObject::connect(designDimensionInstance->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeDesignDimensionInstance(QObject *)));
        designDimensionInstance->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

/*!
    Removes \a designDimensionInstance from designDimensionInstances.

    \sa designDimensionInstances(), addDesignDimensionInstance()
 */
void QDuseDesignDimension::removeDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance)
{
    // This is a read-write property

    if (_designDimensionInstances.contains(designDimensionInstance)) {
        _designDimensionInstances.remove(designDimensionInstance);
        if (designDimensionInstance->asQModelingObject())
            designDimensionInstance->asQModelingObject()->setParent(0);
    }
}

/*!
    Returns true if the design dimension should be considered in automated architecture design, otherwise returns false.
 */
bool QDuseDesignDimension::enabled() const
{
    // This is a read-write property

    return _enabled;
}

/*!
    Adjusts enabled to \a enabled.
 */
void QDuseDesignDimension::setEnabled(bool enabled)
{
    // This is a read-write property

    if (_enabled != enabled) {
        _enabled = enabled;
    }
}

QT_END_NAMESPACE

