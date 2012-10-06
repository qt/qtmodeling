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

#include <QtUml/QUseCase>

QT_BEGIN_NAMESPACE_QTUML

class QIncludePrivate
{
public:
    explicit QIncludePrivate();
    virtual ~QIncludePrivate();

    QUseCase *addition;
    QUseCase *includingCase;
};

QIncludePrivate::QIncludePrivate()
{
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
    : QObject(parent), d_ptr(new QIncludePrivate)
{
}

QInclude::~QInclude()
{
    delete d_ptr;
}

/*!
    References the use case that is to be included.
 */
QUseCase *QInclude::addition() const
{
    return d_ptr->addition;
}

void QInclude::setAddition(const QUseCase *addition)
{
    d_ptr->addition = const_cast<QUseCase *>(addition);
}

/*!
    References the use case which will include the addition and owns the include relationship.
 */
QUseCase *QInclude::includingCase() const
{
    return d_ptr->includingCase;
}

void QInclude::setIncludingCase(const QUseCase *includingCase)
{
    d_ptr->includingCase = const_cast<QUseCase *>(includingCase);
}

#include "moc_qinclude.cpp"

QT_END_NAMESPACE_QTUML

