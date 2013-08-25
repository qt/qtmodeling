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

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlPropertyPrivate::QUmlPropertyPrivate() :
    aggregation(QtUml::AggregationNone),
    association(0),
    associationEnd(0),
    class_(0),
    datatype(0),
    defaultValue(0),
    interface_(0),
    isComposite(false),
    isDerived(false),
    isDerivedUnion(false),
    isID(false),
    isReadOnly(false),
    opposite(0),
    owningAssociation(0)
{
}

/*!
    \class QUmlProperty

    \inmodule QtUml

    \brief Property represents a declared state of one or more instances in terms of a named relationship to a value or values. When a property is an attribute of a classifier, the value or values are related to the instance of the classifier by being held in slots of the instance. When a property is an association end, the value or values are related to the instance or instances at the other end(s) of the association. The range of valid values represented by the property can be controlled by setting the property's type.A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.A property has the capability of being a deployment target in a deployment relationship. This enables modeling the deployment to hierarchical nodes that have properties functioning as internal parts.Property specializes ParameterableElement to specify that a property can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A property represents a set of instances that are owned by a containing classifier instance.
 */

QUmlProperty::QUmlProperty(bool create_d_ptr) :
    QUmlStructuralFeature(false),
    QUmlConnectableElement(false),
    QUmlDeploymentTarget(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlPropertyPrivate);
}

// Owned attributes

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtUml::AggregationKind QUmlProperty::aggregation() const
{
    return QtUml::AggregationKind();
}

void QUmlProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    Q_UNUSED(aggregation);
}

/*!
    References the association of which this property is a member, if any.
 */
QUmlAssociation *QUmlProperty::association() const
{
    return 0;
}

void QUmlProperty::setAssociation(QUmlAssociation *association)
{
    Q_UNUSED(association);
}

/*!
    Designates the optional association end that owns a qualifier attribute.
 */
QUmlProperty *QUmlProperty::associationEnd() const
{
    return 0;
}

void QUmlProperty::setAssociationEnd(QUmlProperty *associationEnd)
{
    Q_UNUSED(associationEnd);
}

/*!
    References the Class that owns the Property.References the Class that owns the Property.
 */
QUmlClass *QUmlProperty::class_() const
{
    return 0;
}

void QUmlProperty::setClass(QUmlClass *class_)
{
    Q_UNUSED(class_);
}

/*!
    The DataType that owns this Property.
 */
QUmlDataType *QUmlProperty::datatype() const
{
    return 0;
}

void QUmlProperty::setDatatype(QUmlDataType *datatype)
{
    Q_UNUSED(datatype);
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QUmlProperty::default_() const
{
    return QString();
}

void QUmlProperty::setDefault(QString default_)
{
    Q_UNUSED(default_);
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QUmlValueSpecification *QUmlProperty::defaultValue() const
{
    return 0;
}

void QUmlProperty::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    Q_UNUSED(defaultValue);
}

/*!
    References the Interface that owns the Property
 */
QUmlInterface *QUmlProperty::interface_() const
{
    return 0;
}

void QUmlProperty::setInterface(QUmlInterface *interface_)
{
    Q_UNUSED(interface_);
}

/*!
    If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QUmlProperty::isComposite() const
{
    return bool();
}

void QUmlProperty::setComposite(bool isComposite)
{
    Q_UNUSED(isComposite);
}

/*!
    If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QUmlProperty::isDerived() const
{
    return bool();
}

void QUmlProperty::setDerived(bool isDerived)
{
    Q_UNUSED(isDerived);
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QUmlProperty::isDerivedUnion() const
{
    return bool();
}

void QUmlProperty::setDerivedUnion(bool isDerivedUnion)
{
    Q_UNUSED(isDerivedUnion);
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QUmlProperty::isID() const
{
    return bool();
}

void QUmlProperty::setID(bool isID)
{
    Q_UNUSED(isID);
}

/*!
    If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.
 */
bool QUmlProperty::isReadOnly() const
{
    return bool();
}

void QUmlProperty::setReadOnly(bool isReadOnly)
{
    Q_UNUSED(isReadOnly);
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QUmlProperty *QUmlProperty::opposite() const
{
    return 0;
}

void QUmlProperty::setOpposite(QUmlProperty *opposite)
{
    Q_UNUSED(opposite);
}

/*!
    References the owning association of this property, if any.
 */
QUmlAssociation *QUmlProperty::owningAssociation() const
{
    return 0;
}

void QUmlProperty::setOwningAssociation(QUmlAssociation *owningAssociation)
{
    Q_UNUSED(owningAssociation);
}

/*!
    An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.
 */
QList<QUmlProperty *> QUmlProperty::qualifier() const
{
    return QList<QUmlProperty *>();
}

void QUmlProperty::addQualifier(QList<QUmlProperty *> qualifier)
{
    Q_UNUSED(qualifier);
}

void QUmlProperty::removeQualifier(QList<QUmlProperty *> qualifier)
{
    Q_UNUSED(qualifier);
}

/*!
    References the properties that are redefined by this property.
 */
QSet<QUmlProperty *> QUmlProperty::redefinedProperty() const
{
    return QSet<QUmlProperty *>();
}

void QUmlProperty::addRedefinedProperty(QSet<QUmlProperty *> redefinedProperty)
{
    Q_UNUSED(redefinedProperty);
}

void QUmlProperty::removeRedefinedProperty(QSet<QUmlProperty *> redefinedProperty)
{
    Q_UNUSED(redefinedProperty);
}

/*!
    References the properties of which this property is constrained to be a subset.
 */
QSet<QUmlProperty *> QUmlProperty::subsettedProperty() const
{
    return QSet<QUmlProperty *>();
}

void QUmlProperty::addSubsettedProperty(QSet<QUmlProperty *> subsettedProperty)
{
    Q_UNUSED(subsettedProperty);
}

void QUmlProperty::removeSubsettedProperty(QSet<QUmlProperty *> subsettedProperty)
{
    Q_UNUSED(subsettedProperty);
}

// Operations

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QUmlProperty::isAttribute(QUmlProperty *p) const
{
    Q_UNUSED(p);
    return bool ();
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for properties, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlProperty::isCompatibleWith(QUmlParameterableElement *p) const
{
    Q_UNUSED(p);
    return bool ();
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, and the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QUmlProperty::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QUmlProperty::isNavigable() const
{
    return bool ();
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
QSet<QUmlType *> QUmlProperty::subsettingContext() const
{
    return QSet<QUmlType *> ();
}

QT_END_NAMESPACE

