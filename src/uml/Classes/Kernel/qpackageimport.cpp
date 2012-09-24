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
//#include "qpackageimport_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QPackageImport

    \inmodule QtUml

    \brief A package import is a relationship that allows the use of unqualified names to refer to package members from other namespaces.
 */

QPackageImport::QPackageImport(QObject *parent)
    : QObject(parent)
{
}

QPackageImport::~QPackageImport()
{
}

/*!
    Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.
 */
QEnumerations::VisibilityKind QPackageImport::visibility() const
{
}

void QPackageImport::setVisibility(QEnumerations::VisibilityKind visibility)
{
}

/*!
    Specifies the Package whose members are imported into a Namespace.
 */
QPackage *QPackageImport::importedPackage() const
{
}

void QPackageImport::setImportedPackage(QPackage *importedPackage)
{
}

/*!
    Specifies the Namespace that imports the members from a Package.
 */
QNamespace *QPackageImport::importingNamespace() const
{
}

void QPackageImport::setImportingNamespace(QNamespace *importingNamespace)
{
}

#include "moc_qpackageimport.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

