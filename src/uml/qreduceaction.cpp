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
#include "qaction_p.h"
#include "qaction_p.h"

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

void QReduceActionPrivate::setOrdered(bool isOrdered)
{
    this->isOrdered = isOrdered;
}

void QReduceActionPrivate::setResult(const QOutputPin *result)
{
    // Adjust subsetted property(ies)
    removeOutput(this->result);

    this->result = const_cast<QOutputPin *>(result);

    // Adjust subsetted property(ies)
    addOutput(result);
}

void QReduceActionPrivate::setCollection(const QInputPin *collection)
{
    // Adjust subsetted property(ies)
    removeInput(this->collection);

    this->collection = const_cast<QInputPin *>(collection);

    // Adjust subsetted property(ies)
    addInput(collection);
}

void QReduceActionPrivate::setReducer(const QBehavior *reducer)
{
    this->reducer = const_cast<QBehavior *>(reducer);
}

/*!
    \class QReduceAction

    \inmodule QtUml

    \brief A reduce action is an action that reduces a collection to a single value by combining the elements of the collection.
 */

QReduceAction::QReduceAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QReduceActionPrivate;
}

QReduceAction::QReduceAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QReduceActionPrivate;
}

QReduceAction::~QReduceAction()
{
}

/*!
    Tells whether the order of the input collection should determine the order in which the behavior is applied to its elements.
 */
bool QReduceAction::isOrdered() const
{
    QTUML_D(const QReduceAction);
    return d->isOrdered;
}

void QReduceAction::setOrdered(bool isOrdered)
{
    QTUML_D(QReduceAction);
    d->setOrdered(isOrdered);
}

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QReduceAction::result() const
{
    QTUML_D(const QReduceAction);
    return d->result;
}

void QReduceAction::setResult(const QOutputPin *result)
{
    QTUML_D(QReduceAction);
    d->setResult(const_cast<QOutputPin *>(result));
}

/*!
    The collection to be reduced.
 */
QInputPin *QReduceAction::collection() const
{
    QTUML_D(const QReduceAction);
    return d->collection;
}

void QReduceAction::setCollection(const QInputPin *collection)
{
    QTUML_D(QReduceAction);
    d->setCollection(const_cast<QInputPin *>(collection));
}

/*!
    Behavior that is applied to two elements of the input collection to produce a value that is the same type as elements of the collection.
 */
QBehavior *QReduceAction::reducer() const
{
    QTUML_D(const QReduceAction);
    return d->reducer;
}

void QReduceAction::setReducer(const QBehavior *reducer)
{
    QTUML_D(QReduceAction);
    d->setReducer(const_cast<QBehavior *>(reducer));
}

#include "moc_qreduceaction.cpp"

QT_END_NAMESPACE_QTUML

