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

#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

class QTestIdentityActionPrivate
{
public:
    explicit QTestIdentityActionPrivate();
    virtual ~QTestIdentityActionPrivate();

    QInputPin *first;
    QOutputPin *result;
    QInputPin *second;
};

QTestIdentityActionPrivate::QTestIdentityActionPrivate() :
    first(0),
    result(0),
    second(0)
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

QTestIdentityAction::QTestIdentityAction(QObject *parent)
    : QObject(parent), d_ptr(new QTestIdentityActionPrivate)
{
}

QTestIdentityAction::~QTestIdentityAction()
{
    delete d_ptr;
}

/*!
    Gives the pin on which an object is placed.
 */
QInputPin *QTestIdentityAction::first() const
{
    return d_ptr->first;
}

void QTestIdentityAction::setFirst(const QInputPin *first)
{
    d_ptr->first = const_cast<QInputPin *>(first);
}

/*!
    Tells whether the two input objects are identical.
 */
QOutputPin *QTestIdentityAction::result() const
{
    return d_ptr->result;
}

void QTestIdentityAction::setResult(const QOutputPin *result)
{
    d_ptr->result = const_cast<QOutputPin *>(result);
}

/*!
    Gives the pin on which an object is placed.
 */
QInputPin *QTestIdentityAction::second() const
{
    return d_ptr->second;
}

void QTestIdentityAction::setSecond(const QInputPin *second)
{
    d_ptr->second = const_cast<QInputPin *>(second);
}

#include "moc_qtestidentityaction.cpp"

QT_END_NAMESPACE_QTUML
