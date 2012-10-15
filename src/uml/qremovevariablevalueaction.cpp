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
#include "qremovevariablevalueaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QRemoveVariableValueActionPrivate::QRemoveVariableValueActionPrivate(QRemoveVariableValueAction *q_umlptr) :
    isRemoveDuplicates(false),
    removeAt(0)
{
    this->q_umlptr = q_umlptr;
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
    : QObject(parent)
{
    d_umlptr = new QRemoveVariableValueActionPrivate(this);
}

QRemoveVariableValueAction::QRemoveVariableValueAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QRemoveVariableValueActionPrivate;
}

QRemoveVariableValueAction::~QRemoveVariableValueAction()
{
}

/*!
    Specifies whether to remove duplicates of the value in nonunique variables.
 */
bool QRemoveVariableValueAction::isRemoveDuplicates() const
{
    // This is a read-write attribute

    QTUML_D(const QRemoveVariableValueAction);
    return d->isRemoveDuplicates;
}

void QRemoveVariableValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    // This is a read-write attribute

    QTUML_D(QRemoveVariableValueAction);
    if (d->isRemoveDuplicates != isRemoveDuplicates) {
        d->isRemoveDuplicates = isRemoveDuplicates;
    }
}

/*!
    Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QInputPin *QRemoveVariableValueAction::removeAt() const
{
    // This is a read-write association end

    QTUML_D(const QRemoveVariableValueAction);
    return d->removeAt;
}

void QRemoveVariableValueAction::setRemoveAt(QInputPin *removeAt)
{
    // This is a read-write association end

    QTUML_D(QRemoveVariableValueAction);
    if (d->removeAt != removeAt) {
        // Adjust subsetted property(ies)
        d->removeInput(d->removeAt);

        d->removeAt = removeAt;

        // Adjust subsetted property(ies)
        d->addInput(removeAt);
    }
}

#include "moc_qremovevariablevalueaction.cpp"

QT_END_NAMESPACE_QTUML

