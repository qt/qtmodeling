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
#include "qumldatatype.h"
#include "qumldatatype_p.h"

#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlDataTypePrivate::QUmlDataTypePrivate()
{
}

/*!
    \class QUmlDataType

    \inmodule QtUml

    \brief A data type is a type whose instances are identified only by their value. A data type may contain attributes to support the modeling of structured data types.
 */

QUmlDataType::QUmlDataType(bool create_d_ptr) :
    QUmlClassifier(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlDataTypePrivate);
}

// Owned attributes

/*!
    The Attributes owned by the DataType.
 */
QList<QUmlProperty *> QUmlDataType::ownedAttribute() const
{
    return QList<QUmlProperty *>();
}

void QUmlDataType::addOwnedAttribute(QList<QUmlProperty *> ownedAttribute)
{
    Q_UNUSED(ownedAttribute);
}

void QUmlDataType::removeOwnedAttribute(QList<QUmlProperty *> ownedAttribute)
{
    Q_UNUSED(ownedAttribute);
}

/*!
    The Operations owned by the DataType.
 */
QList<QUmlOperation *> QUmlDataType::ownedOperation() const
{
    return QList<QUmlOperation *>();
}

void QUmlDataType::addOwnedOperation(QList<QUmlOperation *> ownedOperation)
{
    Q_UNUSED(ownedOperation);
}

void QUmlDataType::removeOwnedOperation(QList<QUmlOperation *> ownedOperation)
{
    Q_UNUSED(ownedOperation);
}

// Operations

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QUmlNamedElement *> QUmlDataType::inherit(QSet<QUmlNamedElement *> inhs) const
{
    Q_UNUSED(inhs);
    return QSet<QUmlNamedElement *> ();
}

QT_END_NAMESPACE

