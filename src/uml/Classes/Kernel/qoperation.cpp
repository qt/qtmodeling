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

#include "qoperation.h"
//#include "qoperation_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.
 */

QOperation::QOperation(QObject *parent)
    : QObject(parent)
{
}

QOperation::~QOperation()
{
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QOperation::isQuery() const
{
}

void QOperation::setQuery(bool isQuery)
{
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QConstraint *QOperation::bodyCondition() const
{
}

void QOperation::setBodyCondition(QConstraint *bodyCondition)
{
}

/*!
    The class that owns the operation.
 */
QClass *QOperation::class_() const
{
}

void QOperation::setClass_(QClass *class_)
{
}

/*!
    The DataType that owns this Operation.
 */
QDataType *QOperation::datatype() const
{
}

void QOperation::setDatatype(QDataType *datatype)
{
}

/*!
    Specifies the parameters owned by this Operation.
 */
QList<QParameter *> *QOperation::ownedParameter()
{
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
QList<QConstraint *> *QOperation::postcondition()
{
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
QList<QConstraint *> *QOperation::precondition()
{
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
QList<QType *> *QOperation::raisedException()
{
}

/*!
    References the Operations that are redefined by this Operation.
 */
QList<QOperation *> *QOperation::redefinedOperation()
{
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.
 */
bool QOperation::isConsistentWith(const QRedefinableElement *redefinee) const
{
}

/*!
    If this operation has a return parameter, isOrdered equals the value of isOrdered for that parameter. Otherwise isOrdered is false.
 */
bool QOperation::isOrdered() const
{
}

/*!
    If this operation has a return parameter, isUnique equals the value of isUnique for that parameter. Otherwise isUnique is true.
 */
bool QOperation::isUnique() const
{
}

/*!
    If this operation has a return parameter, lower equals the value of lower for that parameter. Otherwise lower is not defined.
 */
qint32 QOperation::lower() const
{
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
const QList<QParameter *> *QOperation::returnResult() const
{
}

/*!
    If this operation has a return parameter, type equals the value of type for that parameter. Otherwise type is not defined.
 */
const QType *QOperation::type() const
{
}

/*!
    If this operation has a return parameter, upper equals the value of upper for that parameter. Otherwise upper is not defined.
 */
qint32 QOperation::upper() const
{
}

#include "moc_qoperation.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

