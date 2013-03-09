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

#include "qumlenumeration.h"
#include "qumlenumeration_p.h"

#include <QtUml/QUmlEnumerationLiteral>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlEnumerationPrivate::QUmlEnumerationPrivate()
{
}

QUmlEnumerationPrivate::~QUmlEnumerationPrivate()
{
}

/*!
    \class QUmlEnumeration

    \inmodule QtUml

    \brief An enumeration is a data type whose values are enumerated in the model as enumeration literals.
 */

QUmlEnumeration::QUmlEnumeration(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDataType(*new QUmlEnumerationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlEnumeration::QUmlEnumeration(QUmlEnumerationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDataType(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlEnumeration::~QUmlEnumeration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlEnumeration
// ---------------------------------------------------------------

/*!
    The ordered set of literals for this Enumeration.
 */
QList<QUmlEnumerationLiteral *> QUmlEnumeration::ownedLiterals() const
{
    // This is a read-write association end

    Q_D(const QUmlEnumeration);
    return d->ownedLiterals;
}

void QUmlEnumeration::addOwnedLiteral(QUmlEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    Q_D(QUmlEnumeration);
    if (!d->ownedLiterals.contains(ownedLiteral)) {
        d->ownedLiterals.append(ownedLiteral);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedLiteral));

        // Adjust opposite property
        ownedLiteral->setEnumeration(this);
    }
}

void QUmlEnumeration::removeOwnedLiteral(QUmlEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    Q_D(QUmlEnumeration);
    if (d->ownedLiterals.contains(ownedLiteral)) {
        d->ownedLiterals.removeAll(ownedLiteral);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedLiteral));

        // Adjust opposite property
        ownedLiteral->setEnumeration(0);
    }
}

void QUmlEnumeration::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of literals for this Enumeration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlEnumerationLiteral::enumeration");

    QUmlDataType::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlenumeration.cpp"

