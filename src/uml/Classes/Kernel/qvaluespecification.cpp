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

#include "qvaluespecification.h"
//#include "qvaluespecification_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QValueSpecification

    \inmodule QtUml

    \brief A value specification is the specification of a (possibly empty) set of instances, including both objects and data values.
 */

QValueSpecification::QValueSpecification()
{
}

QValueSpecification::~QValueSpecification()
{
}

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QValueSpecification::booleanValue() const
{
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
qint32 QValueSpecification::integerValue() const
{
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QValueSpecification::isComputable() const
{
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QValueSpecification::isNull() const
{
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
qreal QValueSpecification::realValue()
{
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QValueSpecification::stringValue() const
{
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
qint32 QValueSpecification::unlimitedValue() const
{
}

QT_END_NAMESPACE_UML_CLASSES_KERNEL

