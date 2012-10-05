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

QT_BEGIN_NAMESPACE_QTUML

class QSlotPrivate
{
public:
    explicit QSlotPrivate();
    virtual ~QSlotPrivate();

    QStructuralFeature *definingFeature;
    QInstanceSpecification *owningInstance;
    QList<QValueSpecification *> *values;
};

QSlotPrivate::QSlotPrivate() :
    values(new QList<QValueSpecification *>)
{
}

QSlotPrivate::~QSlotPrivate()
{
    delete values;
}

/*!
    \class QSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QSlot::QSlot(QObject *parent)
    : QObject(parent), d_ptr(new QSlotPrivate)
{
}

QSlot::~QSlot()
{
    delete d_ptr;
}

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QStructuralFeature *QSlot::definingFeature() const
{
    return d_ptr->definingFeature;
}

void QSlot::setDefiningFeature(const QStructuralFeature *definingFeature)
{
    d_ptr->definingFeature = const_cast<QStructuralFeature *>(definingFeature);
}

/*!
    The instance specification that owns this slot.
 */
QInstanceSpecification *QSlot::owningInstance() const
{
    return d_ptr->owningInstance;
}

void QSlot::setOwningInstance(const QInstanceSpecification *owningInstance)
{
    d_ptr->owningInstance = const_cast<QInstanceSpecification *>(owningInstance);
}

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
const QList<QValueSpecification *> *QSlot::values() const
{
    return d_ptr->values;
}

void QSlot::addValue(const QValueSpecification *value)
{
    d_ptr->values->append(const_cast<QValueSpecification *>(value));
}

void QSlot::removeValue(const QValueSpecification *value)
{
    d_ptr->values->removeAll(const_cast<QValueSpecification *>(value));
}

#include "moc_qslot.cpp"

QT_END_NAMESPACE_QTUML

