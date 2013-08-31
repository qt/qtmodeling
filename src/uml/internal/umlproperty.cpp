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
#include "umlproperty_p.h"

#include "private/umlassociation_p.h"
#include "private/umlclass_p.h"
#include "private/umldatatype_p.h"
#include "private/umlinterface_p.h"
#include "private/umlparameterableelement_p.h"
#include "private/umlredefinableelement_p.h"
#include "private/umltype_p.h"
#include "private/umlvaluespecification_p.h"

UmlProperty::UmlProperty() :
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
}

// OWNED ATTRIBUTES

QtUml::AggregationKind UmlProperty::aggregation() const
{
    // This is a read-write property

    return _aggregation;
}

void UmlProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    // This is a read-write property

    if (_aggregation != aggregation) {
        _aggregation = aggregation;
    }
}

UmlAssociation *UmlProperty::association() const
{
    // This is a read-write association end

    return _association;
}

void UmlProperty::setAssociation(UmlAssociation *association)
{
    // This is a read-write association end

    if (_association != association) {
        _association = association;
    }
}

UmlProperty *UmlProperty::associationEnd() const
{
    // This is a read-write association end

    return _associationEnd;
}

void UmlProperty::setAssociationEnd(UmlProperty *associationEnd)
{
    // This is a read-write association end

    if (_associationEnd != associationEnd) {
        // Adjust subsetted properties

        _associationEnd = associationEnd;

        // Adjust subsetted properties
        setOwner(associationEnd);
    }
}

UmlClass *UmlProperty::class_() const
{
    // This is a read-write association end

    return _class_;
}

void UmlProperty::setClass(UmlClass *class_)
{
    // This is a read-write association end

    if (_class_ != class_) {
        // Adjust subsetted properties

        _class_ = class_;

        // Adjust subsetted properties
        setNamespace(class_);
    }
}

UmlDataType *UmlProperty::datatype() const
{
    // This is a read-write association end

    return _datatype;
}

void UmlProperty::setDatatype(UmlDataType *datatype)
{
    // This is a read-write association end

    if (_datatype != datatype) {
        // Adjust subsetted properties

        _datatype = datatype;

        // Adjust subsetted properties
        setNamespace(datatype);
    }
}

QString UmlProperty::default_() const
{
    // This is a read-write derived property

    qWarning("UmlProperty::default_(): to be implemented (this is a derived property)");

    return QString();
}

void UmlProperty::setDefault(QString default_)
{
    // This is a read-write derived property

    qWarning("UmlProperty::default_(): to be implemented (this is a derived property)");
    Q_UNUSED(default_);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlValueSpecification *UmlProperty::defaultValue() const
{
    // This is a read-write association end

    return _defaultValue;
}

void UmlProperty::setDefaultValue(UmlValueSpecification *defaultValue)
{
    // This is a read-write association end

    if (_defaultValue != defaultValue) {
        // Adjust subsetted properties
        removeOwnedElement(_defaultValue);

        _defaultValue = defaultValue;

        // Adjust subsetted properties
        if (defaultValue) {
            addOwnedElement(defaultValue);
        }
    }
}

UmlInterface *UmlProperty::interface_() const
{
    // This is a read-write association end

    return _interface_;
}

void UmlProperty::setInterface(UmlInterface *interface_)
{
    // This is a read-write association end

    if (_interface_ != interface_) {
        // Adjust subsetted properties

        _interface_ = interface_;

        // Adjust subsetted properties
        setNamespace(interface_);
    }
}

bool UmlProperty::isComposite() const
{
    // This is a read-write derived property

    qWarning("UmlProperty::isComposite(): to be implemented (this is a derived property)");

    return bool();
}

void UmlProperty::setComposite(bool isComposite)
{
    // This is a read-write derived property

    qWarning("UmlProperty::isComposite(): to be implemented (this is a derived property)");
    Q_UNUSED(isComposite);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

bool UmlProperty::isDerived() const
{
    // This is a read-write property

    return _isDerived;
}

void UmlProperty::setDerived(bool isDerived)
{
    // This is a read-write property

    if (_isDerived != isDerived) {
        _isDerived = isDerived;
    }
}

bool UmlProperty::isDerivedUnion() const
{
    // This is a read-write property

    return _isDerivedUnion;
}

void UmlProperty::setDerivedUnion(bool isDerivedUnion)
{
    // This is a read-write property

    if (_isDerivedUnion != isDerivedUnion) {
        _isDerivedUnion = isDerivedUnion;
    }
}

bool UmlProperty::isID() const
{
    // This is a read-write property

    return _isID;
}

void UmlProperty::setID(bool isID)
{
    // This is a read-write property

    if (_isID != isID) {
        _isID = isID;
    }
}

bool UmlProperty::isReadOnly() const
{
    // This is a read-write property

    return _isReadOnly;
}

void UmlProperty::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    if (_isReadOnly != isReadOnly) {
        _isReadOnly = isReadOnly;
    }
}

UmlProperty *UmlProperty::opposite() const
{
    // This is a read-write derived association end

    qWarning("UmlProperty::opposite(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlProperty::setOpposite(UmlProperty *opposite)
{
    // This is a read-write derived association end

    qWarning("UmlProperty::opposite(): to be implemented (this is a derived association end)");
    Q_UNUSED(opposite);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlAssociation *UmlProperty::owningAssociation() const
{
    // This is a read-write association end

    return _owningAssociation;
}

void UmlProperty::setOwningAssociation(UmlAssociation *owningAssociation)
{
    // This is a read-write association end

    if (_owningAssociation != owningAssociation) {
        // Adjust subsetted properties
        removeFeaturingClassifier(_owningAssociation);
        removeRedefinitionContext(_owningAssociation);

        _owningAssociation = owningAssociation;

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

const QList<UmlProperty *> UmlProperty::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void UmlProperty::addQualifier(UmlProperty *qualifier)
{
    // This is a read-write association end

    if (!_qualifier.contains(qualifier)) {
        _qualifier.append(qualifier);

        // Adjust subsetted properties
        addOwnedElement(qualifier);
    }
}

void UmlProperty::removeQualifier(UmlProperty *qualifier)
{
    // This is a read-write association end

    if (_qualifier.contains(qualifier)) {
        _qualifier.removeAll(qualifier);

        // Adjust subsetted properties
        removeOwnedElement(qualifier);
    }
}

const QSet<UmlProperty *> UmlProperty::redefinedProperty() const
{
    // This is a read-write association end

    return _redefinedProperty;
}

void UmlProperty::addRedefinedProperty(UmlProperty *redefinedProperty)
{
    // This is a read-write association end

    if (!_redefinedProperty.contains(redefinedProperty)) {
        _redefinedProperty.insert(redefinedProperty);

        // Adjust subsetted properties
        addRedefinedElement(redefinedProperty);
    }
}

void UmlProperty::removeRedefinedProperty(UmlProperty *redefinedProperty)
{
    // This is a read-write association end

    if (_redefinedProperty.contains(redefinedProperty)) {
        _redefinedProperty.remove(redefinedProperty);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedProperty);
    }
}

const QSet<UmlProperty *> UmlProperty::subsettedProperty() const
{
    // This is a read-write association end

    return _subsettedProperty;
}

void UmlProperty::addSubsettedProperty(UmlProperty *subsettedProperty)
{
    // This is a read-write association end

    if (!_subsettedProperty.contains(subsettedProperty)) {
        _subsettedProperty.insert(subsettedProperty);
    }
}

void UmlProperty::removeSubsettedProperty(UmlProperty *subsettedProperty)
{
    // This is a read-write association end

    if (_subsettedProperty.contains(subsettedProperty)) {
        _subsettedProperty.remove(subsettedProperty);
    }
}

// OPERATIONS

bool UmlProperty::isAttribute(
    UmlProperty *p) const
{
    qWarning("UmlProperty::isAttribute(): to be implemented (operation)");

    Q_UNUSED(p);
    return bool ();
}

bool UmlProperty::isCompatibleWith(
    UmlParameterableElement *p) const
{
    qWarning("UmlProperty::isCompatibleWith(): to be implemented (operation)");

    Q_UNUSED(p);
    return bool ();
}

bool UmlProperty::isConsistentWith(
    UmlRedefinableElement *redefinee) const
{
    qWarning("UmlProperty::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

bool UmlProperty::isNavigable(
    ) const
{
    qWarning("UmlProperty::isNavigable(): to be implemented (operation)");

    return bool ();
}

QSet<UmlType *> UmlProperty::subsettingContext(
    ) const
{
    qWarning("UmlProperty::subsettingContext(): to be implemented (operation)");

    return QSet<UmlType *> ();
}

