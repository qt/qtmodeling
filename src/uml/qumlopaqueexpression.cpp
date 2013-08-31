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
#include "qumlopaqueexpression.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

/*!
    \class UmlOpaqueExpression

    \inmodule QtUml

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.Provides a mechanism for precisely defining the behavior of an opaque expression. An opaque expression is defined by a behavior restricted to return one result.
 */

QUmlOpaqueExpression::QUmlOpaqueExpression(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlOpaqueExpression::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlOpaqueExpression::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlOpaqueExpression::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlOpaqueExpression::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlOpaqueExpression::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlOpaqueExpression::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlOpaqueExpression::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlOpaqueExpression::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlOpaqueExpression::type() const
{
    return reinterpret_cast<QUmlType *>(_type);
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlOpaqueExpression::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlOpaqueExpression::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlOpaqueExpression::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [OpaqueExpression]

/*!
    Specifies the behavior of the opaque expression.
 */
QUmlBehavior *QUmlOpaqueExpression::behavior() const
{
    return reinterpret_cast<QUmlBehavior *>(_behavior);
}

/*!
    The text of the expression, possibly in multiple languages.
 */
const QList<QString> QUmlOpaqueExpression::body() const
{
    return *(reinterpret_cast<const QList<QString> *>(&_body));
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
const QList<QString> QUmlOpaqueExpression::language() const
{
    return *(reinterpret_cast<const QList<QString> *>(&_language));
}

/*!
    Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.
 */
QUmlParameter *QUmlOpaqueExpression::result() const
{
    return reinterpret_cast<QUmlParameter *>(UmlOpaqueExpression::result());
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlOpaqueExpression::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlOpaqueExpression::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlOpaqueExpression::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlOpaqueExpression::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlOpaqueExpression::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlOpaqueExpression::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlOpaqueExpression::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QUmlOpaqueExpression::booleanValue() const
{
    return UmlValueSpecification::booleanValue();
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
int QUmlOpaqueExpression::integerValue() const
{
    return UmlValueSpecification::integerValue();
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for ValueSpecification, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlOpaqueExpression::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlValueSpecification::isCompatibleWith(p);
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QUmlOpaqueExpression::isComputable() const
{
    return UmlValueSpecification::isComputable();
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QUmlOpaqueExpression::isNull() const
{
    return UmlValueSpecification::isNull();
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
double QUmlOpaqueExpression::realValue() const
{
    return UmlValueSpecification::realValue();
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QUmlOpaqueExpression::stringValue() const
{
    return UmlValueSpecification::stringValue();
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
int QUmlOpaqueExpression::unlimitedValue() const
{
    return UmlValueSpecification::unlimitedValue();
}

// OPERATIONS [OpaqueExpression]

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QUmlOpaqueExpression::isIntegral() const
{
    return UmlOpaqueExpression::isIntegral();
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QUmlOpaqueExpression::isNonNegative() const
{
    return UmlOpaqueExpression::isNonNegative();
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QUmlOpaqueExpression::isPositive() const
{
    return UmlOpaqueExpression::isPositive();
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
int QUmlOpaqueExpression::value() const
{
    return UmlOpaqueExpression::value();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOpaqueExpression::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlOpaqueExpression::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOpaqueExpression::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlOpaqueExpression::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlOpaqueExpression::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlOpaqueExpression::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlOpaqueExpression::setType(QUmlType *type)
{
    UmlTypedElement::setType(type);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlOpaqueExpression::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlOpaqueExpression::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlOpaqueExpression::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueExpression]

void QUmlOpaqueExpression::setBehavior(QUmlBehavior *behavior)
{
    UmlOpaqueExpression::setBehavior(behavior);
}

void QUmlOpaqueExpression::addBody(QString  body)
{
    UmlOpaqueExpression::addBody(body);
}

void QUmlOpaqueExpression::removeBody(QString  body)
{
    UmlOpaqueExpression::removeBody(body);
}

void QUmlOpaqueExpression::addLanguage(QString  language)
{
    UmlOpaqueExpression::addLanguage(language);
}

void QUmlOpaqueExpression::removeLanguage(QString  language)
{
    UmlOpaqueExpression::removeLanguage(language);
}

QT_END_NAMESPACE

