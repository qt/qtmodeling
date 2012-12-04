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

#include "qproperty.h"
#include "qproperty_p.h"

#include <QtUml/QType>
#include <QtUml/QInterface>
#include <QtUml/QRedefinableElement>
#include <QtUml/QParameterableElement>
#include <QtUml/QValueSpecification>
#include <QtUml/QDataType>
#include <QtUml/QAssociation>
#include <QtUml/QClass>

QT_BEGIN_NAMESPACE_QTUML

QPropertyPrivate::QPropertyPrivate() :
    isDerived(false),
    isReadOnly(false),
    isID(false),
    isDerivedUnion(false),
    aggregation(QtUml::AggregationNone),
    subsettedProperties(new QSet<QProperty *>),
    owningAssociation(0),
    qualifiers(new QList<QProperty *>),
    defaultValue(0),
    class_(0),
    associationEnd(0),
    datatype(0),
    redefinedProperties(new QSet<QProperty *>),
    association(0),
    interface(0)
{
}

QPropertyPrivate::~QPropertyPrivate()
{
    delete subsettedProperties;
    delete qualifiers;
    delete redefinedProperties;
}

/*!
    \class QProperty

    \inmodule QtUml

    \brief Property represents a declared state of one or more instances in terms of a named relationship to a value or values. When a property is an attribute of a classifier, the value or values are related to the instance of the classifier by being held in slots of the instance. When a property is an association end, the value or values are related to the instance or instances at the other end(s) of the association. The range of valid values represented by the property can be controlled by setting the property's type.A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.A property has the capability of being a deployment target in a deployment relationship. This enables modeling the deployment to hierarchical nodes that have properties functioning as internal parts.Property specializes ParameterableElement to specify that a property can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A property represents a set of instances that are owned by a containing classifier instance.
 */

QProperty::QProperty(QUmlObject *parent, QUmlObject *wrapper) :
    QUmlObject(*new QPropertyPrivate, parent, wrapper),
    _wrappedStructuralFeature(new QStructuralFeature(this, this)),
    _wrappedConnectableElement(new QConnectableElement(this, this)),
    _wrappedDeploymentTarget(new QDeploymentTarget(this, this))
{
}

QProperty::QProperty(QPropertyPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QUmlObject(dd, parent, wrapper),
    _wrappedStructuralFeature(new QStructuralFeature(this, this)),
    _wrappedConnectableElement(new QConnectableElement(this, this)),
    _wrappedDeploymentTarget(new QDeploymentTarget(this, this))
{
}

QProperty::~QProperty()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QProperty::ownedElements() const
{
    return (qumlobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QProperty::owner() const
{
    return (qumlobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QProperty::ownedComments() const
{
    return (qumlobject_cast<const QElement *>(this))->ownedComments();
}

void QProperty::addOwnedComment(QComment *ownedComment)
{
    (qumlobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QProperty::removeOwnedComment(QComment *ownedComment)
{
    (qumlobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QProperty::name() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->name();
}

void QProperty::setName(QString name)
{
    (qumlobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QProperty::visibility() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->visibility();
}

void QProperty::setVisibility(QtUml::VisibilityKind visibility)
{
    (qumlobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QProperty::qualifiedName() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QProperty::nameExpression() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QProperty::setNameExpression(QStringExpression *nameExpression)
{
    (qumlobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QProperty::namespace_() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QProperty::clientDependencies() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QProperty::addClientDependency(QDependency *clientDependency)
{
    (qumlobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QProperty::removeClientDependency(QDependency *clientDependency)
{
    (qumlobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QType *QProperty::type() const
{
    return (qumlobject_cast<const QTypedElement *>(this))->type();
}

void QProperty::setType(QType *type)
{
    (qumlobject_cast<QTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QProperty::upper() const
{
    return (qumlobject_cast<const QMultiplicityElement *>(this))->upper();
}

void QProperty::setUpper(qint32 upper)
{
    (qumlobject_cast<QMultiplicityElement *>(this))->setUpper(upper);
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QProperty::isUnique() const
{
    return (qumlobject_cast<const QMultiplicityElement *>(this))->isUnique();
}

void QProperty::setUnique(bool isUnique)
{
    (qumlobject_cast<QMultiplicityElement *>(this))->setUnique(isUnique);
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QProperty::isOrdered() const
{
    return (qumlobject_cast<const QMultiplicityElement *>(this))->isOrdered();
}

void QProperty::setOrdered(bool isOrdered)
{
    (qumlobject_cast<QMultiplicityElement *>(this))->setOrdered(isOrdered);
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QProperty::lower() const
{
    return (qumlobject_cast<const QMultiplicityElement *>(this))->lower();
}

void QProperty::setLower(qint32 lower)
{
    (qumlobject_cast<QMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QProperty::upperValue() const
{
    return (qumlobject_cast<const QMultiplicityElement *>(this))->upperValue();
}

void QProperty::setUpperValue(QValueSpecification *upperValue)
{
    (qumlobject_cast<QMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QProperty::lowerValue() const
{
    return (qumlobject_cast<const QMultiplicityElement *>(this))->lowerValue();
}

void QProperty::setLowerValue(QValueSpecification *lowerValue)
{
    (qumlobject_cast<QMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QProperty::isLeaf() const
{
    return (qumlobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QProperty::setLeaf(bool isLeaf)
{
    (qumlobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QRedefinableElement *> *QProperty::redefinedElements() const
{
    return (qumlobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QClassifier *> *QProperty::redefinitionContexts() const
{
    return (qumlobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QProperty::isStatic() const
{
    return (qumlobject_cast<const QFeature *>(this))->isStatic();
}

void QProperty::setStatic(bool isStatic)
{
    (qumlobject_cast<QFeature *>(this))->setStatic(isStatic);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QClassifier *> *QProperty::featuringClassifiers() const
{
    return (qumlobject_cast<const QFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QProperty::owningTemplateParameter() const
{
    return (qumlobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QProperty::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qumlobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
const QList<QConnectorEnd *> *QProperty::ends() const
{
    return (qumlobject_cast<const QConnectableElement *>(this))->ends();
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QConnectableElementTemplateParameter *QProperty::templateParameter() const
{
    return (qumlobject_cast<const QConnectableElement *>(this))->templateParameter();
}

void QProperty::setTemplateParameter(QConnectableElementTemplateParameter *templateParameter)
{
    (qumlobject_cast<QConnectableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QDeploymentTarget
// ---------------------------------------------------------------

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
const QSet<QPackageableElement *> *QProperty::deployedElements() const
{
    return (qumlobject_cast<const QDeploymentTarget *>(this))->deployedElements();
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
const QSet<QDeployment *> *QProperty::deployments() const
{
    return (qumlobject_cast<const QDeploymentTarget *>(this))->deployments();
}

void QProperty::addDeployment(QDeployment *deployment)
{
    (qumlobject_cast<QDeploymentTarget *>(this))->addDeployment(deployment);
}

void QProperty::removeDeployment(QDeployment *deployment)
{
    (qumlobject_cast<QDeploymentTarget *>(this))->removeDeployment(deployment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QProperty
// ---------------------------------------------------------------

/*!
    If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QProperty::isDerived() const
{
    // This is a read-write attribute

    Q_D(const QProperty);
    return d->isDerived;
}

void QProperty::setDerived(bool isDerived)
{
    // This is a read-write attribute

    Q_D(QProperty);
    if (d->isDerived != isDerived) {
        d->isDerived = isDerived;
    }
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QProperty::default_() const
{
    // This is a read-write derived attribute

    qWarning("QProperty::default_: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

void QProperty::setDefault_(QString default_)
{
    // This is a read-write derived attribute

    qWarning("QProperty::setDefault_: to be implemented (this is a derived attribute)");
    Q_UNUSED(default_);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QProperty::isComposite() const
{
    // This is a read-write derived attribute

    qWarning("QProperty::isComposite: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

void QProperty::setComposite(bool isComposite)
{
    // This is a read-write derived attribute

    qWarning("QProperty::setComposite: to be implemented (this is a derived attribute)");
    Q_UNUSED(isComposite);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.
 */
bool QProperty::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QProperty);
    return d->isReadOnly;
}

void QProperty::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QProperty);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QProperty::isID() const
{
    // This is a read-write attribute

    Q_D(const QProperty);
    return d->isID;
}

void QProperty::setID(bool isID)
{
    // This is a read-write attribute

    Q_D(QProperty);
    if (d->isID != isID) {
        d->isID = isID;
    }
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QProperty::isDerivedUnion() const
{
    // This is a read-write attribute

    Q_D(const QProperty);
    return d->isDerivedUnion;
}

void QProperty::setDerivedUnion(bool isDerivedUnion)
{
    // This is a read-write attribute

    Q_D(QProperty);
    if (d->isDerivedUnion != isDerivedUnion) {
        d->isDerivedUnion = isDerivedUnion;
    }
}

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtUml::AggregationKind QProperty::aggregation() const
{
    // This is a read-write attribute

    Q_D(const QProperty);
    return d->aggregation;
}

void QProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    // This is a read-write attribute

    Q_D(QProperty);
    if (d->aggregation != aggregation) {
        d->aggregation = aggregation;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QProperty
// ---------------------------------------------------------------

/*!
    References the properties of which this property is constrained to be a subset.
 */
const QSet<QProperty *> *QProperty::subsettedProperties() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->subsettedProperties;
}

void QProperty::addSubsettedProperty(QProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (!d->subsettedProperties->contains(subsettedProperty)) {
        d->subsettedProperties->insert(subsettedProperty);
    }
}

void QProperty::removeSubsettedProperty(QProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->subsettedProperties->contains(subsettedProperty)) {
        d->subsettedProperties->remove(subsettedProperty);
    }
}

/*!
    References the owning association of this property, if any.
 */
QAssociation *QProperty::owningAssociation() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->owningAssociation;
}

void QProperty::setOwningAssociation(QAssociation *owningAssociation)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->owningAssociation != owningAssociation) {
        // Adjust opposite property
        if (d->owningAssociation)
            d->owningAssociation->removeOwnedEnd(this);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qumlobject_cast<QClassifier *>(d->owningAssociation));
        (qumlobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qumlobject_cast<QClassifier *>(d->owningAssociation));

        d->owningAssociation = owningAssociation;

        // Adjust subsetted property(ies)
        if (owningAssociation) {
            (qumlobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qumlobject_cast<QClassifier *>(owningAssociation));
        }
        if (owningAssociation) {
            (qumlobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qumlobject_cast<QClassifier *>(owningAssociation));
        }
        (qumlobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qumlobject_cast<QNamespace *>(owningAssociation));
        (qumlobject_cast<QProperty *>(this))->setAssociation(qumlobject_cast<QAssociation *>(owningAssociation));

        // Adjust opposite property
        if (owningAssociation)
            owningAssociation->addOwnedEnd(this);
    }
}

/*!
    An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.
 */
const QList<QProperty *> *QProperty::qualifiers() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->qualifiers;
}

void QProperty::addQualifier(QProperty *qualifier)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (!d->qualifiers->contains(qualifier)) {
        d->qualifiers->append(qualifier);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(qualifier));

        // Adjust opposite property
        qualifier->setAssociationEnd(this);
    }
}

void QProperty::removeQualifier(QProperty *qualifier)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->qualifiers->contains(qualifier)) {
        d->qualifiers->removeAll(qualifier);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(qualifier));

        // Adjust opposite property
        qualifier->setAssociationEnd(0);
    }
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QValueSpecification *QProperty::defaultValue() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->defaultValue;
}

void QProperty::setDefaultValue(QValueSpecification *defaultValue)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->defaultValue != defaultValue) {
        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(defaultValue));
        }
    }
}

/*!
    References the Class that owns the Property.References the Class that owns the Property.
 */
QClass *QProperty::class_() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->class_;
}

void QProperty::setClass_(QClass *class_)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qumlobject_cast<QClassifier *>(d->class_));
        (qumlobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qumlobject_cast<QClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qumlobject_cast<QNamespace *>(class_));
        if (class_) {
            (qumlobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qumlobject_cast<QClassifier *>(class_));
        }
        if (class_) {
            (qumlobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qumlobject_cast<QClassifier *>(class_));
        }

        // Adjust opposite property
        if (class_)
            class_->addOwnedAttribute(this);
    }
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QProperty *QProperty::opposite() const
{
    // This is a read-write derived association end

    qWarning("QProperty::opposite: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QProperty::setOpposite(QProperty *opposite)
{
    // This is a read-write derived association end

    qWarning("QProperty::setOpposite: to be implemented (this is a derived associationend)");
    Q_UNUSED(opposite);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    Designates the optional association end that owns a qualifier attribute.
 */
QProperty *QProperty::associationEnd() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->associationEnd;
}

void QProperty::setAssociationEnd(QProperty *associationEnd)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->associationEnd != associationEnd) {
        // Adjust opposite property
        if (d->associationEnd)
            d->associationEnd->removeQualifier(this);

        d->associationEnd = associationEnd;

        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->setOwner(qumlobject_cast<QElement *>(associationEnd));

        // Adjust opposite property
        if (associationEnd)
            associationEnd->addQualifier(this);
    }
}

/*!
    The DataType that owns this Property.
 */
QDataType *QProperty::datatype() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->datatype;
}

void QProperty::setDatatype(QDataType *datatype)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qumlobject_cast<QClassifier *>(d->datatype));
        (qumlobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qumlobject_cast<QClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qumlobject_cast<QNamespace *>(datatype));
        if (datatype) {
            (qumlobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qumlobject_cast<QClassifier *>(datatype));
        }
        if (datatype) {
            (qumlobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qumlobject_cast<QClassifier *>(datatype));
        }

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedAttribute(this);
    }
}

/*!
    References the properties that are redefined by this property.
 */
const QSet<QProperty *> *QProperty::redefinedProperties() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->redefinedProperties;
}

void QProperty::addRedefinedProperty(QProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (!d->redefinedProperties->contains(redefinedProperty)) {
        d->redefinedProperties->insert(redefinedProperty);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qumlobject_cast<QRedefinableElement *>(redefinedProperty));
    }
}

void QProperty::removeRedefinedProperty(QProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->redefinedProperties->contains(redefinedProperty)) {
        d->redefinedProperties->remove(redefinedProperty);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qumlobject_cast<QRedefinableElement *>(redefinedProperty));
    }
}

/*!
    References the association of which this property is a member, if any.
 */
QAssociation *QProperty::association() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->association;
}

void QProperty::setAssociation(QAssociation *association)
{
    // This is a read-write association end

    Q_D(QProperty);
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
QInterface *QProperty::interface() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->interface;
}

void QProperty::setInterface(QInterface *interface)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->interface != interface) {
        // Adjust opposite property
        if (d->interface)
            d->interface->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qumlobject_cast<QClassifier *>(d->interface));
        (qumlobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qumlobject_cast<QClassifier *>(d->interface));

        d->interface = interface;

        // Adjust subsetted property(ies)
        (qumlobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qumlobject_cast<QNamespace *>(interface));
        if (interface) {
            (qumlobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qumlobject_cast<QClassifier *>(interface));
        }
        if (interface) {
            (qumlobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qumlobject_cast<QClassifier *>(interface));
        }

        // Adjust opposite property
        if (interface)
            interface->addOwnedAttribute(this);
    }
}

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QProperty::isAttribute(const QProperty *p) const
{
    qWarning("QProperty::isAttribute: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for properties, the type must be conformant with the type of the specified parameterable element.
 */
bool QProperty::isCompatibleWith(const QParameterableElement *p) const
{
    qWarning("QProperty::isCompatibleWith: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, and the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QProperty::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QProperty::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QProperty::isNavigable() const
{
    qWarning("QProperty::isNavigable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
const QSet<QType *> *QProperty::subsettingContext() const
{
    qWarning("QProperty::subsettingContext: operation to be implemented");

    return 0; // change here to your derived return
}

#include "moc_qproperty.cpp"

QT_END_NAMESPACE_QTUML

