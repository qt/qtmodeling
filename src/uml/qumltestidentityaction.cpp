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
#include "qumltestidentityaction.h"
#include "qumltestidentityaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlTestIdentityActionPrivate::QUmlTestIdentityActionPrivate() :
    first(0),
    result(0),
    second(0)
{
}

/*!
    \class QUmlTestIdentityAction

    \inmodule QtUml

    \brief A test identity action is an action that tests if two values are identical objects.
 */

QUmlTestIdentityAction::QUmlTestIdentityAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlTestIdentityActionPrivate);
}

// Owned attributes

/*!
    Gives the pin on which an object is placed.
 */
QUmlInputPin *QUmlTestIdentityAction::first() const
{
    return 0;
}

void QUmlTestIdentityAction::setFirst(QUmlInputPin *first)
{
    Q_UNUSED(first);
}

/*!
    Tells whether the two input objects are identical.
 */
QUmlOutputPin *QUmlTestIdentityAction::result() const
{
    return 0;
}

void QUmlTestIdentityAction::setResult(QUmlOutputPin *result)
{
    Q_UNUSED(result);
}

/*!
    Gives the pin on which an object is placed.
 */
QUmlInputPin *QUmlTestIdentityAction::second() const
{
    return 0;
}

void QUmlTestIdentityAction::setSecond(QUmlInputPin *second)
{
    Q_UNUSED(second);
}

QT_END_NAMESPACE

