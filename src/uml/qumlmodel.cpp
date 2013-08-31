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
#include "qumlmodel.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
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

QT_BEGIN_NAMESPACE

/*!
    \class UmlModel

    \inmodule QtUml

    \brief A model captures a view of a physical system. It is an abstraction of the physical system, with a certain purpose. This purpose determines what is to be included in the model and what is irrelevant. Thus the model completely describes those aspects of the physical system that are relevant to the purpose of the model, at the appropriate level of detail.
 */

QUmlModel::QUmlModel(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlModel::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlModel::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlModel::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlModel::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlModel::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlModel::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlModel::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlModel::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlModel::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlModel::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlModel::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlModel::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlModel::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlModel::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlModel::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlModel::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlModel::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [TemplateableElement]

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlModel::ownedTemplateSignature() const
{
    return reinterpret_cast<QUmlTemplateSignature *>(_ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
const QSet<QUmlTemplateBinding *> QUmlModel::templateBinding() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateBinding *> *>(&_templateBinding));
}

// OWNED ATTRIBUTES [Package]

/*!
    Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules.
 */
QString QUmlModel::URI() const
{
    return _URI;
}

/*!
    References the packaged elements that are Packages.
 */
const QSet<QUmlPackage *> QUmlModel::nestedPackage() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlPackage::nestedPackage())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    References the Package that owns this Package.
 */
QUmlPackage *QUmlModel::nestingPackage() const
{
    return reinterpret_cast<QUmlPackage *>(_nestingPackage);
}

/*!
    References the Stereotypes that are owned by the Package
 */
const QSet<QUmlStereotype *> QUmlModel::ownedStereotype() const
{
    QSet<QUmlStereotype *> r;
    foreach (UmlStereotype *element, UmlPackage::ownedStereotype())
        r.insert(reinterpret_cast<QUmlStereotype *>(element));
    return r;
}

/*!
    References the packaged elements that are Types.
 */
const QSet<QUmlType *> QUmlModel::ownedType() const
{
    QSet<QUmlType *> r;
    foreach (UmlType *element, UmlPackage::ownedType())
        r.insert(reinterpret_cast<QUmlType *>(element));
    return r;
}

/*!
    References the PackageMerges that are owned by this Package.
 */
const QSet<QUmlPackageMerge *> QUmlModel::packageMerge() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageMerge *> *>(&_packageMerge));
}

/*!
    Specifies the packageable elements that are owned by this Package.
 */
const QSet<QUmlPackageableElement *> QUmlModel::packagedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageableElement *> *>(&_packagedElement));
}

/*!
    References the ProfileApplications that indicate which profiles have been applied to the Package.
 */
const QSet<QUmlProfileApplication *> QUmlModel::profileApplication() const
{
    return *(reinterpret_cast<const QSet<QUmlProfileApplication *> *>(&_profileApplication));
}

// OWNED ATTRIBUTES [Model]

/*!
    The name of the viewpoint that is expressed by a model (This name may refer to a profile definition).
 */
QString QUmlModel::viewpoint() const
{
    return _viewpoint;
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlModel::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}
// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlModel::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlModel::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlModel::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlModel::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlModel::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlModel::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlModel::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlModel::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlModel::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlModel::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [TemplateableElement]

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlModel::isTemplate() const
{
    return UmlTemplateableElement::isTemplate();
}

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlModel::parameterableElements() const
{
    QSet<QUmlParameterableElement *> r;
    foreach (UmlParameterableElement *element, UmlTemplateableElement::parameterableElements())
        r.insert(reinterpret_cast<QUmlParameterableElement *>(element));
    return r;
}

// OPERATIONS [Package]

/*!
    The query allApplicableStereotypes() returns all the directly or indirectly owned stereotypes, including stereotypes contained in sub-profiles.
 */
QSet<QUmlStereotype *> QUmlModel::allApplicableStereotypes() const
{
    QSet<QUmlStereotype *> r;
    foreach (UmlStereotype *element, UmlPackage::allApplicableStereotypes())
        r.insert(reinterpret_cast<QUmlStereotype *>(element));
    return r;
}

/*!
    The query containingProfile() returns the closest profile directly or indirectly containing this package (or this package itself, if it is a profile).
 */
QUmlProfile *QUmlModel::containingProfile() const
{
    return reinterpret_cast<QUmlProfile *>(UmlPackage::containingProfile());
}

/*!
    The query makesVisible() defines whether a Package makes an element visible outside itself. Elements with no visibility and elements with public visibility are made visible.
 */
bool QUmlModel::makesVisible(QUmlNamedElement *el) const
{
    return UmlPackage::makesVisible(el);
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner.
 */
bool QUmlModel::mustBeOwned() const
{
    return UmlPackage::mustBeOwned();
}

/*!
    The query visibleMembers() defines which members of a Package can be accessed outside it.
 */
QSet<QUmlPackageableElement *> QUmlModel::visibleMembers() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlPackage::visibleMembers())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlModel::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlModel::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlModel::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlModel::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlModel::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlModel::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlModel::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlModel::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlModel::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlModel::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlModel::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlModel::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlModel::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlModel::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlModel::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlModel::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    UmlTemplateableElement::setOwnedTemplateSignature(ownedTemplateSignature);
}

void QUmlModel::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::addTemplateBinding(templateBinding);
}

void QUmlModel::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::removeTemplateBinding(templateBinding);
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QUmlModel::setURI(QString URI)
{
    UmlPackage::setURI(URI);
}

void QUmlModel::addNestedPackage(UmlPackage *nestedPackage)
{
    UmlPackage::addNestedPackage(nestedPackage);
}

void QUmlModel::removeNestedPackage(UmlPackage *nestedPackage)
{
    UmlPackage::removeNestedPackage(nestedPackage);
}

void QUmlModel::setNestingPackage(QUmlPackage *nestingPackage)
{
    UmlPackage::setNestingPackage(nestingPackage);
}

void QUmlModel::addOwnedType(UmlType *ownedType)
{
    UmlPackage::addOwnedType(ownedType);
}

void QUmlModel::removeOwnedType(UmlType *ownedType)
{
    UmlPackage::removeOwnedType(ownedType);
}

void QUmlModel::addPackageMerge(UmlPackageMerge *packageMerge)
{
    UmlPackage::addPackageMerge(packageMerge);
}

void QUmlModel::removePackageMerge(UmlPackageMerge *packageMerge)
{
    UmlPackage::removePackageMerge(packageMerge);
}

void QUmlModel::addPackagedElement(UmlPackageableElement *packagedElement)
{
    UmlPackage::addPackagedElement(packagedElement);
}

void QUmlModel::removePackagedElement(UmlPackageableElement *packagedElement)
{
    UmlPackage::removePackagedElement(packagedElement);
}

void QUmlModel::addProfileApplication(UmlProfileApplication *profileApplication)
{
    UmlPackage::addProfileApplication(profileApplication);
}

void QUmlModel::removeProfileApplication(UmlProfileApplication *profileApplication)
{
    UmlPackage::removeProfileApplication(profileApplication);
}

// SLOTS FOR OWNED ATTRIBUTES [Model]

void QUmlModel::setViewpoint(QString viewpoint)
{
    UmlModel::setViewpoint(viewpoint);
}

QT_END_NAMESPACE

