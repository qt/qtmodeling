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

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlProperty::QUmlProperty(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QtUml::AggregationKind QUmlProperty::aggregation() const
{
    return _aggregation;
}

void QUmlProperty::setAggregation(QtUml::AggregationKind aggregation)
{
    UmlProperty::setAggregation(aggregation);
}

QUmlAssociation *QUmlProperty::association() const
{
    return reinterpret_cast<QUmlAssociation *>(_association);
}

void QUmlProperty::setAssociation(QUmlAssociation *association)
{
    UmlProperty::setAssociation(association);
}

QUmlProperty *QUmlProperty::associationEnd() const
{
    return reinterpret_cast<QUmlProperty *>(_associationEnd);
}

void QUmlProperty::setAssociationEnd(QUmlProperty *associationEnd)
{
    UmlProperty::setAssociationEnd(associationEnd);
}

QUmlClass *QUmlProperty::class_() const
{
    return reinterpret_cast<QUmlClass *>(_class_);
}

void QUmlProperty::setClass(QUmlClass *class_)
{
    UmlProperty::setClass(class_);
}

QUmlDataType *QUmlProperty::datatype() const
{
    return reinterpret_cast<QUmlDataType *>(_datatype);
}

void QUmlProperty::setDatatype(QUmlDataType *datatype)
{
    UmlProperty::setDatatype(datatype);
}

QString QUmlProperty::default_() const
{
    return UmlProperty::default_();
}

void QUmlProperty::setDefault(QString default_)
{
    UmlProperty::setDefault(default_);
}

QUmlValueSpecification *QUmlProperty::defaultValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_defaultValue);
}

void QUmlProperty::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    UmlProperty::setDefaultValue(defaultValue);
}

QUmlInterface *QUmlProperty::interface_() const
{
    return reinterpret_cast<QUmlInterface *>(_interface_);
}

void QUmlProperty::setInterface(QUmlInterface *interface_)
{
    UmlProperty::setInterface(interface_);
}

bool QUmlProperty::isComposite() const
{
    return UmlProperty::isComposite();
}

void QUmlProperty::setComposite(bool isComposite)
{
    UmlProperty::setComposite(isComposite);
}

bool QUmlProperty::isDerived() const
{
    return _isDerived;
}

void QUmlProperty::setDerived(bool isDerived)
{
    UmlProperty::setDerived(isDerived);
}

bool QUmlProperty::isDerivedUnion() const
{
    return _isDerivedUnion;
}

void QUmlProperty::setDerivedUnion(bool isDerivedUnion)
{
    UmlProperty::setDerivedUnion(isDerivedUnion);
}

bool QUmlProperty::isID() const
{
    return _isID;
}

void QUmlProperty::setID(bool isID)
{
    UmlProperty::setID(isID);
}

bool QUmlProperty::isReadOnly() const
{
    return _isReadOnly;
}

void QUmlProperty::setReadOnly(bool isReadOnly)
{
    UmlProperty::setReadOnly(isReadOnly);
}

QUmlProperty *QUmlProperty::opposite() const
{
    return reinterpret_cast<QUmlProperty *>(UmlProperty::opposite());
}

void QUmlProperty::setOpposite(QUmlProperty *opposite)
{
    UmlProperty::setOpposite(opposite);
}

QUmlAssociation *QUmlProperty::owningAssociation() const
{
    return reinterpret_cast<QUmlAssociation *>(_owningAssociation);
}

void QUmlProperty::setOwningAssociation(QUmlAssociation *owningAssociation)
{
    UmlProperty::setOwningAssociation(owningAssociation);
}

const QList<QUmlProperty *> QUmlProperty::qualifier() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_qualifier));
}

void QUmlProperty::addQualifier(UmlProperty *qualifier)
{
    UmlProperty::addQualifier(qualifier);
}

void QUmlProperty::removeQualifier(UmlProperty *qualifier)
{
    UmlProperty::removeQualifier(qualifier);
}

const QSet<QUmlProperty *> QUmlProperty::redefinedProperty() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_redefinedProperty));
}

void QUmlProperty::addRedefinedProperty(UmlProperty *redefinedProperty)
{
    UmlProperty::addRedefinedProperty(redefinedProperty);
}

void QUmlProperty::removeRedefinedProperty(UmlProperty *redefinedProperty)
{
    UmlProperty::removeRedefinedProperty(redefinedProperty);
}

const QSet<QUmlProperty *> QUmlProperty::subsettedProperty() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_subsettedProperty));
}

void QUmlProperty::addSubsettedProperty(UmlProperty *subsettedProperty)
{
    UmlProperty::addSubsettedProperty(subsettedProperty);
}

void QUmlProperty::removeSubsettedProperty(UmlProperty *subsettedProperty)
{
    UmlProperty::removeSubsettedProperty(subsettedProperty);
}

// Operations

bool QUmlProperty::isAttribute(QUmlProperty *p) const
{
    return UmlProperty::isAttribute(p);
}

bool QUmlProperty::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlProperty::isCompatibleWith(p);
}

bool QUmlProperty::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlProperty::isConsistentWith(redefinee);
}

bool QUmlProperty::isNavigable() const
{
    return UmlProperty::isNavigable();
}

QSet<QUmlType *> QUmlProperty::subsettingContext() const
{
    QSet<QUmlType *> r;
    foreach (UmlType *element, UmlProperty::subsettingContext())
        r.insert(reinterpret_cast<QUmlType *>(element));
    return r;
}

QT_END_NAMESPACE

