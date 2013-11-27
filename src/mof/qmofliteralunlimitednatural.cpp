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

QT_BEGIN_NAMESPACE

/*!
    \class QMofLiteralUnlimitedNatural

    \inmodule QtMof

    \brief A literal unlimited natural is a specification of an unlimited natural number.
 */

/*!
    Creates a new QMofLiteralUnlimitedNatural. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofLiteralUnlimitedNatural::QMofLiteralUnlimitedNatural(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofLiteralUnlimitedNaturalObject(this));
}

/*!
    Destroys the QMofLiteralUnlimitedNatural.
 */
QMofLiteralUnlimitedNatural::~QMofLiteralUnlimitedNatural()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofLiteralUnlimitedNatural.
*/
QModelingElement *QMofLiteralUnlimitedNatural::clone() const
{
    QMofLiteralUnlimitedNatural *c = new QMofLiteralUnlimitedNatural;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setValue(value());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The specified UnlimitedNatural value.
 */
QString QMofLiteralUnlimitedNatural::value() const
{
    // This is a read-write property

    return _value;
}

/*!
    Adjusts value to \a value.
 */
void QMofLiteralUnlimitedNatural::setValue(QString value)
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
    qWarning("QMofLiteralUnlimitedNatural::isComputable(): to be implemented (operation)");

    return bool ();
}

/*!
    The query unlimitedValue() gives the value.
 */
QString QMofLiteralUnlimitedNatural::unlimitedValue() const
{
    qWarning("QMofLiteralUnlimitedNatural::unlimitedValue(): to be implemented (operation)");

    return QString ();
}

QT_END_NAMESPACE

