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
#include "qumlremovevariablevalueaction.h"
#include "qumlremovevariablevalueaction_p.h"

#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

QUmlRemoveVariableValueActionPrivate::QUmlRemoveVariableValueActionPrivate() :
    isRemoveDuplicates(false),
    removeAt(0)
{
}

/*!
    \class QUmlRemoveVariableValueAction

    \inmodule QtUml

    \brief A remove variable value action is a write variable action that removes values from variables.
 */

QUmlRemoveVariableValueAction::QUmlRemoveVariableValueAction(bool create_d_ptr) :
    QUmlWriteVariableAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlRemoveVariableValueActionPrivate);
}

// Owned attributes

/*!
    Specifies whether to remove duplicates of the value in nonunique variables.
 */
bool QUmlRemoveVariableValueAction::isRemoveDuplicates() const
{
    return bool();
}

void QUmlRemoveVariableValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    Q_UNUSED(isRemoveDuplicates);
}

/*!
    Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QUmlInputPin *QUmlRemoveVariableValueAction::removeAt() const
{
    return 0;
}

void QUmlRemoveVariableValueAction::setRemoveAt(QUmlInputPin *removeAt)
{
    Q_UNUSED(removeAt);
}

QT_END_NAMESPACE

