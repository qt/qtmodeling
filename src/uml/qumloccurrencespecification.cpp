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

#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlLifeline>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlOccurrenceSpecification

    \inmodule QtUml

    \brief An occurrence specification is the basic semantic unit of interactions. The sequences of occurrences specified by them are the meanings of interactions.
 */

QUmlOccurrenceSpecification::QUmlOccurrenceSpecification() :
    _covered(0)
{
}

// OWNED ATTRIBUTES

/*!
    References the Lifeline on which the OccurrenceSpecification appears.
 */
QUmlLifeline *QUmlOccurrenceSpecification::covered() const
{
    // This is a read-write association end

    return _covered;
}

void QUmlOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (_covered != covered) {
        _covered = covered;
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification
 */
QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toAfter() const
{
    // This is a read-write association end

    return _toAfter;
}

void QUmlOccurrenceSpecification::addToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    if (!_toAfter.contains(toAfter)) {
        _toAfter.insert(toAfter);

        // Adjust opposite properties
        if (toAfter) {
            toAfter->setBefore(this);
        }
    }
}

void QUmlOccurrenceSpecification::removeToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    if (_toAfter.contains(toAfter)) {
        _toAfter.remove(toAfter);

        // Adjust opposite properties
        if (toAfter) {
            toAfter->setBefore(0);
        }
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification
 */
QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toBefore() const
{
    // This is a read-write association end

    return _toBefore;
}

void QUmlOccurrenceSpecification::addToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    if (!_toBefore.contains(toBefore)) {
        _toBefore.insert(toBefore);

        // Adjust opposite properties
        if (toBefore) {
            toBefore->setAfter(this);
        }
    }
}

void QUmlOccurrenceSpecification::removeToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    if (_toBefore.contains(toBefore)) {
        _toBefore.remove(toBefore);

        // Adjust opposite properties
        if (toBefore) {
            toBefore->setAfter(0);
        }
    }
}

QT_END_NAMESPACE

