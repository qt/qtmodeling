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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTMOF

QPackagePrivate::QPackagePrivate() :
    nestingPackage(0)
{
}

QPackagePrivate::~QPackagePrivate()
{
}

/*!
    \class QPackage

    \inmodule QtMof

    \brief A package is used to group elements, and provides a namespace for the grouped elements.
 */

QPackage::QPackage(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QPackagePrivate, wrapper, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedPackageableElement(new QPackageableElement(this))
{
    setPropertyData();
}

QPackage::QPackage(QPackagePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedPackageableElement(new QPackageableElement(this))
{
    setPropertyData();
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
QSet<QElement *> QPackage::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QPackage::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QPackage::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QPackage::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QPackage::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QPackage::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QPackage::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QPackage::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QPackage::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QPackage::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QPackage::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QPackage::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QPackage::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QPackage::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QPackage::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QPackage::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QPackage::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QPackage::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QPackage::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QPackage::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QPackage::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QPackage::visibility() const
{
    return (qwrappedobject_cast<const QPackageableElement *>(this))->visibility();
}

void QPackage::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

void QPackage::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QPackage);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
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
QSet<QType *> QPackage::ownedTypes() const
{
    // This is a read-write derived association end

    qWarning("QPackage::ownedTypes: to be implemented (this is a derived associationend)");

    return QSet<QType *>(); // change here to your derived return
}

void QPackage::addOwnedType(QType *ownedType)
{
    // This is a read-write derived association end

    qWarning("QPackage::addOwnedType: to be implemented (this is a derived associationend)");
    Q_UNUSED(ownedType);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QPackage *>(this))->addPackagedElement(qwrappedobject_cast<QPackageableElement *>(ownedType));

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
        (qwrappedobject_cast<QPackage *>(this))->removePackagedElement(qwrappedobject_cast<QPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(0);
    }
}

/*!
    Specifies the packageable elements that are owned by this Package.
 */
QSet<QPackageableElement *> QPackage::packagedElements() const
{
    // This is a read-write association end

    Q_D(const QPackage);
    return d->packagedElements;
}

void QPackage::addPackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (!d->packagedElements.contains(packagedElement)) {
        d->packagedElements.insert(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(packagedElement));
    }
}

void QPackage::removePackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->packagedElements.contains(packagedElement)) {
        d->packagedElements.remove(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(packagedElement));
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
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(nestingPackage));

        // Adjust opposite property
        if (nestingPackage)
            nestingPackage->addNestedPackage(this);
    }
}

/*!
    References the PackageMerges that are owned by this Package.
 */
QSet<QPackageMerge *> QPackage::packageMerges() const
{
    // This is a read-write association end

    Q_D(const QPackage);
    return d->packageMerges;
}

void QPackage::addPackageMerge(QPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (!d->packageMerges.contains(packageMerge)) {
        d->packageMerges.insert(packageMerge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(this);
    }
}

void QPackage::removePackageMerge(QPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->packageMerges.contains(packageMerge)) {
        d->packageMerges.remove(packageMerge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(0);
    }
}

/*!
    References the packaged elements that are Packages.
 */
QSet<QPackage *> QPackage::nestedPackages() const
{
    // This is a read-write derived association end

    qWarning("QPackage::nestedPackages: to be implemented (this is a derived associationend)");

    return QSet<QPackage *>(); // change here to your derived return
}

void QPackage::addNestedPackage(QPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("QPackage::addNestedPackage: to be implemented (this is a derived associationend)");
    Q_UNUSED(nestedPackage);

    if (false) { // change to your derived inclusion criteria
        // change to your derived code

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QPackage *>(this))->addPackagedElement(qwrappedobject_cast<QPackageableElement *>(nestedPackage));

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
        (qwrappedobject_cast<QPackage *>(this))->removePackagedElement(qwrappedobject_cast<QPackageableElement *>(nestedPackage));

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
QSet<QPackageableElement *> QPackage::visibleMembers() const
{
    qWarning("QPackage::visibleMembers: operation to be implemented");

    return QSet<QPackageableElement *>(); // change here to your derived return
}

void QPackage::registerMetaTypes() const
{
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");

    qRegisterMetaType<QPackageMerge *>("QPackageMerge *");
    qRegisterMetaType<QSet<QPackageMerge *>>("QSet<QPackageMerge *>");
    qRegisterMetaType<QList<QPackageMerge *>>("QList<QPackageMerge *>");

    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<QSet<QType *>>("QSet<QType *>");
    qRegisterMetaType<QList<QType *>>("QList<QType *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QPackage::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("URI")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("URI")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("URI")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("URI")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("URI")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("URI")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the packaged elements that are Types.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QPackage::packagedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QType::package");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the packageable elements that are owned by this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Package that owns this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QPackage::nestedPackage");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the PackageMerges that are owned by this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QPackageMerge::receivingPackage");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the packaged elements that are Packages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QPackage::packagedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QPackage::nestingPackage");

    QWrappedObject::setPropertyData();
}

// Overriden methods for subsetted properties

void QPackage::addPackagedElement(QWrappedObjectPointer<QType> ownedType)
{
    addOwnedType(ownedType);
}

void QPackage::removePackagedElement(QWrappedObjectPointer<QType> ownedType)
{
    removeOwnedType(ownedType);
}

void QPackage::addPackagedElement(QWrappedObjectPointer<QPackage> nestedPackage)
{
    addNestedPackage(nestedPackage);
}

void QPackage::removePackagedElement(QWrappedObjectPointer<QPackage> nestedPackage)
{
    removeNestedPackage(nestedPackage);
}

#include "moc_qpackage.cpp"

QT_END_NAMESPACE_QTMOF

