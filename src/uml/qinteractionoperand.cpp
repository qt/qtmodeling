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

/*!
    \class QInteractionOperand

    \inmodule QtUml

    \brief An interaction operand is contained in a combined fragment. An interaction operand represents one operand of the expression given by the enclosing combined fragment.
 */

QInteractionOperand::QInteractionOperand(QObject *parent)
    : QObject(parent), d_ptr(new QInteractionOperandPrivate)
{
}

QInteractionOperand::~QInteractionOperand()
{
    delete d_ptr;
}

/*!
    The fragments of the operand.
 */
const QList<QInteractionFragment *> *QInteractionOperand::fragments() const
{
    return d_ptr->fragments;
}

void QInteractionOperand::addFragment(const QInteractionFragment *fragment)
{
    d_ptr->fragments->append(const_cast<QInteractionFragment *>(fragment));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->insert(const_cast<QInteractionFragment *>(fragment));
}

void QInteractionOperand::removeFragment(const QInteractionFragment *fragment)
{
    d_ptr->fragments->removeAll(const_cast<QInteractionFragment *>(fragment));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->remove(const_cast<QInteractionFragment *>(fragment));
}

/*!
    Constraint of the operand.
 */
QInteractionConstraint *QInteractionOperand::guard() const
{
    return d_ptr->guard;
}

void QInteractionOperand::setGuard(const QInteractionConstraint *guard)
{
    d_ptr->guard = const_cast<QInteractionConstraint *>(guard);
}

#include "moc_qinteractionoperand.cpp"

QT_END_NAMESPACE_QTUML

