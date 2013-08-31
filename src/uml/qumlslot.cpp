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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QUmlSlot::QUmlSlot(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlSlot::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlSlot::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlSlot::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [Slot]

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QUmlStructuralFeature *QUmlSlot::definingFeature() const
{
    return reinterpret_cast<QUmlStructuralFeature *>(_definingFeature);
}

/*!
    The instance specification that owns this slot.
 */
QUmlInstanceSpecification *QUmlSlot::owningInstance() const
{
    return reinterpret_cast<QUmlInstanceSpecification *>(_owningInstance);
}

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
const QList<QUmlValueSpecification *> QUmlSlot::value() const
{
    return *(reinterpret_cast<const QList<QUmlValueSpecification *> *>(&_value));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlSlot::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlSlot::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSlot::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlSlot::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [Slot]

void QUmlSlot::setDefiningFeature(QUmlStructuralFeature *definingFeature)
{
    UmlSlot::setDefiningFeature(definingFeature);
}

void QUmlSlot::setOwningInstance(QUmlInstanceSpecification *owningInstance)
{
    UmlSlot::setOwningInstance(owningInstance);
}

void QUmlSlot::addValue(UmlValueSpecification *value)
{
    UmlSlot::addValue(value);
}

void QUmlSlot::removeValue(UmlValueSpecification *value)
{
    UmlSlot::removeValue(value);
}

QT_END_NAMESPACE

