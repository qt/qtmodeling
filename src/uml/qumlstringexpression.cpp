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
#include "qumlstringexpression.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlStringExpression

    \inmodule QtUml

    \brief An expression that specifies a string value that is derived by concatenating a set of sub string expressions, some of which might be template parameters.
 */

QUmlStringExpression::QUmlStringExpression(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlStringExpression::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlStringExpression::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlStringExpression::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlStringExpression::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlStringExpression::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlStringExpression::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlStringExpression::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlStringExpression::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlStringExpression::type() const
{
    return reinterpret_cast<QUmlType *>(_type);
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlStringExpression::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlStringExpression::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlStringExpression::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Expression]

/*!
    Specifies a sequence of operands.
 */
const QList<QUmlValueSpecification *> QUmlStringExpression::operand() const
{
    return *(reinterpret_cast<const QList<QUmlValueSpecification *> *>(&_operand));
}

/*!
    The symbol associated with the node in the expression tree.
 */
QString QUmlStringExpression::symbol() const
{
    return _symbol;
}

// OWNED ATTRIBUTES [TemplateableElement]

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlStringExpression::ownedTemplateSignature() const
{
    return reinterpret_cast<QUmlTemplateSignature *>(_ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
const QSet<QUmlTemplateBinding *> QUmlStringExpression::templateBinding() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateBinding *> *>(&_templateBinding));
}

// OWNED ATTRIBUTES [StringExpression]

/*!
    The string expression of which this expression is a substring.
 */
QUmlStringExpression *QUmlStringExpression::owningExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_owningExpression);
}

/*!
    The StringExpressions that constitute this StringExpression.
 */
const QSet<QUmlStringExpression *> QUmlStringExpression::subExpression() const
{
    return *(reinterpret_cast<const QSet<QUmlStringExpression *> *>(&_subExpression));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlStringExpression::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlStringExpression::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlStringExpression::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlStringExpression::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlStringExpression::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlStringExpression::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlStringExpression::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QUmlStringExpression::booleanValue() const
{
    return UmlValueSpecification::booleanValue();
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
int QUmlStringExpression::integerValue() const
{
    return UmlValueSpecification::integerValue();
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for ValueSpecification, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlStringExpression::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlValueSpecification::isCompatibleWith(p);
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QUmlStringExpression::isComputable() const
{
    return UmlValueSpecification::isComputable();
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QUmlStringExpression::isNull() const
{
    return UmlValueSpecification::isNull();
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
double QUmlStringExpression::realValue() const
{
    return UmlValueSpecification::realValue();
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
int QUmlStringExpression::unlimitedValue() const
{
    return UmlValueSpecification::unlimitedValue();
}

// OPERATIONS [TemplateableElement]

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlStringExpression::isTemplate() const
{
    return UmlTemplateableElement::isTemplate();
}

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlStringExpression::parameterableElements() const
{
    QSet<QUmlParameterableElement *> r;
    foreach (UmlParameterableElement *element, UmlTemplateableElement::parameterableElements())
        r.insert(reinterpret_cast<QUmlParameterableElement *>(element));
    return r;
}

// OPERATIONS [StringExpression]

/*!
    The query stringValue() returns the string that concatenates, in order, all the component string literals of all the subexpressions that are part of the StringExpression.
 */
QString QUmlStringExpression::stringValue() const
{
    return UmlStringExpression::stringValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStringExpression::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlStringExpression::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStringExpression::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlStringExpression::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlStringExpression::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlStringExpression::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlStringExpression::setType(QUmlType *type)
{
    UmlTypedElement::setType(type);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlStringExpression::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlStringExpression::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlStringExpression::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Expression]

void QUmlStringExpression::addOperand(UmlValueSpecification *operand)
{
    UmlExpression::addOperand(operand);
}

void QUmlStringExpression::removeOperand(UmlValueSpecification *operand)
{
    UmlExpression::removeOperand(operand);
}

void QUmlStringExpression::setSymbol(QString symbol)
{
    UmlExpression::setSymbol(symbol);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlStringExpression::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    UmlTemplateableElement::setOwnedTemplateSignature(ownedTemplateSignature);
}

void QUmlStringExpression::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::addTemplateBinding(templateBinding);
}

void QUmlStringExpression::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::removeTemplateBinding(templateBinding);
}

// SLOTS FOR OWNED ATTRIBUTES [StringExpression]

void QUmlStringExpression::setOwningExpression(QUmlStringExpression *owningExpression)
{
    UmlStringExpression::setOwningExpression(owningExpression);
}

void QUmlStringExpression::addSubExpression(UmlStringExpression *subExpression)
{
    UmlStringExpression::addSubExpression(subExpression);
}

void QUmlStringExpression::removeSubExpression(UmlStringExpression *subExpression)
{
    UmlStringExpression::removeSubExpression(subExpression);
}

QT_END_NAMESPACE

