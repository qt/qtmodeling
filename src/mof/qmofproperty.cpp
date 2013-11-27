/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofproperty.h"

#include "private/qmofpropertyobject_p.h"

#include <QtMof/QMofAssociation>
#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofDataType>
#include <QtMof/QMofElement>
#include <QtMof/QMofMultiplicityElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QMofProperty

    \inmodule QtMof

    \brief A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.
 */

/*!
    Creates a new QMofProperty. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofProperty::QMofProperty(bool createQModelingObject) :
    _aggregation(QtMof::AggregationKindNone),
    _association(0),
    _class_(0),
    _datatype(0),
    _defaultValue(0),
    _isDerived(false),
    _isDerivedUnion(false),
    _isID(false),
    _isReadOnly(false),
    _owningAssociation(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofPropertyObject(this));
}

/*!
    Destroys the QMofProperty.
 */
QMofProperty::~QMofProperty()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofProperty.
*/
QModelingElement *QMofProperty::clone() const
{
    QMofProperty *c = new QMofProperty;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QMofValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QMofValueSpecification *>(upperValue()->clone()));
    c->setAggregation(aggregation());
    if (defaultValue())
        c->setDefaultValue(dynamic_cast<QMofValueSpecification *>(defaultValue()->clone()));
    c->setDerived(isDerived());
    c->setDerivedUnion(isDerivedUnion());
    c->setID(isID());
    c->setReadOnly(isReadOnly());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtMof::AggregationKind QMofProperty::aggregation() const
{
    // This is a read-write property

    return _aggregation;
}

/*!
    Adjusts aggregation to \a aggregation.
 */
void QMofProperty::setAggregation(QtMof::AggregationKind aggregation)
{
    // This is a read-write property

    if (_aggregation != aggregation) {
        _aggregation = aggregation;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("aggregation");
    }
}

/*!
    References the association of which this property is a member, if any.

    \b {Subsetted property(ies):} .

    \b {Opposite property(ies):} QMofAssociation::memberEnds().
 */
QMofAssociation *QMofProperty::association() const
{
    // This is a read-write association end

    return _association;
}

/*!
    Adjusts association to \a association.
 */
void QMofProperty::setAssociation(QMofAssociation *association)
{
    // This is a read-write association end

    if (_association != association) {
        _association = association;
        if (association && association->asQModelingObject() && this->asQModelingObject())
            QObject::connect(association->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setAssociation()));
    }
}

/*!
    References the Class that owns the Property.

    \b {Subsetted property(ies):} QMofNamedElement::namespace_(), .

    \b {Opposite property(ies):} QMofClass::ownedAttributes().
 */
QMofClass *QMofProperty::class_() const
{
    // This is a read-write association end

    return _class_;
}

/*!
    Adjusts class_ to \a class_.
 */
void QMofProperty::setClass(QMofClass *class_)
{
    // This is a read-write association end

    if (_class_ != class_) {
        // Adjust subsetted properties

        _class_ = class_;
        if (class_ && class_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(class_->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setClass()));

        // Adjust subsetted properties
        setNamespace(class_);
    }
}

/*!
    The DataType that owns this Property.

    \b {Subsetted property(ies):} QMofNamedElement::namespace_(), .

    \b {Opposite property(ies):} QMofDataType::ownedAttributes().
 */
QMofDataType *QMofProperty::datatype() const
{
    // This is a read-write association end

    return _datatype;
}

/*!
    Adjusts datatype to \a datatype.
 */
void QMofProperty::setDatatype(QMofDataType *datatype)
{
    // This is a read-write association end

    if (_datatype != datatype) {
        // Adjust subsetted properties

        _datatype = datatype;
        if (datatype && datatype->asQModelingObject() && this->asQModelingObject())
            QObject::connect(datatype->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDatatype()));

        // Adjust subsetted properties
        setNamespace(datatype);
    }
}

/*!
    A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.

    \b {This is a derived property.}
 */
QString QMofProperty::default_() const
{
    // This is a read-write derived property

    qWarning("QMofProperty::default_(): to be implemented (this is a derived property)");

    return QString();
}

/*!
    Adjusts default_ to \a default_.
 */
void QMofProperty::setDefault(QString default_)
{
    // This is a read-write derived property

    qWarning("QMofProperty::setDefault(): to be implemented (this is a derived property)");
    Q_UNUSED(default_);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.

    \b {Subsetted property(ies):} QMofElement::ownedElements().
 */
QMofValueSpecification *QMofProperty::defaultValue() const
{
    // This is a read-write association end

    return _defaultValue;
}

/*!
    Adjusts defaultValue to \a defaultValue.
 */
void QMofProperty::setDefaultValue(QMofValueSpecification *defaultValue)
{
    // This is a read-write association end

    if (_defaultValue != defaultValue) {
        // Adjust subsetted properties
        removeOwnedElement(_defaultValue);

        _defaultValue = defaultValue;
        if (defaultValue && defaultValue->asQModelingObject() && this->asQModelingObject())
            QObject::connect(defaultValue->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDefaultValue()));
        defaultValue->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (defaultValue) {
            addOwnedElement(defaultValue);
        }
    }
}

/*!
    This is a derived value, indicating whether the aggregation of the Property is composite or not.

    \b {This is a derived property.}
 */
bool QMofProperty::isComposite() const
{
    // This is a read-write derived property

    qWarning("QMofProperty::isComposite(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isComposite to \a isComposite.
 */
void QMofProperty::setComposite(bool isComposite)
{
    // This is a read-write derived property

    qWarning("QMofProperty::setComposite(): to be implemented (this is a derived property)");
    Q_UNUSED(isComposite);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QMofProperty::isDerived() const
{
    // This is a read-write property

    return _isDerived;
}

/*!
    Adjusts isDerived to \a isDerived.
 */
void QMofProperty::setDerived(bool isDerived)
{
    // This is a read-write property

    if (_isDerived != isDerived) {
        _isDerived = isDerived;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDerived");
    }
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QMofProperty::isDerivedUnion() const
{
    // This is a read-write property

    return _isDerivedUnion;
}

/*!
    Adjusts isDerivedUnion to \a isDerivedUnion.
 */
void QMofProperty::setDerivedUnion(bool isDerivedUnion)
{
    // This is a read-write property

    if (_isDerivedUnion != isDerivedUnion) {
        _isDerivedUnion = isDerivedUnion;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDerivedUnion");
    }
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QMofProperty::isID() const
{
    // This is a read-write property

    return _isID;
}

/*!
    Adjusts isID to \a isID.
 */
void QMofProperty::setID(bool isID)
{
    // This is a read-write property

    if (_isID != isID) {
        _isID = isID;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isID");
    }
}

/*!
    If true, the attribute may only be read, and not written.

    \b {Redefined property(ies):} QMofStructuralFeature::isReadOnly().
 */
bool QMofProperty::isReadOnly() const
{
    // This is a read-write property

    return _isReadOnly;
}

/*!
    Adjusts isReadOnly to \a isReadOnly.
 */
void QMofProperty::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    if (_isReadOnly != isReadOnly) {
        _isReadOnly = isReadOnly;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isReadOnly");

        // Adjust redefined properties
        QMofStructuralFeature::setReadOnly(isReadOnly);
    }
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.

    \b {This is a derived property.}
 */
QMofProperty *QMofProperty::opposite() const
{
    // This is a read-write derived association end

    qWarning("QMofProperty::opposite(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts opposite to \a opposite.
 */
void QMofProperty::setOpposite(QMofProperty *opposite)
{
    // This is a read-write derived association end

    qWarning("QMofProperty::setOpposite(): to be implemented (this is a derived association end)");
    Q_UNUSED(opposite);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the owning association of this property, if any.

    \b {Subsetted property(ies):} QMofNamedElement::namespace_(), QMofProperty::association(), QMofFeature::featuringClassifiers(), QMofRedefinableElement::redefinitionContexts().

    \b {Opposite property(ies):} QMofAssociation::ownedEnds().
 */
QMofAssociation *QMofProperty::owningAssociation() const
{
    // This is a read-write association end

    return _owningAssociation;
}

/*!
    Adjusts owningAssociation to \a owningAssociation.
 */
void QMofProperty::setOwningAssociation(QMofAssociation *owningAssociation)
{
    // This is a read-write association end

    if (_owningAssociation != owningAssociation) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_owningAssociation);
        removeRedefinitionContext(_owningAssociation);

        _owningAssociation = owningAssociation;
        if (owningAssociation && owningAssociation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(owningAssociation->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwningAssociation()));

        // Adjust subsetted properties
        setNamespace(owningAssociation);
        setAssociation(owningAssociation);
        if (owningAssociation) {
            addFeaturingClassifier(owningAssociation);
        }
        if (owningAssociation) {
            addRedefinitionContext(owningAssociation);
        }
    }
}

/*!
    References the properties that are redefined by this property.

    \sa addRedefinedProperty(), removeRedefinedProperty()

    \b {Subsetted property(ies):} QMofRedefinableElement::redefinedElements().
 */
const QSet<QMofProperty *> QMofProperty::redefinedProperties() const
{
    // This is a read-write association end

    return _redefinedProperties;
}

/*!
    Adds \a redefinedProperty to redefinedProperties.

    \sa redefinedProperties(), removeRedefinedProperty()
 */
void QMofProperty::addRedefinedProperty(QMofProperty *redefinedProperty)
{
    // This is a read-write association end

    if (!_redefinedProperties.contains(redefinedProperty)) {
        _redefinedProperties.insert(redefinedProperty);
        if (redefinedProperty && redefinedProperty->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedProperty->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedProperty(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedProperty);
    }
}

/*!
    Removes \a redefinedProperty from redefinedProperties.

    \sa redefinedProperties(), addRedefinedProperty()
 */
void QMofProperty::removeRedefinedProperty(QMofProperty *redefinedProperty)
{
    // This is a read-write association end

    if (_redefinedProperties.contains(redefinedProperty)) {
        _redefinedProperties.remove(redefinedProperty);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedProperty);
    }
}

/*!
    References the properties of which this property is constrained to be a subset.

    \sa addSubsettedProperty(), removeSubsettedProperty()
 */
const QSet<QMofProperty *> QMofProperty::subsettedProperties() const
{
    // This is a read-write association end

    return _subsettedProperties;
}

/*!
    Adds \a subsettedProperty to subsettedProperties.

    \sa subsettedProperties(), removeSubsettedProperty()
 */
void QMofProperty::addSubsettedProperty(QMofProperty *subsettedProperty)
{
    // This is a read-write association end

    if (!_subsettedProperties.contains(subsettedProperty)) {
        _subsettedProperties.insert(subsettedProperty);
        if (subsettedProperty && subsettedProperty->asQModelingObject() && this->asQModelingObject())
            QObject::connect(subsettedProperty->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSubsettedProperty(QObject *)));
    }
}

/*!
    Removes \a subsettedProperty from subsettedProperties.

    \sa subsettedProperties(), addSubsettedProperty()
 */
void QMofProperty::removeSubsettedProperty(QMofProperty *subsettedProperty)
{
    // This is a read-write association end

    if (_subsettedProperties.contains(subsettedProperty)) {
        _subsettedProperties.remove(subsettedProperty);
    }
}

// OPERATIONS

/*!
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QMofProperty::isAttribute(QMofProperty *p) const
{
    qWarning("QMofProperty::isAttribute(): to be implemented (operation)");

    Q_UNUSED(p);
    return bool ();
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QMofProperty::isConsistentWith(QMofRedefinableElement *redefinee) const
{
    qWarning("QMofProperty::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QMofProperty::isNavigable() const
{
    qWarning("QMofProperty::isNavigable(): to be implemented (operation)");

    return bool ();
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
QSet<QMofType *> QMofProperty::subsettingContext() const
{
    qWarning("QMofProperty::subsettingContext(): to be implemented (operation)");

    return QSet<QMofType *> ();
}

QT_END_NAMESPACE

