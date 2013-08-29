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
#include "qumloperation.h"

#include <QtUml/QUmlClass>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlOperationTemplateParameter>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlOperation::QUmlOperation(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlConstraint *QUmlOperation::bodyCondition() const
{
    return reinterpret_cast<QUmlConstraint *>(_bodyCondition);
}

void QUmlOperation::setBodyCondition(QUmlConstraint *bodyCondition)
{
    UmlOperation::setBodyCondition(bodyCondition);
}

QUmlClass *QUmlOperation::class_() const
{
    return reinterpret_cast<QUmlClass *>(_class_);
}

void QUmlOperation::setClass(QUmlClass *class_)
{
    UmlOperation::setClass(class_);
}

QUmlDataType *QUmlOperation::datatype() const
{
    return reinterpret_cast<QUmlDataType *>(_datatype);
}

void QUmlOperation::setDatatype(QUmlDataType *datatype)
{
    UmlOperation::setDatatype(datatype);
}

QUmlInterface *QUmlOperation::interface_() const
{
    return reinterpret_cast<QUmlInterface *>(_interface_);
}

void QUmlOperation::setInterface(QUmlInterface *interface_)
{
    UmlOperation::setInterface(interface_);
}

bool QUmlOperation::isOrdered() const
{
    return UmlOperation::isOrdered();
}

bool QUmlOperation::isQuery() const
{
    return _isQuery;
}

void QUmlOperation::setQuery(bool isQuery)
{
    UmlOperation::setQuery(isQuery);
}

bool QUmlOperation::isUnique() const
{
    return UmlOperation::isUnique();
}

int QUmlOperation::lower() const
{
    return UmlOperation::lower();
}

const QList<QUmlParameter *> QUmlOperation::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlParameter *> *>(&_ownedParameter));
}

void QUmlOperation::addOwnedParameter(UmlParameter *ownedParameter)
{
    UmlOperation::addOwnedParameter(ownedParameter);
}

void QUmlOperation::removeOwnedParameter(UmlParameter *ownedParameter)
{
    UmlOperation::removeOwnedParameter(ownedParameter);
}

const QSet<QUmlConstraint *> QUmlOperation::postcondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_postcondition));
}

void QUmlOperation::addPostcondition(UmlConstraint *postcondition)
{
    UmlOperation::addPostcondition(postcondition);
}

void QUmlOperation::removePostcondition(UmlConstraint *postcondition)
{
    UmlOperation::removePostcondition(postcondition);
}

const QSet<QUmlConstraint *> QUmlOperation::precondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_precondition));
}

void QUmlOperation::addPrecondition(UmlConstraint *precondition)
{
    UmlOperation::addPrecondition(precondition);
}

void QUmlOperation::removePrecondition(UmlConstraint *precondition)
{
    UmlOperation::removePrecondition(precondition);
}

const QSet<QUmlType *> QUmlOperation::raisedException() const
{
    return *(reinterpret_cast<const QSet<QUmlType *> *>(&_raisedException));
}

void QUmlOperation::addRaisedException(UmlType *raisedException)
{
    UmlOperation::addRaisedException(raisedException);
}

void QUmlOperation::removeRaisedException(UmlType *raisedException)
{
    UmlOperation::removeRaisedException(raisedException);
}

const QSet<QUmlOperation *> QUmlOperation::redefinedOperation() const
{
    return *(reinterpret_cast<const QSet<QUmlOperation *> *>(&_redefinedOperation));
}

void QUmlOperation::addRedefinedOperation(UmlOperation *redefinedOperation)
{
    UmlOperation::addRedefinedOperation(redefinedOperation);
}

void QUmlOperation::removeRedefinedOperation(UmlOperation *redefinedOperation)
{
    UmlOperation::removeRedefinedOperation(redefinedOperation);
}

QUmlOperationTemplateParameter *QUmlOperation::templateParameter() const
{
    return reinterpret_cast<QUmlOperationTemplateParameter *>(_templateParameter);
}

void QUmlOperation::setTemplateParameter(QUmlOperationTemplateParameter *templateParameter)
{
    UmlOperation::setTemplateParameter(templateParameter);
}

QUmlType *QUmlOperation::type() const
{
    return reinterpret_cast<QUmlType *>(UmlOperation::type());
}

int QUmlOperation::upper() const
{
    return UmlOperation::upper();
}

// Operations

bool QUmlOperation::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlOperation::isConsistentWith(redefinee);
}

QSet<QUmlParameter *> QUmlOperation::returnResult() const
{
    QSet<QUmlParameter *> r;
    foreach (UmlParameter *element, UmlOperation::returnResult())
        r.insert(reinterpret_cast<QUmlParameter *>(element));
    return r;
}

QT_END_NAMESPACE

