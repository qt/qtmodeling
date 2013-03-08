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

#include "qumldatatype.h"
#include "qumldatatype_p.h"

#include <QtUml/QUmlProperty>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlNamedElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDataTypePrivate::QUmlDataTypePrivate()
{
}

QUmlDataTypePrivate::~QUmlDataTypePrivate()
{
}

/*!
    \class QUmlDataType

    \inmodule QtUml

    \brief A data type is a type whose instances are identified only by their value. A data type may contain attributes to support the modeling of structured data types.
 */

QUmlDataType::QUmlDataType(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(*new QUmlDataTypePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDataType::QUmlDataType(QUmlDataTypePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDataType::~QUmlDataType()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDataType
// ---------------------------------------------------------------

/*!
    The Operations owned by the DataType.
 */
QList<QUmlOperation *> QUmlDataType::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QUmlDataType);
    return d->ownedOperations;
}

void QUmlDataType::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlDataType);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setDatatype(this);
    }
}

void QUmlDataType::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QUmlDataType);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedOperation));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setDatatype(0);
    }
}

/*!
    The Attributes owned by the DataType.
 */
QList<QUmlProperty *> QUmlDataType::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QUmlDataType);
    return d->ownedAttributes;
}

void QUmlDataType::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlDataType);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setDatatype(this);
    }
}

void QUmlDataType::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlDataType);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setDatatype(0);
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QUmlNamedElement *> QUmlDataType::inherit(QSet<QUmlNamedElement *> inhs) const
{
    qWarning("QUmlDataType::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QUmlNamedElement *>(); // change here to your derived return
}

void QUmlDataType::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Operations owned by the DataType.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOperation::datatype");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Attributes owned by the DataType.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers QUmlClassifier::attributes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QProperty::datatype");

    QUmlClassifier::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldatatype.cpp"

