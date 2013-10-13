/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofobject.h"

#include "private/qmofobjectobject_p.h"

#include <QtMof/QMofArgument>
#include <QtMof/QMofOperation>
#include <QtMof/QMofProperty>

/*!
    \class QMofObject

    \inmodule QtMof

    \brief
 */
QMofObject::QMofObject(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofObjectObject(this));
}

QModelingElement *QMofObject::clone() const
{
    QMofObject *c = new QMofObject;
    return c;
}

// OPERATIONS

QMofObject *QMofObject::get(QMofProperty *property) const
{
    qWarning("MofObject::get(): to be implemented (operation)");

    Q_UNUSED(property);
    return 0;
}

bool QMofObject::equals(QMofObject *element) const
{
    qWarning("MofObject::equals(): to be implemented (operation)");

    Q_UNUSED(element);
    return bool ();
}

void QMofObject::set(QMofProperty *property, QMofObject *value)
{
    qWarning("MofObject::set(): to be implemented (operation)");

    Q_UNUSED(property);
    Q_UNUSED(value);
}

bool QMofObject::isSet(QMofProperty *property) const
{
    qWarning("MofObject::isSet(): to be implemented (operation)");

    Q_UNUSED(property);
    return bool ();
}

void QMofObject::unset(QMofProperty *property)
{
    qWarning("MofObject::unset(): to be implemented (operation)");

    Q_UNUSED(property);
}

QMofObject *QMofObject::invoke(QMofOperation *op, QSet<QMofArgument *> arguments)
{
    qWarning("MofObject::invoke(): to be implemented (operation)");

    Q_UNUSED(op);
    Q_UNUSED(arguments);
    return 0;
}

