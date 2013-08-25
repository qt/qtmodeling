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
#include "qumlpin.h"
#include "qumlpin_p.h"

QT_BEGIN_NAMESPACE

QUmlPinPrivate::QUmlPinPrivate() :
    isControl(false)
{
}

/*!
    \class QUmlPin

    \inmodule QtUml

    \brief A pin is a typed element and multiplicity element that provides values to actions and accept result values from them.A pin is an object node for inputs and outputs to actions.
 */

QUmlPin::QUmlPin(bool create_d_ptr) :
    QUmlMultiplicityElement(false),
    QUmlObjectNode(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlPinPrivate);
}

// OWNED ATTRIBUTES

/*!
    Tells whether the pins provide data to the actions, or just controls when it executes it.
 */
bool QUmlPin::isControl() const
{
    // This is a read-write property

    QM_D(const QUmlPin);
    return d->isControl;
}

void QUmlPin::setControl(bool isControl)
{
    // This is a read-write property

    QM_D(QUmlPin);
    if (d->isControl != isControl) {
        d->isControl = isControl;
    }
}

QT_END_NAMESPACE

