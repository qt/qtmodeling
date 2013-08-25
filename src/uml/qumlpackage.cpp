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
#include "qumlpackage.h"
#include "qumlpackage_p.h"

#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackageMerge>
#include <QtUml/QUmlProfile>
#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlPackagePrivate::QUmlPackagePrivate() :
    nestingPackage(0)
{
}

/*!
    \class QUmlPackage

    \inmodule QtUml

    \brief A package can have one or more profile applications to indicate which profiles have been applied. Because a profile is a package, it is possible to apply a profile not only to packages, but also to profiles.Package specializes TemplateableElement and PackageableElement specializes ParameterableElement to specify that a package can be used as a template and a PackageableElement as a template parameter.A package is used to group elements, and provides a namespace for the grouped elements.
 */

QUmlPackage::QUmlPackage(bool create_d_ptr) :
    QUmlNamespace(false),
    QUmlPackageableElement(false),
    QUmlTemplateableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlPackagePrivate);
}

// OWNED ATTRIBUTES

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QUmlPackage::URI() const
{
    // This is a read-write property

    QM_D(const QUmlPackage);
    return d->URI;
}

void QUmlPackage::setURI(QString URI)
{
    // This is a read-write property

    QM_D(QUmlPackage);
    if (d->URI != URI) {
        d->URI = URI;
    }
}

/*!
    References the packaged elements that are Packages.
 */
QSet<QUmlPackage *> QUmlPackage::nestedPackage() const
{
    // This is a read-write derived association end

    qWarning("QUmlPackage::nestedPackage(): to be implemented (this is a derived association end)");

    return QSet<QUmlPackage *>();
}

void QUmlPackage::addNestedPackage(QUmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("QUmlPackage::nestedPackage(): to be implemented (this is a derived association end)");
    Q_UNUSED(nestedPackage);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlPackage::removeNestedPackage(QUmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("QUmlPackage::nestedPackage(): to be implemented (this is a derived association end)");
    Q_UNUSED(nestedPackage);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the Package that owns this Package.
 */
QUmlPackage *QUmlPackage::nestingPackage() const
{
    // This is a read-write association end

    QM_D(const QUmlPackage);
    return d->nestingPackage;
}

void QUmlPackage::setNestingPackage(QUmlPackage *nestingPackage)
{
    // This is a read-write association end

    QM_D(QUmlPackage);
    if (d->nestingPackage != nestingPackage) {
        d->nestingPackage = nestingPackage;
    }
}

/*!
    References the Stereotypes that are owned by the Package
 */
QSet<QUmlStereotype *> QUmlPackage::ownedStereotype() const
{
    // This is a read-only derived association end

    qWarning("QUmlPackage::ownedStereotype(): to be implemented (this is a derived association end)");

    return QSet<QUmlStereotype *>();
}

/*!
    References the packaged elements that are Types.
 */
QSet<QUmlType *> QUmlPackage::ownedType() const
{
    // This is a read-write derived association end

    qWarning("QUmlPackage::ownedType(): to be implemented (this is a derived association end)");

    return QSet<QUmlType *>();
}

void QUmlPackage::addOwnedType(QUmlType *ownedType)
{
    // This is a read-write derived association end

    qWarning("QUmlPackage::ownedType(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlPackage::removeOwnedType(QUmlType *ownedType)
{
    // This is a read-write derived association end

    qWarning("QUmlPackage::ownedType(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the PackageMerges that are owned by this Package.
 */
QSet<QUmlPackageMerge *> QUmlPackage::packageMerge() const
{
    // This is a read-write association end

    QM_D(const QUmlPackage);
    return d->packageMerge;
}

void QUmlPackage::addPackageMerge(QUmlPackageMerge *packageMerge)
{
    // This is a read-write association end

    QM_D(QUmlPackage);
    if (!d->packageMerge.contains(packageMerge)) {
        d->packageMerge.insert(packageMerge);
    }
}

void QUmlPackage::removePackageMerge(QUmlPackageMerge *packageMerge)
{
    // This is a read-write association end

    QM_D(QUmlPackage);
    if (d->packageMerge.contains(packageMerge)) {
        d->packageMerge.remove(packageMerge);
    }
}

/*!
    Specifies the packageable elements that are owned by this Package.
 */
QSet<QUmlPackageableElement *> QUmlPackage::packagedElement() const
{
    // This is a read-write association end

    QM_D(const QUmlPackage);
    return d->packagedElement;
}

void QUmlPackage::addPackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    QM_D(QUmlPackage);
    if (!d->packagedElement.contains(packagedElement)) {
        d->packagedElement.insert(packagedElement);
    }
}

void QUmlPackage::removePackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    QM_D(QUmlPackage);
    if (d->packagedElement.contains(packagedElement)) {
        d->packagedElement.remove(packagedElement);
    }
}

/*!
    References the ProfileApplications that indicate which profiles have been applied to the Package.
 */
QSet<QUmlProfileApplication *> QUmlPackage::profileApplication() const
{
    // This is a read-write association end

    QM_D(const QUmlPackage);
    return d->profileApplication;
}

void QUmlPackage::addProfileApplication(QUmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    QM_D(QUmlPackage);
    if (!d->profileApplication.contains(profileApplication)) {
        d->profileApplication.insert(profileApplication);
    }
}

void QUmlPackage::removeProfileApplication(QUmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    QM_D(QUmlPackage);
    if (d->profileApplication.contains(profileApplication)) {
        d->profileApplication.remove(profileApplication);
    }
}

// OPERATIONS

/*!
    The query allApplicableStereotypes() returns all the directly or indirectly owned stereotypes, including stereotypes contained in sub-profiles.
 */
QSet<QUmlStereotype *> QUmlPackage::allApplicableStereotypes() const
{
    return QSet<QUmlStereotype *> ();
}

/*!
    The query containingProfile() returns the closest profile directly or indirectly containing this package (or this package itself, if it is a profile).
 */
QUmlProfile *QUmlPackage::containingProfile() const
{
    return 0;
}

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QUmlPackage::makesVisible(QUmlNamedElement *el) const
{
    Q_UNUSED(el);
    return bool ();
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QUmlPackage::mustBeOwned() const
{
    return bool ();
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
QSet<QUmlPackageableElement *> QUmlPackage::visibleMembers() const
{
    return QSet<QUmlPackageableElement *> ();
}

QT_END_NAMESPACE

