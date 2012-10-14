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

#include "qenumeration.h"
#include "qenumeration_p.h"
#include "qnamespace_p.h"

#include <QtUml/QEnumerationLiteral>

QT_BEGIN_NAMESPACE_QTUML

QEnumerationPrivate::QEnumerationPrivate() :
    ownedLiterals(new QList<QEnumerationLiteral *>)
{
}

QEnumerationPrivate::~QEnumerationPrivate()
{
    delete ownedLiterals;
}

void QEnumerationPrivate::addOwnedLiteral(QEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    this->ownedLiterals->append(ownedLiteral);

    // Adjust subsetted property(ies)
    addOwnedMember(ownedLiteral);
}

void QEnumerationPrivate::removeOwnedLiteral(QEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    this->ownedLiterals->removeAll(ownedLiteral);

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedLiteral);
}

/*!
    \class QEnumeration

    \inmodule QtUml

    \brief An enumeration is a data type whose values are enumerated in the model as enumeration literals.
 */

QEnumeration::QEnumeration(QObject *parent)
    : QDataType(false, parent)
{
    d_umlptr = new QEnumerationPrivate;
}

QEnumeration::QEnumeration(bool createPimpl, QObject *parent)
    : QDataType(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QEnumerationPrivate;
}

QEnumeration::~QEnumeration()
{
}

/*!
    The ordered set of literals for this Enumeration.
 */
const QList<QEnumerationLiteral *> *QEnumeration::ownedLiterals() const
{
    // This is a read-write association end

    QTUML_D(const QEnumeration);
    return d->ownedLiterals;
}

void QEnumeration::addOwnedLiteral(QEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    QTUML_D(QEnumeration);
    if (!d->ownedLiterals->contains(ownedLiteral)) {
        d->addOwnedLiteral(ownedLiteral);

        // Adjust opposite property
        ownedLiteral->setEnumeration(this);
    }
}

void QEnumeration::removeOwnedLiteral(QEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    QTUML_D(QEnumeration);
    if (d->ownedLiterals->contains(ownedLiteral)) {
        d->removeOwnedLiteral(ownedLiteral);

        // Adjust opposite property
        ownedLiteral->setEnumeration(0);
    }
}

#include "moc_qenumeration.cpp"

QT_END_NAMESPACE_QTUML

