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

#include <QtUml/QProperty>
#include <QtUml/QOperation>
#include <QtUml/QNamedElement>

QT_BEGIN_NAMESPACE_QTUML

class QDataTypePrivate
{
public:
    explicit QDataTypePrivate();
    virtual ~QDataTypePrivate();

    QList<QProperty *> *ownedAttributes;
    QList<QOperation *> *ownedOperations;
};

QDataTypePrivate::QDataTypePrivate() :
    ownedAttributes(new QList<QProperty *>),
    ownedOperations(new QList<QOperation *>)
{
}

QDataTypePrivate::~QDataTypePrivate()
{
    delete ownedAttributes;
    delete ownedOperations;
}

/*!
    \class QDataType

    \inmodule QtUml

    \brief A data type is a type whose instances are identified only by their value. A data type may contain attributes to support the modeling of structured data types.
 */

QDataType::QDataType(QObject *parent)
    : QObject(parent), d_ptr(new QDataTypePrivate)
{
}

QDataType::~QDataType()
{
    delete d_ptr;
}

/*!
    The Attributes owned by the DataType.
 */
const QList<QProperty *> *QDataType::ownedAttributes() const
{
    return d_ptr->ownedAttributes;
}

void QDataType::addOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->append(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    addOwnedMember(ownedAttribute);
    addAttribute(ownedAttribute);
}

void QDataType::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->removeAll(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    removeOwnedMember(ownedAttribute);
    removeAttribute(ownedAttribute);
}

/*!
    The Operations owned by the DataType.
 */
const QList<QOperation *> *QDataType::ownedOperations() const
{
    return d_ptr->ownedOperations;
}

void QDataType::addOwnedOperation(const QOperation *ownedOperation)
{
    d_ptr->ownedOperations->append(const_cast<QOperation *>(ownedOperation));
    // Adjust subsetted property(ies)
    addFeature(ownedOperation);
    addOwnedMember(ownedOperation);
}

void QDataType::removeOwnedOperation(const QOperation *ownedOperation)
{
    d_ptr->ownedOperations->removeAll(const_cast<QOperation *>(ownedOperation));
    // Adjust subsetted property(ies)
    removeFeature(ownedOperation);
    removeOwnedMember(ownedOperation);
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
const QSet<QNamedElement *> *QDataType::inherit(const QSet<QNamedElement *> *inhs) const
{
    qWarning("To be implemented");
}

#include "moc_qdatatype.cpp"

QT_END_NAMESPACE_QTUML

