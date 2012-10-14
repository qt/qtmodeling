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

#include "qaddvariablevalueaction.h"
#include "qaddvariablevalueaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QAddVariableValueActionPrivate::QAddVariableValueActionPrivate() :
    isReplaceAll(false),
    insertAt(0)
{
}

QAddVariableValueActionPrivate::~QAddVariableValueActionPrivate()
{
}

void QAddVariableValueActionPrivate::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write attribute

    this->isReplaceAll = isReplaceAll;
}

void QAddVariableValueActionPrivate::setInsertAt(QInputPin *insertAt)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeInput(this->insertAt);

    this->insertAt = insertAt;

    // Adjust subsetted property(ies)
    addInput(insertAt);
}

/*!
    \class QAddVariableValueAction

    \inmodule QtUml

    \brief An add variable value action is a write variable action for adding values to a variable.
 */

QAddVariableValueAction::QAddVariableValueAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QAddVariableValueActionPrivate;
}

QAddVariableValueAction::QAddVariableValueAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QAddVariableValueActionPrivate;
}

QAddVariableValueAction::~QAddVariableValueAction()
{
}

/*!
    Specifies whether existing values of the variable should be removed before adding the new value.
 */
bool QAddVariableValueAction::isReplaceAll() const
{
    // This is a read-write attribute

    QTUML_D(const QAddVariableValueAction);
    return d->isReplaceAll;
}

void QAddVariableValueAction::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write attribute

    QTUML_D(QAddVariableValueAction);
    if (d->isReplaceAll != isReplaceAll) {
        d->setReplaceAll(isReplaceAll);
    }
}

/*!
    Gives the position at which to insert a new value or move an existing value in ordered variables. The types is UnlimitedINatural, but the value cannot be zero. This pin is omitted for unordered variables.
 */
QInputPin *QAddVariableValueAction::insertAt() const
{
    // This is a read-write association end

    QTUML_D(const QAddVariableValueAction);
    return d->insertAt;
}

void QAddVariableValueAction::setInsertAt(QInputPin *insertAt)
{
    // This is a read-write association end

    QTUML_D(QAddVariableValueAction);
    if (d->insertAt != insertAt) {
        d->setInsertAt(insertAt);
    }
}

#include "moc_qaddvariablevalueaction.cpp"

QT_END_NAMESPACE_QTUML

