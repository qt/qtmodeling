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
//#include "qproperty_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QProperty

    \inmodule QtUml

    \brief A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.
 */

QProperty::QProperty(QObject *parent)
    : QObject(parent)
{
}

QProperty::~QProperty()
{
}

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QEnumerations::AggregationKind QProperty::aggregation() const
{
}

void QProperty::setAggregation(QEnumerations::AggregationKind aggregation)
{
}

/*!
    Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QProperty::isDerived() const
{
}

void QProperty::setIsDerived(bool isDerived)
{
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QProperty::isDerivedUnion() const
{
}

void QProperty::setIsDerivedUnion(bool isDerivedUnion)
{
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QProperty::isID() const
{
}

void QProperty::setIsID(bool isID)
{
}

/*!
    If true, the attribute may only be read, and not written.
 */
bool QProperty::isReadOnly() const
{
}

void QProperty::setIsReadOnly(bool isReadOnly)
{
}

/*!
    References the association of which this property is a member, if any.
 */
QAssociation *QProperty::association() const
{
}

void QProperty::setAssociation(QAssociation *association)
{
}

/*!
    References the Class that owns the Property.
 */
QClass *QProperty::class_() const
{
}

void QProperty::setClass_(QClass *class_)
{
}

/*!
    The DataType that owns this Property.
 */
QDataType *QProperty::datatype() const
{
}

void QProperty::setDatatype(QDataType *datatype)
{
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QValueSpecification *QProperty::defaultValue() const
{
}

void QProperty::setDefaultValue(QValueSpecification *defaultValue)
{
}

/*!
    References the owning association of this property, if any.
 */
QAssociation *QProperty::owningAssociation() const
{
}

void QProperty::setOwningAssociation(QAssociation *owningAssociation)
{
}

/*!
    References the properties that are redefined by this property.
 */
QList<QProperty *> *QProperty::redefinedProperty() const
{
}

/*!
    References the properties of which this property is constrained to be a subset.
 */
QList<QProperty *> *QProperty::subsettedProperty() const
{
}

/*!
    Missing derivation for Property::/default : String
 */
QString QProperty::default_() const
{
}

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QProperty::isAttribute(QProperty *p) const
{
}

/*!
    The value of isComposite is true only if aggregation is composite.
 */
bool QProperty::isComposite() const
{
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QProperty::isConsistentWith(QRedefinableElement *redefinee) const
{
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QProperty::isNavigable() const
{
}

/*!
    If this property is owned by a class, associated with a binary association, and the other end of the association is also owned by a class, then opposite gives the other end.
 */
QProperty *QProperty::opposite() const
{
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
QList<QType *> *QProperty::subsettingContext() const
{
}

#include "moc_qproperty.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

