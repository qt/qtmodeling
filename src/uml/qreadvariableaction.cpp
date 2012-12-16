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

#include "qreadvariableaction.h"
#include "qreadvariableaction_p.h"

#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QReadVariableActionPrivate::QReadVariableActionPrivate() :
    result(0)
{
}

QReadVariableActionPrivate::~QReadVariableActionPrivate()
{
}

/*!
    \class QReadVariableAction

    \inmodule QtUml

    \brief A read variable action is a variable action that retrieves the values of a variable.
 */

QReadVariableAction::QReadVariableAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QVariableAction(*new QReadVariableActionPrivate, parent, wrapper)
{
}

QReadVariableAction::QReadVariableAction(QReadVariableActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QVariableAction(dd, parent, wrapper)
{
}

QReadVariableAction::~QReadVariableAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReadVariableAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QReadVariableAction::result() const
{
    // This is a read-write association end

    Q_D(const QReadVariableAction);
    return d->result;
}

void QReadVariableAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReadVariableAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
        }
    }
}

void QReadVariableAction::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QReadVariableAction) *>("QT_PREPEND_NAMESPACE_QTUML(QReadVariableAction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QReadVariableAction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QReadVariableAction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QReadVariableAction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QReadVariableAction) *> *");
    qRegisterMetaType<QReadVariableAction *>("QReadVariableAction *");
    qRegisterMetaType<const QSet<QReadVariableAction *> *>("const QSet<QReadVariableAction *> *");
    qRegisterMetaType<const QList<QReadVariableAction *> *>("const QList<QReadVariableAction *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<const QSet<QOutputPin *> *>("const QSet<QOutputPin *> *");
    qRegisterMetaType<const QList<QOutputPin *> *>("const QList<QOutputPin *> *");


    QVariableAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qreadvariableaction.cpp"

QT_END_NAMESPACE_QTUML

