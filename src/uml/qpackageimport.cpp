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

#include "qpackageimport.h"
#include "qpackageimport_p.h"
#include "qelement_p.h"
#include "qdirectedrelationship_p.h"

#include <QtUml/QPackage>
#include <QtUml/QNamespace>

QT_BEGIN_NAMESPACE_QTUML

QPackageImportPrivate::QPackageImportPrivate() :
    visibility(QtUml::VisibilityPublic),
    importingNamespace(0),
    importedPackage(0)
{
}

QPackageImportPrivate::~QPackageImportPrivate()
{
}

void QPackageImportPrivate::setVisibility(QtUml::VisibilityKind visibility)
{
    this->visibility = visibility;
}

void QPackageImportPrivate::setImportingNamespace(QNamespace *importingNamespace)
{
    // Adjust subsetted property(ies)
    removeSource(this->importingNamespace);

    this->importingNamespace = importingNamespace;

    // Adjust subsetted property(ies)
    setOwner(importingNamespace);
    addSource(importingNamespace);
}

void QPackageImportPrivate::setImportedPackage(QPackage *importedPackage)
{
    // Adjust subsetted property(ies)
    removeTarget(this->importedPackage);

    this->importedPackage = importedPackage;

    // Adjust subsetted property(ies)
    addTarget(importedPackage);
}

/*!
    \class QPackageImport

    \inmodule QtUml

    \brief A package import is a relationship that allows the use of unqualified names to refer to package members from other namespaces.
 */

QPackageImport::QPackageImport(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QPackageImportPrivate;
}

QPackageImport::QPackageImport(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QPackageImportPrivate;
}

QPackageImport::~QPackageImport()
{
}

/*!
    Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.
 */
QtUml::VisibilityKind QPackageImport::visibility() const
{
    QTUML_D(const QPackageImport);
    return d->visibility;
}

void QPackageImport::setVisibility(QtUml::VisibilityKind visibility)
{
    QTUML_D(QPackageImport);
    if (d->visibility != visibility) {
        d->setVisibility(visibility);
    }
}

/*!
    Specifies the Namespace that imports the members from a Package.
 */
QNamespace *QPackageImport::importingNamespace() const
{
    QTUML_D(const QPackageImport);
    return d->importingNamespace;
}

void QPackageImport::setImportingNamespace(QNamespace *importingNamespace)
{
    QTUML_D(QPackageImport);
    if (d->importingNamespace != importingNamespace) {
        d->setImportingNamespace(importingNamespace);

        // Adjust opposite property
        importingNamespace->addPackageImport(this);
    }
}

/*!
    Specifies the Package whose members are imported into a Namespace.
 */
QPackage *QPackageImport::importedPackage() const
{
    QTUML_D(const QPackageImport);
    return d->importedPackage;
}

void QPackageImport::setImportedPackage(QPackage *importedPackage)
{
    QTUML_D(QPackageImport);
    if (d->importedPackage != importedPackage) {
        d->setImportedPackage(importedPackage);
    }
}

#include "moc_qpackageimport.cpp"

QT_END_NAMESPACE_QTUML

