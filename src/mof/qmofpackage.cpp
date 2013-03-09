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

#include "qmofpackage.h"
#include "qmofpackage_p.h"

#include <QtMof/QMofNamedElement>
#include <QtMof/QMofPackageMerge>
#include <QtMof/QMofType>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofPackagePrivate::QMofPackagePrivate() :
    nestingPackage(0)
{
}

QMofPackagePrivate::~QMofPackagePrivate()
{
}

/*!
    \class QMofPackage

    \inmodule QtMof

    \brief A package is used to group elements, and provides a namespace for the grouped elements.
 */

QMofPackage::QMofPackage(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofPackagePrivate, wrapper, parent),
    _wrappedMofNamespace(new QMofNamespace(this)),
    _wrappedMofPackageableElement(new QMofPackageableElement(this))
{
    setPropertyData();
}

QMofPackage::QMofPackage(QMofPackagePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMofNamespace(new QMofNamespace(this)),
    _wrappedMofPackageableElement(new QMofPackageableElement(this))
{
    setPropertyData();
}

QMofPackage::~QMofPackage()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofPackage::ownedElements() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofPackage::owner() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofPackage::ownedComments() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedComments();
}

void QMofPackage::addOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->addOwnedComment(ownedComment);
}

void QMofPackage::removeOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofPackage::name() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->name();
}

void QMofPackage::setName(QString name)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofPackage::qualifiedName() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofPackage::namespace_() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QMofPackageImport *> QMofPackage::packageImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->packageImports();
}

void QMofPackage::addPackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addPackageImport(packageImport);
}

void QMofPackage::removePackageImport(QMofPackageImport *packageImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QMofNamedElement *> QMofPackage::members() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QMofPackageableElement *> QMofPackage::importedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QMofElementImport *> QMofPackage::elementImports() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->elementImports();
}

void QMofPackage::addElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addElementImport(elementImport);
}

void QMofPackage::removeElementImport(QMofElementImport *elementImport)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QMofConstraint *> QMofPackage::ownedRules() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedRules();
}

void QMofPackage::addOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->addOwnedRule(ownedRule);
}

void QMofPackage::removeOwnedRule(QMofConstraint *ownedRule)
{
    (qwrappedobject_cast<QMofNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QMofNamedElement *> QMofPackage::ownedMembers() const
{
    return (qwrappedobject_cast<const QMofNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QMofPackage::visibility() const
{
    return (qwrappedobject_cast<const QMofPackageableElement *>(this))->visibility();
}

void QMofPackage::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QMofPackageableElement *>(this))->setVisibility(visibility);
}

void QMofPackage::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QMofPackage);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofPackage
// ---------------------------------------------------------------

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QMofPackage::URI() const
{
    // This is a read-write attribute

    Q_D(const QMofPackage);
    return d->URI;
}

void QMofPackage::setURI(QString URI)
{
    // This is a read-write attribute

    Q_D(QMofPackage);
    if (d->URI != URI) {
        d->URI = URI;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofPackage
// ---------------------------------------------------------------

/*!
    References the packaged elements that are Types.
 */
QSet<QMofType *> QMofPackage::ownedTypes() const
{
    // This is a read-write derived association end

    Q_D(const QMofPackage);
    QSet<QMofType *> ownedTypes_;
    foreach (QMofPackageableElement *packageableElement, d->packagedElements)
        if (QMofType *type = qwrappedobject_cast<QMofType *>(packageableElement))
            ownedTypes_.insert(type);
    return ownedTypes_;
}

void QMofPackage::addOwnedType(QMofType *ownedType)
{
    // This is a read-write derived association end

    Q_D(QMofPackage);
    if (!d->packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofPackage *>(this))->addPackagedElement(qwrappedobject_cast<QMofPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(this);
    }
}

void QMofPackage::removeOwnedType(QMofType *ownedType)
{
    // This is a read-write derived association end

    Q_D(QMofPackage);
    if (d->packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofPackage *>(this))->removePackagedElement(qwrappedobject_cast<QMofPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(0);
    }
}

/*!
    Specifies the packageable elements that are owned by this Package.
 */
QSet<QMofPackageableElement *> QMofPackage::packagedElements() const
{
    // This is a read-write association end

    Q_D(const QMofPackage);
    return d->packagedElements;
}

void QMofPackage::addPackagedElement(QMofPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QMofPackage);
    if (!d->packagedElements.contains(packagedElement)) {
        d->packagedElements.insert(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(packagedElement));
    }
}

void QMofPackage::removePackagedElement(QMofPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QMofPackage);
    if (d->packagedElements.contains(packagedElement)) {
        d->packagedElements.remove(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(packagedElement));
    }
}

/*!
    References the Package that owns this Package.
 */
QMofPackage *QMofPackage::nestingPackage() const
{
    // This is a read-write association end

    Q_D(const QMofPackage);
    return d->nestingPackage;
}

void QMofPackage::setNestingPackage(QMofPackage *nestingPackage)
{
    // This is a read-write association end

    Q_D(QMofPackage);
    if (d->nestingPackage != nestingPackage) {
        // Adjust opposite property
        if (d->nestingPackage)
            d->nestingPackage->removeNestedPackage(this);

        d->nestingPackage = nestingPackage;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(nestingPackage));

        // Adjust opposite property
        if (nestingPackage)
            nestingPackage->addNestedPackage(this);
    }
}

/*!
    References the PackageMerges that are owned by this Package.
 */
QSet<QMofPackageMerge *> QMofPackage::packageMerges() const
{
    // This is a read-write association end

    Q_D(const QMofPackage);
    return d->packageMerges;
}

void QMofPackage::addPackageMerge(QMofPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QMofPackage);
    if (!d->packageMerges.contains(packageMerge)) {
        d->packageMerges.insert(packageMerge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(this);
    }
}

void QMofPackage::removePackageMerge(QMofPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QMofPackage);
    if (d->packageMerges.contains(packageMerge)) {
        d->packageMerges.remove(packageMerge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(0);
    }
}

/*!
    References the packaged elements that are Packages.
 */
QSet<QMofPackage *> QMofPackage::nestedPackages() const
{
    // This is a read-write derived association end

    Q_D(const QMofPackage);
    QSet<QMofPackage *> nestedPackages_;
    foreach (QMofPackageableElement *packageableElement, d->packagedElements)
        if (QMofPackage *package = qwrappedobject_cast<QMofPackage *>(packageableElement))
            nestedPackages_.insert(package);
    return nestedPackages_;
}

void QMofPackage::addNestedPackage(QMofPackage *nestedPackage)
{
    // This is a read-write derived association end

    Q_D(QMofPackage);
    if (!d->packagedElements.contains(qwrappedobject_cast<QMofPackageableElement *>(nestedPackage))) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofPackage *>(this))->addPackagedElement(qwrappedobject_cast<QMofPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(this);
    }
}

void QMofPackage::removeNestedPackage(QMofPackage *nestedPackage)
{
    // This is a read-write derived association end

    Q_D(QMofPackage);
    if (d->packagedElements.contains(qwrappedobject_cast<QMofPackageableElement *>(nestedPackage))) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofPackage *>(this))->removePackagedElement(qwrappedobject_cast<QMofPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(0);
    }
}

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QMofPackage::makesVisible(const QMofNamedElement *el) const
{
    qWarning("QMofPackage::makesVisible: operation to be implemented");
    Q_UNUSED(el);

    return bool(); // change here to your derived return
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QMofPackage::mustBeOwned() const
{
    qWarning("QMofPackage::mustBeOwned: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
QSet<QMofPackageableElement *> QMofPackage::visibleMembers() const
{
    qWarning("QMofPackage::visibleMembers: operation to be implemented");

    return QSet<QMofPackageableElement *>(); // change here to your derived return
}

void QMofPackage::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("URI")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("URI")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("URI")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("URI")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("URI")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("URI")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the packaged elements that are Types.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofPackage::packagedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofType::package");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the packageable elements that are owned by this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Package that owns this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofPackage::nestedPackage");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the PackageMerges that are owned by this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofPackageMerge::receivingPackage");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the packaged elements that are Packages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofPackage::packagedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofPackage::nestingPackage");

    QWrappedObject::setPropertyData();
}

// Overriden methods for subsetted properties

void QMofPackage::addPackagedElement(QWrappedObjectPointer<QMofType> ownedType)
{
    addOwnedType(ownedType);
}

void QMofPackage::removePackagedElement(QWrappedObjectPointer<QMofType> ownedType)
{
    removeOwnedType(ownedType);
}

void QMofPackage::addPackagedElement(QWrappedObjectPointer<QMofPackage> nestedPackage)
{
    addNestedPackage(nestedPackage);
}

void QMofPackage::removePackagedElement(QWrappedObjectPointer<QMofPackage> nestedPackage)
{
    removeNestedPackage(nestedPackage);
}

QT_END_NAMESPACE

#include "moc_qmofpackage.cpp"

