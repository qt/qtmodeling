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

#include "qpackage.h"
#include "qpackage_p.h"

#include <QtUml/QProfile>
#include <QtUml/QProfileApplication>
#include <QtUml/QNamedElement>
#include <QtUml/QPackageMerge>
#include <QtUml/QStereotype>
#include <QtUml/QType>

QT_BEGIN_NAMESPACE_QTUML

QPackagePrivate::QPackagePrivate() :
    packagedElements(new QSet<QPackageableElement *>),
    nestingPackage(0),
    profileApplications(new QSet<QProfileApplication *>),
    packageMerges(new QSet<QPackageMerge *>)
{
}

QPackagePrivate::~QPackagePrivate()
{
    delete packagedElements;
    delete profileApplications;
    delete packageMerges;
}

/*!
    \class QPackage

    \inmodule QtUml

    \brief A package can have one or more profile applications to indicate which profiles have been applied. Because a profile is a package, it is possible to apply a profile not only to packages, but also to profiles.Package specializes TemplateableElement and PackageableElement specializes ParameterableElement to specify that a package can be used as a template and a PackageableElement as a template parameter.A package is used to group elements, and provides a namespace for the grouped elements.
 */

QPackage::QPackage(QObject *parent) :
    QObject(*new QPackagePrivate, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedPackageableElement(new QPackageableElement(this)),
    _wrappedTemplateableElement(new QTemplateableElement(this))
{
}

QPackage::QPackage(QPackagePrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedPackageableElement(new QPackageableElement(this)),
    _wrappedTemplateableElement(new QTemplateableElement(this))
{
}

QPackage::~QPackage()
{
}

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

/*!
    References the packaged elements that are Types.
 */
const QSet<QType *> *QPackage::ownedTypes() const
{
    // This is a read-write derived association end

    qWarning("QPackage::ownedTypes: to be implemented (this is a derived associationend)");

    //Q_D(const QPackage);
    //return <derived-return>;
}

void QPackage::addOwnedType(QType *ownedType)
{
    // This is a read-write derived association end

    qWarning("QPackage::addOwnedType: to be implemented (this is a derived associationend)");

    //Q_D(QPackage);
    if (false /* <derived-inclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted property(ies)
        QPackage::addPackagedElement(dynamic_cast<QPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(this);
    }
}

void QPackage::removeOwnedType(QType *ownedType)
{
    // This is a read-write derived association end

    qWarning("QPackage::removeOwnedType: to be implemented (this is a derived associationend)");

    //Q_D(QPackage);
    if (false /* <derived-exclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted property(ies)
        QPackage::removePackagedElement(dynamic_cast<QPackageableElement *>(ownedType));

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
        d->QNamespacePrivate::addOwnedMember(dynamic_cast<QNamedElement *>(packagedElement));
    }
}

void QPackage::removePackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->packagedElements->contains(packagedElement)) {
        d->packagedElements->remove(packagedElement);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::removeOwnedMember(dynamic_cast<QNamedElement *>(packagedElement));
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
        d->QNamedElementPrivate::setNamespace_(dynamic_cast<QNamespace *>(nestingPackage));

        // Adjust opposite property
        if (nestingPackage)
            nestingPackage->addNestedPackage(this);
    }
}

/*!
    References the ProfileApplications that indicate which profiles have been applied to the Package.
 */
const QSet<QProfileApplication *> *QPackage::profileApplications() const
{
    // This is a read-write association end

    Q_D(const QPackage);
    return d->profileApplications;
}

void QPackage::addProfileApplication(QProfileApplication *profileApplication)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (!d->profileApplications->contains(profileApplication)) {
        d->profileApplications->insert(profileApplication);

        // Adjust subsetted property(ies)
        d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(profileApplication));

        // Adjust opposite property
        profileApplication->setApplyingPackage(this);
    }
}

void QPackage::removeProfileApplication(QProfileApplication *profileApplication)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->profileApplications->contains(profileApplication)) {
        d->profileApplications->remove(profileApplication);

        // Adjust subsetted property(ies)
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(profileApplication));

        // Adjust opposite property
        profileApplication->setApplyingPackage(0);
    }
}

/*!
    References the Stereotypes that are owned by the Package
 */
const QSet<QStereotype *> *QPackage::ownedStereotypes() const
{
    // This is a read-only derived association end

    qWarning("QPackage::ownedStereotypes: to be implemented (this is a derived associationend)");

    //Q_D(const QPackage);
    //return <derived-return>;
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
        d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(packageMerge));

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
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(packageMerge));

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

    //Q_D(const QPackage);
    //return <derived-return>;
}

void QPackage::addNestedPackage(QPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("QPackage::addNestedPackage: to be implemented (this is a derived associationend)");

    //Q_D(QPackage);
    if (false /* <derived-inclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted property(ies)
        QPackage::addPackagedElement(dynamic_cast<QPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(this);
    }
}

void QPackage::removeNestedPackage(QPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("QPackage::removeNestedPackage: to be implemented (this is a derived associationend)");

    //Q_D(QPackage);
    if (false /* <derived-exclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted property(ies)
        QPackage::removePackagedElement(dynamic_cast<QPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(0);
    }
}

/*!
    The query allApplicableStereotypes() returns all the directly or indirectly owned stereotypes, including stereotypes contained in sub-profiles.
 */
const QSet<QStereotype *> *QPackage::allApplicableStereotypes() const
{
    qWarning("QPackage::allApplicableStereotypes: operation to be implemented");
}

/*!
    The query containingProfile() returns the closest profile directly or indirectly containing this package (or this package itself, if it is a profile).
 */
QProfile *QPackage::containingProfile() const
{
    qWarning("QPackage::containingProfile: operation to be implemented");
}

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QPackage::makesVisible(const QNamedElement *el) const
{
    qWarning("QPackage::makesVisible: operation to be implemented");
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QPackage::mustBeOwned() const
{
    qWarning("QPackage::mustBeOwned: operation to be implemented");
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
const QSet<QPackageableElement *> *QPackage::visibleMembers() const
{
    qWarning("QPackage::visibleMembers: operation to be implemented");
}

// Overriden methods for subsetted properties

void QPackage::addPackagedElement(QType *ownedType)
{
    addOwnedType(ownedType);
}

void QPackage::removePackagedElement(QType *ownedType)
{
    removeOwnedType(ownedType);
}

void QPackage::addPackagedElement(QPackage *nestedPackage)
{
    addNestedPackage(nestedPackage);
}

void QPackage::removePackagedElement(QPackage *nestedPackage)
{
    removeNestedPackage(nestedPackage);
}

#include "moc_qpackage.cpp"

QT_END_NAMESPACE_QTUML

