/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qpackage.h"
#include "qpackage_p.h"

#include <QtMof/QNamedElement>
#include <QtMof/QPackageMerge>
#include <QtMof/QType>

QT_BEGIN_NAMESPACE_QTMOF

QPackagePrivate::QPackagePrivate() :
    packagedElements(new QSet<QPackageableElement *>),
    nestingPackage(0),
    packageMerges(new QSet<QPackageMerge *>)
{
}

QPackagePrivate::~QPackagePrivate()
{
    delete packagedElements;
    delete packageMerges;
}

/*!
    \class QPackage

    \inmodule QtMof

    \brief A package is used to group elements, and provides a namespace for the grouped elements.
 */

QPackage::QPackage(QMofObject *parent, QMofObject *wrapper) :
    QMofObject(*new QPackagePrivate, parent, wrapper),
    _wrappedNamespace(new QNamespace(this, this)),
    _wrappedPackageableElement(new QPackageableElement(this, this))
{
}

QPackage::QPackage(QPackagePrivate &dd, QMofObject *parent, QMofObject *wrapper) :
    QMofObject(dd, parent, wrapper),
    _wrappedNamespace(new QNamespace(this, this)),
    _wrappedPackageableElement(new QPackageableElement(this, this))
{
}

QPackage::~QPackage()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QPackage::ownedElements() const
{
    return (qmofobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QPackage::owner() const
{
    return (qmofobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QPackage::ownedComments() const
{
    return (qmofobject_cast<const QElement *>(this))->ownedComments();
}

void QPackage::addOwnedComment(QComment *ownedComment)
{
    (qmofobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QPackage::removeOwnedComment(QComment *ownedComment)
{
    (qmofobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QPackage::name() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->name();
}

void QPackage::setName(QString name)
{
    (qmofobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QPackage::qualifiedName() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QPackage::namespace_() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QPackage::packageImports() const
{
    return (qmofobject_cast<const QNamespace *>(this))->packageImports();
}

void QPackage::addPackageImport(QPackageImport *packageImport)
{
    (qmofobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QPackage::removePackageImport(QPackageImport *packageImport)
{
    (qmofobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QPackage::members() const
{
    return (qmofobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QPackageableElement *> *QPackage::importedMembers() const
{
    return (qmofobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QPackage::elementImports() const
{
    return (qmofobject_cast<const QNamespace *>(this))->elementImports();
}

void QPackage::addElementImport(QElementImport *elementImport)
{
    (qmofobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QPackage::removeElementImport(QElementImport *elementImport)
{
    (qmofobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QPackage::ownedRules() const
{
    return (qmofobject_cast<const QNamespace *>(this))->ownedRules();
}

void QPackage::addOwnedRule(QConstraint *ownedRule)
{
    (qmofobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QPackage::removeOwnedRule(QConstraint *ownedRule)
{
    (qmofobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QPackage::ownedMembers() const
{
    return (qmofobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QPackage::visibility() const
{
    return (qmofobject_cast<const QPackageableElement *>(this))->visibility();
}

void QPackage::setVisibility(QtMof::VisibilityKind visibility)
{
    (qmofobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPackage
// ---------------------------------------------------------------

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QPackage::URI() const
{
    // This is a read-write attribute

    Q_D(const QPackage);
    return d->URI;
}

void QPackage::setURI(QString URI)
{
    // This is a read-write attribute

    Q_D(QPackage);
    if (d->URI != URI) {
        d->URI = URI;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QPackage
// ---------------------------------------------------------------

/*!
    References the packaged elements that are Types.
 */
const QSet<QType *> *QPackage::ownedTypes() const
{
    // This is a read-write derived association end

    qWarning("QPackage::ownedTypes: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QPackage::addOwnedType(QType *ownedType)
{
    // This is a read-write derived association end

    qWarning("QPackage::addOwnedType: to be implemented (this is a derived associationend)");
    Q_UNUSED(ownedType);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code

        // Adjust subsetted property(ies)
        (qmofobject_cast<QPackage *>(this))->addPackagedElement(qmofobject_cast<QPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(this);
    }
}

void QPackage::removeOwnedType(QType *ownedType)
{
    // This is a read-write derived association end

    qWarning("QPackage::removeOwnedType: to be implemented (this is a derived associationend)");
    Q_UNUSED(ownedType);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code

        // Adjust subsetted property(ies)
        (qmofobject_cast<QPackage *>(this))->removePackagedElement(qmofobject_cast<QPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(0);
    }
}

/*!
    Specifies the packageable elements that are owned by this Package.
 */
const QSet<QPackageableElement *> *QPackage::packagedElements() const
{
    // This is a read-write association end

    Q_D(const QPackage);
    return d->packagedElements;
}

void QPackage::addPackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (!d->packagedElements->contains(packagedElement)) {
        d->packagedElements->insert(packagedElement);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qmofobject_cast<QNamedElement *>(packagedElement));
    }
}

void QPackage::removePackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->packagedElements->contains(packagedElement)) {
        d->packagedElements->remove(packagedElement);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qmofobject_cast<QNamedElement *>(packagedElement));
    }
}

/*!
    References the Package that owns this Package.
 */
QPackage *QPackage::nestingPackage() const
{
    // This is a read-write association end

    Q_D(const QPackage);
    return d->nestingPackage;
}

void QPackage::setNestingPackage(QPackage *nestingPackage)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->nestingPackage != nestingPackage) {
        // Adjust opposite property
        if (d->nestingPackage)
            d->nestingPackage->removeNestedPackage(this);

        d->nestingPackage = nestingPackage;

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qmofobject_cast<QNamespace *>(nestingPackage));

        // Adjust opposite property
        if (nestingPackage)
            nestingPackage->addNestedPackage(this);
    }
}

/*!
    References the PackageMerges that are owned by this Package.
 */
const QSet<QPackageMerge *> *QPackage::packageMerges() const
{
    // This is a read-write association end

    Q_D(const QPackage);
    return d->packageMerges;
}

void QPackage::addPackageMerge(QPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (!d->packageMerges->contains(packageMerge)) {
        d->packageMerges->insert(packageMerge);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->addOwnedElement(qmofobject_cast<QElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(this);
    }
}

void QPackage::removePackageMerge(QPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->packageMerges->contains(packageMerge)) {
        d->packageMerges->remove(packageMerge);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->removeOwnedElement(qmofobject_cast<QElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(0);
    }
}

/*!
    References the packaged elements that are Packages.
 */
const QSet<QPackage *> *QPackage::nestedPackages() const
{
    // This is a read-write derived association end

    qWarning("QPackage::nestedPackages: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QPackage::addNestedPackage(QPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("QPackage::addNestedPackage: to be implemented (this is a derived associationend)");
    Q_UNUSED(nestedPackage);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code

        // Adjust subsetted property(ies)
        (qmofobject_cast<QPackage *>(this))->addPackagedElement(qmofobject_cast<QPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(this);
    }
}

void QPackage::removeNestedPackage(QPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("QPackage::removeNestedPackage: to be implemented (this is a derived associationend)");
    Q_UNUSED(nestedPackage);

    if (false) { // change to your derived exclusion criteria
        // change to your derived code

        // Adjust subsetted property(ies)
        (qmofobject_cast<QPackage *>(this))->removePackagedElement(qmofobject_cast<QPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(0);
    }
}

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QPackage::makesVisible(const QNamedElement *el) const
{
    qWarning("QPackage::makesVisible: operation to be implemented");
    Q_UNUSED(el);

    return bool(); // change here to your derived return
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QPackage::mustBeOwned() const
{
    qWarning("QPackage::mustBeOwned: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
const QSet<QPackageableElement *> *QPackage::visibleMembers() const
{
    qWarning("QPackage::visibleMembers: operation to be implemented");

    return 0; // change here to your derived return
}

// Overriden methods for subsetted properties

void QPackage::addPackagedElement(QMofPointer<QType> ownedType)
{
    addOwnedType(ownedType);
}

void QPackage::removePackagedElement(QMofPointer<QType> ownedType)
{
    removeOwnedType(ownedType);
}

void QPackage::addPackagedElement(QMofPointer<QPackage> nestedPackage)
{
    addNestedPackage(nestedPackage);
}

void QPackage::removePackagedElement(QMofPointer<QPackage> nestedPackage)
{
    removeNestedPackage(nestedPackage);
}

#include "moc_qpackage.cpp"

QT_END_NAMESPACE_QTMOF

