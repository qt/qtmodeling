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
#include "qenumerationliteral_p.h"

#include <QtUml/QEnumeration>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

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

QEnumerationLiteral::QEnumerationLiteral(QWrappedObject *parent, QWrappedObject *wrapper) :
    QInstanceSpecification(*new QEnumerationLiteralPrivate, parent, wrapper)
{
    setPropertyData();
}

QEnumerationLiteral::QEnumerationLiteral(QEnumerationLiteralPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QInstanceSpecification(dd, parent, wrapper)
{
    setPropertyData();
}

QEnumerationLiteral::~QEnumerationLiteral()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QEnumerationLiteral
// ---------------------------------------------------------------

/*!
    The classifier of this EnumerationLiteral derived to be equal to its enumeration.
 */
QEnumeration *QEnumerationLiteral::classifier() const
{
    // This is a read-only derived association end

    qWarning("QEnumerationLiteral::classifier: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The Enumeration that this EnumerationLiteral is a member of.
 */
QEnumeration *QEnumerationLiteral::enumeration() const
{
    // This is a read-write association end

    Q_D(const QEnumerationLiteral);
    return d->enumeration;
}

void QEnumerationLiteral::setEnumeration(QEnumeration *enumeration)
{
    // This is a read-write association end

    Q_D(QEnumerationLiteral);
    if (d->enumeration != enumeration) {
        // Adjust opposite property
        if (d->enumeration)
            d->enumeration->removeOwnedLiteral(this);

        d->enumeration = enumeration;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(enumeration));

        // Adjust opposite property
        if (enumeration)
            enumeration->addOwnedLiteral(this);
    }
}

void QEnumerationLiteral::registerMetaTypes() const
{
    qRegisterMetaType<QEnumeration *>("QEnumeration *");
    qRegisterMetaType<QSet<QEnumeration *>>("QSet<QEnumeration *>");
    qRegisterMetaType<QList<QEnumeration *>>("QList<QEnumeration *>");

    QInstanceSpecification::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QEnumerationLiteral::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier of this EnumerationLiteral derived to be equal to its enumeration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QInstanceSpecification::classifier");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Enumeration that this EnumerationLiteral is a member of.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");

    QInstanceSpecification::setPropertyData();
}

#include "moc_qenumerationliteral.cpp"

QT_END_NAMESPACE_QTUML

