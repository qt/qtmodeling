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
#include "qumlslot.h"

#include "private/qumlslotobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

/*!
    Creates a new QUmlSlot. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlSlot::QUmlSlot(bool createQModelingObject) :
    _definingFeature(0),
    _owningInstance(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlSlotObject(this));
}

/*!
    Destroys the QUmlSlot.
 */
QUmlSlot::~QUmlSlot()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlSlot.
*/
QModelingElement *QUmlSlot::clone() const
{
    QUmlSlot *c = new QUmlSlot;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlValueSpecification *element, values())
        c->addValue(dynamic_cast<QUmlValueSpecification *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QUmlStructuralFeature *QUmlSlot::definingFeature() const
{
    // This is a read-write association end

    return _definingFeature;
}

/*!
    Adjusts definingFeature to \a definingFeature.
 */
void QUmlSlot::setDefiningFeature(QUmlStructuralFeature *definingFeature)
{
    // This is a read-write association end

    if (_definingFeature != definingFeature) {
        _definingFeature = definingFeature;
        if (definingFeature && definingFeature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(definingFeature->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDefiningFeature()));
    }
}

/*!
    The instance specification that owns this slot.

    \b {Subsetted property(ies):} QUmlElement::owner().

    \b {Opposite property(ies):} QUmlInstanceSpecification::slots_().
 */
QUmlInstanceSpecification *QUmlSlot::owningInstance() const
{
    // This is a read-write association end

    return _owningInstance;
}

/*!
    Adjusts owningInstance to \a owningInstance.
 */
void QUmlSlot::setOwningInstance(QUmlInstanceSpecification *owningInstance)
{
    // This is a read-write association end

    if (_owningInstance != owningInstance) {
        // Adjust subsetted properties

        _owningInstance = owningInstance;
        if (owningInstance && owningInstance->asQModelingObject() && this->asQModelingObject())
            QObject::connect(owningInstance->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwningInstance()));

        // Adjust subsetted properties
        setOwner(owningInstance);
    }
}

/*!
    The value or values corresponding to the defining feature for the owning instance specification.

    \sa addValue(), removeValue()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QList<QUmlValueSpecification *> QUmlSlot::values() const
{
    // This is a read-write association end

    return _values;
}

/*!
    Adds \a value to values.

    \sa values(), removeValue()
 */
void QUmlSlot::addValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    if (!_values.contains(value)) {
        _values.append(value);
        if (value && value->asQModelingObject() && this->asQModelingObject())
            QObject::connect(value->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeValue(QObject *)));
        value->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(value);
    }
}

/*!
    Removes \a value from values.

    \sa values(), addValue()
 */
void QUmlSlot::removeValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    if (_values.contains(value)) {
        _values.removeAll(value);
        if (value->asQModelingObject())
            value->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(value);
    }
}

QT_END_NAMESPACE

