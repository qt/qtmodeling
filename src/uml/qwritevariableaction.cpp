/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qwritevariableaction.h"
#include "qwritevariableaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QWriteVariableActionPrivate::QWriteVariableActionPrivate() :
    value(0)
{
}

QWriteVariableActionPrivate::~QWriteVariableActionPrivate()
{
}

/*!
    \class QWriteVariableAction

    \inmodule QtUml

    \brief WriteVariableAction is an abstract class for variable actions that change variable values.
 */

QWriteVariableAction::QWriteVariableAction()
    : d_ptr(new QWriteVariableActionPrivate)
{
}

QWriteVariableAction::~QWriteVariableAction()
{
    delete d_ptr;
}

/*!
    Value to be added or removed from the variable.
 */
QInputPin *QWriteVariableAction::value() const
{
    return d_ptr->value;
}

void QWriteVariableAction::setValue(const QInputPin *value)
{
    d_ptr->value = const_cast<QInputPin *>(value);
}

QT_END_NAMESPACE_QTUML

