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

#include "qmofelementimport.h"
#include "qmofelementimport_p.h"

#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofNamespace>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofElementImportPrivate::QMofElementImportPrivate() :
    visibility(QtMof::VisibilityPublic),
    importedElement(0),
    importingNamespace(0)
{
}

QMofElementImportPrivate::~QMofElementImportPrivate()
{
}

/*!
    \class QMofElementImport

    \inmodule QtMof

    \brief An element import identifies an element in another package, and allows the element to be referenced using its name without a qualifier.
 */

QMofElementImport::QMofElementImport(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(*new QMofElementImportPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofElementImport::QMofElementImport(QMofElementImportPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QMofElementImport::~QMofElementImport()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofElementImport
// ---------------------------------------------------------------

/*!
    Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used.
 */
QString QMofElementImport::alias() const
{
    // This is a read-write attribute

    Q_D(const QMofElementImport);
    return d->alias;
}

void QMofElementImport::setAlias(QString alias)
{
    // This is a read-write attribute

    Q_D(QMofElementImport);
    if (d->alias != alias) {
        d->alias = alias;
    }
}

/*!
    Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import.
 */
QtMof::VisibilityKind QMofElementImport::visibility() const
{
    // This is a read-write attribute

    Q_D(const QMofElementImport);
    return d->visibility;
}

void QMofElementImport::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QMofElementImport);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
    d->modifiedResettableProperties << QString::fromLatin1("visibility");
}

void QMofElementImport::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QMofElementImport);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofElementImport
// ---------------------------------------------------------------

/*!
    Specifies the PackageableElement whose name is to be added to a Namespace.
 */
QMofPackageableElement *QMofElementImport::importedElement() const
{
    // This is a read-write association end

    Q_D(const QMofElementImport);
    return d->importedElement;
}

void QMofElementImport::setImportedElement(QMofPackageableElement *importedElement)
{
    // This is a read-write association end

    Q_D(QMofElementImport);
    if (d->importedElement != importedElement) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QMofElement *>(d->importedElement));

        d->importedElement = importedElement;

        // Adjust subsetted property(ies)
        if (importedElement) {
            (qwrappedobject_cast<QMofDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QMofElement *>(importedElement));
        }
    }
}

/*!
    Specifies the Namespace that imports a PackageableElement from another Package.
 */
QMofNamespace *QMofElementImport::importingNamespace() const
{
    // This is a read-write association end

    Q_D(const QMofElementImport);
    return d->importingNamespace;
}

void QMofElementImport::setImportingNamespace(QMofNamespace *importingNamespace)
{
    // This is a read-write association end

    Q_D(QMofElementImport);
    if (d->importingNamespace != importingNamespace) {
        // Adjust opposite property
        if (d->importingNamespace)
            d->importingNamespace->removeElementImport(this);

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
            importingNamespace->addElementImport(this);
    }
}

/*!
    The query getName() returns the name under which the imported PackageableElement will be known in the importing namespace.
 */
QString QMofElementImport::getName() const
{
    qWarning("QMofElementImport::getName: operation to be implemented");

    return QString(); // change here to your derived return
}

void QMofElementImport::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("alias")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("alias")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("alias")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("alias")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("alias")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("alias")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("visibility")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("visibility")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("visibility")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("visibility")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("visibility")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("visibility")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importedElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importedElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importedElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the PackageableElement whose name is to be added to a Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importedElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importedElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importedElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the Namespace that imports a PackageableElement from another Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::owner QMofDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofElementImport")][QString::fromLatin1("importingNamespace")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofNamespace::elementImport");

    QMofDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofelementimport.cpp"

