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
#include "qumlqualifiervalue.h"
#include "qumlqualifiervalue_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlQualifierValuePrivate::QUmlQualifierValuePrivate() :
    qualifier(0),
    value(0)
{
}

/*!
    \class QUmlQualifierValue

    \inmodule QtUml

    \brief A qualifier value is not an action. It is an element that identifies links. It gives a single qualifier within a link end data specification.
 */

QUmlQualifierValue::QUmlQualifierValue(bool create_d_ptr) :
    QUmlElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlQualifierValuePrivate);
}

// OWNED ATTRIBUTES

/*!
    Attribute representing the qualifier for which the value is to be specified.
 */
QUmlProperty *QUmlQualifierValue::qualifier() const
{
    // This is a read-write association end

    QM_D(const QUmlQualifierValue);
    return d->qualifier;
}

void QUmlQualifierValue::setQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    QM_D(QUmlQualifierValue);
    if (d->qualifier != qualifier) {
        d->qualifier = qualifier;
    }
}

/*!
    Input pin from which the specified value for the qualifier is taken.
 */
QUmlInputPin *QUmlQualifierValue::value() const
{
    // This is a read-write association end

    QM_D(const QUmlQualifierValue);
    return d->value;
}

void QUmlQualifierValue::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    QM_D(QUmlQualifierValue);
    if (d->value != value) {
        d->value = value;
    }
}

QT_END_NAMESPACE

