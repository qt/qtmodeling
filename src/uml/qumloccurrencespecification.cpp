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
#include "qumloccurrencespecification.h"
#include "qumloccurrencespecification_p.h"

#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlLifeline>

QT_BEGIN_NAMESPACE

QUmlOccurrenceSpecificationPrivate::QUmlOccurrenceSpecificationPrivate() :
    covered(0)
{
}

/*!
    \class QUmlOccurrenceSpecification

    \inmodule QtUml

    \brief An occurrence specification is the basic semantic unit of interactions. The sequences of occurrences specified by them are the meanings of interactions.
 */

QUmlOccurrenceSpecification::QUmlOccurrenceSpecification(bool create_d_ptr) :
    QUmlInteractionFragment(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlOccurrenceSpecificationPrivate);
}

// Owned attributes

/*!
    References the Lifeline on which the OccurrenceSpecification appears.
 */
QUmlLifeline *QUmlOccurrenceSpecification::covered() const
{
    return 0;
}

void QUmlOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    Q_UNUSED(covered);
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification
 */
QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toAfter() const
{
    return QSet<QUmlGeneralOrdering *>();
}

void QUmlOccurrenceSpecification::addToAfter(QSet<QUmlGeneralOrdering *> toAfter)
{
    Q_UNUSED(toAfter);
}

void QUmlOccurrenceSpecification::removeToAfter(QSet<QUmlGeneralOrdering *> toAfter)
{
    Q_UNUSED(toAfter);
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification
 */
QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toBefore() const
{
    return QSet<QUmlGeneralOrdering *>();
}

void QUmlOccurrenceSpecification::addToBefore(QSet<QUmlGeneralOrdering *> toBefore)
{
    Q_UNUSED(toBefore);
}

void QUmlOccurrenceSpecification::removeToBefore(QSet<QUmlGeneralOrdering *> toBefore)
{
    Q_UNUSED(toBefore);
}

QT_END_NAMESPACE

