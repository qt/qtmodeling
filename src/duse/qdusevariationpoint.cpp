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
#include "qdusevariationpoint.h"

#include "private/qdusevariationpointobject_p.h"

#include <QtDuse/QDuseModelChange>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlOpaqueExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QDuseVariationPoint

    \inmodule QtDuse

    \brief A variation point represents a specific solution for a given design dimension. A variation point entails validation rules which check for valid combinations of variation points and a script which defines the architectural changes to be enacted from such solution.
 */

/*!
    Creates a new QDuseVariationPoint. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QDuseVariationPoint::QDuseVariationPoint(bool createQModelingObject) :
    _preChangeValidationRule(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QDuseVariationPointObject(this));
}

/*!
    Returns a deep-copied clone of the QDuseVariationPoint.
*/
QModelingElement *QDuseVariationPoint::clone() const
{
    QDuseVariationPoint *c = new QDuseVariationPoint;
    c->setName(name());
    c->setRationale(rationale());
    if (preChangeValidationRule())
        c->setPreChangeValidationRule(dynamic_cast<QUmlOpaqueExpression *>(preChangeValidationRule()->clone()));
    foreach (QDuseModelChange *element, modelChanges())
        c->addModelChange(dynamic_cast<QDuseModelChange *>(element->clone()));
    foreach (QUmlElement *element, addedElements())
        c->addAddedElement(dynamic_cast<QUmlElement *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The variation point's name.
 */
QString QDuseVariationPoint::name() const
{
    // This is a read-write property

    return _name;
}

/*!
    Adjusts name to \a name.
 */
void QDuseVariationPoint::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
    }
}

/*!
    The variation point's rationale.
 */
QString QDuseVariationPoint::rationale() const
{
    // This is a read-write property

    return _rationale;
}

/*!
    Adjusts rationale to \a rationale.
 */
void QDuseVariationPoint::setRationale(QString rationale)
{
    // This is a read-write property

    if (_rationale != rationale) {
        _rationale = rationale;
    }
}

/*!
    A set of rules which should be evaluated as true if design space locations containing such variation point are to be considered as valid ones.
 */
QUmlOpaqueExpression *QDuseVariationPoint::preChangeValidationRule() const
{
    // This is a read-write property

    return _preChangeValidationRule;
}

/*!
    Adjusts preChangeValidationRule to \a preChangeValidationRule.
 */
void QDuseVariationPoint::setPreChangeValidationRule(QUmlOpaqueExpression *preChangeValidationRule)
{
    // This is a read-write property

    if (_preChangeValidationRule != preChangeValidationRule) {
        _preChangeValidationRule = preChangeValidationRule;
        if (preChangeValidationRule && preChangeValidationRule->asQModelingObject() && this->asQModelingObject())
            QObject::connect(preChangeValidationRule->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setPreChangeValidationRule()));
        preChangeValidationRule->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

/*!
    The architectural changes to be enacted as contributions arosen from this variation point. The complete set of architectural changes is the merge of architectural contributions from all involved variation points.

    \sa addModelChange(), removeModelChange()
 */
const QList<QDuseModelChange *> QDuseVariationPoint::modelChanges() const
{
    // This is a read-write property

    return _modelChanges;
}

/*!
    Adds \a modelChange to modelChanges.

    \sa modelChanges(), removeModelChange()
 */
void QDuseVariationPoint::addModelChange(QDuseModelChange *modelChange)
{
    // This is a read-write property

    if (!_modelChanges.contains(modelChange)) {
        _modelChanges.append(modelChange);
        if (modelChange && modelChange->asQModelingObject() && this->asQModelingObject())
            QObject::connect(modelChange->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeModelChange(QObject *)));
        modelChange->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

/*!
    Removes \a modelChange from modelChanges.

    \sa modelChanges(), addModelChange()
 */
void QDuseVariationPoint::removeModelChange(QDuseModelChange *modelChange)
{
    // This is a read-write property

    if (_modelChanges.contains(modelChange)) {
        _modelChanges.removeAll(modelChange);
        if (modelChange->asQModelingObject())
            modelChange->asQModelingObject()->setParent(0);
    }
}

/*!
    The architectural elements to be added as part of architecture redesign contribution arising from this variation point. The complete set of added architectural elements is the merge of architectural contributions from all involved variation points.

    \sa addAddedElement(), removeAddedElement()
 */
const QList<QUmlElement *> QDuseVariationPoint::addedElements() const
{
    // This is a read-write property

    return _addedElements;
}

/*!
    Adds \a addedElement to addedElements.

    \sa addedElements(), removeAddedElement()
 */
void QDuseVariationPoint::addAddedElement(QUmlElement *addedElement)
{
    // This is a read-write property

    if (!_addedElements.contains(addedElement)) {
        _addedElements.append(addedElement);
        if (addedElement && addedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(addedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeAddedElement(QObject *)));
    }
}

/*!
    Removes \a addedElement from addedElements.

    \sa addedElements(), addAddedElement()
 */
void QDuseVariationPoint::removeAddedElement(QUmlElement *addedElement)
{
    // This is a read-write property

    if (_addedElements.contains(addedElement)) {
        _addedElements.removeAll(addedElement);
    }
}

QT_END_NAMESPACE

