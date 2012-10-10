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
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"

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

void QDataTypePrivate::addOwnedOperation(const QOperation *ownedOperation)
{
    this->ownedOperations->append(const_cast<QOperation *>(ownedOperation));

    // Adjust subsetted property(ies)
    addFeature(ownedOperation);
    addOwnedMember(ownedOperation);
}

void QDataTypePrivate::removeOwnedOperation(const QOperation *ownedOperation)
{
    this->ownedOperations->removeAll(const_cast<QOperation *>(ownedOperation));

    // Adjust subsetted property(ies)
    removeFeature(ownedOperation);
    removeOwnedMember(ownedOperation);
}

void QDataTypePrivate::addOwnedAttribute(const QProperty *ownedAttribute)
{
    this->ownedAttributes->append(const_cast<QProperty *>(ownedAttribute));

    // Adjust subsetted property(ies)
    addOwnedMember(ownedAttribute);
    addAttribute(ownedAttribute);
}

void QDataTypePrivate::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    this->ownedAttributes->removeAll(const_cast<QProperty *>(ownedAttribute));

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedAttribute);
    removeAttribute(ownedAttribute);
}

/*!
    \class QDataType

    \inmodule QtUml

    \brief A data type is a type whose instances are identified only by their value. A data type may contain attributes to support the modeling of structured data types.
 */

QDataType::QDataType(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QDataTypePrivate;
}

QDataType::QDataType(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QDataTypePrivate;
}

QDataType::~QDataType()
{
}

/*!
    The Operations owned by the DataType.
 */
const QList<QOperation *> *QDataType::ownedOperations() const
{
    Q_D(const QDataType);
    return d->ownedOperations;
}

void QDataType::addOwnedOperation(const QOperation *ownedOperation)
{
    Q_D(QDataType);
    d->addOwnedOperation(const_cast<QOperation *>(ownedOperation));
}

void QDataType::removeOwnedOperation(const QOperation *ownedOperation)
{
    Q_D(QDataType);
    d->removeOwnedOperation(const_cast<QOperation *>(ownedOperation));
}

/*!
    The Attributes owned by the DataType.
 */
const QList<QProperty *> *QDataType::ownedAttributes() const
{
    Q_D(const QDataType);
    return d->ownedAttributes;
}

void QDataType::addOwnedAttribute(const QProperty *ownedAttribute)
{
    Q_D(QDataType);
    d->addOwnedAttribute(const_cast<QProperty *>(ownedAttribute));
}

void QDataType::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    Q_D(QDataType);
    d->removeOwnedAttribute(const_cast<QProperty *>(ownedAttribute));
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
const QSet<QNamedElement *> *QDataType::inherit(const QSet<QNamedElement *> *inhs) const
{
    qWarning("QDataType::inherit: operation to be implemented");
}

#include "moc_qdatatype.cpp"

QT_END_NAMESPACE_QTUML

