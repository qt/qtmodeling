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
#include "qumlextensionend.h"

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlExtensionEnd

    \inmodule QtUml

    \brief An extension end is used to tie an extension to a stereotype when extending a metaclass.The default multiplicity of an extension end is 0..1.
 */

QUmlExtensionEnd::QUmlExtensionEnd(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlExtensionEnd::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlExtensionEnd::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlExtensionEnd::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlExtensionEnd::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlExtensionEnd::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlExtensionEnd::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlExtensionEnd::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlExtensionEnd::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlExtensionEnd::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [MultiplicityElement]

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlExtensionEnd::isOrdered() const
{
    return _isOrdered;
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlExtensionEnd::isUnique() const
{
    return _isUnique;
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlExtensionEnd::lowerValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_lowerValue);
}

/*!
    Specifies the upper bound of the multiplicity interval.
 */
int QUmlExtensionEnd::upper() const
{
    return UmlMultiplicityElement::upper();
}

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlExtensionEnd::upperValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_upperValue);
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlExtensionEnd::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlExtensionEnd::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlExtensionEnd::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [Feature]

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QUmlClassifier *> QUmlExtensionEnd::featuringClassifier() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_featuringClassifier));
}

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlExtensionEnd::isStatic() const
{
    return _isStatic;
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlExtensionEnd::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}
// OWNED ATTRIBUTES [ConnectableElement]

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
const QList<QUmlConnectorEnd *> QUmlExtensionEnd::end() const
{
    QList<QUmlConnectorEnd *> r;
    foreach (UmlConnectorEnd *element, UmlConnectableElement::end())
        r.append(reinterpret_cast<QUmlConnectorEnd *>(element));
    return r;
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QUmlConnectableElementTemplateParameter *QUmlExtensionEnd::templateParameter() const
{
    return reinterpret_cast<QUmlConnectableElementTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [DeploymentTarget]

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
const QSet<QUmlPackageableElement *> QUmlExtensionEnd::deployedElement() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlDeploymentTarget::deployedElement())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
const QSet<QUmlDeployment *> QUmlExtensionEnd::deployment() const
{
    return *(reinterpret_cast<const QSet<QUmlDeployment *> *>(&_deployment));
}

// OWNED ATTRIBUTES [Property]

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtUml::AggregationKind QUmlExtensionEnd::aggregation() const
{
    return _aggregation;
}

/*!
    References the association of which this property is a member, if any.
 */
QUmlAssociation *QUmlExtensionEnd::association() const
{
    return reinterpret_cast<QUmlAssociation *>(_association);
}

/*!
    Designates the optional association end that owns a qualifier attribute.
 */
QUmlProperty *QUmlExtensionEnd::associationEnd() const
{
    return reinterpret_cast<QUmlProperty *>(_associationEnd);
}

/*!
    References the Class that owns the Property.References the Class that owns the Property.
 */
QUmlClass *QUmlExtensionEnd::class_() const
{
    return reinterpret_cast<QUmlClass *>(_class_);
}

/*!
    The DataType that owns this Property.
 */
QUmlDataType *QUmlExtensionEnd::datatype() const
{
    return reinterpret_cast<QUmlDataType *>(_datatype);
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QUmlExtensionEnd::default_() const
{
    return UmlProperty::default_();
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QUmlValueSpecification *QUmlExtensionEnd::defaultValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_defaultValue);
}

/*!
    References the Interface that owns the Property
 */
QUmlInterface *QUmlExtensionEnd::interface_() const
{
    return reinterpret_cast<QUmlInterface *>(_interface_);
}

/*!
    If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QUmlExtensionEnd::isComposite() const
{
    return UmlProperty::isComposite();
}

/*!
    If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QUmlExtensionEnd::isDerived() const
{
    return _isDerived;
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QUmlExtensionEnd::isDerivedUnion() const
{
    return _isDerivedUnion;
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QUmlExtensionEnd::isID() const
{
    return _isID;
}

/*!
    If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.
 */
bool QUmlExtensionEnd::isReadOnly() const
{
    return _isReadOnly;
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QUmlProperty *QUmlExtensionEnd::opposite() const
{
    return reinterpret_cast<QUmlProperty *>(UmlProperty::opposite());
}

/*!
    References the owning association of this property, if any.
 */
QUmlAssociation *QUmlExtensionEnd::owningAssociation() const
{
    return reinterpret_cast<QUmlAssociation *>(_owningAssociation);
}

/*!
    An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.
 */
const QList<QUmlProperty *> QUmlExtensionEnd::qualifier() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_qualifier));
}

/*!
    References the properties that are redefined by this property.
 */
const QSet<QUmlProperty *> QUmlExtensionEnd::redefinedProperty() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_redefinedProperty));
}

/*!
    References the properties of which this property is constrained to be a subset.
 */
const QSet<QUmlProperty *> QUmlExtensionEnd::subsettedProperty() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_subsettedProperty));
}

// OWNED ATTRIBUTES [ExtensionEnd]

/*!
    This redefinition changes the default multiplicity of association ends, since model elements are usually extended by 0 or 1 instance of the extension stereotype.
 */
int QUmlExtensionEnd::lower() const
{
    return UmlExtensionEnd::lower();
}

/*!
    References the type of the ExtensionEnd. Note that this association restricts the possible types of an ExtensionEnd to only be Stereotypes.
 */
QUmlStereotype *QUmlExtensionEnd::type() const
{
    return reinterpret_cast<QUmlStereotype *>(_type);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlExtensionEnd::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlExtensionEnd::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlExtensionEnd::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlExtensionEnd::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlExtensionEnd::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlExtensionEnd::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [MultiplicityElement]

/*!
    The operation compatibleWith takes another multiplicity as input. It checks if one multiplicity is compatible with another.
 */
bool QUmlExtensionEnd::compatibleWith(QUmlMultiplicityElement *other) const
{
    return UmlMultiplicityElement::compatibleWith(other);
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QUmlExtensionEnd::includesCardinality(int C) const
{
    return UmlMultiplicityElement::includesCardinality(C);
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QUmlExtensionEnd::includesMultiplicity(QUmlMultiplicityElement *M) const
{
    return UmlMultiplicityElement::includesMultiplicity(M);
}

/*!
    The operation is determines if the upper and lower bound of the ranges are the ones given.
 */
bool QUmlExtensionEnd::is(int lowerbound, int upperbound) const
{
    return UmlMultiplicityElement::is(lowerbound, upperbound);
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QUmlExtensionEnd::isMultivalued() const
{
    return UmlMultiplicityElement::isMultivalued();
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
int QUmlExtensionEnd::upperBound() const
{
    return UmlMultiplicityElement::upperBound();
}

// OPERATIONS [RedefinableElement]

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlExtensionEnd::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// OPERATIONS [ParameterableElement]

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlExtensionEnd::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [Property]

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QUmlExtensionEnd::isAttribute(QUmlProperty *p) const
{
    return UmlProperty::isAttribute(p);
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for properties, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlExtensionEnd::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlProperty::isCompatibleWith(p);
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, and the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QUmlExtensionEnd::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlProperty::isConsistentWith(redefinee);
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QUmlExtensionEnd::isNavigable() const
{
    return UmlProperty::isNavigable();
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
QSet<QUmlType *> QUmlExtensionEnd::subsettingContext() const
{
    QSet<QUmlType *> r;
    foreach (UmlType *element, UmlProperty::subsettingContext())
        r.insert(reinterpret_cast<QUmlType *>(element));
    return r;
}

// OPERATIONS [ExtensionEnd]

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an Integer. This is a redefinition of the default lower bound, which normally, for MultiplicityElements, evaluates to 1 if empty.
 */
int QUmlExtensionEnd::lowerBound() const
{
    return UmlExtensionEnd::lowerBound();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExtensionEnd::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlExtensionEnd::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtensionEnd::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlExtensionEnd::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlExtensionEnd::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlExtensionEnd::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlExtensionEnd::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlExtensionEnd::setOrdered(bool isOrdered)
{
    UmlMultiplicityElement::setOrdered(isOrdered);
}

void QUmlExtensionEnd::setUnique(bool isUnique)
{
    UmlMultiplicityElement::setUnique(isUnique);
}

void QUmlExtensionEnd::setLowerValue(QUmlValueSpecification *lowerValue)
{
    UmlMultiplicityElement::setLowerValue(lowerValue);
}

void QUmlExtensionEnd::setUpper(int upper)
{
    UmlMultiplicityElement::setUpper(upper);
}

void QUmlExtensionEnd::setUpperValue(QUmlValueSpecification *upperValue)
{
    UmlMultiplicityElement::setUpperValue(upperValue);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExtensionEnd::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlExtensionEnd::setStatic(bool isStatic)
{
    UmlFeature::setStatic(isStatic);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExtensionEnd::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlExtensionEnd::setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter)
{
    UmlConnectableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlExtensionEnd::addDeployment(UmlDeployment *deployment)
{
    UmlDeploymentTarget::addDeployment(deployment);
}

void QUmlExtensionEnd::removeDeployment(UmlDeployment *deployment)
{
    UmlDeploymentTarget::removeDeployment(deployment);
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlExtensionEnd::setAggregation(QtUml::AggregationKind aggregation)
{
    UmlProperty::setAggregation(aggregation);
}

void QUmlExtensionEnd::setAssociation(QUmlAssociation *association)
{
    UmlProperty::setAssociation(association);
}

void QUmlExtensionEnd::setAssociationEnd(QUmlProperty *associationEnd)
{
    UmlProperty::setAssociationEnd(associationEnd);
}

void QUmlExtensionEnd::setClass(QUmlClass *class_)
{
    UmlProperty::setClass(class_);
}

void QUmlExtensionEnd::setDatatype(QUmlDataType *datatype)
{
    UmlProperty::setDatatype(datatype);
}

void QUmlExtensionEnd::setDefault(QString default_)
{
    UmlProperty::setDefault(default_);
}

void QUmlExtensionEnd::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    UmlProperty::setDefaultValue(defaultValue);
}

void QUmlExtensionEnd::setInterface(QUmlInterface *interface_)
{
    UmlProperty::setInterface(interface_);
}

void QUmlExtensionEnd::setComposite(bool isComposite)
{
    UmlProperty::setComposite(isComposite);
}

void QUmlExtensionEnd::setDerived(bool isDerived)
{
    UmlProperty::setDerived(isDerived);
}

void QUmlExtensionEnd::setDerivedUnion(bool isDerivedUnion)
{
    UmlProperty::setDerivedUnion(isDerivedUnion);
}

void QUmlExtensionEnd::setID(bool isID)
{
    UmlProperty::setID(isID);
}

void QUmlExtensionEnd::setReadOnly(bool isReadOnly)
{
    UmlProperty::setReadOnly(isReadOnly);
}

void QUmlExtensionEnd::setOpposite(QUmlProperty *opposite)
{
    UmlProperty::setOpposite(opposite);
}

void QUmlExtensionEnd::setOwningAssociation(QUmlAssociation *owningAssociation)
{
    UmlProperty::setOwningAssociation(owningAssociation);
}

void QUmlExtensionEnd::addQualifier(UmlProperty *qualifier)
{
    UmlProperty::addQualifier(qualifier);
}

void QUmlExtensionEnd::removeQualifier(UmlProperty *qualifier)
{
    UmlProperty::removeQualifier(qualifier);
}

void QUmlExtensionEnd::addRedefinedProperty(UmlProperty *redefinedProperty)
{
    UmlProperty::addRedefinedProperty(redefinedProperty);
}

void QUmlExtensionEnd::removeRedefinedProperty(UmlProperty *redefinedProperty)
{
    UmlProperty::removeRedefinedProperty(redefinedProperty);
}

void QUmlExtensionEnd::addSubsettedProperty(UmlProperty *subsettedProperty)
{
    UmlProperty::addSubsettedProperty(subsettedProperty);
}

void QUmlExtensionEnd::removeSubsettedProperty(UmlProperty *subsettedProperty)
{
    UmlProperty::removeSubsettedProperty(subsettedProperty);
}

// SLOTS FOR OWNED ATTRIBUTES [ExtensionEnd]

void QUmlExtensionEnd::setLower(int lower)
{
    UmlExtensionEnd::setLower(lower);
}

void QUmlExtensionEnd::setType(QUmlStereotype *type)
{
    UmlExtensionEnd::setType(type);
}

QT_END_NAMESPACE

