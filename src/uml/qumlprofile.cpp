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

#include "qumlprofile.h"
#include "qumlprofile_p.h"

#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlPackageImport>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlProfilePrivate::QUmlProfilePrivate()
{
}

QUmlProfilePrivate::~QUmlProfilePrivate()
{
}

/*!
    \class QUmlProfile

    \inmodule QtUml

    \brief A profile defines limited extensions to a reference metamodel with the purpose of adapting the metamodel to a specific platform or domain.
 */

QUmlProfile::QUmlProfile(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackage(*new QUmlProfilePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlProfile::QUmlProfile(QUmlProfilePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackage(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlProfile::~QUmlProfile()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlProfile
// ---------------------------------------------------------------

/*!
    References a package containing (directly or indirectly) metaclasses that may be extended.
 */
QSet<QUmlPackageImport *> QUmlProfile::metamodelReferences() const
{
    // This is a read-write association end

    Q_D(const QUmlProfile);
    return d->metamodelReferences;
}

void QUmlProfile::addMetamodelReference(QUmlPackageImport *metamodelReference)
{
    // This is a read-write association end

    Q_D(QUmlProfile);
    if (!d->metamodelReferences.contains(metamodelReference)) {
        d->metamodelReferences.insert(metamodelReference);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(qwrappedobject_cast<QUmlPackageImport *>(metamodelReference));
    }
}

void QUmlProfile::removeMetamodelReference(QUmlPackageImport *metamodelReference)
{
    // This is a read-write association end

    Q_D(QUmlProfile);
    if (d->metamodelReferences.contains(metamodelReference)) {
        d->metamodelReferences.remove(metamodelReference);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(qwrappedobject_cast<QUmlPackageImport *>(metamodelReference));
    }
}

/*!
    References a metaclass that may be extended.
 */
QSet<QUmlElementImport *> QUmlProfile::metaclassReferences() const
{
    // This is a read-write association end

    Q_D(const QUmlProfile);
    return d->metaclassReferences;
}

void QUmlProfile::addMetaclassReference(QUmlElementImport *metaclassReference)
{
    // This is a read-write association end

    Q_D(QUmlProfile);
    if (!d->metaclassReferences.contains(metaclassReference)) {
        d->metaclassReferences.insert(metaclassReference);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(qwrappedobject_cast<QUmlElementImport *>(metaclassReference));
    }
}

void QUmlProfile::removeMetaclassReference(QUmlElementImport *metaclassReference)
{
    // This is a read-write association end

    Q_D(QUmlProfile);
    if (d->metaclassReferences.contains(metaclassReference)) {
        d->metaclassReferences.remove(metaclassReference);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(qwrappedobject_cast<QUmlElementImport *>(metaclassReference));
    }
}

void QUmlProfile::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metamodelReferences")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metamodelReferences")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metamodelReferences")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a package containing (directly or indirectly) metaclasses that may be extended.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metamodelReferences")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metamodelReferences")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::packageImports");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metamodelReferences")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metaclassReferences")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metaclassReferences")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metaclassReferences")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a metaclass that may be extended.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metaclassReferences")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metaclassReferences")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::elementImports");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProfile")][QString::fromLatin1("metaclassReferences")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlPackage::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlprofile.cpp"

