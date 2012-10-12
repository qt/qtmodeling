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
#include "qnamespace_p.h"
#include "qelement_p.h"

#include <QtUml/QInteractionConstraint>

QT_BEGIN_NAMESPACE_QTUML

QInteractionOperandPrivate::QInteractionOperandPrivate() :
    fragments(new QList<QInteractionFragment *>),
    guard(0)
{
}

QInteractionOperandPrivate::~QInteractionOperandPrivate()
{
    delete fragments;
}

void QInteractionOperandPrivate::addFragment(QInteractionFragment *fragment)
{
    this->fragments->append(fragment);

    // Adjust subsetted property(ies)
    addOwnedMember(fragment);
}

void QInteractionOperandPrivate::removeFragment(QInteractionFragment *fragment)
{
    this->fragments->removeAll(fragment);

    // Adjust subsetted property(ies)
    removeOwnedMember(fragment);
}

void QInteractionOperandPrivate::setGuard(QInteractionConstraint *guard)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->guard);

    this->guard = guard;

    // Adjust subsetted property(ies)
    addOwnedElement(guard);
}

/*!
    \class QInteractionOperand

    \inmodule QtUml

    \brief An interaction operand is contained in a combined fragment. An interaction operand represents one operand of the expression given by the enclosing combined fragment.
 */

QInteractionOperand::QInteractionOperand(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInteractionOperandPrivate;
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
    QTUML_D(const QInteractionOperand);
    return d->fragments;
}

void QInteractionOperand::addFragment(QInteractionFragment *fragment)
{
    QTUML_D(QInteractionOperand);
    if (!d->fragments->contains(fragment)) {
        d->addFragment(fragment);

        // Adjust opposite property
        fragment->setEnclosingOperand(this);
    }
}

void QInteractionOperand::removeFragment(QInteractionFragment *fragment)
{
    QTUML_D(QInteractionOperand);
    if (d->fragments->contains(fragment)) {
        d->removeFragment(fragment);

        // Adjust opposite property
        fragment->setEnclosingOperand(0);
    }
}

/*!
    Constraint of the operand.
 */
QInteractionConstraint *QInteractionOperand::guard() const
{
    QTUML_D(const QInteractionOperand);
    return d->guard;
}

void QInteractionOperand::setGuard(QInteractionConstraint *guard)
{
    QTUML_D(QInteractionOperand);
    if (d->guard != guard) {
        d->setGuard(guard);
    }
}

#include "moc_qinteractionoperand.cpp"

QT_END_NAMESPACE_QTUML

