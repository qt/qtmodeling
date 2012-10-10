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
#include "qfeature_p.h"
#include "qredefinableelement_p.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"
#include "qnamedelement_p.h"
#include "qredefinableelement_p.h"
#include "qnamedelement_p.h"

#include <QtUml/QRedefinableElement>
#include <QtUml/QParameterableElement>
#include <QtUml/QType>
#include <QtUml/QInterface>
#include <QtUml/QValueSpecification>
#include <QtUml/QAssociation>
#include <QtUml/QDataType>
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

void QPropertyPrivate::setDerived(bool isDerived)
{
    this->isDerived = isDerived;
}

void QPropertyPrivate::setReadOnly(bool isReadOnly)
{
    this->isReadOnly = isReadOnly;
}

void QPropertyPrivate::setID(bool isID)
{
    this->isID = isID;
}

void QPropertyPrivate::setDerivedUnion(bool isDerivedUnion)
{
    this->isDerivedUnion = isDerivedUnion;
}

void QPropertyPrivate::setAggregation(QtUml::AggregationKind aggregation)
{
    this->aggregation = aggregation;
}

void QPropertyPrivate::addSubsettedProperty(const QProperty *subsettedProperty)
{
    this->subsettedProperties->insert(const_cast<QProperty *>(subsettedProperty));
}

void QPropertyPrivate::removeSubsettedProperty(const QProperty *subsettedProperty)
{
    this->subsettedProperties->remove(const_cast<QProperty *>(subsettedProperty));
}

void QPropertyPrivate::setOwningAssociation(const QAssociation *owningAssociation)
{
    // Adjust subsetted property(ies)
    removeFeaturingClassifier(this->owningAssociation);
    removeRedefinitionContext(this->owningAssociation);
    this->owningAssociation = const_cast<QAssociation *>(owningAssociation);
    // Adjust subsetted property(ies)
    addFeaturingClassifier(owningAssociation);
    addRedefinitionContext(owningAssociation);
    setNamespace_(owningAssociation);
    setAssociation(owningAssociation);
}

void QPropertyPrivate::addQualifier(const QProperty *qualifier)
{
    this->qualifiers->append(const_cast<QProperty *>(qualifier));
    // Adjust subsetted property(ies)
    addOwnedElement(qualifier);
}

void QPropertyPrivate::removeQualifier(const QProperty *qualifier)
{
    this->qualifiers->removeAll(const_cast<QProperty *>(qualifier));
    // Adjust subsetted property(ies)
    removeOwnedElement(qualifier);
}

void QPropertyPrivate::setDefaultValue(const QValueSpecification *defaultValue)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->defaultValue);
    this->defaultValue = const_cast<QValueSpecification *>(defaultValue);
    // Adjust subsetted property(ies)
    addOwnedElement(defaultValue);
}

void QPropertyPrivate::setClass_(const QClass *class_)
{
    this->class_ = const_cast<QClass *>(class_);
    // Adjust subsetted property(ies)
    setNamespace_(class_);
}

void QPropertyPrivate::setAssociationEnd(const QProperty *associationEnd)
{
    this->associationEnd = const_cast<QProperty *>(associationEnd);
    // Adjust subsetted property(ies)
    setOwner(associationEnd);
}

void QPropertyPrivate::setDatatype(const QDataType *datatype)
{
    this->datatype = const_cast<QDataType *>(datatype);
    // Adjust subsetted property(ies)
    setNamespace_(datatype);
}

void QPropertyPrivate::addRedefinedProperty(const QProperty *redefinedProperty)
{
    this->redefinedProperties->insert(const_cast<QProperty *>(redefinedProperty));
    // Adjust subsetted property(ies)
    addRedefinedElement(redefinedProperty);
}

void QPropertyPrivate::removeRedefinedProperty(const QProperty *redefinedProperty)
{
    this->redefinedProperties->remove(const_cast<QProperty *>(redefinedProperty));
    // Adjust subsetted property(ies)
    removeRedefinedElement(redefinedProperty);
}

void QPropertyPrivate::setAssociation(const QAssociation *association)
{
    this->association = const_cast<QAssociation *>(association);
}

void QPropertyPrivate::setInterface(const QInterface *interface)
{
    this->interface = const_cast<QInterface *>(interface);
    // Adjust subsetted property(ies)
    setNamespace_(interface);
}

/*!
    \class QProperty

    \inmodule QtUml

    \brief Property represents a declared state of one or more instances in terms of a named relationship to a value or values. When a property is an attribute of a classifier, the value or values are related to the instance of the classifier by being held in slots of the instance. When a property is an association end, the value or values are related to the instance or instances at the other end(s) of the association. The range of valid values represented by the property can be controlled by setting the property's type.A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.A property has the capability of being a deployment target in a deployment relationship. This enables modeling the deployment to hierarchical nodes that have properties functioning as internal parts.Property specializes ParameterableElement to specify that a property can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A property represents a set of instances that are owned by a containing classifier instance.
 */

QProperty::QProperty(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QPropertyPrivate;
}

QProperty::QProperty(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QPropertyPrivate;
}

QProperty::~QProperty()
{
}

/*!
    If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QProperty::isDerived() const
{
    Q_D(const QProperty);
    return d->isDerived;
}

void QProperty::setDerived(bool isDerived)
{
    Q_D(QProperty);
    d->setDerived(isDerived);
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QProperty::default_() const
{
    qWarning("QProperty::default_: to be implemented (this is a derived attribute)");
}

void QProperty::setDefault_(QString default_)
{
    qWarning("QProperty::setDefault_: to be implemented (this is a derived attribute)");
}

/*!
    If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QProperty::isComposite() const
{
    qWarning("QProperty::isComposite: to be implemented (this is a derived attribute)");
}

void QProperty::setComposite(bool isComposite)
{
    qWarning("QProperty::setComposite: to be implemented (this is a derived attribute)");
}

/*!
    If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.
 */
bool QProperty::isReadOnly() const
{
    Q_D(const QProperty);
    return d->isReadOnly;
}

void QProperty::setReadOnly(bool isReadOnly)
{
    Q_D(QProperty);
    d->setReadOnly(isReadOnly);
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QProperty::isID() const
{
    Q_D(const QProperty);
    return d->isID;
}

void QProperty::setID(bool isID)
{
    Q_D(QProperty);
    d->setID(isID);
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QProperty::isDerivedUnion() const
{
    Q_D(const QProperty);
    return d->isDerivedUnion;
}

void QProperty::setDerivedUnion(bool isDerivedUnion)
{
    Q_D(QProperty);
    d->setDerivedUnion(isDerivedUnion);
}

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtUml::AggregationKind QProperty::aggregation() const
{
    Q_D(const QProperty);
    return d->aggregation;
}

void QProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    Q_D(QProperty);
    d->setAggregation(aggregation);
}

/*!
    References the properties of which this property is constrained to be a subset.
 */
const QSet<QProperty *> *QProperty::subsettedProperties() const
{
    Q_D(const QProperty);
    return d->subsettedProperties;
}

void QProperty::addSubsettedProperty(const QProperty *subsettedProperty)
{
    Q_D(QProperty);
    d->addSubsettedProperty(const_cast<QProperty *>(subsettedProperty));
}

void QProperty::removeSubsettedProperty(const QProperty *subsettedProperty)
{
    Q_D(QProperty);
    d->removeSubsettedProperty(const_cast<QProperty *>(subsettedProperty));
}

/*!
    References the owning association of this property, if any.
 */
QAssociation *QProperty::owningAssociation() const
{
    Q_D(const QProperty);
    return d->owningAssociation;
}

void QProperty::setOwningAssociation(const QAssociation *owningAssociation)
{
    Q_D(QProperty);
    d->setOwningAssociation(const_cast<QAssociation *>(owningAssociation));
}

/*!
    An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.
 */
const QList<QProperty *> *QProperty::qualifiers() const
{
    Q_D(const QProperty);
    return d->qualifiers;
}

void QProperty::addQualifier(const QProperty *qualifier)
{
    Q_D(QProperty);
    d->addQualifier(const_cast<QProperty *>(qualifier));
}

void QProperty::removeQualifier(const QProperty *qualifier)
{
    Q_D(QProperty);
    d->removeQualifier(const_cast<QProperty *>(qualifier));
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QValueSpecification *QProperty::defaultValue() const
{
    Q_D(const QProperty);
    return d->defaultValue;
}

void QProperty::setDefaultValue(const QValueSpecification *defaultValue)
{
    Q_D(QProperty);
    d->setDefaultValue(const_cast<QValueSpecification *>(defaultValue));
}

/*!
    References the Class that owns the Property.References the Class that owns the Property.
 */
QClass *QProperty::class_() const
{
    Q_D(const QProperty);
    return d->class_;
}

void QProperty::setClass_(const QClass *class_)
{
    Q_D(QProperty);
    d->setClass_(const_cast<QClass *>(class_));
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QProperty *QProperty::opposite() const
{
    qWarning("QProperty::opposite: to be implemented (this is a derived associationend)");
}

void QProperty::setOpposite(const QProperty *opposite)
{
    qWarning("QProperty::setOpposite: to be implemented (this is a derived associationend)");
}

/*!
    Designates the optional association end that owns a qualifier attribute.
 */
QProperty *QProperty::associationEnd() const
{
    Q_D(const QProperty);
    return d->associationEnd;
}

void QProperty::setAssociationEnd(const QProperty *associationEnd)
{
    Q_D(QProperty);
    d->setAssociationEnd(const_cast<QProperty *>(associationEnd));
}

/*!
    The DataType that owns this Property.
 */
QDataType *QProperty::datatype() const
{
    Q_D(const QProperty);
    return d->datatype;
}

void QProperty::setDatatype(const QDataType *datatype)
{
    Q_D(QProperty);
    d->setDatatype(const_cast<QDataType *>(datatype));
}

/*!
    References the properties that are redefined by this property.
 */
const QSet<QProperty *> *QProperty::redefinedProperties() const
{
    Q_D(const QProperty);
    return d->redefinedProperties;
}

void QProperty::addRedefinedProperty(const QProperty *redefinedProperty)
{
    Q_D(QProperty);
    d->addRedefinedProperty(const_cast<QProperty *>(redefinedProperty));
}

void QProperty::removeRedefinedProperty(const QProperty *redefinedProperty)
{
    Q_D(QProperty);
    d->removeRedefinedProperty(const_cast<QProperty *>(redefinedProperty));
}

/*!
    References the association of which this property is a member, if any.
 */
QAssociation *QProperty::association() const
{
    Q_D(const QProperty);
    return d->association;
}

void QProperty::setAssociation(const QAssociation *association)
{
    Q_D(QProperty);
    d->setAssociation(const_cast<QAssociation *>(association));
}

/*!
    References the Interface that owns the Property
 */
QInterface *QProperty::interface() const
{
    Q_D(const QProperty);
    return d->interface;
}

void QProperty::setInterface(const QInterface *interface)
{
    Q_D(QProperty);
    d->setInterface(const_cast<QInterface *>(interface));
}

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QProperty::isAttribute(const QProperty *p) const
{
    qWarning("QProperty::isAttribute: operation to be implemented");
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for properties, the type must be conformant with the type of the specified parameterable element.
 */
bool QProperty::isCompatibleWith(const QParameterableElement *p) const
{
    qWarning("QProperty::isCompatibleWith: operation to be implemented");
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, and the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QProperty::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QProperty::isConsistentWith: operation to be implemented");
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QProperty::isNavigable() const
{
    qWarning("QProperty::isNavigable: operation to be implemented");
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
const QSet<QType *> *QProperty::subsettingContext() const
{
    qWarning("QProperty::subsettingContext: operation to be implemented");
}

#include "moc_qproperty.cpp"

QT_END_NAMESPACE_QTUML

