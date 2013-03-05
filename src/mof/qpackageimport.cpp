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

#include "qpackageimport.h"
#include "qpackageimport_p.h"

#include <QtMof/QPackage>
#include <QtMof/QNamespace>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtMof
{

QPackageImportPrivate::QPackageImportPrivate() :
    visibility(QtMofNS::VisibilityPublic),
    importingNamespace(0),
    importedPackage(0)
{
}

QPackageImportPrivate::~QPackageImportPrivate()
{
}

/*!
    \class QPackageImport

    \inmodule QtMof

    \brief A package import is a relationship that allows the use of unqualified names to refer to package members from other namespaces.
 */

QPackageImport::QPackageImport(QWrappedObject *wrapper, QWrappedObject *parent) :
    QDirectedRelationship(*new QPackageImportPrivate, wrapper, parent)
{
    setPropertyData();
}

QPackageImport::QPackageImport(QPackageImportPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QPackageImport::~QPackageImport()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPackageImport
// ---------------------------------------------------------------

/*!
    Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.
 */
QtMofNS::VisibilityKind QPackageImport::visibility() const
{
    // This is a read-write attribute

    Q_D(const QPackageImport);
    return d->visibility;
}

void QPackageImport::setVisibility(QtMofNS::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QPackageImport);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
    d->modifiedResettableProperties << QString::fromLatin1("visibility");
}

void QPackageImport::unsetVisibility()
{
    setVisibility(QtMofNS::VisibilityPublic);
    Q_D(QPackageImport);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QPackageImport
// ---------------------------------------------------------------

/*!
    Specifies the Namespace that imports the members from a Package.
 */
QNamespace *QPackageImport::importingNamespace() const
{
    // This is a read-write association end

    Q_D(const QPackageImport);
    return d->importingNamespace;
}

void QPackageImport::setImportingNamespace(QNamespace *importingNamespace)
{
    // This is a read-write association end

    Q_D(QPackageImport);
    if (d->importingNamespace != importingNamespace) {
        // Adjust opposite property
        if (d->importingNamespace)
            d->importingNamespace->removePackageImport(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->importingNamespace));

        d->importingNamespace = importingNamespace;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(importingNamespace));
        if (importingNamespace) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(importingNamespace));
        }

        // Adjust opposite property
        if (importingNamespace)
            importingNamespace->addPackageImport(this);
    }
}

/*!
    Specifies the Package whose members are imported into a Namespace.
 */
QPackage *QPackageImport::importedPackage() const
{
    // This is a read-write association end

    Q_D(const QPackageImport);
    return d->importedPackage;
}

void QPackageImport::setImportedPackage(QPackage *importedPackage)
{
    // This is a read-write association end

    Q_D(QPackageImport);
    if (d->importedPackage != importedPackage) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->importedPackage));

        d->importedPackage = importedPackage;

        // Adjust subsetted property(ies)
        if (importedPackage) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(importedPackage));
        }
    }
}

void QPackageImport::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("visibility")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Namespace that imports the members from a Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner QDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QNamespace::packageImport");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Package whose members are imported into a Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QPackageImport")][QString::fromLatin1("importedPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QDirectedRelationship::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qpackageimport.cpp"

