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

#include "qumlqualifiervalue.h"
#include "qumlqualifiervalue_p.h"

#include <QtUml/QUmlProperty>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlQualifierValuePrivate::QUmlQualifierValuePrivate() :
    value(0),
    qualifier(0)
{
}

QUmlQualifierValuePrivate::~QUmlQualifierValuePrivate()
{
}

/*!
    \class QUmlQualifierValue

    \inmodule QtUml

    \brief A qualifier value is not an action. It is an element that identifies links. It gives a single qualifier within a link end data specification.
 */

QUmlQualifierValue::QUmlQualifierValue(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlQualifierValuePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlQualifierValue::QUmlQualifierValue(QUmlQualifierValuePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlQualifierValue::~QUmlQualifierValue()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlQualifierValue
// ---------------------------------------------------------------

/*!
    Input pin from which the specified value for the qualifier is taken.
 */
QUmlInputPin *QUmlQualifierValue::value() const
{
    // This is a read-write association end

    Q_D(const QUmlQualifierValue);
    return d->value;
}

void QUmlQualifierValue::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    Q_D(QUmlQualifierValue);
    if (d->value != value) {
        d->value = value;
    }
}

/*!
    Attribute representing the qualifier for which the value is to be specified.
 */
QUmlProperty *QUmlQualifierValue::qualifier() const
{
    // This is a read-write association end

    Q_D(const QUmlQualifierValue);
    return d->qualifier;
}

void QUmlQualifierValue::setQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    Q_D(QUmlQualifierValue);
    if (d->qualifier != qualifier) {
        d->qualifier = qualifier;
    }
}

void QUmlQualifierValue::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Input pin from which the specified value for the qualifier is taken.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("qualifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("qualifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("qualifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Attribute representing the qualifier for which the value is to be specified.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("qualifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("qualifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlQualifierValue")][QString::fromLatin1("qualifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlqualifiervalue.cpp"

