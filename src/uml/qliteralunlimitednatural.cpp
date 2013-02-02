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

#include "qliteralunlimitednatural.h"
#include "qliteralunlimitednatural_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QLiteralUnlimitedNaturalPrivate::QLiteralUnlimitedNaturalPrivate() :
    value(0)
{
}

QLiteralUnlimitedNaturalPrivate::~QLiteralUnlimitedNaturalPrivate()
{
}

/*!
    \class QLiteralUnlimitedNatural

    \inmodule QtUml

    \brief A literal unlimited natural is a specification of an unlimited natural number.
 */

QLiteralUnlimitedNatural::QLiteralUnlimitedNatural(QWrappedObject *wrapper, QWrappedObject *parent) :
    QLiteralSpecification(*new QLiteralUnlimitedNaturalPrivate, wrapper, parent)
{
    setPropertyData();
}

QLiteralUnlimitedNatural::QLiteralUnlimitedNatural(QLiteralUnlimitedNaturalPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QLiteralSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QLiteralUnlimitedNatural::~QLiteralUnlimitedNatural()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLiteralUnlimitedNatural
// ---------------------------------------------------------------

/*!
    The specified UnlimitedNatural value.
 */
qint32 QLiteralUnlimitedNatural::value() const
{
    // This is a read-write attribute

    Q_D(const QLiteralUnlimitedNatural);
    return d->value;
}

void QLiteralUnlimitedNatural::setValue(qint32 value)
{
    // This is a read-write attribute

    Q_D(QLiteralUnlimitedNatural);
    if (d->value != value) {
        d->value = value;
    }
    d->modifiedResettableProperties << QString::fromLatin1("value");
}

void QLiteralUnlimitedNatural::unsetValue()
{
    setValue(0);
    Q_D(QLiteralUnlimitedNatural);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("value"));
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QLiteralUnlimitedNatural::isComputable() const
{
    qWarning("QLiteralUnlimitedNatural::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query unlimitedValue() gives the value.
 */
qint32 QLiteralUnlimitedNatural::unlimitedValue() const
{
    qWarning("QLiteralUnlimitedNatural::unlimitedValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QLiteralUnlimitedNatural::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLiteralUnlimitedNatural")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLiteralUnlimitedNatural")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLiteralUnlimitedNatural")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specified UnlimitedNatural value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLiteralUnlimitedNatural")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLiteralUnlimitedNatural")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLiteralUnlimitedNatural")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QLiteralSpecification::setPropertyData();
}

#include "moc_qliteralunlimitednatural.cpp"

QT_END_NAMESPACE_QTUML

