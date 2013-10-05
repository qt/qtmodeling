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
#include "qumlpackageimport.h"

#include "private/qumlpackageimportobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
/*!
    \class QUmlPackageImport

    \inmodule QtUml

    \brief A package import is a relationship that allows the use of unqualified names to refer to package members from other namespaces.
 */
QUmlPackageImport::QUmlPackageImport(bool createQObject) :
    _importedPackage(0),
    _importingNamespace(0),
    _visibility(QtUml::VisibilityKindPublic)
{
    if (createQObject)
        _qObject = new QUmlPackageImportObject(this);
    setPropertyData();
}

QUmlPackageImport::~QUmlPackageImport()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlPackageImport::clone() const
{
    QUmlPackageImport *c = new QUmlPackageImport;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (importedPackage())
        c->setImportedPackage(dynamic_cast<QUmlPackage *>(importedPackage()->clone()));
    if (importingNamespace())
        c->setImportingNamespace(dynamic_cast<QUmlNamespace *>(importingNamespace()->clone()));
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the Package whose members are imported into a Namespace.
 */
QUmlPackage *QUmlPackageImport::importedPackage() const
{
    // This is a read-write association end

    return _importedPackage;
}

void QUmlPackageImport::setImportedPackage(QUmlPackage *importedPackage)
{
    // This is a read-write association end

    if (_importedPackage != importedPackage) {
        // Adjust subsetted properties
        removeTarget(_importedPackage);

        _importedPackage = importedPackage;
        if (importedPackage && importedPackage->asQObject() && this->asQObject())
            QObject::connect(importedPackage->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setImportedPackage()));

        // Adjust subsetted properties
        if (importedPackage) {
            addTarget(importedPackage);
        }
    }
}

/*!
    Specifies the Namespace that imports the members from a Package.
 */
QUmlNamespace *QUmlPackageImport::importingNamespace() const
{
    // This is a read-write association end

    return _importingNamespace;
}

void QUmlPackageImport::setImportingNamespace(QUmlNamespace *importingNamespace)
{
    // This is a read-write association end

    if (_importingNamespace != importingNamespace) {
        // Adjust subsetted properties
        removeSource(_importingNamespace);

        _importingNamespace = importingNamespace;
        if (importingNamespace && importingNamespace->asQObject() && this->asQObject())
            QObject::connect(importingNamespace->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setImportingNamespace()));

        // Adjust subsetted properties
        setOwner(importingNamespace);
        if (importingNamespace) {
            addSource(importingNamespace);
        }
    }
}

/*!
    Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.
 */
QtUml::VisibilityKind QUmlPackageImport::visibility() const
{
    // This is a read-write property

    return _visibility;
}

void QUmlPackageImport::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write property

    if (_visibility != visibility) {
        _visibility = visibility;
        _modifiedResettableProperties << QStringLiteral("visibility");
    }
}

void QUmlPackageImport::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("importedPackage")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("importedPackage")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("importedPackage")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the Package whose members are imported into a Namespace.");
    QModelingObject::propertyDataHash[QStringLiteral("importedPackage")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("importedPackage")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("importedPackage")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("importingNamespace")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("importingNamespace")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("importingNamespace")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the Namespace that imports the members from a Package.");
    QModelingObject::propertyDataHash[QStringLiteral("importingNamespace")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("importingNamespace")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner DirectedRelationship-source");
    QModelingObject::propertyDataHash[QStringLiteral("importingNamespace")][QtModeling::OppositeEndRole] = QStringLiteral("Namespace-packageImport");

    QModelingObject::propertyDataHash[QStringLiteral("visibility")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("visibility")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("visibility")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.");
    QModelingObject::propertyDataHash[QStringLiteral("visibility")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("visibility")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("visibility")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

