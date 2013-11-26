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
#include "qmofelementimport.h"

#include "private/qmofelementimportobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackageableElement>

QT_BEGIN_NAMESPACE

/*!
    \class QMofElementImport

    \inmodule QtMof

    \brief An element import identifies an element in another package, and allows the element to be referenced using its name without a qualifier.
 */

/*!
    Creates a new QMofElementImport. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofElementImport::QMofElementImport(bool createQModelingObject) :
    _importedElement(0),
    _importingNamespace(0),
    _visibility(QtMof::VisibilityKindPublic)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofElementImportObject(this));
}

/*!
    Destroys the QMofElementImport.
 */
QMofElementImport::~QMofElementImport()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofElementImport.
*/
QModelingElement *QMofElementImport::clone() const
{
    QMofElementImport *c = new QMofElementImport;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setAlias(alias());
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used.
 */
QString QMofElementImport::alias() const
{
    // This is a read-write property

    return _alias;
}

/*!
    Adjusts alias to \a alias.
 */
void QMofElementImport::setAlias(QString alias)
{
    // This is a read-write property

    if (_alias != alias) {
        _alias = alias;
    }
}

/*!
    Specifies the PackageableElement whose name is to be added to a Namespace.

    \b {Subsetted property(ies):} QMofDirectedRelationship::targets().
 */
QMofPackageableElement *QMofElementImport::importedElement() const
{
    // This is a read-write association end

    return _importedElement;
}

/*!
    Adjusts importedElement to \a importedElement.
 */
void QMofElementImport::setImportedElement(QMofPackageableElement *importedElement)
{
    // This is a read-write association end

    if (_importedElement != importedElement) {
        // Adjust subsetted properties
        removeTarget(_importedElement);

        _importedElement = importedElement;
        if (importedElement && importedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(importedElement->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setImportedElement()));

        // Adjust subsetted properties
        if (importedElement) {
            addTarget(importedElement);
        }
    }
}

/*!
    Specifies the Namespace that imports a PackageableElement from another Package.

    \b {Subsetted property(ies):} QMofElement::owner(), QMofDirectedRelationship::sources().

    \b {Opposite property(ies):} QMofNamespace::elementImports().
 */
QMofNamespace *QMofElementImport::importingNamespace() const
{
    // This is a read-write association end

    return _importingNamespace;
}

/*!
    Adjusts importingNamespace to \a importingNamespace.
 */
void QMofElementImport::setImportingNamespace(QMofNamespace *importingNamespace)
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
    Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import.
 */
QtMof::VisibilityKind QMofElementImport::visibility() const
{
    // This is a read-write property

    return _visibility;
}

/*!
    Adjusts visibility to \a visibility.
 */
void QMofElementImport::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write property

    if (_visibility != visibility) {
        _visibility = visibility;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("visibility");
    }
}

// OPERATIONS

/*!
    The query getName() returns the name under which the imported PackageableElement will be known in the importing namespace.
 */
QString QMofElementImport::getName() const
{
    qWarning("QMofElementImport::getName(): to be implemented (operation)");

    return QString ();
}

QT_END_NAMESPACE

