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

#include "qreadselfaction.h"
#include "qreadselfaction_p.h"
#include "qaction_p.h"

#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QReadSelfActionPrivate::QReadSelfActionPrivate() :
    result(0)
{
}

QReadSelfActionPrivate::~QReadSelfActionPrivate()
{
}

void QReadSelfActionPrivate::setResult(const QOutputPin *result)
{
    // Adjust subsetted property(ies)
    removeOutput(this->result);
    this->result = const_cast<QOutputPin *>(result);
    // Adjust subsetted property(ies)
    addOutput(result);
}

/*!
    \class QReadSelfAction

    \inmodule QtUml

    \brief A read self action is an action that retrieves the host object of an action.
 */

QReadSelfAction::QReadSelfAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QReadSelfActionPrivate;
}

QReadSelfAction::QReadSelfAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QReadSelfActionPrivate;
}

QReadSelfAction::~QReadSelfAction()
{
}

/*!
    Gives the output pin on which the hosting object is placed.
 */
QOutputPin *QReadSelfAction::result() const
{
    Q_D(const QReadSelfAction);
    return d->result;
}

void QReadSelfAction::setResult(const QOutputPin *result)
{
    Q_D(QReadSelfAction);
    d->setResult(const_cast<QOutputPin *>(result));
}

#include "moc_qreadselfaction.cpp"

QT_END_NAMESPACE_QTUML

