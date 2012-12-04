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

#include "qchangeevent.h"
#include "qchangeevent_p.h"

#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QChangeEventPrivate::QChangeEventPrivate() :
    changeExpression(0)
{
}

QChangeEventPrivate::~QChangeEventPrivate()
{
}

/*!
    \class QChangeEvent

    \inmodule QtUml

    \brief A change event models a change in the system configuration that makes a condition true.
 */

QChangeEvent::QChangeEvent(QUmlObject *parent, QUmlObject *wrapper) :
    QEvent(*new QChangeEventPrivate, parent, wrapper)
{
}

QChangeEvent::QChangeEvent(QChangeEventPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QEvent(dd, parent, wrapper)
{
}

QChangeEvent::~QChangeEvent()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QChangeEvent
// ---------------------------------------------------------------

/*!
    A Boolean-valued expression that will result in a change event whenever its value changes from false to true.
 */
QValueSpecification *QChangeEvent::changeExpression() const
{
    // This is a read-write association end

    Q_D(const QChangeEvent);
    return d->changeExpression;
}

void QChangeEvent::setChangeExpression(QValueSpecification *changeExpression)
{
    // This is a read-write association end

    Q_D(QChangeEvent);
    if (d->changeExpression != changeExpression) {
        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(d->changeExpression));

        d->changeExpression = changeExpression;

        // Adjust subsetted property(ies)
        if (changeExpression) {
            (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(changeExpression));
        }
    }
}

#include "moc_qchangeevent.cpp"

QT_END_NAMESPACE_QTUML

