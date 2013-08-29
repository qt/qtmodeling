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
#include "umltimeexpression_p.h"

#include "private/umlobservation_p.h"

/*!
    \class UmlTimeExpression

    \inmodule QtUml

    \brief A time expression defines a value specification that represents a time value.
 */

UmlTimeExpression::UmlTimeExpression() :
    _expr(0)
{
}

// OWNED ATTRIBUTES

/*!
    The value of the time expression.
 */
UmlValueSpecification *UmlTimeExpression::expr() const
{
    // This is a read-write association end

    return _expr;
}

void UmlTimeExpression::setExpr(UmlValueSpecification *expr)
{
    // This is a read-write association end

    if (_expr != expr) {
        // Adjust subsetted properties
        removeOwnedElement(_expr);

        _expr = expr;

        // Adjust subsetted properties
        if (expr) {
            addOwnedElement(expr);
        }
    }
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
const QSet<UmlObservation *> UmlTimeExpression::observation() const
{
    // This is a read-write association end

    return _observation;
}

void UmlTimeExpression::addObservation(UmlObservation *observation)
{
    // This is a read-write association end

    if (!_observation.contains(observation)) {
        _observation.insert(observation);
    }
}

void UmlTimeExpression::removeObservation(UmlObservation *observation)
{
    // This is a read-write association end

    if (_observation.contains(observation)) {
        _observation.remove(observation);
    }
}

