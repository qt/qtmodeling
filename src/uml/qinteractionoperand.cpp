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

#include "qinteractionoperand.h"
#include "qinteractionoperand_p.h"

#include <QtUml/QInteractionConstraint>

QT_BEGIN_NAMESPACE_QTUML

QInteractionOperandPrivate::QInteractionOperandPrivate(QInteractionOperand *q_umlptr) :
    fragments(new QList<QInteractionFragment *>),
    guard(0)
{
    this->q_umlptr = q_umlptr;
}

QInteractionOperandPrivate::~QInteractionOperandPrivate()
{
    delete fragments;
}

/*!
    \class QInteractionOperand

    \inmodule QtUml

    \brief An interaction operand is contained in a combined fragment. An interaction operand represents one operand of the expression given by the enclosing combined fragment.
 */

QInteractionOperand::QInteractionOperand(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInteractionOperandPrivate(this);
}

QInteractionOperand::QInteractionOperand(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QInteractionOperandPrivate;
}

QInteractionOperand::~QInteractionOperand()
{
}

/*!
    The fragments of the operand.
 */
const QList<QInteractionFragment *> *QInteractionOperand::fragments() const
{
    // This is a read-write association end

    QTUML_D(const QInteractionOperand);
    return d->fragments;
}

void QInteractionOperand::addFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    QTUML_D(QInteractionOperand);
    if (!d->fragments->contains(fragment)) {
        d->fragments->append(fragment);

        // Adjust subsetted property(ies)
        d->addOwnedMember(fragment);

        // Adjust opposite property
        fragment->setEnclosingOperand(this);
    }
}

void QInteractionOperand::removeFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    QTUML_D(QInteractionOperand);
    if (d->fragments->contains(fragment)) {
        d->fragments->removeAll(fragment);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(fragment);

        // Adjust opposite property
        fragment->setEnclosingOperand(0);
    }
}

/*!
    Constraint of the operand.
 */
QInteractionConstraint *QInteractionOperand::guard() const
{
    // This is a read-write association end

    QTUML_D(const QInteractionOperand);
    return d->guard;
}

void QInteractionOperand::setGuard(QInteractionConstraint *guard)
{
    // This is a read-write association end

    QTUML_D(QInteractionOperand);
    if (d->guard != guard) {
        // Adjust subsetted property(ies)
        d->removeOwnedElement(d->guard);

        d->guard = guard;

        // Adjust subsetted property(ies)
        d->addOwnedElement(guard);
    }
}

#include "moc_qinteractionoperand.cpp"

QT_END_NAMESPACE_QTUML

