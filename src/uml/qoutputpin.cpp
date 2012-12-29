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

#include "qoutputpin.h"
#include "qoutputpin_p.h"

QT_BEGIN_NAMESPACE_QTUML

QOutputPinPrivate::QOutputPinPrivate()
{
}

QOutputPinPrivate::~QOutputPinPrivate()
{
}

/*!
    \class QOutputPin

    \inmodule QtUml

    \brief An output pin is a pin that holds output values produced by an action.
 */

QOutputPin::QOutputPin(QWrappedObject *parent, QWrappedObject *wrapper) :
    QPin(*new QOutputPinPrivate, parent, wrapper)
{
}

QOutputPin::QOutputPin(QOutputPinPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QPin(dd, parent, wrapper)
{
}

QOutputPin::~QOutputPin()
{
}

void QOutputPin::registerMetaTypes() const
{
    QPin::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qoutputpin.cpp"

QT_END_NAMESPACE_QTUML

