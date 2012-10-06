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

QT_BEGIN_NAMESPACE_QTUML

class QPropertyPrivate
{
public:
    explicit QPropertyPrivate();
    virtual ~QPropertyPrivate();

    QtUml::AggregationKind aggregation;
    bool isDerived;
    bool isDerivedUnion;
    bool isID;
    bool isReadOnly;
    QAssociation *association;
    QProperty *associationEnd;
    QClass *class_;
    QDataType *datatype;
    QValueSpecification *defaultValue;
    QInterface *interface;
    QAssociation *owningAssociation;
    QList<QProperty *> *qualifiers;
    QSet<QProperty *> *redefinedProperties;
    QSet<QProperty *> *subsettedProperties;
};

QPropertyPrivate::QPropertyPrivate() :
    aggregation(QtUml::AggregationNone),
    isDerived(false),
    isDerivedUnion(false),
    isID(false),
    isReadOnly(false),
    qualifiers(new QList<QProperty *>),
    redefinedProperties(new QSet<QProperty *>),
    subsettedProperties(new QSet<QProperty *>)
{
}

QPropertyPrivate::~QPropertyPrivate()
{
    delete qualifiers;
    delete redefinedProperties;
    delete subsettedProperties;
}

/*!
    \class QProperty

    \inmodule QtUml

    \brief Property represents a declared state of one or more instances in terms of a named relationship to a value or values. When a property is an attribute of a classifier, the value or values are related to the instance of the classifier by being held in slots of the instance. When a property is an association end, the value or values are related to the instance or instances at the other end(s) of the association. The range of valid values represented by the property can be controlled by setting the property's type.A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.A property has the capability of being a deployment target in a deployment relationship. This enables modeling the deployment to hierarchical nodes that have properties functioning as internal parts.Property specializes ParameterableElement to specify that a property can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A property represents a set of instances that are owned by a containing classifier instance.
 */

QProperty::QProperty(QObject *parent)
    : QObject(parent), d_ptr(new QPropertyPrivate)
{
}

QProperty::~QProperty()
{
    delete d_ptr;
}

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtUml::AggregationKind QProperty::aggregation() const
{
    return d_ptr->aggregation;
}

void QProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    d_ptr->aggregation = aggregation;
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QProperty::default_() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

void QProperty::setDefault_(QString default_)
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QProperty::isComposite() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

void QProperty::setComposite(bool isComposite)
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QProperty::isDerived() const
{
    return d_ptr->isDerived;
}

void QProperty::setDerived(bool isDerived)
{
    d_ptr->isDerived = isDerived;
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QProperty::isDerivedUnion() const
{
    return d_ptr->isDerivedUnion;
}

void QProperty::setDerivedUnion(bool isDerivedUnion)
{
    d_ptr->isDerivedUnion = isDerivedUnion;
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QProperty::isID() const
{
    return d_ptr->isID;
}

void QProperty::setID(bool isID)
{
    d_ptr->isID = isID;
}

/*!
    If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.
 */
bool QProperty::isReadOnly() const
{
    return d_ptr->isReadOnly;
}

void QProperty::setReadOnly(bool isReadOnly)
{
    d_ptr->isReadOnly = isReadOnly;
}

/*!
    References the association of which this property is a member, if any.
 */
QAssociation *QProperty::association() const
{
    return d_ptr->association;
}

void QProperty::setAssociation(const QAssociation *association)
{
    d_ptr->association = const_cast<QAssociation *>(association);
}

/*!
    Designates the optional association end that owns a qualifier attribute.
 */
QProperty *QProperty::associationEnd() const
{
    return d_ptr->associationEnd;
}

void QProperty::setAssociationEnd(const QProperty *associationEnd)
{
    d_ptr->associationEnd = const_cast<QProperty *>(associationEnd);
}

/*!
    References the Class that owns the Property.References the Class that owns the Property.
 */
QClass *QProperty::class_() const
{
    return d_ptr->class_;
}

void QProperty::setClass_(const QClass *class_)
{
    d_ptr->class_ = const_cast<QClass *>(class_);
}

/*!
    The DataType that owns this Property.
 */
QDataType *QProperty::datatype() const
{
    return d_ptr->datatype;
}

void QProperty::setDatatype(const QDataType *datatype)
{
    d_ptr->datatype = const_cast<QDataType *>(datatype);
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QValueSpecification *QProperty::defaultValue() const
{
    return d_ptr->defaultValue;
}

void QProperty::setDefaultValue(const QValueSpecification *defaultValue)
{
    d_ptr->defaultValue = const_cast<QValueSpecification *>(defaultValue);
}

/*!
    References the Interface that owns the Property
 */
QInterface *QProperty::interface() const
{
    return d_ptr->interface;
}

void QProperty::setInterface(const QInterface *interface)
{
    d_ptr->interface = const_cast<QInterface *>(interface);
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QProperty *QProperty::opposite() const
{
    qWarning("To be implemented (this is a derived associationend)");
}

void QProperty::setOpposite(const QProperty *opposite)
{
    qWarning("To be implemented (this is a derived associationend)");
}

/*!
    References the owning association of this property, if any.
 */
QAssociation *QProperty::owningAssociation() const
{
    return d_ptr->owningAssociation;
}

void QProperty::setOwningAssociation(const QAssociation *owningAssociation)
{
    d_ptr->owningAssociation = const_cast<QAssociation *>(owningAssociation);
}

/*!
    An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.
 */
const QList<QProperty *> *QProperty::qualifiers() const
{
    return d_ptr->qualifiers;
}

void QProperty::addQualifier(const QProperty *qualifier)
{
    d_ptr->qualifiers->append(const_cast<QProperty *>(qualifier));
}

void QProperty::removeQualifier(const QProperty *qualifier)
{
    d_ptr->qualifiers->removeAll(const_cast<QProperty *>(qualifier));
}

/*!
    References the properties that are redefined by this property.
 */
const QSet<QProperty *> *QProperty::redefinedProperties() const
{
    return d_ptr->redefinedProperties;
}

void QProperty::addRedefinedProperty(const QProperty *redefinedProperty)
{
    d_ptr->redefinedProperties->insert(const_cast<QProperty *>(redefinedProperty));
}

void QProperty::removeRedefinedProperty(const QProperty *redefinedProperty)
{
    d_ptr->redefinedProperties->remove(const_cast<QProperty *>(redefinedProperty));
}

/*!
    References the properties of which this property is constrained to be a subset.
 */
const QSet<QProperty *> *QProperty::subsettedProperties() const
{
    return d_ptr->subsettedProperties;
}

void QProperty::addSubsettedProperty(const QProperty *subsettedProperty)
{
    d_ptr->subsettedProperties->insert(const_cast<QProperty *>(subsettedProperty));
}

void QProperty::removeSubsettedProperty(const QProperty *subsettedProperty)
{
    d_ptr->subsettedProperties->remove(const_cast<QProperty *>(subsettedProperty));
}

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QProperty::isAttribute(const QProperty *p) const
{
    qWarning("To be implemented");
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for properties, the type must be conformant with the type of the specified parameterable element.
 */
bool QProperty::isCompatibleWith(const QParameterableElement *p) const
{
    qWarning("To be implemented");
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, and the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QProperty::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("To be implemented");
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QProperty::isNavigable() const
{
    qWarning("To be implemented");
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
const QSet<QType *> *QProperty::subsettingContext() const
{
    qWarning("To be implemented");
}

#include "moc_qproperty.cpp"

QT_END_NAMESPACE_QTUML

