/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofenumeration.h"
#include "qmofenumeration_p.h"

#include <QtMof/QMofEnumerationLiteral>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofEnumerationPrivate::QMofEnumerationPrivate()
{
}

QMofEnumerationPrivate::~QMofEnumerationPrivate()
{
}

/*!
    \class QMofEnumeration

    \inmodule QtMof

    \brief An enumeration is a data type whose values are enumerated in the model as enumeration literals.
 */

QMofEnumeration::QMofEnumeration(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDataType(*new QMofEnumerationPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofEnumeration::QMofEnumeration(QMofEnumerationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDataType(dd, wrapper, parent)
{
    setPropertyData();
}

QMofEnumeration::~QMofEnumeration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofEnumeration
// ---------------------------------------------------------------

/*!
    The ordered set of literals for this Enumeration.
 */
QList<QMofEnumerationLiteral *> QMofEnumeration::ownedLiterals() const
{
    // This is a read-write association end

    Q_D(const QMofEnumeration);
    return d->ownedLiterals;
}

void QMofEnumeration::addOwnedLiteral(QMofEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    Q_D(QMofEnumeration);
    if (!d->ownedLiterals.contains(ownedLiteral)) {
        d->ownedLiterals.append(ownedLiteral);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedLiteral));

        // Adjust opposite property
        ownedLiteral->setEnumeration(this);
    }
}

void QMofEnumeration::removeOwnedLiteral(QMofEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    Q_D(QMofEnumeration);
    if (d->ownedLiterals.contains(ownedLiteral)) {
        d->ownedLiterals.removeAll(ownedLiteral);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedLiteral));

        // Adjust opposite property
        ownedLiteral->setEnumeration(0);
    }
}

void QMofEnumeration::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of literals for this Enumeration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofEnumeration")][QString::fromLatin1("ownedLiterals")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofEnumerationLiteral::enumeration");

    QMofDataType::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofenumeration.cpp"

