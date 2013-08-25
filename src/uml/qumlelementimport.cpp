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
#include "qumlelementimport.h"
#include "qumlelementimport_p.h"

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackageableElement>

QT_BEGIN_NAMESPACE

QUmlElementImportPrivate::QUmlElementImportPrivate() :
    importedElement(0),
    importingNamespace(0),
    visibility(QtUml::VisibilityPublic)
{
}

/*!
    \class QUmlElementImport

    \inmodule QtUml

    \brief An element import identifies an element in another package, and allows the element to be referenced using its name without a qualifier.
 */

QUmlElementImport::QUmlElementImport(bool create_d_ptr) :
    QUmlDirectedRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlElementImportPrivate);
}

// OWNED ATTRIBUTES

/*!
    Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used.
 */
QString QUmlElementImport::alias() const
{
    // This is a read-write property

    QM_D(const QUmlElementImport);
    return d->alias;
}

void QUmlElementImport::setAlias(QString alias)
{
    // This is a read-write property

    QM_D(QUmlElementImport);
    if (d->alias != alias) {
        d->alias = alias;
    }
}

/*!
    Specifies the PackageableElement whose name is to be added to a Namespace.
 */
QUmlPackageableElement *QUmlElementImport::importedElement() const
{
    // This is a read-write association end

    QM_D(const QUmlElementImport);
    return d->importedElement;
}

void QUmlElementImport::setImportedElement(QUmlPackageableElement *importedElement)
{
    // This is a read-write association end

    QM_D(QUmlElementImport);
    if (d->importedElement != importedElement) {
        d->importedElement = importedElement;
    }
}

/*!
    Specifies the Namespace that imports a PackageableElement from another Package.
 */
QUmlNamespace *QUmlElementImport::importingNamespace() const
{
    // This is a read-write association end

    QM_D(const QUmlElementImport);
    return d->importingNamespace;
}

void QUmlElementImport::setImportingNamespace(QUmlNamespace *importingNamespace)
{
    // This is a read-write association end

    QM_D(QUmlElementImport);
    if (d->importingNamespace != importingNamespace) {
        d->importingNamespace = importingNamespace;
    }
}

/*!
    Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import.
 */
QtUml::VisibilityKind QUmlElementImport::visibility() const
{
    // This is a read-write property

    QM_D(const QUmlElementImport);
    return d->visibility;
}

void QUmlElementImport::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write property

    QM_D(QUmlElementImport);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
}

// OPERATIONS

/*!
    The query getName() returns the name under which the imported PackageableElement will be known in the importing namespace.
 */
QString QUmlElementImport::getName() const
{
    return QString ();
}

QT_END_NAMESPACE

