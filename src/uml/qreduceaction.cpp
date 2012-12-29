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

#include "qreduceaction.h"
#include "qreduceaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QBehavior>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QReduceActionPrivate::QReduceActionPrivate() :
    isOrdered(false),
    result(0),
    collection(0),
    reducer(0)
{
}

QReduceActionPrivate::~QReduceActionPrivate()
{
}

/*!
    \class QReduceAction

    \inmodule QtUml

    \brief A reduce action is an action that reduces a collection to a single value by combining the elements of the collection.
 */

QReduceAction::QReduceAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QReduceActionPrivate, parent, wrapper)
{
}

QReduceAction::QReduceAction(QReduceActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
}

QReduceAction::~QReduceAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QReduceAction
// ---------------------------------------------------------------

/*!
    Tells whether the order of the input collection should determine the order in which the behavior is applied to its elements.
 */
bool QReduceAction::isOrdered() const
{
    // This is a read-write attribute

    Q_D(const QReduceAction);
    return d->isOrdered;
}

void QReduceAction::setOrdered(bool isOrdered)
{
    // This is a read-write attribute

    Q_D(QReduceAction);
    if (d->isOrdered != isOrdered) {
        d->isOrdered = isOrdered;
    }
}

void QReduceAction::unsetOrdered()
{
    setOrdered(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReduceAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QReduceAction::result() const
{
    // This is a read-write association end

    Q_D(const QReduceAction);
    return d->result;
}

void QReduceAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReduceAction);
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
    The collection to be reduced.
 */
QInputPin *QReduceAction::collection() const
{
    // This is a read-write association end

    Q_D(const QReduceAction);
    return d->collection;
}

void QReduceAction::setCollection(QInputPin *collection)
{
    // This is a read-write association end

    Q_D(QReduceAction);
    if (d->collection != collection) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->collection));

        d->collection = collection;

        // Adjust subsetted property(ies)
        if (collection) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(collection));
        }
    }
}

/*!
    Behavior that is applied to two elements of the input collection to produce a value that is the same type as elements of the collection.
 */
QBehavior *QReduceAction::reducer() const
{
    // This is a read-write association end

    Q_D(const QReduceAction);
    return d->reducer;
}

void QReduceAction::setReducer(QBehavior *reducer)
{
    // This is a read-write association end

    Q_D(QReduceAction);
    if (d->reducer != reducer) {
        d->reducer = reducer;
    }
}

void QReduceAction::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    qRegisterMetaType<QBehavior *>("QBehavior *");
    qRegisterMetaType<QSet<QBehavior *>>("QSet<QBehavior *>");
    qRegisterMetaType<QList<QBehavior *>>("QList<QBehavior *>");

    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qreduceaction.cpp"

QT_END_NAMESPACE_QTUML

