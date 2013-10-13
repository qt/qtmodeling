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
#include "qmofslot.h"

#include "private/qmofslotobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofInstanceSpecification>
#include <QtMof/QMofStructuralFeature>
#include <QtMof/QMofValueSpecification>

/*!
    \class QMofSlot

    \inmodule QtMof

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */
QMofSlot::QMofSlot(bool createQModelingObject) :
    _definingFeature(0),
    _owningInstance(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofSlotObject(this));
}

QModelingElement *QMofSlot::clone() const
{
    QMofSlot *c = new QMofSlot;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    if (definingFeature())
        c->setDefiningFeature(dynamic_cast<QMofStructuralFeature *>(definingFeature()->clone()));
    if (owningInstance())
        c->setOwningInstance(dynamic_cast<QMofInstanceSpecification *>(owningInstance()->clone()));
    foreach (QMofValueSpecification *element, values())
        c->addValue(dynamic_cast<QMofValueSpecification *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QMofStructuralFeature *QMofSlot::definingFeature() const
{
    // This is a read-write association end

    return _definingFeature;
}

void QMofSlot::setDefiningFeature(QMofStructuralFeature *definingFeature)
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
 */
QMofInstanceSpecification *QMofSlot::owningInstance() const
{
    // This is a read-write association end

    return _owningInstance;
}

void QMofSlot::setOwningInstance(QMofInstanceSpecification *owningInstance)
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
 */
const QList<QMofValueSpecification *> QMofSlot::values() const
{
    // This is a read-write association end

    return _values;
}

void QMofSlot::addValue(QMofValueSpecification *value)
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

void QMofSlot::removeValue(QMofValueSpecification *value)
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

