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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackageableElement>

QT_BEGIN_NAMESPACE

/*!
    \class UmlElementImport

    \inmodule QtUml

    \brief An element import identifies an element in another package, and allows the element to be referenced using its name without a qualifier.
 */

QUmlElementImport::QUmlElementImport(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlElementImport::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlElementImport::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlElementImport::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [Relationship]

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QUmlElement *> QUmlElementImport::relatedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_relatedElement));
}

// OWNED ATTRIBUTES [DirectedRelationship]

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlElementImport::source() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_source));
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlElementImport::target() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_target));
}

// OWNED ATTRIBUTES [ElementImport]

/*!
    Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used.
 */
QString QUmlElementImport::alias() const
{
    return _alias;
}

/*!
    Specifies the PackageableElement whose name is to be added to a Namespace.
 */
QUmlPackageableElement *QUmlElementImport::importedElement() const
{
    return reinterpret_cast<QUmlPackageableElement *>(_importedElement);
}

/*!
    Specifies the Namespace that imports a PackageableElement from another Package.
 */
QUmlNamespace *QUmlElementImport::importingNamespace() const
{
    return reinterpret_cast<QUmlNamespace *>(_importingNamespace);
}

/*!
    Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import.
 */
QtUml::VisibilityKind QUmlElementImport::visibility() const
{
    return _visibility;
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlElementImport::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlElementImport::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [ElementImport]

/*!
    The query getName() returns the name under which the imported PackageableElement will be known in the importing namespace.
 */
QString QUmlElementImport::getName() const
{
    return UmlElementImport::getName();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlElementImport::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlElementImport::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

// SLOTS FOR OWNED ATTRIBUTES [ElementImport]

void QUmlElementImport::setAlias(QString alias)
{
    UmlElementImport::setAlias(alias);
}

void QUmlElementImport::setImportedElement(QUmlPackageableElement *importedElement)
{
    UmlElementImport::setImportedElement(importedElement);
}

void QUmlElementImport::setImportingNamespace(QUmlNamespace *importingNamespace)
{
    UmlElementImport::setImportingNamespace(importingNamespace);
}

void QUmlElementImport::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlElementImport::setVisibility(visibility);
}

QT_END_NAMESPACE

