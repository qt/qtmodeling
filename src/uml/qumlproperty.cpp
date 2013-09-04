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

#include "private/qumlpropertyobject_p.h"

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
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>
/*!
    \class QUmlProperty

    \inmodule QtUml

    \brief Property represents a declared state of one or more instances in terms of a named relationship to a value or values. When a property is an attribute of a classifier, the value or values are related to the instance of the classifier by being held in slots of the instance. When a property is an association end, the value or values are related to the instance or instances at the other end(s) of the association. The range of valid values represented by the property can be controlled by setting the property's type.A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.A property has the capability of being a deployment target in a deployment relationship. This enables modeling the deployment to hierarchical nodes that have properties functioning as internal parts.Property specializes ParameterableElement to specify that a property can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A property represents a set of instances that are owned by a containing classifier instance.
 */
QUmlProperty::QUmlProperty(bool createQObject) :
    _aggregation(QtUml::AggregationKindNone),
    _association(0),
    _associationEnd(0),
    _class_(0),
    _datatype(0),
    _defaultValue(0),
    _interface_(0),
    _isDerived(false),
    _isDerivedUnion(false),
    _isID(false),
    _isReadOnly(false),
    _owningAssociation(0)
{
    if (createQObject)
        _qObject = new QUmlPropertyObject(this);
}

QUmlProperty::~QUmlProperty()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlProperty::clone() const
{
    QUmlProperty *c = new QUmlProperty;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QUmlValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QUmlValueSpecification *>(upperValue()->clone()));
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlConnectableElementTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDeployment *element, deployment())
        c->addDeployment(dynamic_cast<QUmlDeployment *>(element->clone()));
    c->setAggregation(aggregation());
    if (association())
        c->setAssociation(dynamic_cast<QUmlAssociation *>(association()->clone()));
    if (associationEnd())
        c->setAssociationEnd(dynamic_cast<QUmlProperty *>(associationEnd()->clone()));
    if (class_())
        c->setClass(dynamic_cast<QUmlClass *>(class_()->clone()));
    if (datatype())
        c->setDatatype(dynamic_cast<QUmlDataType *>(datatype()->clone()));
    if (defaultValue())
        c->setDefaultValue(dynamic_cast<QUmlValueSpecification *>(defaultValue()->clone()));
    if (interface_())
        c->setInterface(dynamic_cast<QUmlInterface *>(interface_()->clone()));
    c->setDerived(isDerived());
    c->setDerivedUnion(isDerivedUnion());
    c->setID(isID());
    c->setReadOnly(isReadOnly());
    if (owningAssociation())
        c->setOwningAssociation(dynamic_cast<QUmlAssociation *>(owningAssociation()->clone()));
    foreach (QUmlProperty *element, qualifier())
        c->addQualifier(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlProperty *element, redefinedProperty())
        c->addRedefinedProperty(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlProperty *element, subsettedProperty())
        c->addSubsettedProperty(dynamic_cast<QUmlProperty *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtUml::AggregationKind QUmlProperty::aggregation() const
{
    // This is a read-write property

    return _aggregation;
}

void QUmlProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    // This is a read-write property

    if (_aggregation != aggregation) {
        _aggregation = aggregation;
    }
}

/*!
    References the association of which this property is a member, if any.
 */
QUmlAssociation *QUmlProperty::association() const
{
    // This is a read-write association end

    return _association;
}

void QUmlProperty::setAssociation(QUmlAssociation *association)
{
    // This is a read-write association end

    if (_association != association) {
        _association = association;
        if (association->asQObject() && this->asQObject())
            QObject::connect(association->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setAssociation()));
    }
}

/*!
    Designates the optional association end that owns a qualifier attribute.
 */
QUmlProperty *QUmlProperty::associationEnd() const
{
    // This is a read-write association end

    return _associationEnd;
}

void QUmlProperty::setAssociationEnd(QUmlProperty *associationEnd)
{
    // This is a read-write association end

    if (_associationEnd != associationEnd) {
        // Adjust subsetted properties

        _associationEnd = associationEnd;
        if (associationEnd->asQObject() && this->asQObject())
            QObject::connect(associationEnd->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setAssociationEnd()));

        // Adjust subsetted properties
        setOwner(associationEnd);
    }
}

/*!
    References the Class that owns the Property.References the Class that owns the Property.
 */
QUmlClass *QUmlProperty::class_() const
{
    // This is a read-write association end

    return _class_;
}

void QUmlProperty::setClass(QUmlClass *class_)
{
    // This is a read-write association end

    if (_class_ != class_) {
        // Adjust subsetted properties

        _class_ = class_;
        if (class_->asQObject() && this->asQObject())
            QObject::connect(class_->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setClass()));

        // Adjust subsetted properties
        setNamespace(class_);
    }
}

/*!
    The DataType that owns this Property.
 */
QUmlDataType *QUmlProperty::datatype() const
{
    // This is a read-write association end

    return _datatype;
}

void QUmlProperty::setDatatype(QUmlDataType *datatype)
{
    // This is a read-write association end

    if (_datatype != datatype) {
        // Adjust subsetted properties

        _datatype = datatype;
        if (datatype->asQObject() && this->asQObject())
            QObject::connect(datatype->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDatatype()));

        // Adjust subsetted properties
        setNamespace(datatype);
    }
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QUmlProperty::default_() const
{
    // This is a read-write derived property

    qWarning("UmlProperty::default_(): to be implemented (this is a derived property)");

    return QString();
}

void QUmlProperty::setDefault(QString default_)
{
    // This is a read-write derived property

    qWarning("UmlProperty::default_(): to be implemented (this is a derived property)");
    Q_UNUSED(default_);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QUmlValueSpecification *QUmlProperty::defaultValue() const
{
    // This is a read-write association end

    return _defaultValue;
}

void QUmlProperty::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    // This is a read-write association end

    if (_defaultValue != defaultValue) {
        // Adjust subsetted properties
        removeOwnedElement(_defaultValue);

        _defaultValue = defaultValue;
        if (defaultValue->asQObject() && this->asQObject())
            QObject::connect(defaultValue->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDefaultValue()));
        defaultValue->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (defaultValue) {
            addOwnedElement(defaultValue);
        }
    }
}

/*!
    References the Interface that owns the Property
 */
QUmlInterface *QUmlProperty::interface_() const
{
    // This is a read-write association end

    return _interface_;
}

void QUmlProperty::setInterface(QUmlInterface *interface_)
{
    // This is a read-write association end

    if (_interface_ != interface_) {
        // Adjust subsetted properties

        _interface_ = interface_;
        if (interface_->asQObject() && this->asQObject())
            QObject::connect(interface_->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setInterface()));

        // Adjust subsetted properties
        setNamespace(interface_);
    }
}

/*!
    If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QUmlProperty::isComposite() const
{
    // This is a read-write derived property

    qWarning("UmlProperty::isComposite(): to be implemented (this is a derived property)");

    return bool();
}

void QUmlProperty::setComposite(bool isComposite)
{
    // This is a read-write derived property

    qWarning("UmlProperty::isComposite(): to be implemented (this is a derived property)");
    Q_UNUSED(isComposite);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QUmlProperty::isDerived() const
{
    // This is a read-write property

    return _isDerived;
}

void QUmlProperty::setDerived(bool isDerived)
{
    // This is a read-write property

    if (_isDerived != isDerived) {
        _isDerived = isDerived;
    }
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QUmlProperty::isDerivedUnion() const
{
    // This is a read-write property

    return _isDerivedUnion;
}

void QUmlProperty::setDerivedUnion(bool isDerivedUnion)
{
    // This is a read-write property

    if (_isDerivedUnion != isDerivedUnion) {
        _isDerivedUnion = isDerivedUnion;
    }
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QUmlProperty::isID() const
{
    // This is a read-write property

    return _isID;
}

void QUmlProperty::setID(bool isID)
{
    // This is a read-write property

    if (_isID != isID) {
        _isID = isID;
    }
}

/*!
    If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization.
 */
bool QUmlProperty::isReadOnly() const
{
    // This is a read-write property

    return _isReadOnly;
}

void QUmlProperty::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    if (_isReadOnly != isReadOnly) {
        _isReadOnly = isReadOnly;
    }
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QUmlProperty *QUmlProperty::opposite() const
{
    // This is a read-write derived association end

    qWarning("UmlProperty::opposite(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlProperty::setOpposite(QUmlProperty *opposite)
{
    // This is a read-write derived association end

    qWarning("UmlProperty::opposite(): to be implemented (this is a derived association end)");
    Q_UNUSED(opposite);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the owning association of this property, if any.
 */
QUmlAssociation *QUmlProperty::owningAssociation() const
{
    // This is a read-write association end

    return _owningAssociation;
}

void QUmlProperty::setOwningAssociation(QUmlAssociation *owningAssociation)
{
    // This is a read-write association end

    if (_owningAssociation != owningAssociation) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_owningAssociation);
        removeRedefinitionContext(_owningAssociation);

        _owningAssociation = owningAssociation;
        if (owningAssociation->asQObject() && this->asQObject())
            QObject::connect(owningAssociation->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOwningAssociation()));

        // Adjust subsetted properties
        if (owningAssociation) {
            addFeaturingClassifier(owningAssociation);
        }
        if (owningAssociation) {
            addRedefinitionContext(owningAssociation);
        }
        setNamespace(owningAssociation);
        setAssociation(owningAssociation);
    }
}

/*!
    An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified.
 */
const QList<QUmlProperty *> QUmlProperty::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void QUmlProperty::addQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    if (!_qualifier.contains(qualifier)) {
        _qualifier.append(qualifier);
        if (qualifier->asQObject() && this->asQObject())
            QObject::connect(qualifier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeQualifier(QObject *)));
        qualifier->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(qualifier);
    }
}

void QUmlProperty::removeQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    if (_qualifier.contains(qualifier)) {
        _qualifier.removeAll(qualifier);
        if (qualifier->asQObject())
            qualifier->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(qualifier);
    }
}

/*!
    References the properties that are redefined by this property.
 */
const QSet<QUmlProperty *> QUmlProperty::redefinedProperty() const
{
    // This is a read-write association end

    return _redefinedProperty;
}

void QUmlProperty::addRedefinedProperty(QUmlProperty *redefinedProperty)
{
    // This is a read-write association end

    if (!_redefinedProperty.contains(redefinedProperty)) {
        _redefinedProperty.insert(redefinedProperty);
        if (redefinedProperty->asQObject() && this->asQObject())
            QObject::connect(redefinedProperty->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRedefinedProperty(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedProperty);
    }
}

void QUmlProperty::removeRedefinedProperty(QUmlProperty *redefinedProperty)
{
    // This is a read-write association end

    if (_redefinedProperty.contains(redefinedProperty)) {
        _redefinedProperty.remove(redefinedProperty);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedProperty);
    }
}

/*!
    References the properties of which this property is constrained to be a subset.
 */
const QSet<QUmlProperty *> QUmlProperty::subsettedProperty() const
{
    // This is a read-write association end

    return _subsettedProperty;
}

void QUmlProperty::addSubsettedProperty(QUmlProperty *subsettedProperty)
{
    // This is a read-write association end

    if (!_subsettedProperty.contains(subsettedProperty)) {
        _subsettedProperty.insert(subsettedProperty);
        if (subsettedProperty->asQObject() && this->asQObject())
            QObject::connect(subsettedProperty->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSubsettedProperty(QObject *)));
    }
}

void QUmlProperty::removeSubsettedProperty(QUmlProperty *subsettedProperty)
{
    // This is a read-write association end

    if (_subsettedProperty.contains(subsettedProperty)) {
        _subsettedProperty.remove(subsettedProperty);
    }
}

// OPERATIONS

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QUmlProperty::isAttribute(QUmlProperty *p) const
{
    qWarning("UmlProperty::isAttribute(): to be implemented (operation)");

    Q_UNUSED(p);
    return bool ();
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for properties, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlProperty::isCompatibleWith(QUmlParameterableElement *p) const
{
    qWarning("UmlProperty::isCompatibleWith(): to be implemented (operation)");

    Q_UNUSED(p);
    return bool ();
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, and the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QUmlProperty::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("UmlProperty::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QUmlProperty::isNavigable() const
{
    qWarning("UmlProperty::isNavigable(): to be implemented (operation)");

    return bool ();
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
QSet<QUmlType *> QUmlProperty::subsettingContext() const
{
    qWarning("UmlProperty::subsettingContext(): to be implemented (operation)");

    return QSet<QUmlType *> ();
}

