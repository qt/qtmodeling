/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofpackageimport.h"

#include "private/qmofpackageimportobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackage>

QT_BEGIN_NAMESPACE

/*!
    \class QMofPackageImport

    \inmodule QtMof

    \brief A package import is a relationship that allows the use of unqualified names to refer to package members from other namespaces.
 */
QMofPackageImport::QMofPackageImport(bool createQModelingObject) :
    _importedPackage(0),
    _importingNamespace(0),
    _visibility(QtMof::VisibilityKindPublic)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofPackageImportObject(this));
}

QModelingElement *QMofPackageImport::clone() const
{
    QMofPackageImport *c = new QMofPackageImport;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    if (importedPackage())
        c->setImportedPackage(dynamic_cast<QMofPackage *>(importedPackage()->clone()));
    if (importingNamespace())
        c->setImportingNamespace(dynamic_cast<QMofNamespace *>(importingNamespace()->clone()));
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the Package whose members are imported into a Namespace.
 */
QMofPackage *QMofPackageImport::importedPackage() const
{
    // This is a read-write association end

    return _importedPackage;
}

void QMofPackageImport::setImportedPackage(QMofPackage *importedPackage)
{
    // This is a read-write association end

    if (_importedPackage != importedPackage) {
        // Adjust subsetted properties
        removeTarget(_importedPackage);

        _importedPackage = importedPackage;
        if (importedPackage && importedPackage->asQModelingObject() && this->asQModelingObject())
            QObject::connect(importedPackage->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setImportedPackage()));

        // Adjust subsetted properties
        if (importedPackage) {
            addTarget(importedPackage);
        }
    }
}

/*!
    Specifies the Namespace that imports the members from a Package.
 */
QMofNamespace *QMofPackageImport::importingNamespace() const
{
    // This is a read-write association end

    return _importingNamespace;
}

void QMofPackageImport::setImportingNamespace(QMofNamespace *importingNamespace)
{
    // This is a read-write association end

    if (_importingNamespace != importingNamespace) {
        // Adjust subsetted properties
        removeSource(_importingNamespace);

        _importingNamespace = importingNamespace;
        if (importingNamespace && importingNamespace->asQModelingObject() && this->asQModelingObject())
            QObject::connect(importingNamespace->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setImportingNamespace()));

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
QtMof::VisibilityKind QMofPackageImport::visibility() const
{
    // This is a read-write property

    return _visibility;
}

void QMofPackageImport::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write property

    if (_visibility != visibility) {
        _visibility = visibility;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("visibility");
    }
}

QT_END_NAMESPACE

