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
#include "qumlstateinvariant.h"
#include "qumlstateinvariant_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlLifeline>

QT_BEGIN_NAMESPACE

QUmlStateInvariantPrivate::QUmlStateInvariantPrivate() :
    covered(0),
    invariant(0)
{
}

/*!
    \class QUmlStateInvariant

    \inmodule QtUml

    \brief A state invariant is a runtime constraint on the participants of the interaction. It may be used to specify a variety of different kinds of constraints, such as values of attributes or variables, internal or external states, and so on. A state invariant is an interaction fragment and it is placed on a lifeline.
 */

QUmlStateInvariant::QUmlStateInvariant(bool create_d_ptr) :
    QUmlInteractionFragment(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStateInvariantPrivate);
}

// Owned attributes

/*!
    References the Lifeline on which the StateInvariant appears.
 */
QUmlLifeline *QUmlStateInvariant::covered() const
{
    return 0;
}

void QUmlStateInvariant::setCovered(QUmlLifeline *covered)
{
    Q_UNUSED(covered);
}

/*!
    A Constraint that should hold at runtime for this StateInvariant
 */
QUmlConstraint *QUmlStateInvariant::invariant() const
{
    return 0;
}

void QUmlStateInvariant::setInvariant(QUmlConstraint *invariant)
{
    Q_UNUSED(invariant);
}

QT_END_NAMESPACE

