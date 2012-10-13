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

#include "qslot.h"
#include "qslot_p.h"
#include "qelement_p.h"

#include <QtUml/QStructuralFeature>
#include <QtUml/QInstanceSpecification>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QSlotPrivate::QSlotPrivate() :
    values(new QList<QValueSpecification *>),
    definingFeature(0),
    owningInstance(0)
{
}

QSlotPrivate::~QSlotPrivate()
{
    delete values;
}

void QSlotPrivate::addValue(QValueSpecification *value)
{
    this->values->append(value);

    // Adjust subsetted property(ies)
    addOwnedElement(value);
}

void QSlotPrivate::removeValue(QValueSpecification *value)
{
    this->values->removeAll(value);

    // Adjust subsetted property(ies)
    removeOwnedElement(value);
}

void QSlotPrivate::setDefiningFeature(QStructuralFeature *definingFeature)
{
    this->definingFeature = definingFeature;
}

void QSlotPrivate::setOwningInstance(QInstanceSpecification *owningInstance)
{
    this->owningInstance = owningInstance;

    // Adjust subsetted property(ies)
    setOwner(owningInstance);
}

/*!
    \class QSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QSlot::QSlot(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QSlotPrivate;
}

QSlot::QSlot(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QSlotPrivate;
}

QSlot::~QSlot()
{
}

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
const QList<QValueSpecification *> *QSlot::values() const
{
    QTUML_D(const QSlot);
    return d->values;
}

void QSlot::addValue(QValueSpecification *value)
{
    QTUML_D(QSlot);
    if (!d->values->contains(value)) {
        d->addValue(value);
    }
}

void QSlot::removeValue(QValueSpecification *value)
{
    QTUML_D(QSlot);
    if (d->values->contains(value)) {
        d->removeValue(value);
    }
}

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QStructuralFeature *QSlot::definingFeature() const
{
    QTUML_D(const QSlot);
    return d->definingFeature;
}

void QSlot::setDefiningFeature(QStructuralFeature *definingFeature)
{
    QTUML_D(QSlot);
    if (d->definingFeature != definingFeature) {
        d->setDefiningFeature(definingFeature);
    }
}

/*!
    The instance specification that owns this slot.
 */
QInstanceSpecification *QSlot::owningInstance() const
{
    QTUML_D(const QSlot);
    return d->owningInstance;
}

void QSlot::setOwningInstance(QInstanceSpecification *owningInstance)
{
    QTUML_D(QSlot);
    if (d->owningInstance != owningInstance) {
        d->setOwningInstance(owningInstance);

        // Adjust opposite property
        owningInstance->addSlot_(this);
    }
}

#include "moc_qslot.cpp"

QT_END_NAMESPACE_QTUML

