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
#include "qmofliteralboolean.h"

#include "private/qmofliteralbooleanobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofLiteralBoolean

    \inmodule QtMof

    \brief A literal Boolean is a specification of a Boolean value.
 */
QMofLiteralBoolean::QMofLiteralBoolean(bool createQModelingObject) :
    _value(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofLiteralBooleanObject(this));
}

QModelingElement *QMofLiteralBoolean::clone() const
{
    QMofLiteralBoolean *c = new QMofLiteralBoolean;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QMofType *>(type()->clone()));
    c->setValue(value());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The specified Boolean value.
 */
bool QMofLiteralBoolean::value() const
{
    // This is a read-write property

    return _value;
}

void QMofLiteralBoolean::setValue(bool value)
{
    // This is a read-write property

    if (_value != value) {
        _value = value;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("value");
    }
}

// OPERATIONS

/*!
    The query booleanValue() gives the value.
 */
bool QMofLiteralBoolean::booleanValue() const
{
    qWarning("QMofLiteralBoolean::booleanValue(): to be implemented (operation)");

    return bool ();
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QMofLiteralBoolean::isComputable() const
{
    qWarning("QMofLiteralBoolean::isComputable(): to be implemented (operation)");

    return bool ();
}

QT_END_NAMESPACE

