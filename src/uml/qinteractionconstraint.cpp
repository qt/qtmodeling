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

#include "qinteractionconstraint.h"
#include "qinteractionconstraint_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QInteractionConstraintPrivate::QInteractionConstraintPrivate() :
    maxint(0),
    minint(0)
{
}

QInteractionConstraintPrivate::~QInteractionConstraintPrivate()
{
}

void QInteractionConstraintPrivate::setMaxint(const QValueSpecification *maxint)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->maxint);

    this->maxint = const_cast<QValueSpecification *>(maxint);

    // Adjust subsetted property(ies)
    addOwnedElement(maxint);
}

void QInteractionConstraintPrivate::setMinint(const QValueSpecification *minint)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->minint);

    this->minint = const_cast<QValueSpecification *>(minint);

    // Adjust subsetted property(ies)
    addOwnedElement(minint);
}

/*!
    \class QInteractionConstraint

    \inmodule QtUml

    \brief An interaction constraint is a Boolean expression that guards an operand in a combined fragment.
 */

QInteractionConstraint::QInteractionConstraint(QObject *parent)
    : QConstraint(false, parent)
{
    d_umlptr = new QInteractionConstraintPrivate;
}

QInteractionConstraint::QInteractionConstraint(bool createPimpl, QObject *parent)
    : QConstraint(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QInteractionConstraintPrivate;
}

QInteractionConstraint::~QInteractionConstraint()
{
}

/*!
    The maximum number of iterations of a loop
 */
QValueSpecification *QInteractionConstraint::maxint() const
{
    QTUML_D(const QInteractionConstraint);
    return d->maxint;
}

void QInteractionConstraint::setMaxint(const QValueSpecification *maxint)
{
    QTUML_D(QInteractionConstraint);
    d->setMaxint(const_cast<QValueSpecification *>(maxint));
}

/*!
    The minimum number of iterations of a loop
 */
QValueSpecification *QInteractionConstraint::minint() const
{
    QTUML_D(const QInteractionConstraint);
    return d->minint;
}

void QInteractionConstraint::setMinint(const QValueSpecification *minint)
{
    QTUML_D(QInteractionConstraint);
    d->setMinint(const_cast<QValueSpecification *>(minint));
}

#include "moc_qinteractionconstraint.cpp"

QT_END_NAMESPACE_QTUML

