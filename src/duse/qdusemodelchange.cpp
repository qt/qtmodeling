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
#include "qdusemodelchange.h"

#include "private/qdusemodelchangeobject_p.h"

#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

/*!
    \class QDuseModelChange

    \inmodule QtDuse
 */
QDuseModelChange::QDuseModelChange(bool createQModelingObject) :
    _targetSelectionRule(0),
    _valueSelectionRule(0),
    _targetProperty(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QDuseModelChangeObject(this));
}

QModelingElement *QDuseModelChange::clone() const
{
    QDuseModelChange *c = new QDuseModelChange;
    if (targetSelectionRule())
        c->setTargetSelectionRule(dynamic_cast<QUmlOpaqueExpression *>(targetSelectionRule()->clone()));
    if (valueSelectionRule())
        c->setValueSelectionRule(dynamic_cast<QUmlOpaqueExpression *>(valueSelectionRule()->clone()));
    if (targetProperty())
        c->setTargetProperty(dynamic_cast<QUmlProperty *>(targetProperty()->clone()));
    return c;
}

// OWNED ATTRIBUTES


QUmlOpaqueExpression *QDuseModelChange::targetSelectionRule() const
{
    // This is a read-write property

    return _targetSelectionRule;
}

void QDuseModelChange::setTargetSelectionRule(QUmlOpaqueExpression *targetSelectionRule)
{
    // This is a read-write property

    if (_targetSelectionRule != targetSelectionRule) {
        _targetSelectionRule = targetSelectionRule;
        if (targetSelectionRule && targetSelectionRule->asQModelingObject() && this->asQModelingObject())
            QObject::connect(targetSelectionRule->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTargetSelectionRule()));
        targetSelectionRule->asQModelingObject()->setParent(this->asQModelingObject());
    }
}


QUmlOpaqueExpression *QDuseModelChange::valueSelectionRule() const
{
    // This is a read-write property

    return _valueSelectionRule;
}

void QDuseModelChange::setValueSelectionRule(QUmlOpaqueExpression *valueSelectionRule)
{
    // This is a read-write property

    if (_valueSelectionRule != valueSelectionRule) {
        _valueSelectionRule = valueSelectionRule;
        if (valueSelectionRule && valueSelectionRule->asQModelingObject() && this->asQModelingObject())
            QObject::connect(valueSelectionRule->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setValueSelectionRule()));
        valueSelectionRule->asQModelingObject()->setParent(this->asQModelingObject());
    }
}


QUmlProperty *QDuseModelChange::targetProperty() const
{
    // This is a read-write property

    return _targetProperty;
}

void QDuseModelChange::setTargetProperty(QUmlProperty *targetProperty)
{
    // This is a read-write property

    if (_targetProperty != targetProperty) {
        _targetProperty = targetProperty;
        if (targetProperty && targetProperty->asQModelingObject() && this->asQModelingObject())
            QObject::connect(targetProperty->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTargetProperty()));
    }
}

QT_END_NAMESPACE

