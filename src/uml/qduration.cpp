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

#include "qduration.h"
#include "qduration_p.h"
#include "qelement_p.h"

#include <QtUml/QObservation>

QT_BEGIN_NAMESPACE_QTUML

QDurationPrivate::QDurationPrivate() :
    expr(0),
    observations(new QSet<QObservation *>)
{
}

QDurationPrivate::~QDurationPrivate()
{
    delete observations;
}

void QDurationPrivate::setExpr(const QValueSpecification *expr)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->expr);

    this->expr = const_cast<QValueSpecification *>(expr);

    // Adjust subsetted property(ies)
    addOwnedElement(expr);
}

void QDurationPrivate::addObservation(const QObservation *observation)
{
    this->observations->insert(const_cast<QObservation *>(observation));
}

void QDurationPrivate::removeObservation(const QObservation *observation)
{
    this->observations->remove(const_cast<QObservation *>(observation));
}

/*!
    \class QDuration

    \inmodule QtUml

    \brief Duration defines a value specification that specifies the temporal distance between two time instants.
 */

QDuration::QDuration(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QDurationPrivate;
}

QDuration::QDuration(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QDurationPrivate;
}

QDuration::~QDuration()
{
}

/*!
    The value of the Duration.
 */
QValueSpecification *QDuration::expr() const
{
    Q_D(const QDuration);
    return d->expr;
}

void QDuration::setExpr(const QValueSpecification *expr)
{
    Q_D(QDuration);
    d->setExpr(const_cast<QValueSpecification *>(expr));
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
const QSet<QObservation *> *QDuration::observations() const
{
    Q_D(const QDuration);
    return d->observations;
}

void QDuration::addObservation(const QObservation *observation)
{
    Q_D(QDuration);
    d->addObservation(const_cast<QObservation *>(observation));
}

void QDuration::removeObservation(const QObservation *observation)
{
    Q_D(QDuration);
    d->removeObservation(const_cast<QObservation *>(observation));
}

#include "moc_qduration.cpp"

QT_END_NAMESPACE_QTUML
