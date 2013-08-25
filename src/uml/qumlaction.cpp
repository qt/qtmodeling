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
#include "qumlaction.h"
#include "qumlaction_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlActionPrivate::QUmlActionPrivate() :
    isLocallyReentrant(false)
{
}

/*!
    \class QUmlAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */

QUmlAction::QUmlAction(bool create_d_ptr) :
    QUmlExecutableNode(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlActionPrivate);
}

// OWNED ATTRIBUTES

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QUmlClassifier *QUmlAction::context() const
{
    // This is a read-only derived association end

    qWarning("QUmlAction::context(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
QList<QUmlInputPin *> QUmlAction::input() const
{
    // This is a read-only derived union association end

    QM_D(const QUmlAction);
    return d->input;
}

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool QUmlAction::isLocallyReentrant() const
{
    // This is a read-write property

    QM_D(const QUmlAction);
    return d->isLocallyReentrant;
}

void QUmlAction::setLocallyReentrant(bool isLocallyReentrant)
{
    // This is a read-write property

    QM_D(QUmlAction);
    if (d->isLocallyReentrant != isLocallyReentrant) {
        d->isLocallyReentrant = isLocallyReentrant;
    }
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
QSet<QUmlConstraint *> QUmlAction::localPostcondition() const
{
    // This is a read-write association end

    QM_D(const QUmlAction);
    return d->localPostcondition;
}

void QUmlAction::addLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    QM_D(QUmlAction);
    if (!d->localPostcondition.contains(localPostcondition)) {
        d->localPostcondition.insert(localPostcondition);
    }
}

void QUmlAction::removeLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    QM_D(QUmlAction);
    if (d->localPostcondition.contains(localPostcondition)) {
        d->localPostcondition.remove(localPostcondition);
    }
}

/*!
    Constraint that must be satisfied when execution is started.
 */
QSet<QUmlConstraint *> QUmlAction::localPrecondition() const
{
    // This is a read-write association end

    QM_D(const QUmlAction);
    return d->localPrecondition;
}

void QUmlAction::addLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    QM_D(QUmlAction);
    if (!d->localPrecondition.contains(localPrecondition)) {
        d->localPrecondition.insert(localPrecondition);
    }
}

void QUmlAction::removeLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    QM_D(QUmlAction);
    if (d->localPrecondition.contains(localPrecondition)) {
        d->localPrecondition.remove(localPrecondition);
    }
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
QList<QUmlOutputPin *> QUmlAction::output() const
{
    // This is a read-only derived union association end

    QM_D(const QUmlAction);
    return d->output;
}

QT_END_NAMESPACE

