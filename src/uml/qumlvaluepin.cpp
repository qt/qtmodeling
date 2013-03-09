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

#include "qumlvaluepin.h"
#include "qumlvaluepin_p.h"

#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlValuePinPrivate::QUmlValuePinPrivate() :
    value(0)
{
}

QUmlValuePinPrivate::~QUmlValuePinPrivate()
{
}

/*!
    \class QUmlValuePin

    \inmodule QtUml

    \brief A value pin is an input pin that provides a value by evaluating a value specification.
 */

QUmlValuePin::QUmlValuePin(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInputPin(*new QUmlValuePinPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlValuePin::QUmlValuePin(QUmlValuePinPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInputPin(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlValuePin::~QUmlValuePin()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlValuePin
// ---------------------------------------------------------------

/*!
    Value that the pin will provide.
 */
QUmlValueSpecification *QUmlValuePin::value() const
{
    // This is a read-write association end

    Q_D(const QUmlValuePin);
    return d->value;
}

void QUmlValuePin::setValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QUmlValuePin);
    if (d->value != value) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->value));

        d->value = value;

        // Adjust subsetted property(ies)
        if (value) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(value));
        }
    }
}

void QUmlValuePin::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValuePin")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValuePin")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValuePin")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Value that the pin will provide.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValuePin")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValuePin")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlValuePin")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlInputPin::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlvaluepin.cpp"

