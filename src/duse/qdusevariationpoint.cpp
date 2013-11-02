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

QT_BEGIN_NAMESPACE

/*!
    \class QDuseVariationPoint

    \inmodule QtDuse

    \brief A variation point represents a specific solution for a given design dimension. A variation point entails validation rules which check for valid combinations of variation points and a script which defines the architectural changes to be enacted from such solution.
 */
QDuseVariationPoint::QDuseVariationPoint(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QDuseVariationPointObject(this));
}

QModelingElement *QDuseVariationPoint::clone() const
{
    QDuseVariationPoint *c = new QDuseVariationPoint;
    c->setName(name());
    c->setRationale(rationale());
    c->setPreChangeValidationRule(preChangeValidationRule());
    c->setModelChange(modelChange());
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
QString QDuseVariationPoint::preChangeValidationRule() const
{
    // This is a read-write property

    return _preChangeValidationRule;
}

void QDuseVariationPoint::setPreChangeValidationRule(QString preChangeValidationRule)
{
    // This is a read-write property

    if (_preChangeValidationRule != preChangeValidationRule) {
        _preChangeValidationRule = preChangeValidationRule;
    }
}

/*!
    The architectural changes to be enacted as contributions arosen from this variation point. The complete set of architectural changes is the merge of architectural contributions from all involved variation points.
 */
QString QDuseVariationPoint::modelChange() const
{
    // This is a read-write property

    return _modelChange;
}

void QDuseVariationPoint::setModelChange(QString modelChange)
{
    // This is a read-write property

    if (_modelChange != modelChange) {
        _modelChange = modelChange;
    }
}

QT_END_NAMESPACE

