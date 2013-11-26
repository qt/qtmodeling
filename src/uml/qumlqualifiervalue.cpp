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

#include "private/qumlqualifiervalueobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlQualifierValue

    \inmodule QtUml

    \brief A qualifier value is not an action. It is an element that identifies links. It gives a single qualifier within a link end data specification.
 */

/*!
    Creates a new QUmlQualifierValue. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlQualifierValue::QUmlQualifierValue(bool createQModelingObject) :
    _qualifier(0),
    _value(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlQualifierValueObject(this));
}

/*!
    Destroys the QUmlQualifierValue.
 */
QUmlQualifierValue::~QUmlQualifierValue()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlQualifierValue.
*/
QModelingElement *QUmlQualifierValue::clone() const
{
    QUmlQualifierValue *c = new QUmlQualifierValue;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Attribute representing the qualifier for which the value is to be specified.
 */
QUmlProperty *QUmlQualifierValue::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

/*!
    Adjusts qualifier to \a qualifier.
 */
void QUmlQualifierValue::setQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    if (_qualifier != qualifier) {
        _qualifier = qualifier;
        if (qualifier && qualifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(qualifier->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setQualifier()));
    }
}

/*!
    Input pin from which the specified value for the qualifier is taken.
 */
QUmlInputPin *QUmlQualifierValue::value() const
{
    // This is a read-write association end

    return _value;
}

/*!
    Adjusts value to \a value.
 */
void QUmlQualifierValue::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    if (_value != value) {
        _value = value;
        if (value && value->asQModelingObject() && this->asQModelingObject())
            QObject::connect(value->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setValue()));
    }
}

QT_END_NAMESPACE

