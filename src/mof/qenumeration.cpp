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

#include "qenumeration.h"
#include "qenumeration_p.h"

#include <QtMof/QEnumerationLiteral>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QEnumerationPrivate::QEnumerationPrivate()
{
}

QEnumerationPrivate::~QEnumerationPrivate()
{
}

/*!
    \class QEnumeration

    \inmodule QtMof

    \brief An enumeration is a data type whose values are enumerated in the model as enumeration literals.
 */

QEnumeration::QEnumeration(QWrappedObject *parent, QWrappedObject *wrapper) :
    QDataType(*new QEnumerationPrivate, parent, wrapper)
{
    setPropertyData();
}

QEnumeration::QEnumeration(QEnumerationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QDataType(dd, parent, wrapper)
{
    setPropertyData();
}

QEnumeration::~QEnumeration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QEnumeration
// ---------------------------------------------------------------

/*!
    The ordered set of literals for this Enumeration.
 */
QList<QEnumerationLiteral *> QEnumeration::ownedLiterals() const
{
    // This is a read-write association end

    Q_D(const QEnumeration);
    return d->ownedLiterals;
}

void QEnumeration::addOwnedLiteral(QEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    Q_D(QEnumeration);
    if (!d->ownedLiterals.contains(ownedLiteral)) {
        d->ownedLiterals.append(ownedLiteral);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedLiteral));

        // Adjust opposite property
        ownedLiteral->setEnumeration(this);
    }
}

void QEnumeration::removeOwnedLiteral(QEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    Q_D(QEnumeration);
    if (d->ownedLiterals.contains(ownedLiteral)) {
        d->ownedLiterals.removeAll(ownedLiteral);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(ownedLiteral));

        // Adjust opposite property
        ownedLiteral->setEnumeration(0);
    }
}

void QEnumeration::registerMetaTypes() const
{
    qRegisterMetaType<QEnumerationLiteral *>("QEnumerationLiteral *");
    qRegisterMetaType<QSet<QEnumerationLiteral *>>("QSet<QEnumerationLiteral *>");
    qRegisterMetaType<QList<QEnumerationLiteral *>>("QList<QEnumerationLiteral *>");

    QDataType::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QEnumeration::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of literals for this Enumeration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMember");

    QDataType::setPropertyData();
}

#include "moc_qenumeration.cpp"

QT_END_NAMESPACE_QTMOF

