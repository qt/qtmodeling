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

#include "qreplyaction.h"
#include "qreplyaction_p.h"
#include "qaction_p.h"
#include "qaction_p.h"

#include <QtUml/QTrigger>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QReplyActionPrivate::QReplyActionPrivate() :
    replyToCall(0),
    returnInformation(0),
    replyValues(new QSet<QInputPin *>)
{
}

QReplyActionPrivate::~QReplyActionPrivate()
{
    delete replyValues;
}

void QReplyActionPrivate::setReplyToCall(const QTrigger *replyToCall)
{
    this->replyToCall = const_cast<QTrigger *>(replyToCall);
}

void QReplyActionPrivate::setReturnInformation(const QInputPin *returnInformation)
{
    // Adjust subsetted property(ies)
    removeInput(this->returnInformation);

    this->returnInformation = const_cast<QInputPin *>(returnInformation);

    // Adjust subsetted property(ies)
    addInput(returnInformation);
}

void QReplyActionPrivate::addReplyValue(const QInputPin *replyValue)
{
    this->replyValues->insert(const_cast<QInputPin *>(replyValue));

    // Adjust subsetted property(ies)
    addInput(replyValue);
}

void QReplyActionPrivate::removeReplyValue(const QInputPin *replyValue)
{
    this->replyValues->remove(const_cast<QInputPin *>(replyValue));

    // Adjust subsetted property(ies)
    removeInput(replyValue);
}

/*!
    \class QReplyAction

    \inmodule QtUml

    \brief A reply action is an action that accepts a set of return values and a value containing return information produced by a previous accept call action. The reply action returns the values to the caller of the previous call, completing execution of the call.
 */

QReplyAction::QReplyAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QReplyActionPrivate;
}

QReplyAction::QReplyAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QReplyActionPrivate;
}

QReplyAction::~QReplyAction()
{
}

/*!
    The trigger specifying the operation whose call is being replied to.
 */
QTrigger *QReplyAction::replyToCall() const
{
    QTUML_D(const QReplyAction);
    return d->replyToCall;
}

void QReplyAction::setReplyToCall(const QTrigger *replyToCall)
{
    QTUML_D(QReplyAction);
    d->setReplyToCall(const_cast<QTrigger *>(replyToCall));
}

/*!
    A pin containing the return information value produced by an earlier AcceptCallAction.
 */
QInputPin *QReplyAction::returnInformation() const
{
    QTUML_D(const QReplyAction);
    return d->returnInformation;
}

void QReplyAction::setReturnInformation(const QInputPin *returnInformation)
{
    QTUML_D(QReplyAction);
    d->setReturnInformation(const_cast<QInputPin *>(returnInformation));
}

/*!
    A list of pins containing the reply values of the operation. These values are returned to the caller.
 */
const QSet<QInputPin *> *QReplyAction::replyValues() const
{
    QTUML_D(const QReplyAction);
    return d->replyValues;
}

void QReplyAction::addReplyValue(const QInputPin *replyValue)
{
    QTUML_D(QReplyAction);
    d->addReplyValue(const_cast<QInputPin *>(replyValue));
}

void QReplyAction::removeReplyValue(const QInputPin *replyValue)
{
    QTUML_D(QReplyAction);
    d->removeReplyValue(const_cast<QInputPin *>(replyValue));
}

#include "moc_qreplyaction.cpp"

QT_END_NAMESPACE_QTUML

