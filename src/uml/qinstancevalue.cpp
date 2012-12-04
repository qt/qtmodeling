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

#include "qinstancevalue.h"
#include "qinstancevalue_p.h"

#include <QtUml/QInstanceSpecification>

QT_BEGIN_NAMESPACE_QTUML

QInstanceValuePrivate::QInstanceValuePrivate() :
    instance(0)
{
}

QInstanceValuePrivate::~QInstanceValuePrivate()
{
}

/*!
    \class QInstanceValue

    \inmodule QtUml

    \brief An instance value is a value specification that identifies an instance.
 */

QInstanceValue::QInstanceValue(QUmlObject *parent, QUmlObject *wrapper) :
    QValueSpecification(*new QInstanceValuePrivate, parent, wrapper)
{
}

QInstanceValue::QInstanceValue(QInstanceValuePrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QValueSpecification(dd, parent, wrapper)
{
}

QInstanceValue::~QInstanceValue()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInstanceValue
// ---------------------------------------------------------------

/*!
    The instance that is the specified value.
 */
QInstanceSpecification *QInstanceValue::instance() const
{
    // This is a read-write association end

    Q_D(const QInstanceValue);
    return d->instance;
}

void QInstanceValue::setInstance(QInstanceSpecification *instance)
{
    // This is a read-write association end

    Q_D(QInstanceValue);
    if (d->instance != instance) {
        d->instance = instance;
    }
}

#include "moc_qinstancevalue.cpp"

QT_END_NAMESPACE_QTUML

