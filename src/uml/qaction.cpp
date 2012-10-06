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

#include "qaction.h"

QT_BEGIN_NAMESPACE_QTUML

class QActionPrivate
{
public:
    explicit QActionPrivate();
    virtual ~QActionPrivate();

    bool isLocallyReentrant;
    QList<QInputPin *> *inputs;
    QSet<QConstraint *> *localPostconditions;
    QSet<QConstraint *> *localPreconditions;
    QList<QOutputPin *> *outputs;
};

QActionPrivate::QActionPrivate() :
    isLocallyReentrant(false),
    inputs(new QList<QInputPin *>),
    localPostconditions(new QSet<QConstraint *>),
    localPreconditions(new QSet<QConstraint *>),
    outputs(new QList<QOutputPin *>)
{
}

QActionPrivate::~QActionPrivate()
{
    delete inputs;
    delete localPostconditions;
    delete localPreconditions;
    delete outputs;
}

/*!
    \class QAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */

QAction::QAction()
    : d_ptr(new QActionPrivate)
{
}

QAction::~QAction()
{
    delete d_ptr;
}

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool QAction::isLocallyReentrant() const
{
    return d_ptr->isLocallyReentrant;
}

void QAction::setLocallyReentrant(bool isLocallyReentrant)
{
    d_ptr->isLocallyReentrant = isLocallyReentrant;
}

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QClassifier *QAction::context() const
{
    qWarning("To be implemented (this is a derived associationend)");
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
const QList<QInputPin *> *QAction::inputs() const
{
    return d_ptr->inputs;
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
const QSet<QConstraint *> *QAction::localPostconditions() const
{
    return d_ptr->localPostconditions;
}

void QAction::addLocalPostcondition(const QConstraint *localPostcondition)
{
    d_ptr->localPostconditions->insert(const_cast<QConstraint *>(localPostcondition));
}

void QAction::removeLocalPostcondition(const QConstraint *localPostcondition)
{
    d_ptr->localPostconditions->remove(const_cast<QConstraint *>(localPostcondition));
}

/*!
    Constraint that must be satisfied when execution is started.
 */
const QSet<QConstraint *> *QAction::localPreconditions() const
{
    return d_ptr->localPreconditions;
}

void QAction::addLocalPrecondition(const QConstraint *localPrecondition)
{
    d_ptr->localPreconditions->insert(const_cast<QConstraint *>(localPrecondition));
}

void QAction::removeLocalPrecondition(const QConstraint *localPrecondition)
{
    d_ptr->localPreconditions->remove(const_cast<QConstraint *>(localPrecondition));
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
const QList<QOutputPin *> *QAction::outputs() const
{
    return d_ptr->outputs;
}

QT_END_NAMESPACE_QTUML

