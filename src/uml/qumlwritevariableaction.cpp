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
#include "qumlwritevariableaction.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlWriteVariableAction

    \inmodule QtUml

    \brief WriteVariableAction is an abstract class for variable actions that change variable values.
 */

QUmlWriteVariableAction::QUmlWriteVariableAction() :
    _value(0)
{
    d_ptr->object.setProperty("value", QVariant::fromValue((QUmlInputPin *)(0)));
}

// OWNED ATTRIBUTES

/*!
    Value to be added or removed from the variable.
 */
QUmlInputPin *QUmlWriteVariableAction::value() const
{
    // This is a read-write association end

    return _value;
}

void QUmlWriteVariableAction::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    if (_value != value) {
        // Adjust subsetted properties
        removeInput(_value);

        _value = value;

        // Adjust subsetted properties
        if (value) {
            addInput(value);
        }
    }
}

QT_END_NAMESPACE

