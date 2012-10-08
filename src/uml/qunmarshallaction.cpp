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

#include "qunmarshallaction.h"
#include "qunmarshallaction_p.h"
#include "qaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>
#include <QtUml/QClassifier>

QT_BEGIN_NAMESPACE_QTUML

QUnmarshallActionPrivate::QUnmarshallActionPrivate() :
    object(0),
    results(new QSet<QOutputPin *>),
    unmarshallType(0)
{
}

QUnmarshallActionPrivate::~QUnmarshallActionPrivate()
{
    delete results;
}

/*!
    \class QUnmarshallAction

    \inmodule QtUml

    \brief An unmarshall action is an action that breaks an object of a known type into outputs each of which is equal to a value from a structural feature of the object.
 */

QUnmarshallAction::QUnmarshallAction(QObject *parent)
    : QObject(parent), d_ptr(new QUnmarshallActionPrivate)
{
}

QUnmarshallAction::~QUnmarshallAction()
{
    delete d_ptr;
}

/*!
    The object to be unmarshalled.
 */
QInputPin *QUnmarshallAction::object() const
{
    return d_ptr->object;
}

void QUnmarshallAction::setObject(const QInputPin *object)
{
    d_ptr->object = const_cast<QInputPin *>(object);
}

/*!
    The values of the structural features of the input object.
 */
const QSet<QOutputPin *> *QUnmarshallAction::results() const
{
    return d_ptr->results;
}

void QUnmarshallAction::addResult(const QOutputPin *result)
{
    d_ptr->results->insert(const_cast<QOutputPin *>(result));
    // Adjust subsetted property(ies)
    QAction::d_ptr->outputs->append(const_cast<QOutputPin *>(result));
}

void QUnmarshallAction::removeResult(const QOutputPin *result)
{
    d_ptr->results->remove(const_cast<QOutputPin *>(result));
    // Adjust subsetted property(ies)
    QAction::d_ptr->outputs->removeAll(const_cast<QOutputPin *>(result));
}

/*!
    The type of the object to be unmarshalled.
 */
QClassifier *QUnmarshallAction::unmarshallType() const
{
    return d_ptr->unmarshallType;
}

void QUnmarshallAction::setUnmarshallType(const QClassifier *unmarshallType)
{
    d_ptr->unmarshallType = const_cast<QClassifier *>(unmarshallType);
}

#include "moc_qunmarshallaction.cpp"

QT_END_NAMESPACE_QTUML

