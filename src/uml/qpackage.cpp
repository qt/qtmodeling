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
#include "qnamespace_p.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"

#include <QtUml/QProfile>
#include <QtUml/QNamedElement>
#include <QtUml/QProfileApplication>
#include <QtUml/QType>
#include <QtUml/QStereotype>
#include <QtUml/QPackageMerge>

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

void QPackagePrivate::setURI(QString URI)
{
    this->URI = URI;
}

void QPackagePrivate::addPackagedElement(QPackageableElement *packagedElement)
{
    this->packagedElements->insert(packagedElement);

    // Adjust subsetted property(ies)
    addOwnedMember(packagedElement);
}

void QPackagePrivate::removePackagedElement(QPackageableElement *packagedElement)
{
    this->packagedElements->remove(packagedElement);

    // Adjust subsetted property(ies)
    removeOwnedMember(packagedElement);
}

void QPackagePrivate::setNestingPackage(QPackage *nestingPackage)
{
    this->nestingPackage = nestingPackage;

    // Adjust subsetted property(ies)
    setNamespace_(nestingPackage);
}

void QPackagePrivate::addProfileApplication(QProfileApplication *profileApplication)
{
    this->profileApplications->insert(profileApplication);

    // Adjust subsetted property(ies)
    addOwnedElement(profileApplication);

    // Adjust indirectly subsetted property(ies)
    // This is because ownedStereotypes is derived (not derivedUnion) and subsets packagedElements
    foreach (QProfileApplication *profileApplication, *this->profileApplications)
        foreach (QPackageableElement *packageableElement, *profileApplication->appliedProfile()->packagedElements())
            if (QStereotype *stereotype = dynamic_cast<QStereotype *>(packageableElement))
                addPackagedElement(stereotype);
}

void QPackagePrivate::removeProfileApplication(QProfileApplication *profileApplication)
{
    this->profileApplications->remove(profileApplication);

    // Adjust subsetted property(ies)
    removeOwnedElement(profileApplication);

    // Adjust indirectly subsetted property(ies)
    // This is because ownedStereotypes is derived (not derivedUnion) and subsets packagedElements
    foreach (QProfileApplication *profileApplication, *this->profileApplications)
        foreach (QPackageableElement *packageableElement, *profileApplication->appliedProfile()->packagedElements())
            if (QStereotype *stereotype = dynamic_cast<QStereotype *>(packageableElement))
                removePackagedElement(stereotype);
}

void QPackagePrivate::addPackageMerge(QPackageMerge *packageMerge)
{
    this->packageMerges->insert(packageMerge);

    // Adjust subsetted property(ies)
    addOwnedElement(packageMerge);
}

void QPackagePrivate::removePackageMerge(QPackageMerge *packageMerge)
{
    this->packageMerges->remove(packageMerge);

    // Adjust subsetted property(ies)
    removeOwnedElement(packageMerge);
}

/*!
    \class QPackage

    \inmodule QtUml

    \brief A package can have one or more profile applications to indicate which profiles have been applied. Because a profile is a package, it is possible to apply a profile not only to packages, but also to profiles.Package specializes TemplateableElement and PackageableElement specializes ParameterableElement to specify that a package can be used as a template and a PackageableElement as a template parameter.A package is used to group elements, and provides a namespace for the grouped elements.
 */

QPackage::QPackage(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QPackagePrivate;
}

QPackage::QPackage(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QPackagePrivate;
}

QPackage::~QPackage()
{
}

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QPackage::URI() const
{
    QTUML_D(const QPackage);
    return d->URI;
}

void QPackage::setURI(QString URI)
{
    QTUML_D(QPackage);
    if (d->URI != URI) {
        d->setURI(URI);
    }
}

/*!
    References the packaged elements that are Types.
    It is the caller's responsibility to delete the returned set.
 */
const QSet<QType *> *QPackage::ownedTypes() const
{
    QTUML_D(QPackage);
    QSet<QType *> *ownedTypes_ = new QSet<QType *>;
    foreach (QPackageableElement *packageableElement, *d->packagedElements)
        if (QType *type = dynamic_cast<QType *>(packageableElement))
            ownedTypes_->insert(type);
    return ownedTypes_;
}

void QPackage::addOwnedType(QType *ownedType)
{
    QTUML_D(QPackage)
    if (!d->packagedElements->contains(ownedType)) {
        d->addPackagedElement(ownedType);

        // Adjust opposite property
        ownedType->setPackage(this);
    }
}

void QPackage::removeOwnedType(QType *ownedType)
{
    QTUML_D(QPackage)
    if (d->packagedElements->contains(ownedType)) {
        d->removePackagedElement(ownedType);

        // Adjust opposite property
        ownedType->setPackage(0);
    }
}

/*!
    Specifies the packageable elements that are owned by this Package.
 */
const QSet<QPackageableElement *> *QPackage::packagedElements() const
{
    QTUML_D(const QPackage);
    return d->packagedElements;
}

void QPackage::addPackagedElement(QPackageableElement *packagedElement)
{
    QTUML_D(QPackage);
    if (!d->packagedElements->contains(packagedElement)) {
        d->addPackagedElement(packagedElement);
    }
}

void QPackage::removePackagedElement(QPackageableElement *packagedElement)
{
    QTUML_D(QPackage);
    if (d->packagedElements->contains(packagedElement)) {
        d->removePackagedElement(packagedElement);
    }
}

/*!
    References the Package that owns this Package.
 */
QPackage *QPackage::nestingPackage() const
{
    QTUML_D(const QPackage);
    return d->nestingPackage;
}

void QPackage::setNestingPackage(QPackage *nestingPackage)
{
    QTUML_D(QPackage);
    if (d->nestingPackage != nestingPackage) {
        d->setNestingPackage(nestingPackage);
    }
}

/*!
    References the ProfileApplications that indicate which profiles have been applied to the Package.
 */
const QSet<QProfileApplication *> *QPackage::profileApplications() const
{
    QTUML_D(const QPackage);
    return d->profileApplications;
}

void QPackage::addProfileApplication(QProfileApplication *profileApplication)
{
    QTUML_D(QPackage);
    if (!d->profileApplications->contains(profileApplication)) {
        d->addProfileApplication(profileApplication);

        // Adjust opposite property
        profileApplication->setApplyingPackage(this);
    }
}

void QPackage::removeProfileApplication(QProfileApplication *profileApplication)
{
    QTUML_D(QPackage);
    if (d->profileApplications->contains(profileApplication)) {
        d->removeProfileApplication(profileApplication);

        // Adjust opposite property
        profileApplication->setApplyingPackage(0);
    }
}

/*!
    References the Stereotypes that are owned by the Package
    It is the caller's responsibility to delete the returned set.
 */
const QSet<QStereotype *> *QPackage::ownedStereotypes() const
{
    QTUML_D(QPackage);
    QSet<QStereotype *> *ownedStereotypes_ = new QSet<QStereotype *>;
    foreach (QPackageableElement *packageableElement, *d->packagedElements)
        if (QStereotype *stereotype = dynamic_cast<QStereotype *>(packageableElement))
            ownedStereotypes_->insert(stereotype);
    return ownedStereotypes_;
}

/*!
    References the PackageMerges that are owned by this Package.
 */
const QSet<QPackageMerge *> *QPackage::packageMerges() const
{
    QTUML_D(const QPackage);
    return d->packageMerges;
}

void QPackage::addPackageMerge(QPackageMerge *packageMerge)
{
    QTUML_D(QPackage);
    if (!d->packageMerges->contains(packageMerge)) {
        d->addPackageMerge(packageMerge);

        // Adjust opposite property
        packageMerge->setReceivingPackage(this);
    }
}

void QPackage::removePackageMerge(QPackageMerge *packageMerge)
{
    QTUML_D(QPackage);
    if (d->packageMerges->contains(packageMerge)) {
        d->removePackageMerge(packageMerge);

        // Adjust opposite property
        packageMerge->setReceivingPackage(0);
    }
}

/*!
    References the packaged elements that are Packages.
    It is the caller's responsibility to delete the returned set.
 */
const QSet<QPackage *> *QPackage::nestedPackages() const
{
    QTUML_D(QPackage);
    QSet<QPackage *> *nestedPackages_ = new QSet<QPackage *>;
    foreach (QPackageableElement *packageableElement, *d->packagedElements)
        if (QPackage *package = dynamic_cast<QPackage *>(packageableElement))
            nestedPackages_->insert(package);
    return nestedPackages_;
}

void QPackage::addNestedPackage(QPackage *nestedPackage)
{
    QTUML_D(QPackage)
    if (!d->packagedElements->contains(nestedPackage)) {
        d->addPackagedElement(nestedPackage);

        // Adjust opposite property
        nestedPackage->setNestingPackage(this);
    }
}

void QPackage::removeNestedPackage(QPackage *nestedPackage)
{
    QTUML_D(QPackage)
    if (d->packagedElements->contains(nestedPackage)) {
        d->removePackagedElement(nestedPackage);

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

#include "moc_qpackage.cpp"

QT_END_NAMESPACE_QTUML

