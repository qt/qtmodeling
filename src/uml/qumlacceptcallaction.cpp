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
#include "qumlacceptcallaction.h"
#include "qumlacceptcallaction_p.h"

#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlAcceptCallActionPrivate::QUmlAcceptCallActionPrivate() :
    returnInformation(0)
{
}

/*!
    \class QUmlAcceptCallAction

    \inmodule QtUml

    \brief An accept call action is an accept event action representing the receipt of a synchronous call request. In addition to the normal operation parameters, the action produces an output that is needed later to supply the information to the reply action necessary to return control to the caller. This action is for synchronous calls. If it is used to handle an asynchronous call, execution of the subsequent reply action will complete immediately with no effects.
 */

QUmlAcceptCallAction::QUmlAcceptCallAction(bool create_d_ptr) :
    QUmlAcceptEventAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlAcceptCallActionPrivate);
}

// OWNED ATTRIBUTES

/*!
    Pin where a value is placed containing sufficient information to perform a subsequent reply and return control to the caller. The contents of this value are opaque. It can be passed and copied but it cannot be manipulated by the model.
 */
QUmlOutputPin *QUmlAcceptCallAction::returnInformation() const
{
    // This is a read-write association end

    QM_D(const QUmlAcceptCallAction);
    return d->returnInformation;
}

void QUmlAcceptCallAction::setReturnInformation(QUmlOutputPin *returnInformation)
{
    // This is a read-write association end

    QM_D(QUmlAcceptCallAction);
    if (d->returnInformation != returnInformation) {
        d->returnInformation = returnInformation;
    }
}

QT_END_NAMESPACE

