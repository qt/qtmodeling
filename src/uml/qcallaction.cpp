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

#include "qcallaction.h"
#include "qcallaction_p.h"
#include "qaction_p.h"

#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QCallActionPrivate::QCallActionPrivate() :
    isSynchronous(true),
    results(new QList<QOutputPin *>)
{
}

QCallActionPrivate::~QCallActionPrivate()
{
    delete results;
}

void QCallActionPrivate::setSynchronous(bool isSynchronous)
{
    this->isSynchronous = isSynchronous;
}

void QCallActionPrivate::addResult(const QOutputPin *result)
{
    this->results->append(const_cast<QOutputPin *>(result));

    // Adjust subsetted property(ies)
    addOutput(result);
}

void QCallActionPrivate::removeResult(const QOutputPin *result)
{
    this->results->removeAll(const_cast<QOutputPin *>(result));

    // Adjust subsetted property(ies)
    removeOutput(result);
}

/*!
    \class QCallAction

    \inmodule QtUml

    \brief CallAction is an abstract class for actions that invoke behavior and receive return values.
 */

QCallAction::QCallAction()
{
}

QCallAction::~QCallAction()
{
}

/*!
    If true, the call is synchronous and the caller waits for completion of the invoked behavior. If false, the call is asynchronous and the caller proceeds immediately and does not expect a return values.
 */
bool QCallAction::isSynchronous() const
{
    QTUML_D(const QCallAction);
    return d->isSynchronous;
}

void QCallAction::setSynchronous(bool isSynchronous)
{
    QTUML_D(QCallAction);
    d->setSynchronous(isSynchronous);
}

/*!
    A list of output pins where the results of performing the invocation are placed.
 */
const QList<QOutputPin *> *QCallAction::results() const
{
    QTUML_D(const QCallAction);
    return d->results;
}

void QCallAction::addResult(const QOutputPin *result)
{
    QTUML_D(QCallAction);
    d->addResult(const_cast<QOutputPin *>(result));
}

void QCallAction::removeResult(const QOutputPin *result)
{
    QTUML_D(QCallAction);
    d->removeResult(const_cast<QOutputPin *>(result));
}

QT_END_NAMESPACE_QTUML

