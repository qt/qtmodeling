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
#include "qumlproperty.h"
#include "qumlproperty_p.h"

#include <QtUml/QUmlType>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlValueSpecification>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClass>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlPropertyPrivate::QUmlPropertyPrivate() :
    isDerived(false),
    isReadOnly(false),
    isID(false),
    isDerivedUnion(false),
    aggregation(QtUml::AggregationNone),
    owningAssociation(0),
    defaultValue(0),
    class_(0),
    associationEnd(0),
    datatype(0),
    association(0),
    interface_(0)
{
}

QUmlPropertyPrivate::~QUmlPropertyPrivate()
{
}

/*!
    \class QUmlProperty

    \inmodule QtUml

    \brief Property represents a declared state of one or more instances in terms of a named relationship to a value or values. When a property is an attribute of a classifier, the value or values are related to the instance of the classifier by being held in slots of the instance. When a property is an association end, the value or values are related to the instance or instances at the other end(s) of the association. The range of valid values represented by the property can be controlled by setting the property's type.A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.A property has the capability of being a deployment target in a deployment relationship. This enables modeling the deployment to hierarchical nodes that have properties functioning as internal parts.Property specializes ParameterableElement to specify that a property can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A property represents a set of instances that are owned by a containing classifier instance.
 */

QUmlProperty::QUmlProperty(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlPropertyPrivate, wrapper, parent),
    _wrappedUmlStructuralFeature(new QUmlStructuralFeature(this)),
    _wrappedUmlConnectableElement(new QUmlConnectableElement(this)),
    _wrappedUmlDeploymentTarget(new QUmlDeploymentTarget(this))
{
    setPropertyData();
}

QUmlProperty::QUmlProperty(QUmlPropertyPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlStructuralFeature(new QUmlStructuralFeature(this)),
    _wrappedUmlConnectableElement(new QUmlConnectableElement(this)),
    _wrappedUmlDeploymentTarget(new QUmlDeploymentTarget(this))
{
    setPropertyData();
}

QUmlProperty::~QUmlProperty()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlProperty::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlProperty::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlProperty::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlProperty::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlProperty::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlProperty::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlProperty::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlProperty::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlProperty::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlProperty::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlProperty::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlProperty::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlProperty::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlProperty::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlProperty::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlProperty::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlProperty::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlProperty::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QUmlProperty::upper() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upper();
}

void QUmlProperty::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpper(upper);
}

void QUmlProperty::unsetUpper()
{
    setUpper(1);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlProperty::isUnique() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isUnique();
}

void QUmlProperty::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUnique(isUnique);
}

void QUmlProperty::unsetUnique()
{
    setUnique(true);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlProperty::isOrdered() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isOrdered();
}

void QUmlProperty::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QUmlProperty::unsetOrdered()
{
    setOrdered(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QUmlProperty::lower() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lower();
}

void QUmlProperty::setLower(qint32 lower)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlProperty::upperValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upperValue();
}

void QUmlProperty::setUpperValue(QUmlValueSpecification *upperValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlProperty::lowerValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lowerValue();
}

void QUmlProperty::setLowerValue(QUmlValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlProperty::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlProperty::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlProperty::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlProperty::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlProperty::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlProperty::isStatic() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->isStatic();
}

void QUmlProperty::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QUmlFeature *>(this))->setStatic(isStatic);
}

void QUmlProperty::unsetStatic()
{
    setStatic(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QUmlClassifier *> QUmlProperty::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlProperty::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlProperty::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
QList<QUmlConnectorEnd *> QUmlProperty::ends() const
{
    return (qwrappedobject_cast<const QUmlConnectableElement *>(this))->ends();
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QUmlConnectableElementTemplateParameter *QUmlProperty::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlConnectableElement *>(this))->templateParameter();
}

void QUmlProperty::setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlConnectableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlDeploymentTarget
// ---------------------------------------------------------------

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
QSet<QUmlPackageableElement *> QUmlProperty::deployedElements() const
{
    return (qwrappedobject_cast<const QUmlDeploymentTarget *>(this))->deployedElements();
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
QSet<QUmlDeployment *> QUmlProperty::deployments() const
{
    return (qwrappedobject_cast<const QUmlDeploymentTarget *>(this))->deployments();
}

void QUmlProperty::addDeployment(QUmlDeployment *deployment)
{
    (qwrappedobject_cast<QUmlDeploymentTarget *>(this))->addDeployment(deployment);
}

void QUmlProperty::removeDeployment(QUmlDeployment *deployment)
{
    (qwrappedobject_cast<QUmlDeploymentTarget *>(this))->removeDeployment(deployment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlProperty
// ---------------------------------------------------------------

/*!
    If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QUmlProperty::isDerived() const
{
    // This is a read-write attribute

    Q_D(const QUmlProperty);
    return d->isDerived;
}

void QUmlProperty::setDerived(bool isDerived)
{
    // This is a read-write attribute

    Q_D(QUmlProperty);
    if (d->isDerived != isDerived) {
        d->isDerived = isDerived;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDerived");
}

void QUmlProperty::unsetDerived()
{
    setDerived(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDerived"));
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QUmlProperty::default_() const
{
    // This is a read-write derived attribute

    qWarning("QUmlProperty::default_: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

void QUmlProperty::setDefault_(QString default_)
{
    // This is a read-write derived attribute

    qWarning("QUmlProperty::setDefault_: to be implemented (this is a derived attribute)");
    Q_UNUSED(default_);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QUmlProperty::isComposite() const
{
    // This is a read-write derived attribute

    return aggregation() == QtUml::AggregationComposite;
}

void QUmlProperty::setComposite(bool isComposite)
{
    // This is a read-write derived attribute

    if (isComposite) {
        setAggregation(QtUml::AggregationComposite);
    }
    else {
        setAggregation(QtUml::AggregationNone);
    }
}

void QUmlProperty::unsetComposite()
{
    setComposite(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isComposite"));
}

/*!
    If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.
 */
bool QUmlProperty::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QUmlProperty);
    return d->isReadOnly;
}

void QUmlProperty::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QUmlProperty);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuralFeature *>(this))->setReadOnly(isReadOnly);
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReadOnly");
}

void QUmlProperty::unsetReadOnly()
{
    setReadOnly(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReadOnly"));
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QUmlProperty::isID() const
{
    // This is a read-write attribute

    Q_D(const QUmlProperty);
    return d->isID;
}

void QUmlProperty::setID(bool isID)
{
    // This is a read-write attribute

    Q_D(QUmlProperty);
    if (d->isID != isID) {
        d->isID = isID;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isID");
}

void QUmlProperty::unsetID()
{
    setID(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isID"));
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QUmlProperty::isDerivedUnion() const
{
    // This is a read-write attribute

    Q_D(const QUmlProperty);
    return d->isDerivedUnion;
}

void QUmlProperty::setDerivedUnion(bool isDerivedUnion)
{
    // This is a read-write attribute

    Q_D(QUmlProperty);
    if (d->isDerivedUnion != isDerivedUnion) {
        d->isDerivedUnion = isDerivedUnion;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDerivedUnion");
}

void QUmlProperty::unsetDerivedUnion()
{
    setDerivedUnion(false);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDerivedUnion"));
}

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtUml::AggregationKind QUmlProperty::aggregation() const
{
    // This is a read-write attribute

    Q_D(const QUmlProperty);
    return d->aggregation;
}

void QUmlProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    // This is a read-write attribute

    Q_D(QUmlProperty);
    if (d->aggregation != aggregation) {
        d->aggregation = aggregation;
    }
    d->modifiedResettableProperties << QString::fromLatin1("aggregation");
}

void QUmlProperty::unsetAggregation()
{
    setAggregation(QtUml::AggregationNone);
    Q_D(QUmlProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("aggregation"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlProperty
// ---------------------------------------------------------------

/*!
    References the properties of which this property is constrained to be a subset.
 */
QSet<QUmlProperty *> QUmlProperty::subsettedProperties() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->subsettedProperties;
}

void QUmlProperty::addSubsettedProperty(QUmlProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (!d->subsettedProperties.contains(subsettedProperty)) {
        d->subsettedProperties.insert(subsettedProperty);
    }
}

void QUmlProperty::removeSubsettedProperty(QUmlProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->subsettedProperties.contains(subsettedProperty)) {
        d->subsettedProperties.remove(subsettedProperty);
    }
}

/*!
    References the owning association of this property, if any.
 */
QUmlAssociation *QUmlProperty::owningAssociation() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->owningAssociation;
}

void QUmlProperty::setOwningAssociation(QUmlAssociation *owningAssociation)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->owningAssociation != owningAssociation) {
        // Adjust opposite property
        if (d->owningAssociation)
            d->owningAssociation->removeOwnedEnd(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(d->owningAssociation));
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->owningAssociation));

        d->owningAssociation = owningAssociation;

        // Adjust subsetted property(ies)
        if (owningAssociation) {
            (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(owningAssociation));
        }
        if (owningAssociation) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(owningAssociation));
        }
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(owningAssociation));
        (qwrappedobject_cast<QUmlProperty *>(this))->setAssociation(qwrappedobject_cast<QUmlAssociation *>(owningAssociation));

        // Adjust opposite property
        if (owningAssociation)
            owningAssociation->addOwnedEnd(this);
    }
}

/*!
    An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.
 */
QList<QUmlProperty *> QUmlProperty::qualifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->qualifiers;
}

void QUmlProperty::addQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (!d->qualifiers.contains(qualifier)) {
        d->qualifiers.append(qualifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(qualifier));

        // Adjust opposite property
        qualifier->setAssociationEnd(this);
    }
}

void QUmlProperty::removeQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->qualifiers.contains(qualifier)) {
        d->qualifiers.removeAll(qualifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(qualifier));

        // Adjust opposite property
        qualifier->setAssociationEnd(0);
    }
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QUmlValueSpecification *QUmlProperty::defaultValue() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->defaultValue;
}

void QUmlProperty::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->defaultValue != defaultValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(defaultValue));
        }
    }
}

/*!
    References the Class that owns the Property.References the Class that owns the Property.
 */
QUmlClass *QUmlProperty::class_() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->class_;
}

void QUmlProperty::setClass_(QUmlClass *class_)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(d->class_));
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(class_));
        if (class_) {
            (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(class_));
        }
        if (class_) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(class_));
        }

        // Adjust opposite property
        if (class_)
            class_->addOwnedAttribute(this);
    }
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QUmlProperty *QUmlProperty::opposite() const
{
    // This is a read-write derived association end

    qWarning("QUmlProperty::opposite: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QUmlProperty::setOpposite(QUmlProperty *opposite)
{
    // This is a read-write derived association end

    qWarning("QUmlProperty::setOpposite: to be implemented (this is a derived associationend)");
    Q_UNUSED(opposite);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    Designates the optional association end that owns a qualifier attribute.
 */
QUmlProperty *QUmlProperty::associationEnd() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->associationEnd;
}

void QUmlProperty::setAssociationEnd(QUmlProperty *associationEnd)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->associationEnd != associationEnd) {
        // Adjust opposite property
        if (d->associationEnd)
            d->associationEnd->removeQualifier(this);

        d->associationEnd = associationEnd;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(associationEnd));

        // Adjust opposite property
        if (associationEnd)
            associationEnd->addQualifier(this);
    }
}

/*!
    The DataType that owns this Property.
 */
QUmlDataType *QUmlProperty::datatype() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->datatype;
}

void QUmlProperty::setDatatype(QUmlDataType *datatype)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(d->datatype));
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(datatype));
        if (datatype) {
            (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(datatype));
        }
        if (datatype) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(datatype));
        }

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedAttribute(this);
    }
}

/*!
    References the properties that are redefined by this property.
 */
QSet<QUmlProperty *> QUmlProperty::redefinedProperties() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->redefinedProperties;
}

void QUmlProperty::addRedefinedProperty(QUmlProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (!d->redefinedProperties.contains(redefinedProperty)) {
        d->redefinedProperties.insert(redefinedProperty);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedProperty));
    }
}

void QUmlProperty::removeRedefinedProperty(QUmlProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->redefinedProperties.contains(redefinedProperty)) {
        d->redefinedProperties.remove(redefinedProperty);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedProperty));
    }
}

/*!
    References the association of which this property is a member, if any.
 */
QUmlAssociation *QUmlProperty::association() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->association;
}

void QUmlProperty::setAssociation(QUmlAssociation *association)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->association != association) {
        // Adjust opposite property
        if (d->association)
            d->association->removeMemberEnd(this);

        d->association = association;

        // Adjust opposite property
        if (association)
            association->addMemberEnd(this);
    }
}

/*!
    References the Interface that owns the Property
 */
QUmlInterface *QUmlProperty::interface_() const
{
    // This is a read-write association end

    Q_D(const QUmlProperty);
    return d->interface_;
}

void QUmlProperty::setInterface_(QUmlInterface *interface_)
{
    // This is a read-write association end

    Q_D(QUmlProperty);
    if (d->interface_ != interface_) {
        // Adjust opposite property
        if (d->interface_)
            d->interface_->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(d->interface_));
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->interface_));

        d->interface_ = interface_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(interface_));
        if (interface_) {
            (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(interface_));
        }
        if (interface_) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(interface_));
        }

        // Adjust opposite property
        if (interface_)
            interface_->addOwnedAttribute(this);
    }
}

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QUmlProperty::isAttribute(const QUmlProperty *p) const
{
    qWarning("QUmlProperty::isAttribute: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for properties, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlProperty::isCompatibleWith(const QUmlParameterableElement *p) const
{
    qWarning("QUmlProperty::isCompatibleWith: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, and the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QUmlProperty::isConsistentWith(const QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlProperty::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QUmlProperty::isNavigable() const
{
    qWarning("QUmlProperty::isNavigable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
QSet<QUmlType *> QUmlProperty::subsettingContext() const
{
    qWarning("QUmlProperty::subsettingContext: operation to be implemented");

    return QSet<QUmlType *>(); // change here to your derived return
}

void QUmlProperty::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("default_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("default_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("default_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("default_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("default_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("default_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlStructuralFeature::isReadOnly");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isID")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isID")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isID")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("True indicates this property can be used to uniquely identify an instance of the containing Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isID")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isID")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isID")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the kind of aggregation that applies to the Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties of which this property is constrained to be a subset.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the owning association of this property, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlFeature::featuringClassifiers QUmlRedefinableElement::redefinitionContexts QUmlNamedElement::namespace QUmlProperty::association");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlAssociation::ownedEnd");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("qualifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("qualifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("qualifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("qualifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("qualifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("qualifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlProperty::associationEnd");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("class_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("class_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("class_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Class that owns the Property.References the Class that owns the Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("class_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("class_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace QUmlFeature::featuringClassifiers QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("class_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClass::ownedAttribute");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("associationEnd")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("associationEnd")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("associationEnd")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the optional association end that owns a qualifier attribute.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("associationEnd")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("associationEnd")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("associationEnd")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlProperty::qualifier");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DataType that owns this Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace QUmlFeature::featuringClassifiers QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlDataType::ownedAttribute");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties that are redefined by this property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("association")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("association")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("association")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the association of which this property is a member, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("association")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("association")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("association")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlAssociation::memberEnd");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("interface_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("interface_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("interface_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Interface that owns the Property");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("interface_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("interface_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace QUmlFeature::featuringClassifiers QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlProperty")][QString::fromLatin1("interface_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlInterface::ownedAttribute");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlproperty.cpp"

