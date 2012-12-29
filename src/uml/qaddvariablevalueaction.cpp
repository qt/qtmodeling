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

/*!
    \class QAddVariableValueAction

    \inmodule QtUml

    \brief An add variable value action is a write variable action for adding values to a variable.
 */

QAddVariableValueAction::QAddVariableValueAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteVariableAction(*new QAddVariableValueActionPrivate, parent, wrapper)
{
}

QAddVariableValueAction::QAddVariableValueAction(QAddVariableValueActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteVariableAction(dd, parent, wrapper)
{
}

QAddVariableValueAction::~QAddVariableValueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QAddVariableValueAction
// ---------------------------------------------------------------

/*!
    Specifies whether existing values of the variable should be removed before adding the new value.
 */
bool QAddVariableValueAction::isReplaceAll() const
{
    // This is a read-write attribute

    Q_D(const QAddVariableValueAction);
    return d->isReplaceAll;
}

void QAddVariableValueAction::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write attribute

    Q_D(QAddVariableValueAction);
    if (d->isReplaceAll != isReplaceAll) {
        d->isReplaceAll = isReplaceAll;
    }
}

void QAddVariableValueAction::unsetReplaceAll()
{
    setReplaceAll(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QAddVariableValueAction
// ---------------------------------------------------------------

/*!
    Gives the position at which to insert a new value or move an existing value in ordered variables. The types is UnlimitedINatural, but the value cannot be zero. This pin is omitted for unordered variables.
 */
QInputPin *QAddVariableValueAction::insertAt() const
{
    // This is a read-write association end

    Q_D(const QAddVariableValueAction);
    return d->insertAt;
}

void QAddVariableValueAction::setInsertAt(QInputPin *insertAt)
{
    // This is a read-write association end

    Q_D(QAddVariableValueAction);
    if (d->insertAt != insertAt) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->insertAt));

        d->insertAt = insertAt;

        // Adjust subsetted property(ies)
        if (insertAt) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(insertAt));
        }
    }
}

void QAddVariableValueAction::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QWriteVariableAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qaddvariablevalueaction.cpp"

QT_END_NAMESPACE_QTUML

