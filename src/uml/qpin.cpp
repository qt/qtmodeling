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

#include "qpin.h"
#include "qpin_p.h"


QT_BEGIN_NAMESPACE_QTUML

QPinPrivate::QPinPrivate() :
    isControl(false)
{
}

QPinPrivate::~QPinPrivate()
{
}

void QPinPrivate::setControl(bool isControl)
{
    this->isControl = isControl;
}

/*!
    \class QPin

    \inmodule QtUml

    \brief A pin is a typed element and multiplicity element that provides values to actions and accept result values from them.A pin is an object node for inputs and outputs to actions.
 */

QPin::QPin()
{
}

QPin::~QPin()
{
}

/*!
    Tells whether the pins provide data to the actions, or just controls when it executes it.
 */
bool QPin::isControl() const
{
    QTUML_D(const QPin);
    return d->isControl;
}

void QPin::setControl(bool isControl)
{
    QTUML_D(QPin);
    if (d->isControl != isControl) {
        d->setControl(isControl);
    }
}

QT_END_NAMESPACE_QTUML

