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
#include "qumlduration.h"

#include <QtUml/QUmlObservation>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDuration

    \inmodule QtUml

    \brief Duration defines a value specification that specifies the temporal distance between two time instants.
 */

QUmlDuration::QUmlDuration() :
    _expr(0)
{
}

// OWNED ATTRIBUTES

/*!
    The value of the Duration.
 */
QUmlValueSpecification *QUmlDuration::expr() const
{
    // This is a read-write association end

    return _expr;
}

void QUmlDuration::setExpr(QUmlValueSpecification *expr)
{
    // This is a read-write association end

    if (_expr != expr) {
        _expr = expr;
    }
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
QSet<QUmlObservation *> QUmlDuration::observation() const
{
    // This is a read-write association end

    return _observation;
}

void QUmlDuration::addObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    if (!_observation.contains(observation)) {
        _observation.insert(observation);
    }
}

void QUmlDuration::removeObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    if (_observation.contains(observation)) {
        _observation.remove(observation);
    }
}

QT_END_NAMESPACE

