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

#include <QtUml/QParameterableElement>

QT_BEGIN_NAMESPACE_QTUML

class QValueSpecificationPrivate
{
public:
    explicit QValueSpecificationPrivate();
    virtual ~QValueSpecificationPrivate();

};

QValueSpecificationPrivate::QValueSpecificationPrivate()
{
}

QValueSpecificationPrivate::~QValueSpecificationPrivate()
{
}

/*!
    \class QValueSpecification

    \inmodule QtUml

    \brief ValueSpecification specializes ParameterableElement to specify that a value specification can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A value specification is the specification of a (possibly empty) set of instances, including both objects and data values.
 */

QValueSpecification::QValueSpecification()
    : d_ptr(new QValueSpecificationPrivate)
{
}

QValueSpecification::~QValueSpecification()
{
    delete d_ptr;
}

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QValueSpecification::booleanValue() const
{
    qWarning("QValueSpecification::booleanValue: operation to be implemented");
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
qint32 QValueSpecification::integerValue() const
{
    qWarning("QValueSpecification::integerValue: operation to be implemented");
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for ValueSpecification, the type must be conformant with the type of the specified parameterable element.
 */
bool QValueSpecification::isCompatibleWith(const QParameterableElement *p) const
{
    qWarning("QValueSpecification::isCompatibleWith: operation to be implemented");
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QValueSpecification::isComputable() const
{
    qWarning("QValueSpecification::isComputable: operation to be implemented");
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QValueSpecification::isNull() const
{
    qWarning("QValueSpecification::isNull: operation to be implemented");
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
qreal QValueSpecification::realValue() const
{
    qWarning("QValueSpecification::realValue: operation to be implemented");
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QValueSpecification::stringValue() const
{
    qWarning("QValueSpecification::stringValue: operation to be implemented");
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
qint32 QValueSpecification::unlimitedValue() const
{
    qWarning("QValueSpecification::unlimitedValue: operation to be implemented");
}

QT_END_NAMESPACE_QTUML

