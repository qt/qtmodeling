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

#include "qliteralinteger.h"
#include "qliteralinteger_p.h"

QT_BEGIN_NAMESPACE_QTUML

QLiteralIntegerPrivate::QLiteralIntegerPrivate()
{
}

QLiteralIntegerPrivate::~QLiteralIntegerPrivate()
{
}

/*!
    \class QLiteralInteger

    \inmodule QtUml

    \brief A literal integer is a specification of an integer value.
 */

QLiteralInteger::QLiteralInteger(QWrappedObject *parent, QWrappedObject *wrapper) :
    QLiteralSpecification(*new QLiteralIntegerPrivate, parent, wrapper)
{
}

QLiteralInteger::QLiteralInteger(QLiteralIntegerPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QLiteralSpecification(dd, parent, wrapper)
{
}

QLiteralInteger::~QLiteralInteger()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLiteralInteger
// ---------------------------------------------------------------

/*!
    The specified Integer value.
 */
qint32 QLiteralInteger::value() const
{
    // This is a read-write attribute

    Q_D(const QLiteralInteger);
    return d->value;
}

void QLiteralInteger::setValue(qint32 value)
{
    // This is a read-write attribute

    Q_D(QLiteralInteger);
    if (d->value != value) {
        d->value = value;
    }
}

/*!
    The query integerValue() gives the value.
 */
qint32 QLiteralInteger::integerValue() const
{
    qWarning("QLiteralInteger::integerValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QLiteralInteger::isComputable() const
{
    qWarning("QLiteralInteger::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

#include "moc_qliteralinteger.cpp"

QT_END_NAMESPACE_QTUML

