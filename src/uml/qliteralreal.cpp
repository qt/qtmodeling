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

#include "qliteralreal.h"


QT_BEGIN_NAMESPACE_QTUML

class QLiteralRealPrivate
{
public:
    explicit QLiteralRealPrivate();
    virtual ~QLiteralRealPrivate();

    qreal value;
};

QLiteralRealPrivate::QLiteralRealPrivate()
{
}

QLiteralRealPrivate::~QLiteralRealPrivate()
{
}

/*!
    \class QLiteralReal

    \inmodule QtUml

    \brief A literal real is a specification of a real value.
 */

QLiteralReal::QLiteralReal(QObject *parent)
    : QObject(parent), d_ptr(new QLiteralRealPrivate)
{
}

QLiteralReal::~QLiteralReal()
{
    delete d_ptr;
}

qreal QLiteralReal::value() const
{
    return d_ptr->value;
}

void QLiteralReal::setValue(qreal value)
{
    d_ptr->value = value;
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QLiteralReal::isComputable() const
{
    qWarning("QLiteralReal::isComputable: operation to be implemented");
}

/*!
    The query realValue() gives the value.
 */
qreal QLiteralReal::realValue() const
{
    qWarning("QLiteralReal::realValue: operation to be implemented");
}

#include "moc_qliteralreal.cpp"

QT_END_NAMESPACE_QTUML
