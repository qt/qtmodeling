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

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QPackage::ownedElements() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QPackage::owner() const
{
    return (qtuml_object_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QPackage::ownedComments() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedComments();
}

void QPackage::addOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QPackage::removeOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QPackage::name() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->name();
}

void QPackage::setName(QString name)
{
    (qtuml_object_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QPackage::qualifiedName() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QPackage::nameExpression() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->nameExpression();
}

void QPackage::setNameExpression(QStringExpression *nameExpression)
{
    (qtuml_object_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QPackage::namespace_() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QPackage::clientDependencies() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->clientDependencies();
}

void QPackage::addClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QPackage::removeClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QPackage::packageImports() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->packageImports();
}

void QPackage::addPackageImport(QPackageImport *packageImport)
{
    (qtuml_object_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QPackage::removePackageImport(QPackageImport *packageImport)
{
    (qtuml_object_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QPackage::members() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QPackageableElement *> *QPackage::importedMembers() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QPackage::elementImports() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->elementImports();
}

void QPackage::addElementImport(QElementImport *elementImport)
{
    (qtuml_object_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QPackage::removeElementImport(QElementImport *elementImport)
{
    (qtuml_object_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QPackage::ownedRules() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->ownedRules();
}

void QPackage::addOwnedRule(QConstraint *ownedRule)
{
    (qtuml_object_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QPackage::removeOwnedRule(QConstraint *ownedRule)
{
    (qtuml_object_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QPackage::ownedMembers() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QPackage::owningTemplateParameter() const
{
    return (qtuml_object_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QPackage::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qtuml_object_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QTemplateParameter *QPackage::templateParameter() const
{
    return (qtuml_object_cast<const QParameterableElement *>(this))->templateParameter();
}

void QPackage::setTemplateParameter(QTemplateParameter *templateParameter)
{
    (qtuml_object_cast<QParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QPackage::visibility() const
{
    return (qtuml_object_cast<const QPackageableElement *>(this))->visibility();
}

void QPackage::setVisibility(QtUml::VisibilityKind visibility)
{
    (qtuml_object_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional template signature specifying the formal template parameters.
 */
QTemplateSignature *QPackage::ownedTemplateSignature() const
{
    return (qtuml_object_cast<const QTemplateableElement *>(this))->ownedTemplateSignature();
}

void QPackage::setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature)
{
    (qtuml_object_cast<QTemplateableElement *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
const QSet<QTemplateBinding *> *QPackage::templateBindings() const
{
    return (qtuml_object_cast<const QTemplateableElement *>(this))->templateBindings();
}

void QPackage::addTemplateBinding(QTemplateBinding *templateBinding)
{
    (qtuml_object_cast<QTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QPackage::removeTemplateBinding(QTemplateBinding *templateBinding)
{
    (qtuml_object_cast<QTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
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
    It is the caller's responsibility to delete the returned set.
 */
const QSet<QType *> *QPackage::ownedTypes() const
{
    // This is a read-write derived association end

    Q_D(const QPackage);
    QSet<QType *> *ownedTypes_ = new QSet<QType *>;
    foreach (QPackageableElement *packageableElement, *d->packagedElements)
        if (QType *type = qtuml_object_cast<QType *>(packageableElement))
            ownedTypes_->insert(type);
    return ownedTypes_;
}

void QPackage::addOwnedType(QType *ownedType)
{
    // This is a read-write derived association end

    Q_D(QPackage);
    if (!d->packagedElements->contains(ownedType)) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QPackage *>(this))->addPackagedElement(qtuml_object_cast<QPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(this);
    }
}

void QPackage::removeOwnedType(QType *ownedType)
{
    // This is a read-write derived association end

    Q_D(QPackage);
    if (d->packagedElements->contains(ownedType)) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QPackage *>(this))->removePackagedElement(qtuml_object_cast<QPackageableElement *>(ownedType));

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
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(packagedElement));
    }
}

void QPackage::removePackagedElement(QPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QPackage);
    if (d->packagedElements->contains(packagedElement)) {
        d->packagedElements->remove(packagedElement);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(packagedElement));
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
        (qtuml_object_cast<QNamedElementPrivate *>(d))->setNamespace_(qtuml_object_cast<QNamespace *>(nestingPackage));

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
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(profileApplication));

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
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(profileApplication));

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
    // This is a read-only derived association end

    Q_D(const QPackage);
    QSet<QStereotype *> *ownedStereotypes_ = new QSet<QStereotype *>;
    foreach (QPackageableElement *packageableElement, *d->packagedElements)
        if (QStereotype *stereotype = qtuml_object_cast<QStereotype *>(packageableElement))
            ownedStereotypes_->insert(stereotype);
    return ownedStereotypes_;
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
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(packageMerge));

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
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(packageMerge));

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
    // This is a read-write derived association end

    Q_D(const QPackage);
    QSet<QPackage *> *nestedPackages_ = new QSet<QPackage *>;
    foreach (QPackageableElement *packageableElement, *d->packagedElements)
        if (QPackage *package = qtuml_object_cast<QPackage *>(packageableElement))
            nestedPackages_->insert(package);
    return nestedPackages_;
}

void QPackage::addNestedPackage(QPackage *nestedPackage)
{
    // This is a read-write derived association end

    Q_D(QPackage);
    if (!d->packagedElements->contains(qtuml_object_cast<QPackageableElement *>(nestedPackage))) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QPackage *>(this))->addPackagedElement(qtuml_object_cast<QPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(this);
    }
}

void QPackage::removeNestedPackage(QPackage *nestedPackage)
{
    // This is a read-write derived association end

    Q_D(QPackage);
    if (d->packagedElements->contains(qtuml_object_cast<QPackageableElement *>(nestedPackage))) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QPackage *>(this))->removePackagedElement(qtuml_object_cast<QPackageableElement *>(nestedPackage));

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

void QPackage::addPackagedElement(QUmlPointer<QType> ownedType)
{
    addOwnedType(ownedType);
}

void QPackage::removePackagedElement(QUmlPointer<QType> ownedType)
{
    removeOwnedType(ownedType);
}

void QPackage::addPackagedElement(QUmlPointer<QPackage> nestedPackage)
{
    addNestedPackage(nestedPackage);
}

void QPackage::removePackagedElement(QUmlPointer<QPackage> nestedPackage)
{
    removeNestedPackage(nestedPackage);
}

#include "moc_qpackage.cpp"

QT_END_NAMESPACE_QTUML

