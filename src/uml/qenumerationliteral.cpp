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

#include "qenumerationliteral.h"

#include <QtUml/QEnumeration>

QT_BEGIN_NAMESPACE_QTUML

class QEnumerationLiteralPrivate
{
public:
    explicit QEnumerationLiteralPrivate();
    virtual ~QEnumerationLiteralPrivate();

    QEnumeration *enumeration;
};

QEnumerationLiteralPrivate::QEnumerationLiteralPrivate() :
    enumeration(0)
{
}

QEnumerationLiteralPrivate::~QEnumerationLiteralPrivate()
{
}

/*!
    \class QEnumerationLiteral

    \inmodule QtUml

    \brief An enumeration literal is a user-defined data value for an enumeration.
 */

QEnumerationLiteral::QEnumerationLiteral(QObject *parent)
    : QInstanceSpecification(parent), d_ptr(new QEnumerationLiteralPrivate)
{
}

QEnumerationLiteral::~QEnumerationLiteral()
{
    delete d_ptr;
}

/*!
    The classifier of this EnumerationLiteral derived to be equal to its enumeration.
 */
QEnumeration *QEnumerationLiteral::classifier() const
{
    qWarning("QEnumerationLiteral::classifier: to be implemented (this is a derived associationend)");
}

/*!
    The Enumeration that this EnumerationLiteral is a member of.
 */
QEnumeration *QEnumerationLiteral::enumeration() const
{
    return d_ptr->enumeration;
}

void QEnumerationLiteral::setEnumeration(const QEnumeration *enumeration)
{
    d_ptr->enumeration = const_cast<QEnumeration *>(enumeration);
}

#include "moc_qenumerationliteral.cpp"

QT_END_NAMESPACE_QTUML

