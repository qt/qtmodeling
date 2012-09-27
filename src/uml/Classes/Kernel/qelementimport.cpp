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

#include "qelementimport.h"
//#include "qelementimport_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QElementImport

    \inmodule QtUml

    \brief An element import identifies an element in another package, and allows the element to be referenced using its name without a qualifier.
 */

QElementImport::QElementImport(QObject *parent)
    : QObject(parent)
{
}

QElementImport::~QElementImport()
{
}
/*!
    Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used.
 */
QString QElementImport::alias() const
{
}

void QElementImport::setAlias(QString alias)
{
}
/*!
    Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import.
 */
QEnumerations::VisibilityKind QElementImport::visibility() const
{
}

void QElementImport::setVisibility(QEnumerations::VisibilityKind visibility)
{
}
/*!
    Specifies the PackageableElement whose name is to be added to a Namespace.
 */
QPackageableElement *QElementImport::importedElement() const
{
}

void QElementImport::setImportedElement(QPackageableElement *importedElement)
{
}
/*!
    Specifies the Namespace that imports a PackageableElement from another Package.
 */
QNamespace *QElementImport::importingNamespace() const
{
}

void QElementImport::setImportingNamespace(QNamespace *importingNamespace)
{
}

/*!
    The query getName() returns the name under which the imported PackageableElement will be known in the importing namespace.
 */
QString QElementImport::getName() const
{
}

#include "moc_qelementimport.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

