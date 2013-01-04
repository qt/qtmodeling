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

#include "qproperty.h"
#include "qproperty_p.h"

#include <QtMof/QRedefinableElement>
#include <QtMof/QType>
#include <QtMof/QValueSpecification>
#include <QtMof/QClass>
#include <QtMof/QAssociation>
#include <QtMof/QDataType>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QPropertyPrivate::QPropertyPrivate() :
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

QPropertyPrivate::~QPropertyPrivate()
{
}

/*!
    \class QProperty

    \inmodule QtMof

    \brief A property is a structural feature of a classifier that characterizes instances of the classifier. A property related by ownedAttribute to a classifier (other than an association) represents an attribute and might also represent an association end. It relates an instance of the class to a value or set of values of the type of the attribute. A property related by memberEnd or its specializations to an association represents an end of the association. The type of the property is the type of the end of the association.
 */

QProperty::QProperty(QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuralFeature(*new QPropertyPrivate, wrapper, parent)
{
    setPropertyData();
}

QProperty::QProperty(QPropertyPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuralFeature(dd, wrapper, parent)
{
    setPropertyData();
}

QProperty::~QProperty()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QProperty
// ---------------------------------------------------------------

/*!
    Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.
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

void QProperty::unsetDerived()
{
    setDerived(false);
}

/*!
    A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.
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
    This is a derived value, indicating whether the aggregation of the Property is composite or not.
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
    If true, the attribute may only be read, and not written.
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

void QProperty::unsetReadOnly()
{
    setReadOnly(false);
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

void QProperty::unsetID()
{
    setID(false);
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

void QProperty::unsetDerivedUnion()
{
    setDerivedUnion(false);
}

/*!
    Specifies the kind of aggregation that applies to the Property.
 */
QtMof::AggregationKind QProperty::aggregation() const
{
    // This is a read-write attribute

    Q_D(const QProperty);
    return d->aggregation;
}

void QProperty::setAggregation(QtMof::AggregationKind aggregation)
{
    // This is a read-write attribute

    Q_D(QProperty);
    if (d->aggregation != aggregation) {
        d->aggregation = aggregation;
    }
}

void QProperty::unsetAggregation()
{
    setAggregation(QtMof::AggregationNone);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QProperty
// ---------------------------------------------------------------

/*!
    References the properties of which this property is constrained to be a subset.
 */
QSet<QProperty *> QProperty::subsettedProperties() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->subsettedProperties;
}

void QProperty::addSubsettedProperty(QProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (!d->subsettedProperties.contains(subsettedProperty)) {
        d->subsettedProperties.insert(subsettedProperty);
    }
}

void QProperty::removeSubsettedProperty(QProperty *subsettedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->subsettedProperties.contains(subsettedProperty)) {
        d->subsettedProperties.remove(subsettedProperty);
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
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->owningAssociation));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->owningAssociation));

        d->owningAssociation = owningAssociation;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(owningAssociation));
        (qwrappedobject_cast<QProperty *>(this))->setAssociation(qwrappedobject_cast<QAssociation *>(owningAssociation));
        if (owningAssociation) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(owningAssociation));
        }
        if (owningAssociation) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(owningAssociation));
        }

        // Adjust opposite property
        if (owningAssociation)
            owningAssociation->addOwnedEnd(this);
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
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(defaultValue));
        }
    }
}

/*!
    References the Class that owns the Property.
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
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->class_));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(class_));
        if (class_) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(class_));
        }
        if (class_) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(class_));
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
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->datatype));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(datatype));
        if (datatype) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(datatype));
        }
        if (datatype) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(datatype));
        }

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedAttribute(this);
    }
}

/*!
    References the properties that are redefined by this property.
 */
QSet<QProperty *> QProperty::redefinedProperties() const
{
    // This is a read-write association end

    Q_D(const QProperty);
    return d->redefinedProperties;
}

void QProperty::addRedefinedProperty(QProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (!d->redefinedProperties.contains(redefinedProperty)) {
        d->redefinedProperties.insert(redefinedProperty);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedProperty));
    }
}

void QProperty::removeRedefinedProperty(QProperty *redefinedProperty)
{
    // This is a read-write association end

    Q_D(QProperty);
    if (d->redefinedProperties.contains(redefinedProperty)) {
        d->redefinedProperties.remove(redefinedProperty);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedProperty));
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
    The query isAttribute() is true if the Property is defined as an attribute of some classifier.
 */
bool QProperty::isAttribute(const QProperty *p) const
{
    qWarning("QProperty::isAttribute: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isConsistentWith() specifies, for any two Properties in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining property is consistent with a redefined property if the type of the redefining property conforms to the type of the redefined property, the multiplicity of the redefining property (if specified) is contained in the multiplicity of the redefined property.
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
QSet<QType *> QProperty::subsettingContext() const
{
    qWarning("QProperty::subsettingContext: operation to be implemented");

    return QSet<QType *>(); // change here to your derived return
}

void QProperty::registerMetaTypes() const
{
    qRegisterMetaType<QRedefinableElement *>("QRedefinableElement *");
    qRegisterMetaType<QSet<QRedefinableElement *>>("QSet<QRedefinableElement *>");
    qRegisterMetaType<QList<QRedefinableElement *>>("QList<QRedefinableElement *>");

    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<QSet<QType *>>("QSet<QType *>");
    qRegisterMetaType<QList<QType *>>("QList<QType *>");

    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");

    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<QSet<QClass *>>("QSet<QClass *>");
    qRegisterMetaType<QList<QClass *>>("QList<QClass *>");

    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<QSet<QAssociation *>>("QSet<QAssociation *>");
    qRegisterMetaType<QList<QAssociation *>>("QList<QAssociation *>");

    qRegisterMetaType<QDataType *>("QDataType *");
    qRegisterMetaType<QSet<QDataType *>>("QSet<QDataType *>");
    qRegisterMetaType<QList<QDataType *>>("QList<QDataType *>");

    QStructuralFeature::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QProperty::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerived")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This is a derived value, indicating whether the aggregation of the Property is composite or not.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the attribute may only be read, and not written.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QStructuralFeature::isReadOnly");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isID")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isID")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isID")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("True indicates this property can be used to uniquely identify an instance of the containing Class.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isID")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isID")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isID")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the property is derived as the union of all of the properties that are constrained to subset it.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("isDerivedUnion")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the kind of aggregation that applies to the Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("aggregation")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties of which this property is constrained to be a subset.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("subsettedProperties")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the owning association of this property, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace QProperty::association QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("owningAssociation")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QAssociation::ownedEnd");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Class that owns the Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("class_")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClass::ownedAttribute");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("opposite")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DataType that owns this Property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("datatype")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QDataType::ownedAttribute");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties that are redefined by this property.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("redefinedProperties")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the association of which this property is a member, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QProperty")][QString::fromLatin1("association")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QAssociation::memberEnd");

    QStructuralFeature::setPropertyData();
}

#include "moc_qproperty.cpp"

QT_END_NAMESPACE_QTMOF

