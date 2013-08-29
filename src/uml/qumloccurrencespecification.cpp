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

QUmlOccurrenceSpecification::QUmlOccurrenceSpecification(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlLifeline *QUmlOccurrenceSpecification::covered() const
{
    return reinterpret_cast<QUmlLifeline *>(_covered);
}

void QUmlOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    UmlOccurrenceSpecification::setCovered(covered);
}

const QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toAfter() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_toAfter));
}

void QUmlOccurrenceSpecification::addToAfter(UmlGeneralOrdering *toAfter)
{
    UmlOccurrenceSpecification::addToAfter(toAfter);
}

void QUmlOccurrenceSpecification::removeToAfter(UmlGeneralOrdering *toAfter)
{
    UmlOccurrenceSpecification::removeToAfter(toAfter);
}

const QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toBefore() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_toBefore));
}

void QUmlOccurrenceSpecification::addToBefore(UmlGeneralOrdering *toBefore)
{
    UmlOccurrenceSpecification::addToBefore(toBefore);
}

void QUmlOccurrenceSpecification::removeToBefore(UmlGeneralOrdering *toBefore)
{
    UmlOccurrenceSpecification::removeToBefore(toBefore);
}

QT_END_NAMESPACE

