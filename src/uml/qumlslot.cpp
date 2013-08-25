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
#include "qumlslot_p.h"

#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlSlotPrivate::QUmlSlotPrivate() :
    definingFeature(0),
    owningInstance(0)
{
}

/*!
    \class QUmlSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QUmlSlot::QUmlSlot(bool create_d_ptr) :
    QUmlElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlSlotPrivate);
}

// Owned attributes

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QUmlStructuralFeature *QUmlSlot::definingFeature() const
{
    return 0;
}

void QUmlSlot::setDefiningFeature(QUmlStructuralFeature *definingFeature)
{
    Q_UNUSED(definingFeature);
}

/*!
    The instance specification that owns this slot.
 */
QUmlInstanceSpecification *QUmlSlot::owningInstance() const
{
    return 0;
}

void QUmlSlot::setOwningInstance(QUmlInstanceSpecification *owningInstance)
{
    Q_UNUSED(owningInstance);
}

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
QList<QUmlValueSpecification *> QUmlSlot::value() const
{
    return QList<QUmlValueSpecification *>();
}

void QUmlSlot::addValue(QList<QUmlValueSpecification *> value)
{
    Q_UNUSED(value);
}

void QUmlSlot::removeValue(QList<QUmlValueSpecification *> value)
{
    Q_UNUSED(value);
}

QT_END_NAMESPACE

