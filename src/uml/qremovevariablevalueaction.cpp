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

#include "qremovevariablevalueaction.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

class QRemoveVariableValueActionPrivate
{
public:
    explicit QRemoveVariableValueActionPrivate();
    virtual ~QRemoveVariableValueActionPrivate();

    bool isRemoveDuplicates;
    QInputPin *removeAt;
};

QRemoveVariableValueActionPrivate::QRemoveVariableValueActionPrivate() :
    isRemoveDuplicates(false),
    removeAt(0)
{
}

QRemoveVariableValueActionPrivate::~QRemoveVariableValueActionPrivate()
{
}

/*!
    \class QRemoveVariableValueAction

    \inmodule QtUml

    \brief A remove variable value action is a write variable action that removes values from variables.
 */

QRemoveVariableValueAction::QRemoveVariableValueAction(QObject *parent)
    : QObject(parent), d_ptr(new QRemoveVariableValueActionPrivate)
{
}

QRemoveVariableValueAction::~QRemoveVariableValueAction()
{
    delete d_ptr;
}

/*!
    Specifies whether to remove duplicates of the value in nonunique variables.
 */
bool QRemoveVariableValueAction::isRemoveDuplicates() const
{
    return d_ptr->isRemoveDuplicates;
}

void QRemoveVariableValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    d_ptr->isRemoveDuplicates = isRemoveDuplicates;
}

/*!
    Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QInputPin *QRemoveVariableValueAction::removeAt() const
{
    return d_ptr->removeAt;
}

void QRemoveVariableValueAction::setRemoveAt(const QInputPin *removeAt)
{
    d_ptr->removeAt = const_cast<QInputPin *>(removeAt);
}

#include "moc_qremovevariablevalueaction.cpp"

QT_END_NAMESPACE_QTUML

