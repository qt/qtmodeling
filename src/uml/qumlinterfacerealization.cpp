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
#include "qumlinterfacerealization.h"

#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class UmlInterfaceRealization

    \inmodule QtUml

    \brief An interface realization is a specialized realization relationship between a classifier and an interface. This relationship signifies that the realizing classifier conforms to the contract specified by the interface.
 */

QUmlInterfaceRealization::QUmlInterfaceRealization(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlInterfaceRealization::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlInterfaceRealization::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlInterfaceRealization::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlInterfaceRealization::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlInterfaceRealization::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlInterfaceRealization::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlInterfaceRealization::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlInterfaceRealization::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlInterfaceRealization::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlInterfaceRealization::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlInterfaceRealization::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Relationship]

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QUmlElement *> QUmlInterfaceRealization::relatedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_relatedElement));
}

// OWNED ATTRIBUTES [DirectedRelationship]

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlInterfaceRealization::source() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_source));
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlInterfaceRealization::target() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_target));
}

// OWNED ATTRIBUTES [Dependency]

/*!
    The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.
 */
const QSet<QUmlNamedElement *> QUmlInterfaceRealization::client() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_client));
}

/*!
    The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.
 */
const QSet<QUmlNamedElement *> QUmlInterfaceRealization::supplier() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_supplier));
}

// OWNED ATTRIBUTES [Abstraction]

/*!
    An composition of an Expression that states the abstraction relationship between the supplier and the client. In some cases, such as Derivation, it is usually formal and unidirectional; in other cases, such as Trace, it is usually informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship between the elements is not specified.
 */
QUmlOpaqueExpression *QUmlInterfaceRealization::mapping() const
{
    return reinterpret_cast<QUmlOpaqueExpression *>(_mapping);
}

// OWNED ATTRIBUTES [InterfaceRealization]

/*!
    References the Interface specifying the conformance contract.
 */
QUmlInterface *QUmlInterfaceRealization::contract() const
{
    return reinterpret_cast<QUmlInterface *>(_contract);
}

/*!
    References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).
 */
QUmlBehavioredClassifier *QUmlInterfaceRealization::implementingClassifier() const
{
    return reinterpret_cast<QUmlBehavioredClassifier *>(_implementingClassifier);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlInterfaceRealization::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlInterfaceRealization::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlInterfaceRealization::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlInterfaceRealization::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlInterfaceRealization::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlInterfaceRealization::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlInterfaceRealization::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlInterfaceRealization::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInterfaceRealization::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlInterfaceRealization::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInterfaceRealization::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlInterfaceRealization::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInterfaceRealization::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlInterfaceRealization::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlInterfaceRealization::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlInterfaceRealization::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInterfaceRealization::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlInterfaceRealization::addClient(UmlNamedElement *client)
{
    UmlDependency::addClient(client);
}

void QUmlInterfaceRealization::removeClient(UmlNamedElement *client)
{
    UmlDependency::removeClient(client);
}

void QUmlInterfaceRealization::addSupplier(UmlNamedElement *supplier)
{
    UmlDependency::addSupplier(supplier);
}

void QUmlInterfaceRealization::removeSupplier(UmlNamedElement *supplier)
{
    UmlDependency::removeSupplier(supplier);
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlInterfaceRealization::setMapping(QUmlOpaqueExpression *mapping)
{
    UmlAbstraction::setMapping(mapping);
}

// SLOTS FOR OWNED ATTRIBUTES [InterfaceRealization]

void QUmlInterfaceRealization::setContract(QUmlInterface *contract)
{
    UmlInterfaceRealization::setContract(contract);
}

void QUmlInterfaceRealization::setImplementingClassifier(QUmlBehavioredClassifier *implementingClassifier)
{
    UmlInterfaceRealization::setImplementingClassifier(implementingClassifier);
}

QT_END_NAMESPACE

