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
#include "umlparameterset_p.h"

#include "private/umlconstraint_p.h"
#include "private/umlparameter_p.h"

UmlParameterSet::UmlParameterSet()
{
}

// OWNED ATTRIBUTES

const QSet<UmlConstraint *> UmlParameterSet::condition() const
{
    // This is a read-write association end

    return _condition;
}

void UmlParameterSet::addCondition(UmlConstraint *condition)
{
    // This is a read-write association end

    if (!_condition.contains(condition)) {
        _condition.insert(condition);

        // Adjust subsetted properties
        addOwnedElement(condition);
    }
}

void UmlParameterSet::removeCondition(UmlConstraint *condition)
{
    // This is a read-write association end

    if (_condition.contains(condition)) {
        _condition.remove(condition);

        // Adjust subsetted properties
        removeOwnedElement(condition);
    }
}

const QSet<UmlParameter *> UmlParameterSet::parameter() const
{
    // This is a read-write association end

    return _parameter;
}

void UmlParameterSet::addParameter(UmlParameter *parameter)
{
    // This is a read-write association end

    if (!_parameter.contains(parameter)) {
        _parameter.insert(parameter);

        // Adjust opposite properties
        if (parameter) {
            parameter->addParameterSet(this);
        }
    }
}

void UmlParameterSet::removeParameter(UmlParameter *parameter)
{
    // This is a read-write association end

    if (_parameter.contains(parameter)) {
        _parameter.remove(parameter);

        // Adjust opposite properties
        if (parameter) {
            parameter->removeParameterSet(this);
        }
    }
}

