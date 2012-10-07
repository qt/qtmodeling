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

#include "qreception.h"

#include <QtUml/QSignal>

QT_BEGIN_NAMESPACE_QTUML

class QReceptionPrivate
{
public:
    explicit QReceptionPrivate();
    virtual ~QReceptionPrivate();

    QSignal *signal;
};

QReceptionPrivate::QReceptionPrivate() :
    signal(0)
{
}

QReceptionPrivate::~QReceptionPrivate()
{
}

/*!
    \class QReception

    \inmodule QtUml

    \brief A reception is a declaration stating that a classifier is prepared to react to the receipt of a signal. A reception designates a signal and specifies the expected behavioral response. The details of handling a signal are specified by the behavior associated with the reception or the classifier itself.
 */

QReception::QReception(QObject *parent)
    : QObject(parent), d_ptr(new QReceptionPrivate)
{
}

QReception::~QReception()
{
    delete d_ptr;
}

/*!
    The signal that this reception handles.
 */
QSignal *QReception::signal() const
{
    return d_ptr->signal;
}

void QReception::setSignal(const QSignal *signal)
{
    d_ptr->signal = const_cast<QSignal *>(signal);
}

#include "moc_qreception.cpp"

QT_END_NAMESPACE_QTUML

