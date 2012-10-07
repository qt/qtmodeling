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

#include "qgeneralordering.h"

#include <QtUml/QOccurrenceSpecification>

QT_BEGIN_NAMESPACE_QTUML

class QGeneralOrderingPrivate
{
public:
    explicit QGeneralOrderingPrivate();
    virtual ~QGeneralOrderingPrivate();

    QOccurrenceSpecification *after;
    QOccurrenceSpecification *before;
};

QGeneralOrderingPrivate::QGeneralOrderingPrivate() :
    after(0),
    before(0)
{
}

QGeneralOrderingPrivate::~QGeneralOrderingPrivate()
{
}

/*!
    \class QGeneralOrdering

    \inmodule QtUml

    \brief A general ordering represents a binary relation between two occurrence specifications, to describe that one occurrence specification must occur before the other in a valid trace. This mechanism provides the ability to define partial orders of occurrence cpecifications that may otherwise not have a specified order.
 */

QGeneralOrdering::QGeneralOrdering(QObject *parent)
    : QObject(parent), d_ptr(new QGeneralOrderingPrivate)
{
}

QGeneralOrdering::~QGeneralOrdering()
{
    delete d_ptr;
}

/*!
    The OccurrenceSpecification referenced comes after the OccurrenceSpecification referenced by before.
 */
QOccurrenceSpecification *QGeneralOrdering::after() const
{
    return d_ptr->after;
}

void QGeneralOrdering::setAfter(const QOccurrenceSpecification *after)
{
    d_ptr->after = const_cast<QOccurrenceSpecification *>(after);
}

/*!
    The OccurrenceSpecification referenced comes before the OccurrenceSpecification referenced by after.
 */
QOccurrenceSpecification *QGeneralOrdering::before() const
{
    return d_ptr->before;
}

void QGeneralOrdering::setBefore(const QOccurrenceSpecification *before)
{
    d_ptr->before = const_cast<QOccurrenceSpecification *>(before);
}

#include "moc_qgeneralordering.cpp"

QT_END_NAMESPACE_QTUML

