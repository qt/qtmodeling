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

#include "private/qumlpackageobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlPackageMerge>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProfile>
#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>

/*!
    \class QUmlPackage

    \inmodule QtUml

    \brief A package can have one or more profile applications to indicate which profiles have been applied. Because a profile is a package, it is possible to apply a profile not only to packages, but also to profiles.Package specializes TemplateableElement and PackageableElement specializes ParameterableElement to specify that a package can be used as a template and a PackageableElement as a template parameter.A package is used to group elements, and provides a namespace for the grouped elements.
 */
QUmlPackage::QUmlPackage(bool createQModelingObject) :
    _nestingPackage(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlPackageObject(this));
}

QModelingElement *QUmlPackage::clone() const
{
    QUmlPackage *c = new QUmlPackage;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    c->setVisibility(visibility());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    c->setURI(URI());
    if (nestingPackage())
        c->setNestingPackage(dynamic_cast<QUmlPackage *>(nestingPackage()->clone()));
    foreach (QUmlPackageMerge *element, packageMerges())
        c->addPackageMerge(dynamic_cast<QUmlPackageMerge *>(element->clone()));
    foreach (QUmlPackageableElement *element, packagedElements())
        c->addPackagedElement(dynamic_cast<QUmlPackageableElement *>(element->clone()));
    foreach (QUmlProfileApplication *element, profileApplications())
        c->addProfileApplication(dynamic_cast<QUmlProfileApplication *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QUmlPackage::URI() const
{
    // This is a read-write property

    return _URI;
}

void QUmlPackage::setURI(QString URI)
{
    // This is a read-write property

    if (_URI != URI) {
        _URI = URI;
    }
}

/*!
    References the packaged elements that are Packages.
 */
const QSet<QUmlPackage *> QUmlPackage::nestedPackages() const
{
    // This is a read-write derived association end

    QSet<QUmlPackage *> nestedPackages_;
    foreach (QUmlPackageableElement *packageableElement, _packagedElements)
        if (QUmlPackage *package = dynamic_cast<QUmlPackage *>(packageableElement))
            nestedPackages_.insert(package);
    return nestedPackages_;
}

void QUmlPackage::addNestedPackage(QUmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    if (!_packagedElements.contains(nestedPackage)) {
        // Adjust subsetted property(ies)
        addPackagedElement(nestedPackage);

        // Adjust opposite property
        nestedPackage->setNestingPackage(this);
    }
}

void QUmlPackage::removeNestedPackage(QUmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    if (_packagedElements.contains(nestedPackage)) {
        // Adjust subsetted property(ies)
        removePackagedElement(nestedPackage);

        // Adjust opposite property
        nestedPackage->setNestingPackage(0);
    }
}

/*!
    References the Package that owns this Package.
 */
QUmlPackage *QUmlPackage::nestingPackage() const
{
    // This is a read-write association end

    return _nestingPackage;
}

void QUmlPackage::setNestingPackage(QUmlPackage *nestingPackage)
{
    // This is a read-write association end

    if (_nestingPackage != nestingPackage) {
        _nestingPackage = nestingPackage;
        if (nestingPackage && nestingPackage->asQModelingObject() && this->asQModelingObject())
            QObject::connect(nestingPackage->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setNestingPackage()));
    }
}

/*!
    References the Stereotypes that are owned by the Package
 */
const QSet<QUmlStereotype *> QUmlPackage::ownedStereotypes() const
{
    // This is a read-only derived association end

    QSet<QUmlStereotype *> ownedStereotypes_;
    foreach (QUmlPackageableElement *packageableElement, _packagedElements)
        if (QUmlStereotype *stereotype = dynamic_cast<QUmlStereotype *>(packageableElement))
            ownedStereotypes_.insert(stereotype);
    return ownedStereotypes_;
}

void QUmlPackage::addOwnedStereotype(QUmlStereotype *ownedStereotype)
{
    // This is a read-only derived association end

    qWarning("UmlPackage::addOwnedStereotype(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedStereotype);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addPackagedElement(ownedStereotype);
    }
}

void QUmlPackage::removeOwnedStereotype(QUmlStereotype *ownedStereotype)
{
    // This is a read-only derived association end

    qWarning("UmlPackage::removeOwnedStereotype(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedStereotype);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removePackagedElement(ownedStereotype);
    }
}

/*!
    References the packaged elements that are Types.
 */
const QSet<QUmlType *> QUmlPackage::ownedTypes() const
{
    // This is a read-write derived association end

    QSet<QUmlType *> ownedTypes_;
    foreach (QUmlPackageableElement *packageableElement, _packagedElements)
        if (QUmlType *type = dynamic_cast<QUmlType *>(packageableElement))
            ownedTypes_.insert(type);
    return ownedTypes_;
}

void QUmlPackage::addOwnedType(QUmlType *ownedType)
{
    // This is a read-write derived association end

    if (!_packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        addPackagedElement(ownedType);

        // Adjust opposite property
        if (ownedType)
            ownedType->setPackage(this);
    }
}

void QUmlPackage::removeOwnedType(QUmlType *ownedType)
{
    // This is a read-write derived association end

    if (_packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        removePackagedElement(ownedType);

        // Adjust opposite property
        if (ownedType)
            ownedType->setPackage(0);
    }
}

/*!
    References the PackageMerges that are owned by this Package.
 */
const QSet<QUmlPackageMerge *> QUmlPackage::packageMerges() const
{
    // This is a read-write association end

    return _packageMerges;
}

void QUmlPackage::addPackageMerge(QUmlPackageMerge *packageMerge)
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

void QUmlPackage::removePackageMerge(QUmlPackageMerge *packageMerge)
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
 */
const QSet<QUmlPackageableElement *> QUmlPackage::packagedElements() const
{
    // This is a read-write association end

    return _packagedElements;
}

void QUmlPackage::addPackagedElement(QUmlPackageableElement *packagedElement)
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

void QUmlPackage::removePackagedElement(QUmlPackageableElement *packagedElement)
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

/*!
    References the ProfileApplications that indicate which profiles have been applied to the Package.
 */
const QSet<QUmlProfileApplication *> QUmlPackage::profileApplications() const
{
    // This is a read-write association end

    return _profileApplications;
}

void QUmlPackage::addProfileApplication(QUmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    if (!_profileApplications.contains(profileApplication)) {
        _profileApplications.insert(profileApplication);
        if (profileApplication && profileApplication->asQModelingObject() && this->asQModelingObject())
            QObject::connect(profileApplication->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeProfileApplication(QObject *)));
        profileApplication->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(profileApplication);

        // Adjust opposite properties
        if (profileApplication) {
            profileApplication->setApplyingPackage(this);
        }
    }
}

void QUmlPackage::removeProfileApplication(QUmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    if (_profileApplications.contains(profileApplication)) {
        _profileApplications.remove(profileApplication);
        if (profileApplication->asQModelingObject())
            profileApplication->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(profileApplication);

        // Adjust opposite properties
        if (profileApplication) {
            profileApplication->setApplyingPackage(0);
        }
    }
}

// OPERATIONS

/*!
    The query allApplicableStereotypes() returns all the directly or indirectly owned stereotypes, including stereotypes contained in sub-profiles.
 */
QSet<QUmlStereotype *> QUmlPackage::allApplicableStereotypes() const
{
    qWarning("UmlPackage::allApplicableStereotypes(): to be implemented (operation)");

    return QSet<QUmlStereotype *> ();
}

/*!
    The query containingProfile() returns the closest profile directly or indirectly containing this package (or this package itself, if it is a profile).
 */
QUmlProfile *QUmlPackage::containingProfile() const
{
    qWarning("UmlPackage::containingProfile(): to be implemented (operation)");

    return 0;
}

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QUmlPackage::makesVisible(QUmlNamedElement *el) const
{
    qWarning("UmlPackage::makesVisible(): to be implemented (operation)");

    Q_UNUSED(el);
    return bool ();
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QUmlPackage::mustBeOwned() const
{
    qWarning("UmlPackage::mustBeOwned(): to be implemented (operation)");

    return bool ();
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
QSet<QUmlPackageableElement *> QUmlPackage::visibleMembers() const
{
    qWarning("UmlPackage::visibleMembers(): to be implemented (operation)");

    return QSet<QUmlPackageableElement *> ();
}

