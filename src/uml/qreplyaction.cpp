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

#include <QtUml/QTrigger>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

class QReplyActionPrivate
{
public:
    explicit QReplyActionPrivate();
    virtual ~QReplyActionPrivate();

    QTrigger *replyToCall;
    QSet<QInputPin *> *replyValues;
    QInputPin *returnInformation;
};

QReplyActionPrivate::QReplyActionPrivate() :
    replyValues(new QSet<QInputPin *>)
{
}

QReplyActionPrivate::~QReplyActionPrivate()
{
    delete replyValues;
}

/*!
    \class QReplyAction

    \inmodule QtUml

    \brief A reply action is an action that accepts a set of return values and a value containing return information produced by a previous accept call action. The reply action returns the values to the caller of the previous call, completing execution of the call.
 */

QReplyAction::QReplyAction(QObject *parent)
    : QObject(parent), d_ptr(new QReplyActionPrivate)
{
}

QReplyAction::~QReplyAction()
{
    delete d_ptr;
}

/*!
    The trigger specifying the operation whose call is being replied to.
 */
QTrigger *QReplyAction::replyToCall() const
{
    return d_ptr->replyToCall;
}

void QReplyAction::setReplyToCall(const QTrigger *replyToCall)
{
    d_ptr->replyToCall = const_cast<QTrigger *>(replyToCall);
}

/*!
    A list of pins containing the reply values of the operation. These values are returned to the caller.
 */
const QSet<QInputPin *> *QReplyAction::replyValues() const
{
    return d_ptr->replyValues;
}

void QReplyAction::addReplyValue(const QInputPin *replyValue)
{
    d_ptr->replyValues->insert(const_cast<QInputPin *>(replyValue));
    // Adjust subsetted property(ies)
    addInput(replyValue);
}

void QReplyAction::removeReplyValue(const QInputPin *replyValue)
{
    d_ptr->replyValues->remove(const_cast<QInputPin *>(replyValue));
    // Adjust subsetted property(ies)
    removeInput(replyValue);
}

/*!
    A pin containing the return information value produced by an earlier AcceptCallAction.
 */
QInputPin *QReplyAction::returnInformation() const
{
    return d_ptr->returnInformation;
}

void QReplyAction::setReturnInformation(const QInputPin *returnInformation)
{
    d_ptr->returnInformation = const_cast<QInputPin *>(returnInformation);
}

#include "moc_qreplyaction.cpp"

QT_END_NAMESPACE_QTUML

