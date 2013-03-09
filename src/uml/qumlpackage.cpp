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

#include "qumlpackage.h"
#include "qumlpackage_p.h"

#include <QtUml/QUmlProfile>
#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackageMerge>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlType>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlPackagePrivate::QUmlPackagePrivate() :
    nestingPackage(0)
{
}

QUmlPackagePrivate::~QUmlPackagePrivate()
{
}

/*!
    \class QUmlPackage

    \inmodule QtUml

    \brief A package can have one or more profile applications to indicate which profiles have been applied. Because a profile is a package, it is possible to apply a profile not only to packages, but also to profiles.Package specializes TemplateableElement and PackageableElement specializes ParameterableElement to specify that a package can be used as a template and a PackageableElement as a template parameter.A package is used to group elements, and provides a namespace for the grouped elements.
 */

QUmlPackage::QUmlPackage(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlPackagePrivate, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this)),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this))
{
    setPropertyData();
}

QUmlPackage::QUmlPackage(QUmlPackagePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this)),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this))
{
    setPropertyData();
}

QUmlPackage::~QUmlPackage()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlPackage::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlPackage::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlPackage::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlPackage::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlPackage::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlPackage::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlPackage::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlPackage::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlPackage::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlPackage::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlPackage::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlPackage::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlPackage::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlPackage::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlPackage::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlPackage::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlPackage::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlPackage::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlPackage::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlPackage::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlPackage::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlPackage::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlPackage::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlPackage::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlPackage::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlPackage::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlPackage::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlPackage::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlPackage::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->templateParameter();
}

void QUmlPackage::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlPackage::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlPackage::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlPackage::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlPackage);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlPackage::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->ownedTemplateSignature();
}

void QUmlPackage::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlPackage::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlPackage::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlPackage::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlPackage
// ---------------------------------------------------------------

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QUmlPackage::URI() const
{
    // This is a read-write attribute

    Q_D(const QUmlPackage);
    return d->URI;
}

void QUmlPackage::setURI(QString URI)
{
    // This is a read-write attribute

    Q_D(QUmlPackage);
    if (d->URI != URI) {
        d->URI = URI;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlPackage
// ---------------------------------------------------------------

/*!
    References the packaged elements that are Types.
 */
QSet<QUmlType *> QUmlPackage::ownedTypes() const
{
    // This is a read-write derived association end

    Q_D(const QUmlPackage);
    QSet<QUmlType *> ownedTypes_;
    foreach (QUmlPackageableElement *packageableElement, d->packagedElements)
        if (QUmlType *type = qwrappedobject_cast<QUmlType *>(packageableElement))
            ownedTypes_.insert(type);
    return ownedTypes_;
}

void QUmlPackage::addOwnedType(QUmlType *ownedType)
{
    // This is a read-write derived association end

    Q_D(QUmlPackage);
    if (!d->packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlPackage *>(this))->addPackagedElement(qwrappedobject_cast<QUmlPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(this);
    }
}

void QUmlPackage::removeOwnedType(QUmlType *ownedType)
{
    // This is a read-write derived association end

    Q_D(QUmlPackage);
    if (d->packagedElements.contains(ownedType)) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlPackage *>(this))->removePackagedElement(qwrappedobject_cast<QUmlPackageableElement *>(ownedType));

        // Adjust opposite property
        ownedType->setPackage(0);
    }
}

/*!
    Specifies the packageable elements that are owned by this Package.
 */
QSet<QUmlPackageableElement *> QUmlPackage::packagedElements() const
{
    // This is a read-write association end

    Q_D(const QUmlPackage);
    return d->packagedElements;
}

void QUmlPackage::addPackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QUmlPackage);
    if (!d->packagedElements.contains(packagedElement)) {
        d->packagedElements.insert(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(packagedElement));
    }
}

void QUmlPackage::removePackagedElement(QUmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    Q_D(QUmlPackage);
    if (d->packagedElements.contains(packagedElement)) {
        d->packagedElements.remove(packagedElement);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(packagedElement));
    }
}

/*!
    References the Package that owns this Package.
 */
QUmlPackage *QUmlPackage::nestingPackage() const
{
    // This is a read-write association end

    Q_D(const QUmlPackage);
    return d->nestingPackage;
}

void QUmlPackage::setNestingPackage(QUmlPackage *nestingPackage)
{
    // This is a read-write association end

    Q_D(QUmlPackage);
    if (d->nestingPackage != nestingPackage) {
        // Adjust opposite property
        if (d->nestingPackage)
            d->nestingPackage->removeNestedPackage(this);

        d->nestingPackage = nestingPackage;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(nestingPackage));

        // Adjust opposite property
        if (nestingPackage)
            nestingPackage->addNestedPackage(this);
    }
}

/*!
    References the ProfileApplications that indicate which profiles have been applied to the Package.
 */
QSet<QUmlProfileApplication *> QUmlPackage::profileApplications() const
{
    // This is a read-write association end

    Q_D(const QUmlPackage);
    return d->profileApplications;
}

void QUmlPackage::addProfileApplication(QUmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    Q_D(QUmlPackage);
    if (!d->profileApplications.contains(profileApplication)) {
        d->profileApplications.insert(profileApplication);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(profileApplication));

        // Adjust opposite property
        profileApplication->setApplyingPackage(this);
    }
}

void QUmlPackage::removeProfileApplication(QUmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    Q_D(QUmlPackage);
    if (d->profileApplications.contains(profileApplication)) {
        d->profileApplications.remove(profileApplication);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(profileApplication));

        // Adjust opposite property
        profileApplication->setApplyingPackage(0);
    }
}

/*!
    References the Stereotypes that are owned by the Package
 */
QSet<QUmlStereotype *> QUmlPackage::ownedStereotypes() const
{
    // This is a read-only derived association end

    Q_D(const QUmlPackage);
    QSet<QUmlStereotype *> ownedStereotypes_;
    foreach (QUmlPackageableElement *packageableElement, d->packagedElements)
        if (QUmlStereotype *stereotype = qwrappedobject_cast<QUmlStereotype *>(packageableElement))
            ownedStereotypes_.insert(stereotype);
    return ownedStereotypes_;
}

/*!
    References the PackageMerges that are owned by this Package.
 */
QSet<QUmlPackageMerge *> QUmlPackage::packageMerges() const
{
    // This is a read-write association end

    Q_D(const QUmlPackage);
    return d->packageMerges;
}

void QUmlPackage::addPackageMerge(QUmlPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QUmlPackage);
    if (!d->packageMerges.contains(packageMerge)) {
        d->packageMerges.insert(packageMerge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(this);
    }
}

void QUmlPackage::removePackageMerge(QUmlPackageMerge *packageMerge)
{
    // This is a read-write association end

    Q_D(QUmlPackage);
    if (d->packageMerges.contains(packageMerge)) {
        d->packageMerges.remove(packageMerge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(packageMerge));

        // Adjust opposite property
        packageMerge->setReceivingPackage(0);
    }
}

/*!
    References the packaged elements that are Packages.
 */
QSet<QUmlPackage *> QUmlPackage::nestedPackages() const
{
    // This is a read-write derived association end

    Q_D(const QUmlPackage);
    QSet<QUmlPackage *> nestedPackages_;
    foreach (QUmlPackageableElement *packageableElement, d->packagedElements)
        if (QUmlPackage *package = qwrappedobject_cast<QUmlPackage *>(packageableElement))
            nestedPackages_.insert(package);
    return nestedPackages_;
}

void QUmlPackage::addNestedPackage(QUmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    Q_D(QUmlPackage);
    if (!d->packagedElements.contains(qwrappedobject_cast<QUmlPackageableElement *>(nestedPackage))) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlPackage *>(this))->addPackagedElement(qwrappedobject_cast<QUmlPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(this);
    }
}

void QUmlPackage::removeNestedPackage(QUmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    Q_D(QUmlPackage);
    if (d->packagedElements.contains(qwrappedobject_cast<QUmlPackageableElement *>(nestedPackage))) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlPackage *>(this))->removePackagedElement(qwrappedobject_cast<QUmlPackageableElement *>(nestedPackage));

        // Adjust opposite property
        nestedPackage->setNestingPackage(0);
    }
}

/*!
    The query allApplicableStereotypes() returns all the directly or indirectly owned stereotypes, including stereotypes contained in sub-profiles.
 */
QSet<QUmlStereotype *> QUmlPackage::allApplicableStereotypes() const
{
    qWarning("QUmlPackage::allApplicableStereotypes: operation to be implemented");

    return QSet<QUmlStereotype *>(); // change here to your derived return
}

/*!
    The query containingProfile() returns the closest profile directly or indirectly containing this package (or this package itself, if it is a profile).
 */
QUmlProfile *QUmlPackage::containingProfile() const
{
    qWarning("QUmlPackage::containingProfile: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QUmlPackage::makesVisible(const QUmlNamedElement *el) const
{
    qWarning("QUmlPackage::makesVisible: operation to be implemented");
    Q_UNUSED(el);

    return bool(); // change here to your derived return
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QUmlPackage::mustBeOwned() const
{
    qWarning("QUmlPackage::mustBeOwned: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
QSet<QUmlPackageableElement *> QUmlPackage::visibleMembers() const
{
    qWarning("QUmlPackage::visibleMembers: operation to be implemented");

    return QSet<QUmlPackageableElement *>(); // change here to your derived return
}

void QUmlPackage::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("URI")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("URI")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("URI")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("URI")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("URI")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("URI")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the packaged elements that are Types.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlPackage::packagedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedTypes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlType::package");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the packageable elements that are owned by this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packagedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Package that owns this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestingPackage")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPackage::nestedPackage");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("profileApplications")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("profileApplications")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("profileApplications")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the ProfileApplications that indicate which profiles have been applied to the Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("profileApplications")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("profileApplications")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("profileApplications")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlProfileApplication::applyingPackage");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedStereotypes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedStereotypes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedStereotypes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Stereotypes that are owned by the Package");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedStereotypes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedStereotypes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlPackage::packagedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("ownedStereotypes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the PackageMerges that are owned by this Package.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("packageMerges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPackageMerge::receivingPackage");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the packaged elements that are Packages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlPackage::packagedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPackage")][QString::fromLatin1("nestedPackages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPackage::nestingPackage");

    QWrappedObject::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlPackage::addPackagedElement(QWrappedObjectPointer<QUmlType> ownedType)
{
    addOwnedType(ownedType);
}

void QUmlPackage::removePackagedElement(QWrappedObjectPointer<QUmlType> ownedType)
{
    removeOwnedType(ownedType);
}

void QUmlPackage::addPackagedElement(QWrappedObjectPointer<QUmlPackage> nestedPackage)
{
    addNestedPackage(nestedPackage);
}

void QUmlPackage::removePackagedElement(QWrappedObjectPointer<QUmlPackage> nestedPackage)
{
    removeNestedPackage(nestedPackage);
}

QT_END_NAMESPACE

#include "moc_qumlpackage.cpp"

