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
#include "qumladdvariablevalueaction.h"
#include "qumladdvariablevalueaction_p.h"

#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

QUmlAddVariableValueActionPrivate::QUmlAddVariableValueActionPrivate() :
    insertAt(0),
    isReplaceAll(false)
{
}

/*!
    \class QUmlAddVariableValueAction

    \inmodule QtUml

    \brief An add variable value action is a write variable action for adding values to a variable.
 */

QUmlAddVariableValueAction::QUmlAddVariableValueAction(bool create_d_ptr) :
    QUmlWriteVariableAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlAddVariableValueActionPrivate);
}

// Owned attributes

/*!
    Gives the position at which to insert a new value or move an existing value in ordered variables. The types is UnlimitedINatural, but the value cannot be zero. This pin is omitted for unordered variables.
 */
QUmlInputPin *QUmlAddVariableValueAction::insertAt() const
{
    return 0;
}

void QUmlAddVariableValueAction::setInsertAt(QUmlInputPin *insertAt)
{
    Q_UNUSED(insertAt);
}

/*!
    Specifies whether existing values of the variable should be removed before adding the new value.
 */
bool QUmlAddVariableValueAction::isReplaceAll() const
{
    return bool();
}

void QUmlAddVariableValueAction::setReplaceAll(bool isReplaceAll)
{
    Q_UNUSED(isReplaceAll);
}

QT_END_NAMESPACE

