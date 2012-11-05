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

#include "qcreatelinkobjectaction.h"
#include "qcreatelinkobjectaction_p.h"

#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QCreateLinkObjectActionPrivate::QCreateLinkObjectActionPrivate() :
    result(0)
{
}

QCreateLinkObjectActionPrivate::~QCreateLinkObjectActionPrivate()
{
}

/*!
    \class QCreateLinkObjectAction

    \inmodule QtUml

    \brief A create link object action creates a link object.
 */

QCreateLinkObjectAction::QCreateLinkObjectAction(QObject *parent) :
    QCreateLinkAction(*new QCreateLinkObjectActionPrivate, parent)
{
}

QCreateLinkObjectAction::QCreateLinkObjectAction(QCreateLinkObjectActionPrivate &dd, QObject *parent) :
    QCreateLinkAction(dd, parent)
{
}

QCreateLinkObjectAction::~QCreateLinkObjectAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCreateLinkObjectAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QCreateLinkObjectAction::result() const
{
    // This is a read-write association end

    Q_D(const QCreateLinkObjectAction);
    return d->result;
}

void QCreateLinkObjectAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QCreateLinkObjectAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QActionPrivate *>(d))->removeOutput(qtuml_object_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qtuml_object_cast<QActionPrivate *>(d))->addOutput(qtuml_object_cast<QOutputPin *>(result));
        }
    }
}

#include "moc_qcreatelinkobjectaction.cpp"

QT_END_NAMESPACE_QTUML

