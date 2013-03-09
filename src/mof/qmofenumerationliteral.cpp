/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmofenumerationliteral.h"
#include "qmofenumerationliteral_p.h"

#include <QtMof/QMofEnumeration>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofEnumerationLiteralPrivate::QMofEnumerationLiteralPrivate() :
    enumeration(0)
{
}

QMofEnumerationLiteralPrivate::~QMofEnumerationLiteralPrivate()
{
}

/*!
    \class QMofEnumerationLiteral

    \inmodule QtMof

    \brief An enumeration literal is a user-defined data value for an enumeration.
 */

QMofEnumerationLiteral::QMofEnumerationLiteral(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofInstanceSpecification(*new QMofEnumerationLiteralPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofEnumerationLiteral::QMofEnumerationLiteral(QMofEnumerationLiteralPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofInstanceSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QMofEnumerationLiteral::~QMofEnumerationLiteral()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofEnumerationLiteral
// ---------------------------------------------------------------

/*!
    The classifier of this EnumerationLiteral derived to be equal to its enumeration.
 */
QMofEnumeration *QMofEnumerationLiteral::classifier() const
{
    // This is a read-only derived association end

    qWarning("QMofEnumerationLiteral::classifier: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The Enumeration that this EnumerationLiteral is a member of.
 */
QMofEnumeration *QMofEnumerationLiteral::enumeration() const
{
    // This is a read-write association end

    Q_D(const QMofEnumerationLiteral);
    return d->enumeration;
}

void QMofEnumerationLiteral::setEnumeration(QMofEnumeration *enumeration)
{
    // This is a read-write association end

    Q_D(QMofEnumerationLiteral);
    if (d->enumeration != enumeration) {
        // Adjust opposite property
        if (d->enumeration)
            d->enumeration->removeOwnedLiteral(this);

        d->enumeration = enumeration;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(enumeration));

        // Adjust opposite property
        if (enumeration)
            enumeration->addOwnedLiteral(this);
    }
}

void QMofEnumerationLiteral::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier of this EnumerationLiteral derived to be equal to its enumeration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMofInstanceSpecification::classifiers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Enumeration that this EnumerationLiteral is a member of.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofEnumeration::ownedLiteral");

    QMofInstanceSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofenumerationliteral.cpp"

