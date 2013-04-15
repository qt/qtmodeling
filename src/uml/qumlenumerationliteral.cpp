/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlenumerationliteral.h"
#include "qumlenumerationliteral_p.h"

#include <QtUml/QUmlEnumeration>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlEnumerationLiteralPrivate::QUmlEnumerationLiteralPrivate() :
    enumeration(0)
{
}

QUmlEnumerationLiteralPrivate::~QUmlEnumerationLiteralPrivate()
{
}

/*!
    \class QUmlEnumerationLiteral

    \inmodule QtUml

    \brief An enumeration literal is a user-defined data value for an enumeration.
 */

QUmlEnumerationLiteral::QUmlEnumerationLiteral(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInstanceSpecification(*new QUmlEnumerationLiteralPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlEnumerationLiteral::QUmlEnumerationLiteral(QUmlEnumerationLiteralPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInstanceSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlEnumerationLiteral::~QUmlEnumerationLiteral()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlEnumerationLiteral
// ---------------------------------------------------------------

/*!
    The classifier of this EnumerationLiteral derived to be equal to its enumeration.
 */
QUmlEnumeration *QUmlEnumerationLiteral::classifier() const
{
    // This is a read-only derived association end

    qWarning("QUmlEnumerationLiteral::classifier: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The Enumeration that this EnumerationLiteral is a member of.
 */
QUmlEnumeration *QUmlEnumerationLiteral::enumeration() const
{
    // This is a read-write association end

    Q_D(const QUmlEnumerationLiteral);
    return d->enumeration;
}

void QUmlEnumerationLiteral::setEnumeration(QUmlEnumeration *enumeration)
{
    // This is a read-write association end

    Q_D(QUmlEnumerationLiteral);
    if (d->enumeration != enumeration) {
        // Adjust opposite property
        if (d->enumeration)
            d->enumeration->removeOwnedLiteral(this);

        d->enumeration = enumeration;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(enumeration));

        // Adjust opposite property
        if (enumeration)
            enumeration->addOwnedLiteral(this);
    }
}

void QUmlEnumerationLiteral::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier of this EnumerationLiteral derived to be equal to its enumeration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlInstanceSpecification::classifiers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Enumeration that this EnumerationLiteral is a member of.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEnumerationLiteral")][QString::fromLatin1("enumeration")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlEnumeration::ownedLiteral");

    QUmlInstanceSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlenumerationliteral.cpp"

