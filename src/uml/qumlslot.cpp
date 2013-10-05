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
#include "qumlslot.h"

#include "private/qumlslotobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlValueSpecification>
/*!
    \class QUmlSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */
QUmlSlot::QUmlSlot(bool createQObject) :
    _definingFeature(0),
    _owningInstance(0)
{
    if (createQObject)
        _qObject = new QUmlSlotObject(this);
    setPropertyData();
}

QUmlSlot::~QUmlSlot()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlSlot::clone() const
{
    QUmlSlot *c = new QUmlSlot;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (definingFeature())
        c->setDefiningFeature(dynamic_cast<QUmlStructuralFeature *>(definingFeature()->clone()));
    if (owningInstance())
        c->setOwningInstance(dynamic_cast<QUmlInstanceSpecification *>(owningInstance()->clone()));
    foreach (QUmlValueSpecification *element, value())
        c->addValue(dynamic_cast<QUmlValueSpecification *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QUmlStructuralFeature *QUmlSlot::definingFeature() const
{
    // This is a read-write association end

    return _definingFeature;
}

void QUmlSlot::setDefiningFeature(QUmlStructuralFeature *definingFeature)
{
    // This is a read-write association end

    if (_definingFeature != definingFeature) {
        _definingFeature = definingFeature;
        if (definingFeature && definingFeature->asQObject() && this->asQObject())
            QObject::connect(definingFeature->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDefiningFeature()));
    }
}

/*!
    The instance specification that owns this slot.
 */
QUmlInstanceSpecification *QUmlSlot::owningInstance() const
{
    // This is a read-write association end

    return _owningInstance;
}

void QUmlSlot::setOwningInstance(QUmlInstanceSpecification *owningInstance)
{
    // This is a read-write association end

    if (_owningInstance != owningInstance) {
        // Adjust subsetted properties

        _owningInstance = owningInstance;
        if (owningInstance && owningInstance->asQObject() && this->asQObject())
            QObject::connect(owningInstance->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOwningInstance()));

        // Adjust subsetted properties
        setOwner(owningInstance);
    }
}

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
const QList<QUmlValueSpecification *> QUmlSlot::value() const
{
    // This is a read-write association end

    return _value;
}

void QUmlSlot::addValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    if (!_value.contains(value)) {
        _value.append(value);
        if (value && value->asQObject() && this->asQObject())
            QObject::connect(value->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeValue(QObject *)));
        value->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(value);
    }
}

void QUmlSlot::removeValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    if (_value.contains(value)) {
        _value.removeAll(value);
        if (value->asQObject())
            value->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(value);
    }
}

void QUmlSlot::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("definingFeature")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("definingFeature")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("definingFeature")][QtModeling::DocumentationRole] = QStringLiteral("The structural feature that specifies the values that may be held by the slot.");
    QModelingObject::propertyDataHash[QStringLiteral("definingFeature")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("definingFeature")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("definingFeature")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("owningInstance")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("owningInstance")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("owningInstance")][QtModeling::DocumentationRole] = QStringLiteral("The instance specification that owns this slot.");
    QModelingObject::propertyDataHash[QStringLiteral("owningInstance")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("owningInstance")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner");
    QModelingObject::propertyDataHash[QStringLiteral("owningInstance")][QtModeling::OppositeEndRole] = QStringLiteral("InstanceSpecification-slot");

    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::DocumentationRole] = QStringLiteral("The value or values corresponding to the defining feature for the owning instance specification.");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

