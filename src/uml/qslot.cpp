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

void QSlotPrivate::addValue(const QValueSpecification *value)
{
    this->values->append(const_cast<QValueSpecification *>(value));

    // Adjust subsetted property(ies)
    addOwnedElement(value);
}

void QSlotPrivate::removeValue(const QValueSpecification *value)
{
    this->values->removeAll(const_cast<QValueSpecification *>(value));

    // Adjust subsetted property(ies)
    removeOwnedElement(value);
}

void QSlotPrivate::setDefiningFeature(const QStructuralFeature *definingFeature)
{
    this->definingFeature = const_cast<QStructuralFeature *>(definingFeature);
}

void QSlotPrivate::setOwningInstance(const QInstanceSpecification *owningInstance)
{
    this->owningInstance = const_cast<QInstanceSpecification *>(owningInstance);
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
    Q_D(const QSlot);
    return d->values;
}

void QSlot::addValue(const QValueSpecification *value)
{
    Q_D(QSlot);
    d->addValue(const_cast<QValueSpecification *>(value));
}

void QSlot::removeValue(const QValueSpecification *value)
{
    Q_D(QSlot);
    d->removeValue(const_cast<QValueSpecification *>(value));
}

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QStructuralFeature *QSlot::definingFeature() const
{
    Q_D(const QSlot);
    return d->definingFeature;
}

void QSlot::setDefiningFeature(const QStructuralFeature *definingFeature)
{
    Q_D(QSlot);
    d->setDefiningFeature(const_cast<QStructuralFeature *>(definingFeature));
}

/*!
    The instance specification that owns this slot.
 */
QInstanceSpecification *QSlot::owningInstance() const
{
    Q_D(const QSlot);
    return d->owningInstance;
}

void QSlot::setOwningInstance(const QInstanceSpecification *owningInstance)
{
    Q_D(QSlot);
    d->setOwningInstance(const_cast<QInstanceSpecification *>(owningInstance));
}

#include "moc_qslot.cpp"

QT_END_NAMESPACE_QTUML

