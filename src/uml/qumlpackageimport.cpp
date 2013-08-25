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
#include "qumlpackageimport_p.h"

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>

QT_BEGIN_NAMESPACE

QUmlPackageImportPrivate::QUmlPackageImportPrivate() :
    importedPackage(0),
    importingNamespace(0),
    visibility(QtUml::VisibilityPublic)
{
}

/*!
    \class QUmlPackageImport

    \inmodule QtUml

    \brief A package import is a relationship that allows the use of unqualified names to refer to package members from other namespaces.
 */

QUmlPackageImport::QUmlPackageImport(bool create_d_ptr) :
    QUmlDirectedRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlPackageImportPrivate);
}

// OWNED ATTRIBUTES

/*!
    Specifies the Package whose members are imported into a Namespace.
 */
QUmlPackage *QUmlPackageImport::importedPackage() const
{
    // This is a read-write association end

    QM_D(const QUmlPackageImport);
    return d->importedPackage;
}

void QUmlPackageImport::setImportedPackage(QUmlPackage *importedPackage)
{
    // This is a read-write association end

    QM_D(QUmlPackageImport);
    if (d->importedPackage != importedPackage) {
        d->importedPackage = importedPackage;
    }
}

/*!
    Specifies the Namespace that imports the members from a Package.
 */
QUmlNamespace *QUmlPackageImport::importingNamespace() const
{
    // This is a read-write association end

    QM_D(const QUmlPackageImport);
    return d->importingNamespace;
}

void QUmlPackageImport::setImportingNamespace(QUmlNamespace *importingNamespace)
{
    // This is a read-write association end

    QM_D(QUmlPackageImport);
    if (d->importingNamespace != importingNamespace) {
        d->importingNamespace = importingNamespace;
    }
}

/*!
    Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not.
 */
QtUml::VisibilityKind QUmlPackageImport::visibility() const
{
    // This is a read-write property

    QM_D(const QUmlPackageImport);
    return d->visibility;
}

void QUmlPackageImport::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write property

    QM_D(QUmlPackageImport);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
}

QT_END_NAMESPACE

