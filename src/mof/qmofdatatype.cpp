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

#include "qmofdatatype.h"
#include "qmofdatatype_p.h"

#include <QtMof/QMofProperty>
#include <QtMof/QMofOperation>
#include <QtMof/QMofNamedElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofDataTypePrivate::QMofDataTypePrivate()
{
}

QMofDataTypePrivate::~QMofDataTypePrivate()
{
}

/*!
    \class QMofDataType

    \inmodule QtMof

    \brief A data type is a type whose instances are identified only by their value. A data type may contain attributes to support the modeling of structured data types.
 */

QMofDataType::QMofDataType(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofClassifier(*new QMofDataTypePrivate, wrapper, parent)
{
    setPropertyData();
}

QMofDataType::QMofDataType(QMofDataTypePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QMofDataType::~QMofDataType()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofDataType
// ---------------------------------------------------------------

/*!
    The Operations owned by the DataType.
 */
QList<QMofOperation *> QMofDataType::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QMofDataType);
    return d->ownedOperations;
}

void QMofDataType::addOwnedOperation(QMofOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QMofDataType);
    if (!d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.append(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QMofFeature *>(ownedOperation));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setDatatype(this);
    }
}

void QMofDataType::removeOwnedOperation(QMofOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QMofDataType);
    if (d->ownedOperations.contains(ownedOperation)) {
        d->ownedOperations.removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QMofFeature *>(ownedOperation));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setDatatype(0);
    }
}

/*!
    The Attributes owned by the DataType.
 */
QList<QMofProperty *> QMofDataType::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QMofDataType);
    return d->ownedAttributes;
}

void QMofDataType::addOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QMofDataType);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QMofProperty *>(ownedAttribute));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setDatatype(this);
    }
}

void QMofDataType::removeOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QMofDataType);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QMofProperty *>(ownedAttribute));
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setDatatype(0);
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QMofNamedElement *> QMofDataType::inherit(QSet<QMofNamedElement *> inhs) const
{
    qWarning("QMofDataType::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return QSet<QMofNamedElement *>(); // change here to your derived return
}

void QMofDataType::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Operations owned by the DataType.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofClassifier::features QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofOperation::datatype");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Attributes owned by the DataType.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofClassifier::attributes QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDataType")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofProperty::datatype");

    QMofClassifier::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofdatatype.cpp"

