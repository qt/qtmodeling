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
#include "qumlliteralinteger.h"
#include "qumlliteralinteger_p.h"

QT_BEGIN_NAMESPACE

QUmlLiteralIntegerPrivate::QUmlLiteralIntegerPrivate() :
    value(0)
{
}

/*!
    \class QUmlLiteralInteger

    \inmodule QtUml

    \brief A literal integer is a specification of an integer value.
 */

QUmlLiteralInteger::QUmlLiteralInteger(bool create_d_ptr) :
    QUmlLiteralSpecification(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlLiteralIntegerPrivate);
}

// OWNED ATTRIBUTES

/*!
    The specified Integer value.
 */
int QUmlLiteralInteger::value() const
{
    // This is a read-write property

    QM_D(const QUmlLiteralInteger);
    return d->value;
}

void QUmlLiteralInteger::setValue(int value)
{
    // This is a read-write property

    QM_D(QUmlLiteralInteger);
    if (d->value != value) {
        d->value = value;
    }
}

// OPERATIONS

/*!
    The query integerValue() gives the value.
 */
int QUmlLiteralInteger::integerValue() const
{
    return int ();
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QUmlLiteralInteger::isComputable() const
{
    return bool ();
}

QT_END_NAMESPACE

