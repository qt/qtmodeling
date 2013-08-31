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
#include "qumlenumerationliteral.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlEnumeration>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSlot>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlEnumerationLiteral

    \inmodule QtUml

    \brief An enumeration literal is a user-defined data value for an enumeration.
 */

QUmlEnumerationLiteral::QUmlEnumerationLiteral(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlEnumerationLiteral::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlEnumerationLiteral::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlEnumerationLiteral::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlEnumerationLiteral::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlEnumerationLiteral::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlEnumerationLiteral::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlEnumerationLiteral::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlEnumerationLiteral::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlEnumerationLiteral::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlEnumerationLiteral::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlEnumerationLiteral::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [DeploymentTarget]

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
const QSet<QUmlPackageableElement *> QUmlEnumerationLiteral::deployedElement() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlDeploymentTarget::deployedElement())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
const QSet<QUmlDeployment *> QUmlEnumerationLiteral::deployment() const
{
    return *(reinterpret_cast<const QSet<QUmlDeployment *> *>(&_deployment));
}

// OWNED ATTRIBUTES [InstanceSpecification]

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.
 */
const QSet<QUmlSlot *> QUmlEnumerationLiteral::slot_() const
{
    return *(reinterpret_cast<const QSet<QUmlSlot *> *>(&_slot_));
}

/*!
    A specification of how to compute, derive, or construct the instance.
 */
QUmlValueSpecification *QUmlEnumerationLiteral::specification() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_specification);
}

// OWNED ATTRIBUTES [EnumerationLiteral]

/*!
    The classifier of this EnumerationLiteral derived to be equal to its enumeration.
 */
QUmlEnumeration *QUmlEnumerationLiteral::classifier() const
{
    return reinterpret_cast<QUmlEnumeration *>(UmlEnumerationLiteral::classifier());
}

/*!
    The Enumeration that this EnumerationLiteral is a member of.
 */
QUmlEnumeration *QUmlEnumerationLiteral::enumeration() const
{
    return reinterpret_cast<QUmlEnumeration *>(_enumeration);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlEnumerationLiteral::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlEnumerationLiteral::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlEnumerationLiteral::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlEnumerationLiteral::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlEnumerationLiteral::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlEnumerationLiteral::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlEnumerationLiteral::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlEnumerationLiteral::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlEnumerationLiteral::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlEnumerationLiteral::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlEnumerationLiteral::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlEnumerationLiteral::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlEnumerationLiteral::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlEnumerationLiteral::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlEnumerationLiteral::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlEnumerationLiteral::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlEnumerationLiteral::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlEnumerationLiteral::addDeployment(UmlDeployment *deployment)
{
    UmlDeploymentTarget::addDeployment(deployment);
}

void QUmlEnumerationLiteral::removeDeployment(UmlDeployment *deployment)
{
    UmlDeploymentTarget::removeDeployment(deployment);
}

// SLOTS FOR OWNED ATTRIBUTES [InstanceSpecification]

void QUmlEnumerationLiteral::addSlot(UmlSlot *slot_)
{
    UmlInstanceSpecification::addSlot(slot_);
}

void QUmlEnumerationLiteral::removeSlot(UmlSlot *slot_)
{
    UmlInstanceSpecification::removeSlot(slot_);
}

void QUmlEnumerationLiteral::setSpecification(QUmlValueSpecification *specification)
{
    UmlInstanceSpecification::setSpecification(specification);
}

// SLOTS FOR OWNED ATTRIBUTES [EnumerationLiteral]

void QUmlEnumerationLiteral::setEnumeration(QUmlEnumeration *enumeration)
{
    UmlEnumerationLiteral::setEnumeration(enumeration);
}

QT_END_NAMESPACE

