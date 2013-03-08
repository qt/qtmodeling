/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmofproperty.h"
#include "qmofproperty_p.h"

#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>
#include <QtMof/QMofValueSpecification>
#include <QtMof/QMofClass>
#include <QtMof/QMofAssociation>
#include <QtMof/QMofDataType>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofPropertyPrivate::QMofPropertyPrivate() :
    isDerived(false),
    isReadOnly(false),
    isID(false),
    isDerivedUnion(false),
    aggregation(QtMof::AggregationNone),
    owningAssociation(0),
    defaultValue(0),
    class_(0),
    datatype(0),
    association(0)
{
}

QMofPropertyPrivate::~QMofPropertyPrivate()
{
}

/*!
    \class QMofProperty

    \inmodule QtMof

    \brief A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.
 */

QMofProperty::QMofProperty(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofStructuralFeature(*new QMofPropertyPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofProperty::QMofProperty(QMofPropertyPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofStructuralFeature(dd, wrapper, parent)
{
    setPropertyData();
}

QMofProperty::~QMofProperty()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofProperty
// ---------------------------------------------------------------

/*!
    Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
 */
bool QMofProperty::isDerived() const
{
    // This is a read-write attribute

    Q_D(const QMofProperty);
    return d->isDerived;
}

void QMofProperty::setDerived(bool isDerived)
{
    // This is a read-write attribute

    Q_D(QMofProperty);
    if (d->isDerived != isDerived) {
        d->isDerived = isDerived;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDerived");
}

void QMofProperty::unsetDerived()
{
    setDerived(false);
    Q_D(QMofProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDerived"));
}

/*!
    A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QString QMofProperty::default_() const
{
    // This is a read-write derived attribute

    qWarning("QMofProperty::default_: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

void QMofProperty::setDefault_(QString default_)
{
    // This is a read-write derived attribute

    qWarning("QMofProperty::setDefault_: to be implemented (this is a derived attribute)");
    Q_UNUSED(default_);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    This is a derived value, indicating whether the aggregation of the Property is composite or not.
 */
bool QMofProperty::isComposite() const
{
    // This is a read-write derived attribute

    qWarning("QMofProperty::isComposite: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

void QMofProperty::setComposite(bool isComposite)
{
    // This is a read-write derived attribute

    qWarning("QMofProperty::setComposite: to be implemented (this is a derived attribute)");
    Q_UNUSED(isComposite);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    If true, the attribute may only be read, and not written.
 */
bool QMofProperty::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QMofProperty);
    return d->isReadOnly;
}

void QMofProperty::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QMofProperty);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofStructuralFeature *>(this))->setReadOnly(isReadOnly);
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReadOnly");
}

void QMofProperty::unsetReadOnly()
{
    setReadOnly(false);
    Q_D(QMofProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReadOnly"));
}

/*!
    True indicates this property can be used to uniquely identify an instance of the containing Class.
 */
bool QMofProperty::isID() const
{
    // This is a read-write attribute

    Q_D(const QMofProperty);
    return d->isID;
}

void QMofProperty::setID(bool isID)
{
    // This is a read-write attribute

    Q_D(QMofProperty);
    if (d->isID != isID) {
        d->isID = isID;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isID");
}

void QMofProperty::unsetID()
{
    setID(false);
    Q_D(QMofProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isID"));
}

/*!
    Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.
 */
bool QMofProperty::isDerivedUnion() const
{
    // This is a read-write attribute

    Q_D(const QMofProperty);
    return d->isDerivedUnion;
}

void QMofProperty::setDerivedUnion(bool isDerivedUnion)
{
    // This is a read-write attribute

    Q_D(QMofProperty);
    if (d->isDerivedUnion != isDerivedUnion) {
        d->isDerivedUnion = isDerivedUnion;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDerivedUnion");
}

void QMofProperty::unsetDerivedUnion()
{
    setDerivedUnion(false);
    Q_D(QMofProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDerivedUnion"));
}

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtMof::AggregationKind QMofProperty::aggregation() const
{
    // This is a read-write attribute

    Q_D(const QMofProperty);
    return d->aggregation;
}

void QMofProperty::setAggregation(QtMof::AggregationKind aggregation)
{
    // This is a read-write attribute

    Q_D(QMofProperty);
    if (d->aggregation != aggregation) {
        d->aggregation = aggregation;
    }
    d->modifiedResettableProperties << QString::fromLatin1("aggregation");
}

void QMofProperty::unsetAggregation()
{
    setAggregation(QtMof::AggregationNone);
    Q_D(QMofProperty);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("aggregation"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofProperty
// ---------------------------------------------------------------

/*!
    References the properties of which this property is constrained to be a subset.
 */
QSet<QMofProperty *> QMofProperty::subsettedProperties() const
{
    // This is a read-write association end

    Q_D(const QMofProperty);
    return d->subsettedProperties;
}

void QMofProperty::addSubsettedProperty(QMofProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (!d->subsettedProperties.contains(subsettedProperty)) {
        d->subsettedProperties.insert(subsettedProperty);
    }
}

void QMofProperty::removeSubsettedProperty(QMofProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (d->subsettedProperties.contains(subsettedProperty)) {
        d->subsettedProperties.remove(subsettedProperty);
    }
}

/*!
    References the owning association of this property, if any.
 */
QMofAssociation *QMofProperty::owningAssociation() const
{
    // This is a read-write association end

    Q_D(const QMofProperty);
    return d->owningAssociation;
}

void QMofProperty::setOwningAssociation(QMofAssociation *owningAssociation)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (d->owningAssociation != owningAssociation) {
        // Adjust opposite property
        if (d->owningAssociation)
            d->owningAssociation->removeOwnedEnd(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(d->owningAssociation));
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(d->owningAssociation));

        d->owningAssociation = owningAssociation;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(owningAssociation));
        (qwrappedobject_cast<QMofProperty *>(this))->setAssociation(qwrappedobject_cast<QMofAssociation *>(owningAssociation));
        if (owningAssociation) {
            (qwrappedobject_cast<QMofFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(owningAssociation));
        }
        if (owningAssociation) {
            (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(owningAssociation));
        }

        // Adjust opposite property
        if (owningAssociation)
            owningAssociation->addOwnedEnd(this);
    }
}

/*!
    A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
 */
QMofValueSpecification *QMofProperty::defaultValue() const
{
    // This is a read-write association end

    Q_D(const QMofProperty);
    return d->defaultValue;
}

void QMofProperty::setDefaultValue(QMofValueSpecification *defaultValue)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (d->defaultValue != defaultValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(defaultValue));
        }
    }
}

/*!
    References the Class that owns the Property.
 */
QMofClass *QMofProperty::class_() const
{
    // This is a read-write association end

    Q_D(const QMofProperty);
    return d->class_;
}

void QMofProperty::setClass_(QMofClass *class_)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(d->class_));
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(class_));
        if (class_) {
            (qwrappedobject_cast<QMofFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(class_));
        }
        if (class_) {
            (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(class_));
        }

        // Adjust opposite property
        if (class_)
            class_->addOwnedAttribute(this);
    }
}

/*!
    In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.
 */
QMofProperty *QMofProperty::opposite() const
{
    // This is a read-write derived association end

    qWarning("QMofProperty::opposite: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QMofProperty::setOpposite(QMofProperty *opposite)
{
    // This is a read-write derived association end

    qWarning("QMofProperty::setOpposite: to be implemented (this is a derived associationend)");
    Q_UNUSED(opposite);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    The DataType that owns this Property.
 */
QMofDataType *QMofProperty::datatype() const
{
    // This is a read-write association end

    Q_D(const QMofProperty);
    return d->datatype;
}

void QMofProperty::setDatatype(QMofDataType *datatype)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedAttribute(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(d->datatype));
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(datatype));
        if (datatype) {
            (qwrappedobject_cast<QMofFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QMofClassifier *>(datatype));
        }
        if (datatype) {
            (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QMofClassifier *>(datatype));
        }

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedAttribute(this);
    }
}

/*!
    References the properties that are redefined by this property.
 */
QSet<QMofProperty *> QMofProperty::redefinedProperties() const
{
    // This is a read-write association end

    Q_D(const QMofProperty);
    return d->redefinedProperties;
}

void QMofProperty::addRedefinedProperty(QMofProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (!d->redefinedProperties.contains(redefinedProperty)) {
        d->redefinedProperties.insert(redefinedProperty);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QMofRedefinableElement *>(redefinedProperty));
    }
}

void QMofProperty::removeRedefinedProperty(QMofProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QMofProperty);
    if (d->redefinedProperties.contains(redefinedProperty)) {
        d->redefinedProperties.remove(redefinedProperty);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QMofRedefinableElement *>(redefinedProperty));
    }
}

/*!
    References the association of which this property is a member, if any.
 */
QMofAssociation *QMofProperty::association() const
{
    // This is a read-write association end

    Q_D(const QMofProperty);
    return d->association;
}

void QMofProperty::setAssociation(QMofAssociation *association)
{
    // This is a read-write association end

    Q_D(QMofProperty);
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
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QMofProperty::isAttribute(const QMofProperty *p) const
{
    qWarning("QMofProperty::isAttribute: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
 */
bool QMofProperty::isConsistentWith(const QMofRedefinableElement *redefinee) const
{
    qWarning("QMofProperty::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isNavigable() indicates whether it is possible to navigate across the property.
 */
bool QMofProperty::isNavigable() const
{
    qWarning("QMofProperty::isNavigable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query subsettingContext() gives the context for subsetting a property. It consists, in the case of an attribute, of the corresponding classifier, and in the case of an association end, all of the classifiers at the other ends.
 */
QSet<QMofType *> QMofProperty::subsettingContext() const
{
    qWarning("QMofProperty::subsettingContext: operation to be implemented");

    return QSet<QMofType *>(); // change here to your derived return
}

void QMofProperty::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("default_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("default_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("default_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("default_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("default_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("default_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This is a derived value, indicating whether the aggregation of the Property is composite or not.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the attribute may only be read, and not written.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMofStructuralFeature::isReadOnly");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isID")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isID")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isID")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("True indicates this property can be used to uniquely identify an instance of the containing Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isID")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isID")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isID")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the kind of aggregation that applies to the Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties of which this property is constrained to be a subset.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the owning association of this property, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace QMofProperty::association QMofFeature::featuringClassifiers QMofRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QAssociation::ownedEnd");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("class_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("class_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("class_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Class that owns the Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("class_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("class_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace QMofFeature::featuringClassifiers QMofRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("class_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClass::ownedAttribute");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DataType that owns this Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace QMofFeature::featuringClassifiers QMofRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QDataType::ownedAttribute");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties that are redefined by this property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("association")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("association")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("association")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the association of which this property is a member, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("association")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("association")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofProperty")][QString::fromLatin1("association")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QAssociation::memberEnd");

    QMofStructuralFeature::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofproperty.cpp"

