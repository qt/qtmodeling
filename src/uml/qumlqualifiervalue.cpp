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
#include "qumlqualifiervalue.h"

#include "private/qumlqualifiervalueobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>

/*!
    \class QUmlQualifierValue

    \inmodule QtUml

    \brief A qualifier value is not an action. It is an element that identifies links. It gives a single qualifier within a link end data specification.
 */
QUmlQualifierValue::QUmlQualifierValue(bool createQObject) :
    _qualifier(0),
    _value(0)
{
    if (createQObject)
        _qObject = new QUmlQualifierValueObject(this);
    setPropertyData();
}

QUmlQualifierValue::~QUmlQualifierValue()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlQualifierValue::clone() const
{
    QUmlQualifierValue *c = new QUmlQualifierValue;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (qualifier())
        c->setQualifier(dynamic_cast<QUmlProperty *>(qualifier()->clone()));
    if (value())
        c->setValue(dynamic_cast<QUmlInputPin *>(value()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Attribute representing the qualifier for which the value is to be specified.
 */
QUmlProperty *QUmlQualifierValue::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void QUmlQualifierValue::setQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    if (_qualifier != qualifier) {
        _qualifier = qualifier;
        if (qualifier && qualifier->asQObject() && this->asQObject())
            QObject::connect(qualifier->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setQualifier()));
    }
}

/*!
    Input pin from which the specified value for the qualifier is taken.
 */
QUmlInputPin *QUmlQualifierValue::value() const
{
    // This is a read-write association end

    return _value;
}

void QUmlQualifierValue::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    if (_value != value) {
        _value = value;
        if (value && value->asQObject() && this->asQObject())
            QObject::connect(value->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setValue()));
    }
}

void QUmlQualifierValue::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlQualifierValue");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::DocumentationRole] = QStringLiteral("Attribute representing the qualifier for which the value is to be specified.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("qualifier")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlQualifierValue");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::DocumentationRole] = QStringLiteral("Input pin from which the specified value for the qualifier is taken.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlQualifierValue")][QStringLiteral("value")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlQualifierValue::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("qualifier")] = QStringLiteral("QUmlQualifierValue");
    _classForProperty[QStringLiteral("value")] = QStringLiteral("QUmlQualifierValue");
}

