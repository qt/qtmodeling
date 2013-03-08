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

#include "qmofpackageimport.h"
#include "qmofpackageimport_p.h"

#include <QtMof/QMofPackage>
#include <QtMof/QMofNamespace>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofPackageImportPrivate::QMofPackageImportPrivate() :
    visibility(QtMof::VisibilityPublic),
    importingNamespace(0),
    importedPackage(0)
{
}

QMofPackageImportPrivate::~QMofPackageImportPrivate()
{
}

/*!
    \class QMofPackageImport

    \inmodule QtMof

    \brief A package import is a relationship that allows the use of unqualified names to refer to package members from other namespaces.
 */

QMofPackageImport::QMofPackageImport(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(*new QMofPackageImportPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofPackageImport::QMofPackageImport(QMofPackageImportPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QMofPackageImport::~QMofPackageImport()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofPackageImport
// ---------------------------------------------------------------

/*!
    Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.
 */
QtMof::VisibilityKind QMofPackageImport::visibility() const
{
    // This is a read-write attribute

    Q_D(const QMofPackageImport);
    return d->visibility;
}

void QMofPackageImport::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QMofPackageImport);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
    d->modifiedResettableProperties << QString::fromLatin1("visibility");
}

void QMofPackageImport::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QMofPackageImport);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofPackageImport
// ---------------------------------------------------------------

/*!
    Specifies the Namespace that imports the members from a Package.
 */
QMofNamespace *QMofPackageImport::importingNamespace() const
{
    // This is a read-write association end

    Q_D(const QMofPackageImport);
    return d->importingNamespace;
}

void QMofPackageImport::setImportingNamespace(QMofNamespace *importingNamespace)
{
    // This is a read-write association end

    Q_D(QMofPackageImport);
    if (d->importingNamespace != importingNamespace) {
        // Adjust opposite property
        if (d->importingNamespace)
            d->importingNamespace->removePackageImport(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QMofElement *>(d->importingNamespace));

        d->importingNamespace = importingNamespace;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->setOwner(qwrappedobject_cast<QMofElement *>(importingNamespace));
        if (importingNamespace) {
            (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QMofElement *>(importingNamespace));
        }

        // Adjust opposite property
        if (importingNamespace)
            importingNamespace->addPackageImport(this);
    }
}

/*!
    Specifies the Package whose members are imported into a Namespace.
 */
QMofPackage *QMofPackageImport::importedPackage() const
{
    // This is a read-write association end

    Q_D(const QMofPackageImport);
    return d->importedPackage;
}

void QMofPackageImport::setImportedPackage(QMofPackage *importedPackage)
{
    // This is a read-write association end

    Q_D(QMofPackageImport);
    if (d->importedPackage != importedPackage) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QMofElement *>(d->importedPackage));

        d->importedPackage = importedPackage;

        // Adjust subsetted property(ies)
        if (importedPackage) {
            (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QMofElement *>(importedPackage));
        }
    }
}

void QMofPackageImport::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Namespace that imports the members from a Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::owner QMofDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QNamespace::packageImport");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Package whose members are imported into a Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofpackageimport.cpp"

