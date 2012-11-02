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

#include "qmessageoccurrencespecification.h"
#include "qmessageoccurrencespecification_p.h"


QT_BEGIN_NAMESPACE_QTUML

QMessageOccurrenceSpecificationPrivate::QMessageOccurrenceSpecificationPrivate()
{
}

QMessageOccurrenceSpecificationPrivate::~QMessageOccurrenceSpecificationPrivate()
{
}

/*!
    \class QMessageOccurrenceSpecification

    \inmodule QtUml

    \brief A message occurrence specification pecifies the occurrence of message events, such as sending and receiving of signals or invoking or receiving of operation calls. A message occurrence specification is a kind of message end. Messages are generated either by synchronous operation calls or asynchronous signal sends. They are received by the execution of corresponding accept event actions.
 */

QMessageOccurrenceSpecification::QMessageOccurrenceSpecification(QObject *parent) :
    QObject(*new QMessageOccurrenceSpecificationPrivate, parent),
    _wrappedOccurrenceSpecification(new QOccurrenceSpecification(this)),
    _wrappedMessageEnd(new QMessageEnd(this))
{
}

QMessageOccurrenceSpecification::QMessageOccurrenceSpecification(QMessageOccurrenceSpecificationPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedOccurrenceSpecification(new QOccurrenceSpecification(this)),
    _wrappedMessageEnd(new QMessageEnd(this))
{
}

QMessageOccurrenceSpecification::~QMessageOccurrenceSpecification()
{
}

#include "moc_qmessageoccurrencespecification.cpp"

QT_END_NAMESPACE_QTUML

