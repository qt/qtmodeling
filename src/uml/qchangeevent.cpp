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

#include "qchangeevent.h"
#include "qchangeevent_p.h"
#include "qelement_p.h"

#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QChangeEventPrivate::QChangeEventPrivate() :
    changeExpression(0)
{
}

QChangeEventPrivate::~QChangeEventPrivate()
{
}
  
void QChangeEventPrivate::setChangeExpression(const QValueSpecification *changeExpression) 
{  
    this->changeExpression = const_cast<QValueSpecification *>(changeExpression);   
}

/*!
    \class QChangeEvent

    \inmodule QtUml

    \brief A change event models a change in the system configuration that makes a condition true.
 */

QChangeEvent::QChangeEvent(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QChangeEventPrivate;
}

QChangeEvent::QChangeEvent(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QChangeEventPrivate;
}

QChangeEvent::~QChangeEvent()
{
}

/*!
    A Boolean-valued expression that will result in a change event whenever its value changes from false to true.
 */
QValueSpecification *QChangeEvent::changeExpression() const
{
    Q_D(const QChangeEvent);
    return d->changeExpression;
}

void QChangeEvent::setChangeExpression(const QValueSpecification *changeExpression)
{
    Q_D(QChangeEvent);
    d->setChangeExpression(const_cast<QValueSpecification *>(changeExpression));
}

#include "moc_qchangeevent.cpp"

QT_END_NAMESPACE_QTUML

