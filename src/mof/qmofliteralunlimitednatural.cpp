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
#include "qmofliteralunlimitednatural.h"

#include "private/qmofliteralunlimitednaturalobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

/*!
    \class QMofLiteralUnlimitedNatural

    \inmodule QtMof

    \brief A literal unlimited natural is a specification of an unlimited natural number.
 */
QMofLiteralUnlimitedNatural::QMofLiteralUnlimitedNatural(bool createQModelingObject) :
    _value(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofLiteralUnlimitedNaturalObject(this));
}

QModelingElement *QMofLiteralUnlimitedNatural::clone() const
{
    QMofLiteralUnlimitedNatural *c = new QMofLiteralUnlimitedNatural;
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
    The specified UnlimitedNatural value.
 */
int QMofLiteralUnlimitedNatural::value() const
{
    // This is a read-write property

    return _value;
}

void QMofLiteralUnlimitedNatural::setValue(int value)
{
    // This is a read-write property

    if (_value != value) {
        _value = value;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("value");
    }
}

// OPERATIONS

/*!
    The query isComputable() is redefined to be true.
 */
bool QMofLiteralUnlimitedNatural::isComputable() const
{
    qWarning("MofLiteralUnlimitedNatural::isComputable(): to be implemented (operation)");

    return bool ();
}

/*!
    The query unlimitedValue() gives the value.
 */
int QMofLiteralUnlimitedNatural::unlimitedValue() const
{
    qWarning("MofLiteralUnlimitedNatural::unlimitedValue(): to be implemented (operation)");

    return int ();
}

