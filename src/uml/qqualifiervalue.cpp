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

#include "qqualifiervalue.h"
#include "qqualifiervalue_p.h"

#include <QtUml/QProperty>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QQualifierValuePrivate::QQualifierValuePrivate() :
    value(0),
    qualifier(0)
{
}

QQualifierValuePrivate::~QQualifierValuePrivate()
{
}
  
void QQualifierValuePrivate::setValue(const QInputPin *value) 
{  
    this->value = const_cast<QInputPin *>(value);   
}
  
void QQualifierValuePrivate::setQualifier(const QProperty *qualifier) 
{  
    this->qualifier = const_cast<QProperty *>(qualifier);   
}

/*!
    \class QQualifierValue

    \inmodule QtUml

    \brief A qualifier value is not an action. It is an element that identifies links. It gives a single qualifier within a link end data specification.
 */

QQualifierValue::QQualifierValue(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QQualifierValuePrivate;
}

QQualifierValue::QQualifierValue(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QQualifierValuePrivate;
}

QQualifierValue::~QQualifierValue()
{
}

/*!
    Input pin from which the specified value for the qualifier is taken.
 */
QInputPin *QQualifierValue::value() const
{
    Q_D(const QQualifierValue);
    return d->value;
}

void QQualifierValue::setValue(const QInputPin *value)
{
    Q_D(QQualifierValue);
    d->setValue(const_cast<QInputPin *>(value));
}

/*!
    Attribute representing the qualifier for which the value is to be specified.
 */
QProperty *QQualifierValue::qualifier() const
{
    Q_D(const QQualifierValue);
    return d->qualifier;
}

void QQualifierValue::setQualifier(const QProperty *qualifier)
{
    Q_D(QQualifierValue);
    d->setQualifier(const_cast<QProperty *>(qualifier));
}

#include "moc_qqualifiervalue.cpp"

QT_END_NAMESPACE_QTUML

