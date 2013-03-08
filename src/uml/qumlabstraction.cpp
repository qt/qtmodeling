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

#include "qumlabstraction.h"
#include "qumlabstraction_p.h"

#include <QtUml/QUmlOpaqueExpression>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlAbstractionPrivate::QUmlAbstractionPrivate() :
    mapping(0)
{
}

QUmlAbstractionPrivate::~QUmlAbstractionPrivate()
{
}

/*!
    \class QUmlAbstraction

    \inmodule QtUml

    \brief An abstraction is a relationship that relates two elements or sets of elements that represent the same concept at different levels of abstraction or from different viewpoints.
 */

QUmlAbstraction::QUmlAbstraction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDependency(*new QUmlAbstractionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlAbstraction::QUmlAbstraction(QUmlAbstractionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDependency(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlAbstraction::~QUmlAbstraction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlAbstraction
// ---------------------------------------------------------------

/*!
    An composition of an Expression that states the abstraction relationship between the supplier and the client. In some cases, such as Derivation, it is usually formal and unidirectional; in other cases, such as Trace, it is usually informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship between the elements is not specified.
 */
QUmlOpaqueExpression *QUmlAbstraction::mapping() const
{
    // This is a read-write association end

    Q_D(const QUmlAbstraction);
    return d->mapping;
}

void QUmlAbstraction::setMapping(QUmlOpaqueExpression *mapping)
{
    // This is a read-write association end

    Q_D(QUmlAbstraction);
    if (d->mapping != mapping) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->mapping));

        d->mapping = mapping;

        // Adjust subsetted property(ies)
        if (mapping) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(mapping));
        }
    }
}

void QUmlAbstraction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAbstraction")][QString::fromLatin1("mapping")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAbstraction")][QString::fromLatin1("mapping")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAbstraction")][QString::fromLatin1("mapping")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An composition of an Expression that states the abstraction relationship between the supplier and the client. In some cases, such as Derivation, it is usually formal and unidirectional; in other cases, such as Trace, it is usually informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship between the elements is not specified.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAbstraction")][QString::fromLatin1("mapping")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAbstraction")][QString::fromLatin1("mapping")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAbstraction")][QString::fromLatin1("mapping")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlDependency::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlabstraction.cpp"

