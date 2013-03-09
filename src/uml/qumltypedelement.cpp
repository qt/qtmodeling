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

#include "qumltypedelement.h"
#include "qumltypedelement_p.h"

#include <QtUml/QUmlType>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTypedElementPrivate::QUmlTypedElementPrivate() :
    type(0)
{
}

QUmlTypedElementPrivate::~QUmlTypedElementPrivate()
{
}

/*!
    \class QUmlTypedElement

    \inmodule QtUml

    \brief A typed element is a kind of named element that represents an element with a type.A typed element has a type.
 */

QUmlTypedElement::QUmlTypedElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlTypedElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTypedElement::QUmlTypedElement(QUmlTypedElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTypedElement::~QUmlTypedElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlTypedElement::type() const
{
    // This is a read-write association end

    Q_D(const QUmlTypedElement);
    return d->type;
}

void QUmlTypedElement::setType(QUmlType *type)
{
    // This is a read-write association end

    Q_D(QUmlTypedElement);
    if (d->type != type) {
        d->type = type;
    }
}

void QUmlTypedElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTypedElement")][QString::fromLatin1("type")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTypedElement")][QString::fromLatin1("type")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTypedElement")][QString::fromLatin1("type")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.The type of the TypedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTypedElement")][QString::fromLatin1("type")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTypedElement")][QString::fromLatin1("type")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTypedElement")][QString::fromLatin1("type")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltypedelement.cpp"

