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

#include "qinclude.h"
#include "qinclude_p.h"

#include <QtUml/QUseCase>

QT_BEGIN_NAMESPACE_QTUML

QIncludePrivate::QIncludePrivate(QInclude *q_umlptr) :
    includingCase(0),
    addition(0)
{
    this->q_umlptr = q_umlptr;
}

QIncludePrivate::~QIncludePrivate()
{
}

/*!
    \class QInclude

    \inmodule QtUml

    \brief An include relationship defines that a use case contains the behavior defined in another use case.
 */

QInclude::QInclude(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QIncludePrivate(this);
}

QInclude::QInclude(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QIncludePrivate;
}

QInclude::~QInclude()
{
}

/*!
    References the use case which will include the addition and owns the include relationship.
 */
QUseCase *QInclude::includingCase() const
{
    // This is a read-write association end

    QTUML_D(const QInclude);
    return d->includingCase;
}

void QInclude::setIncludingCase(QUseCase *includingCase)
{
    // This is a read-write association end

    QTUML_D(QInclude);
    if (d->includingCase != includingCase) {
        // Adjust opposite property
        if (d->includingCase)
            d->includingCase->removeInclude(this);

        // Adjust subsetted property(ies)
        d->QDirectedRelationshipPrivate::removeSource(dynamic_cast<QElement *>(d->includingCase));

        d->includingCase = includingCase;

        // Adjust subsetted property(ies)
        if (includingCase) {
            d->QDirectedRelationshipPrivate::addSource(dynamic_cast<QElement *>(includingCase));
        }
        d->QNamedElementPrivate::setNamespace_(dynamic_cast<QNamespace *>(includingCase));

        // Adjust opposite property
        if (includingCase)
            includingCase->addInclude(this);
    }
}

/*!
    References the use case that is to be included.
 */
QUseCase *QInclude::addition() const
{
    // This is a read-write association end

    QTUML_D(const QInclude);
    return d->addition;
}

void QInclude::setAddition(QUseCase *addition)
{
    // This is a read-write association end

    QTUML_D(QInclude);
    if (d->addition != addition) {
        // Adjust subsetted property(ies)
        d->QDirectedRelationshipPrivate::removeTarget(dynamic_cast<QElement *>(d->addition));

        d->addition = addition;

        // Adjust subsetted property(ies)
        if (addition) {
            d->QDirectedRelationshipPrivate::addTarget(dynamic_cast<QElement *>(addition));
        }
    }
}

#include "moc_qinclude.cpp"

QT_END_NAMESPACE_QTUML

