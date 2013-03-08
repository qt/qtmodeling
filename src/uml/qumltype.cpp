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

#include "qumltype.h"
#include "qumltype_p.h"

#include <QtUml/QUmlPackage>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTypePrivate::QUmlTypePrivate() :
    package(0)
{
}

QUmlTypePrivate::~QUmlTypePrivate()
{
}

/*!
    \class QUmlType

    \inmodule QtUml

    \brief A type is a named element that is used as the type for a typed element. A type can be contained in a package.A type constrains the values represented by a typed element.
 */

QUmlType::QUmlType(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackageableElement(*new QUmlTypePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlType::QUmlType(QUmlTypePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackageableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlType::~QUmlType()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QUmlPackage *QUmlType::package() const
{
    // This is a read-write association end

    Q_D(const QUmlType);
    return d->package;
}

void QUmlType::setPackage(QUmlPackage *package)
{
    // This is a read-write association end

    Q_D(QUmlType);
    if (d->package != package) {
        // Adjust opposite property
        if (d->package)
            d->package->removeOwnedType(this);

        d->package = package;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(package));

        // Adjust opposite property
        if (package)
            package->addOwnedType(this);
    }
}

/*!
    The query conformsTo() gives true for a type that conforms to another. By default, two types do not conform to each other. This query is intended to be redefined for specific conformance situations.
 */
bool QUmlType::conformsTo(const QUmlType *other) const
{
    qWarning("QUmlType::conformsTo: operation to be implemented");
    Q_UNUSED(other);

    return bool(); // change here to your derived return
}

void QUmlType::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlType")][QString::fromLatin1("package")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlType")][QString::fromLatin1("package")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlType")][QString::fromLatin1("package")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the owning package of this classifier, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlType")][QString::fromLatin1("package")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlType")][QString::fromLatin1("package")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlType")][QString::fromLatin1("package")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QPackage::ownedType");

    QUmlPackageableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltype.cpp"

