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
#include "qmofpackage.h"

#include "private/qmofpackageobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofPackageMerge>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofPackage

    \inmodule QtMof

    \brief A package is used to group elements, and provides a namespace for the grouped elements.
 */

/*!
    Creates a new QMofPackage. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofPackage::QMofPackage(bool createQModelingObject) :
    _nestingPackage(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofPackageObject(this));
}

/*!
    Destroys the QMofPackage.
 */
QMofPackage::~QMofPackage()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofPackage.
*/
QModelingElement *QMofPackage::clone() const
{
    QMofPackage *c = new QMofPackage;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    foreach (QMofElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QMofElementImport *>(element->clone()));
    foreach (QMofConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QMofConstraint *>(element->clone()));
    foreach (QMofPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QMofPackageImport *>(element->clone()));
    c->setVisibility(visibility());
    c->setURI(URI());
    foreach (QMofPackageMerge *element, packageMerges())
        c->addPackageMerge(dynamic_cast<QMofPackageMerge *>(element->clone()));
    foreach (QMofPackageableElement *element, packagedElements())
        c->addPackagedElement(dynamic_cast<QMofPackageableElement *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QMofPackage::URI() const
{
    // This is a read-write property

    return _URI;
}

/*!
    Adjusts URI to \a URI.
 */
void QMofPackage::setURI(QString URI)
{
    // This is a read-write property

    if (_URI != URI) {
        _URI = URI;
    }
}

/*!
    References the packaged elements that are Packages.

    \sa addNestedPackage(), removeNestedPackage()

    \b {This is a derived property.}

    \b {Subsetted property(ies):} QMofPackage::packagedElements().

    \b {Opposite property(ies):} QMofPackage::nestingPackage().
 */
const QSet<QMofPackage *> QMofPackage::nestedPackages() const
{
    // This is a read-write derived association end

    QSet<QMofPackage *> nestedPackages_;
    foreach (QMofPackageableElement *packageableElement, _packagedElements)
        if (QMofPackage *package = dynamic_cast<QMofPackage *>(packageableElement))
            nestedPackages_.insert(package);
    return nestedPackages_;
}

/*!
    Adds \a nestedPackage to nestedPackages.

    \sa nestedPackages(), removeNestedPackage()
 */
void QMofPackage::addNestedPackage(QMofPackage *nestedPackage)
{
    // This is a read-write derived association end

    if (!_packagedElements.contains(nestedPackage)) {
        // Adjust subsetted property(ies)
        addPackagedElement(nestedPackage);

        // Adjust opposite properties
        if (nestedPackage) {
            nestedPackage->setNestingPackage(this);
        }
    }
}

/*!
    Removes \a nestedPackage from nestedPackages.

    \sa nestedPackages(), addNestedPackage()
 */
void QMofPackage::removeNestedPackage(QMofPackage *nestedPackage)
{
    // This is a read-write derived association end

    if (_packagedElements.contains(nestedPackage)) {
        // Adjust subsetted property(ies)
        removePackagedElement(nestedPackage);

        // Adjust opposite properties
        if (nestedPackage) {
            nestedPackage->setNestingPackage(0);
        }
    }
}

/*!
    References the Package that owns this Package.

    \b {Subsetted property(ies):} .

    \b {Opposite property(ies):} QMofPackage::nestedPackages().
 */
QMofPackage *QMofPackage::nestingPackage() const
{
    // This is a read-write association end

    return _nestingPackage;
}

/*!
    Adjusts nestingPackage to \a nestingPackage.
 */
void QMofPackage::setNestingPackage(QMofPackage *nestingPackage)
{
    // This is a read-write association end

    if (_nestingPackage != nestingPackage) {
        _nestingPackage = nestingPackage;
        if (nestingPackage && nestingPackage->asQModelingObject() && this->asQModelingObject())
            QObject::connect(nestingPackage->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setNestingPackage()));
    }
}

/*!
    References the packaged elements that are Types.

    \sa addOwnedType(), removeOwnedType()

    \b {This is a derived property.}

    \b {Subsetted property(ies):} QMofPackage::packagedElements().

    \b {Opposite property(ies):} QMofType::package().
 */
const QSet<QMofType *> QMofPackage::ownedTypes() const
{
    // This is a read-write derived association end

    QSet<QMofType *> ownedTypes_;
    foreach (QMofPackageableElement *packageableElement, _packagedElements)
        if (QMofType *type = dynamic_cast<QMofType *>(packageableElement))
            ownedTypes_.insert(type);
    return ownedTypes_;
}

/*!
    Adds \a ownedType to ownedTypes.

    \sa ownedTypes(), removeOwnedType()
 */
void QMofPackage::addOwnedType(QMofType *ownedType)
{
    // This is a read-write derived association end

    if (!_packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        addPackagedElement(ownedType);

        // Adjust opposite properties
        if (ownedType) {
            ownedType->setPackage(this);
        }
    }
}

/*!
    Removes \a ownedType from ownedTypes.

    \sa ownedTypes(), addOwnedType()
 */
void QMofPackage::removeOwnedType(QMofType *ownedType)
{
    // This is a read-write derived association end

    if (_packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        removePackagedElement(ownedType);

        // Adjust opposite properties
        if (ownedType) {
            ownedType->setPackage(0);
        }
    }
}

/*!
    References the PackageMerges that are owned by this Package.

    \sa addPackageMerge(), removePackageMerge()

    \b {Subsetted property(ies):} QMofElement::ownedElements().

    \b {Opposite property(ies):} QMofPackageMerge::receivingPackage().
 */
const QSet<QMofPackageMerge *> QMofPackage::packageMerges() const
{
    // This is a read-write association end

    return _packageMerges;
}

/*!
    Adds \a packageMerge to packageMerges.

    \sa packageMerges(), removePackageMerge()
 */
void QMofPackage::addPackageMerge(QMofPackageMerge *packageMerge)
{
    // This is a read-write association end

    if (!_packageMerges.contains(packageMerge)) {
        _packageMerges.insert(packageMerge);
        if (packageMerge && packageMerge->asQModelingObject() && this->asQModelingObject())
            QObject::connect(packageMerge->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePackageMerge(QObject *)));
        packageMerge->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(packageMerge);

        // Adjust opposite properties
        if (packageMerge) {
            packageMerge->setReceivingPackage(this);
        }
    }
}

/*!
    Removes \a packageMerge from packageMerges.

    \sa packageMerges(), addPackageMerge()
 */
void QMofPackage::removePackageMerge(QMofPackageMerge *packageMerge)
{
    // This is a read-write association end

    if (_packageMerges.contains(packageMerge)) {
        _packageMerges.remove(packageMerge);
        if (packageMerge->asQModelingObject())
            packageMerge->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(packageMerge);

        // Adjust opposite properties
        if (packageMerge) {
            packageMerge->setReceivingPackage(0);
        }
    }
}

/*!
    Specifies the packageable elements that are owned by this Package.

    \sa addPackagedElement(), removePackagedElement()

    \b {Subsetted property(ies):} QMofNamespace::ownedMembers().
 */
const QSet<QMofPackageableElement *> QMofPackage::packagedElements() const
{
    // This is a read-write association end

    return _packagedElements;
}

/*!
    Adds \a packagedElement to packagedElements.

    \sa packagedElements(), removePackagedElement()
 */
void QMofPackage::addPackagedElement(QMofPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (!_packagedElements.contains(packagedElement)) {
        _packagedElements.insert(packagedElement);
        if (packagedElement && packagedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(packagedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePackagedElement(QObject *)));
        packagedElement->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(packagedElement);
    }
}

/*!
    Removes \a packagedElement from packagedElements.

    \sa packagedElements(), addPackagedElement()
 */
void QMofPackage::removePackagedElement(QMofPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (_packagedElements.contains(packagedElement)) {
        _packagedElements.remove(packagedElement);
        if (packagedElement->asQModelingObject())
            packagedElement->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(packagedElement);
    }
}

// OPERATIONS

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QMofPackage::makesVisible(QMofNamedElement *el) const
{
    qWarning("QMofPackage::makesVisible(): to be implemented (operation)");

    Q_UNUSED(el);
    return bool ();
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QMofPackage::mustBeOwned() const
{
    qWarning("QMofPackage::mustBeOwned(): to be implemented (operation)");

    return bool ();
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
QSet<QMofPackageableElement *> QMofPackage::visibleMembers() const
{
    qWarning("QMofPackage::visibleMembers(): to be implemented (operation)");

    return QSet<QMofPackageableElement *> ();
}

QT_END_NAMESPACE

