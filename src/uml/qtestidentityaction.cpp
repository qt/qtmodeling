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

#include "qtestidentityaction.h"
#include "qtestidentityaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QTestIdentityActionPrivate::QTestIdentityActionPrivate() :
    second(0),
    result(0),
    first(0)
{
}

QTestIdentityActionPrivate::~QTestIdentityActionPrivate()
{
}

/*!
    \class QTestIdentityAction

    \inmodule QtUml

    \brief A test identity action is an action that tests if two values are identical objects.
 */

QTestIdentityAction::QTestIdentityAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QTestIdentityActionPrivate, parent, wrapper)
{
}

QTestIdentityAction::QTestIdentityAction(QTestIdentityActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
}

QTestIdentityAction::~QTestIdentityAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTestIdentityAction
// ---------------------------------------------------------------

/*!
    Gives the pin on which an object is placed.
 */
QInputPin *QTestIdentityAction::second() const
{
    // This is a read-write association end

    Q_D(const QTestIdentityAction);
    return d->second;
}

void QTestIdentityAction::setSecond(QInputPin *second)
{
    // This is a read-write association end

    Q_D(QTestIdentityAction);
    if (d->second != second) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->second));

        d->second = second;

        // Adjust subsetted property(ies)
        if (second) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(second));
        }
    }
}

/*!
    Tells whether the two input objects are identical.
 */
QOutputPin *QTestIdentityAction::result() const
{
    // This is a read-write association end

    Q_D(const QTestIdentityAction);
    return d->result;
}

void QTestIdentityAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QTestIdentityAction);
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

/*!
    Gives the pin on which an object is placed.
 */
QInputPin *QTestIdentityAction::first() const
{
    // This is a read-write association end

    Q_D(const QTestIdentityAction);
    return d->first;
}

void QTestIdentityAction::setFirst(QInputPin *first)
{
    // This is a read-write association end

    Q_D(QTestIdentityAction);
    if (d->first != first) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->first));

        d->first = first;

        // Adjust subsetted property(ies)
        if (first) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(first));
        }
    }
}

void QTestIdentityAction::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QTestIdentityAction) *>("QT_PREPEND_NAMESPACE_QTUML(QTestIdentityAction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QTestIdentityAction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QTestIdentityAction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QTestIdentityAction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QTestIdentityAction) *> *");
    qRegisterMetaType<QTestIdentityAction *>("QTestIdentityAction *");
    qRegisterMetaType<const QSet<QTestIdentityAction *> *>("const QSet<QTestIdentityAction *> *");
    qRegisterMetaType<const QList<QTestIdentityAction *> *>("const QList<QTestIdentityAction *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QInputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<const QSet<QInputPin *> *>("const QSet<QInputPin *> *");
    qRegisterMetaType<const QList<QInputPin *> *>("const QList<QInputPin *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<const QSet<QOutputPin *> *>("const QSet<QOutputPin *> *");
    qRegisterMetaType<const QList<QOutputPin *> *>("const QList<QOutputPin *> *");


    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qtestidentityaction.cpp"

QT_END_NAMESPACE_QTUML

