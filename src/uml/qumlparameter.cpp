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
#include "qumlparameter.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlParameter

    \inmodule QtUml

    \brief Parameters are allowed to be treated as connectable elements.A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.Parameters have support for streaming, exceptions, and parameter sets.
 */

QUmlParameter::QUmlParameter(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlParameter::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlParameter::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlParameter::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [MultiplicityElement]

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlParameter::isOrdered() const
{
    return _isOrdered;
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlParameter::isUnique() const
{
    return _isUnique;
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
int QUmlParameter::lower() const
{
    return UmlMultiplicityElement::lower();
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlParameter::lowerValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_lowerValue);
}

/*!
    Specifies the upper bound of the multiplicity interval.
 */
int QUmlParameter::upper() const
{
    return UmlMultiplicityElement::upper();
}

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlParameter::upperValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_upperValue);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlParameter::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlParameter::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlParameter::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlParameter::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlParameter::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlParameter::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [TypedElement]

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlParameter::type() const
{
    return reinterpret_cast<QUmlType *>(_type);
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlParameter::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}
// OWNED ATTRIBUTES [ConnectableElement]

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
const QList<QUmlConnectorEnd *> QUmlParameter::end() const
{
    QList<QUmlConnectorEnd *> r;
    foreach (UmlConnectorEnd *element, UmlConnectableElement::end())
        r.append(reinterpret_cast<QUmlConnectorEnd *>(element));
    return r;
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QUmlConnectableElementTemplateParameter *QUmlParameter::templateParameter() const
{
    return reinterpret_cast<QUmlConnectableElementTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [Parameter]

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QUmlParameter::default_() const
{
    return UmlParameter::default_();
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QUmlValueSpecification *QUmlParameter::defaultValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_defaultValue);
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtUml::ParameterDirectionKind QUmlParameter::direction() const
{
    return _direction;
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QUmlParameter::effect() const
{
    return _effect;
}

/*!
    Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 */
bool QUmlParameter::isException() const
{
    return _isException;
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QUmlParameter::isStream() const
{
    return _isStream;
}

/*!
    References the Operation owning this parameter.
 */
QUmlOperation *QUmlParameter::operation() const
{
    return reinterpret_cast<QUmlOperation *>(_operation);
}

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
const QSet<QUmlParameterSet *> QUmlParameter::parameterSet() const
{
    return *(reinterpret_cast<const QSet<QUmlParameterSet *> *>(&_parameterSet));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlParameter::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlParameter::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

/*!
    The operation compatibleWith takes another multiplicity as input. It checks if one multiplicity is compatible with another.
 */
bool QUmlParameter::compatibleWith(QUmlMultiplicityElement *other) const
{
    return UmlMultiplicityElement::compatibleWith(other);
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QUmlParameter::includesCardinality(int C) const
{
    return UmlMultiplicityElement::includesCardinality(C);
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QUmlParameter::includesMultiplicity(QUmlMultiplicityElement *M) const
{
    return UmlMultiplicityElement::includesMultiplicity(M);
}

/*!
    The operation is determines if the upper and lower bound of the ranges are the ones given.
 */
bool QUmlParameter::is(int lowerbound, int upperbound) const
{
    return UmlMultiplicityElement::is(lowerbound, upperbound);
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QUmlParameter::isMultivalued() const
{
    return UmlMultiplicityElement::isMultivalued();
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
int QUmlParameter::lowerBound() const
{
    return UmlMultiplicityElement::lowerBound();
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
int QUmlParameter::upperBound() const
{
    return UmlMultiplicityElement::upperBound();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlParameter::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlParameter::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlParameter::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlParameter::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlParameter::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlParameter::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlParameter::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlParameter::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlParameter::setOrdered(bool isOrdered)
{
    UmlMultiplicityElement::setOrdered(isOrdered);
}

void QUmlParameter::setUnique(bool isUnique)
{
    UmlMultiplicityElement::setUnique(isUnique);
}

void QUmlParameter::setLower(int lower)
{
    UmlMultiplicityElement::setLower(lower);
}

void QUmlParameter::setLowerValue(QUmlValueSpecification *lowerValue)
{
    UmlMultiplicityElement::setLowerValue(lowerValue);
}

void QUmlParameter::setUpper(int upper)
{
    UmlMultiplicityElement::setUpper(upper);
}

void QUmlParameter::setUpperValue(QUmlValueSpecification *upperValue)
{
    UmlMultiplicityElement::setUpperValue(upperValue);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlParameter::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlParameter::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlParameter::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlParameter::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlParameter::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlParameter::setType(QUmlType *type)
{
    UmlTypedElement::setType(type);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlParameter::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlParameter::setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter)
{
    UmlConnectableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [Parameter]

void QUmlParameter::setDefault(QString default_)
{
    UmlParameter::setDefault(default_);
}

void QUmlParameter::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    UmlParameter::setDefaultValue(defaultValue);
}

void QUmlParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    UmlParameter::setDirection(direction);
}

void QUmlParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    UmlParameter::setEffect(effect);
}

void QUmlParameter::setException(bool isException)
{
    UmlParameter::setException(isException);
}

void QUmlParameter::setStream(bool isStream)
{
    UmlParameter::setStream(isStream);
}

void QUmlParameter::setOperation(QUmlOperation *operation)
{
    UmlParameter::setOperation(operation);
}

void QUmlParameter::addParameterSet(UmlParameterSet *parameterSet)
{
    UmlParameter::addParameterSet(parameterSet);
}

void QUmlParameter::removeParameterSet(UmlParameterSet *parameterSet)
{
    UmlParameter::removeParameterSet(parameterSet);
}

QT_END_NAMESPACE

