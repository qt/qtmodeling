/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlreplyaction.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlReplyAction

    \inmodule QtUml

    \brief A reply action is an action that accepts a set of return values and a value containing return information produced by a previous accept call action. The reply action returns the values to the caller of the previous call, completing execution of the call.
 */

QUmlReplyAction::QUmlReplyAction() :
    _replyToCall(0),
    _returnInformation(0)
{
}

// OWNED ATTRIBUTES

/*!
    The trigger specifying the operation whose call is being replied to.
 */
QUmlTrigger *QUmlReplyAction::replyToCall() const
{
    // This is a read-write association end

    return _replyToCall;
}

void QUmlReplyAction::setReplyToCall(QUmlTrigger *replyToCall)
{
    // This is a read-write association end

    if (_replyToCall != replyToCall) {
        _replyToCall = replyToCall;
    }
}

/*!
    A list of pins containing the reply values of the operation. These values are returned to the caller.
 */
QSet<QUmlInputPin *> QUmlReplyAction::replyValue() const
{
    // This is a read-write association end

    return _replyValue;
}

void QUmlReplyAction::addReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    if (!_replyValue.contains(replyValue)) {
        _replyValue.insert(replyValue);

        // Adjust subsetted properties
        addInput(replyValue);
    }
}

void QUmlReplyAction::removeReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    if (_replyValue.contains(replyValue)) {
        _replyValue.remove(replyValue);

        // Adjust subsetted properties
        removeInput(replyValue);
    }
}

/*!
    A pin containing the return information value produced by an earlier AcceptCallAction.
 */
QUmlInputPin *QUmlReplyAction::returnInformation() const
{
    // This is a read-write association end

    return _returnInformation;
}

void QUmlReplyAction::setReturnInformation(QUmlInputPin *returnInformation)
{
    // This is a read-write association end

    if (_returnInformation != returnInformation) {
        // Adjust subsetted properties
        removeInput(_returnInformation);

        _returnInformation = returnInformation;

        // Adjust subsetted properties
        if (returnInformation) {
            addInput(returnInformation);
        }
    }
}

QT_END_NAMESPACE

