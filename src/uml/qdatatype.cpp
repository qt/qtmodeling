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

#include "qdatatype.h"
#include "qdatatype_p.h"

#include <QtUml/QProperty>
#include <QtUml/QOperation>
#include <QtUml/QNamedElement>

QT_BEGIN_NAMESPACE_QTUML

QDataTypePrivate::QDataTypePrivate() :
    ownedOperations(new QList<QOperation *>),
    ownedAttributes(new QList<QProperty *>)
{
}

QDataTypePrivate::~QDataTypePrivate()
{
    delete ownedOperations;
    delete ownedAttributes;
}

/*!
    \class QDataType

    \inmodule QtUml

    \brief A data type is a type whose instances are identified only by their value. A data type may contain attributes to support the modeling of structured data types.
 */

QDataType::QDataType(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QClassifier(*new QDataTypePrivate, parent, wrapper)
{
}

QDataType::QDataType(QDataTypePrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QClassifier(dd, parent, wrapper)
{
}

QDataType::~QDataType()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDataType
// ---------------------------------------------------------------

/*!
    The Operations owned by the DataType.
 */
const QList<QOperation *> *QDataType::ownedOperations() const
{
    // This is a read-write association end

    Q_D(const QDataType);
    return d->ownedOperations;
}

void QDataType::addOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QDataType);
    if (!d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->append(ownedOperation);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QClassifierPrivate *>(d))->addFeature(qmofobject_cast<QFeature *>(ownedOperation));
        (qmofobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qmofobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setDatatype(this);
    }
}

void QDataType::removeOwnedOperation(QOperation *ownedOperation)
{
    // This is a read-write association end

    Q_D(QDataType);
    if (d->ownedOperations->contains(ownedOperation)) {
        d->ownedOperations->removeAll(ownedOperation);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QClassifierPrivate *>(d))->removeFeature(qmofobject_cast<QFeature *>(ownedOperation));
        (qmofobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qmofobject_cast<QNamedElement *>(ownedOperation));

        // Adjust opposite property
        ownedOperation->setDatatype(0);
    }
}

/*!
    The Attributes owned by the DataType.
 */
const QList<QProperty *> *QDataType::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QDataType);
    return d->ownedAttributes;
}

void QDataType::addOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QDataType);
    if (!d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qmofobject_cast<QNamedElement *>(ownedAttribute));
        (qmofobject_cast<QClassifierPrivate *>(d))->addAttribute(qmofobject_cast<QProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setDatatype(this);
    }
}

void QDataType::removeOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QDataType);
    if (d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qmofobject_cast<QNamedElement *>(ownedAttribute));
        (qmofobject_cast<QClassifierPrivate *>(d))->removeAttribute(qmofobject_cast<QProperty *>(ownedAttribute));

        // Adjust opposite property
        ownedAttribute->setDatatype(0);
    }
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
const QSet<QNamedElement *> *QDataType::inherit(const QSet<QNamedElement *> *inhs) const
{
    qWarning("QDataType::inherit: operation to be implemented");
    Q_UNUSED(inhs);

    return 0; // change here to your derived return
}

#include "moc_qdatatype.cpp"

QT_END_NAMESPACE_QTUML

