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
#include "qdirectedrelationship_p.h"
#include "qnamedelement_p.h"
#include "qdirectedrelationship_p.h"

#include <QtUml/QUseCase>

QT_BEGIN_NAMESPACE_QTUML

QIncludePrivate::QIncludePrivate() :
    includingCase(0),
    addition(0)
{
}

QIncludePrivate::~QIncludePrivate()
{
}

void QIncludePrivate::setIncludingCase(const QUseCase *includingCase)
{
    // Adjust subsetted property(ies)
    removeSource(this->includingCase);
    this->includingCase = const_cast<QUseCase *>(includingCase);
    // Adjust subsetted property(ies)
    addSource(includingCase);
    setNamespace_(includingCase);
}

void QIncludePrivate::setAddition(const QUseCase *addition)
{
    // Adjust subsetted property(ies)
    removeTarget(this->addition);
    this->addition = const_cast<QUseCase *>(addition);
    // Adjust subsetted property(ies)
    addTarget(addition);
}

/*!
    \class QInclude

    \inmodule QtUml

    \brief An include relationship defines that a use case contains the behavior defined in another use case.
 */

QInclude::QInclude(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QIncludePrivate;
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
    Q_D(const QInclude);
    return d->includingCase;
}

void QInclude::setIncludingCase(const QUseCase *includingCase)
{
    Q_D(QInclude);
    d->setIncludingCase(const_cast<QUseCase *>(includingCase));
}

/*!
    References the use case that is to be included.
 */
QUseCase *QInclude::addition() const
{
    Q_D(const QInclude);
    return d->addition;
}

void QInclude::setAddition(const QUseCase *addition)
{
    Q_D(QInclude);
    d->setAddition(const_cast<QUseCase *>(addition));
}

#include "moc_qinclude.cpp"

QT_END_NAMESPACE_QTUML

