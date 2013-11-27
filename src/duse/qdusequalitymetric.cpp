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
#include "qdusequalitymetric.h"

#include "private/qdusequalitymetricobject_p.h"

#include <QtUml/QUmlOpaqueExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QDuseQualityMetric

    \inmodule QtDuse

    \brief A quality metric defined for the corresponding design space.
 */

/*!
    Creates a new QDuseQualityMetric. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QDuseQualityMetric::QDuseQualityMetric(bool createQModelingObject) :
    _expression(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QDuseQualityMetricObject(this));
}

/*!
    Destroys the QDuseQualityMetric.
 */
QDuseQualityMetric::~QDuseQualityMetric()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QDuseQualityMetric.
*/
QModelingElement *QDuseQualityMetric::clone() const
{
    QDuseQualityMetric *c = new QDuseQualityMetric;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    c->setName(name());
    c->setValue(value());
    if (expression())
        c->setExpression(dynamic_cast<QUmlOpaqueExpression *>(expression()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The quality metric's name.
 */
QString QDuseQualityMetric::name() const
{
    // This is a read-write property

    return _name;
}

/*!
    Adjusts name to \a name.
 */
void QDuseQualityMetric::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
    }
}

/*!
    The quality metric's value.
 */
double QDuseQualityMetric::value() const
{
    // This is a read-write property

    return _value;
}

/*!
    Adjusts value to \a value.
 */
void QDuseQualityMetric::setValue(double value)
{
    // This is a read-write property

    if (_value != value) {
        _value = value;
    }
}

/*!
    The quality metric's evaluation expression.
 */
QUmlOpaqueExpression *QDuseQualityMetric::expression() const
{
    // This is a read-write property

    return _expression;
}

/*!
    Adjusts expression to \a expression.
 */
void QDuseQualityMetric::setExpression(QUmlOpaqueExpression *expression)
{
    // This is a read-write property

    if (_expression != expression) {
        _expression = expression;
        if (expression && expression->asQModelingObject() && this->asQModelingObject())
            QObject::connect(expression->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setExpression()));
        expression->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

QT_END_NAMESPACE

