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
#include "qumlstate.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

QUmlState::QUmlState(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlConnectionPointReference *> QUmlState::connection() const
{
    return *(reinterpret_cast<const QSet<QUmlConnectionPointReference *> *>(&_connection));
}

void QUmlState::addConnection(UmlConnectionPointReference *connection)
{
    UmlState::addConnection(connection);
}

void QUmlState::removeConnection(UmlConnectionPointReference *connection)
{
    UmlState::removeConnection(connection);
}

const QSet<QUmlPseudostate *> QUmlState::connectionPoint() const
{
    return *(reinterpret_cast<const QSet<QUmlPseudostate *> *>(&_connectionPoint));
}

void QUmlState::addConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlState::addConnectionPoint(connectionPoint);
}

void QUmlState::removeConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlState::removeConnectionPoint(connectionPoint);
}

const QSet<QUmlTrigger *> QUmlState::deferrableTrigger() const
{
    return *(reinterpret_cast<const QSet<QUmlTrigger *> *>(&_deferrableTrigger));
}

void QUmlState::addDeferrableTrigger(UmlTrigger *deferrableTrigger)
{
    UmlState::addDeferrableTrigger(deferrableTrigger);
}

void QUmlState::removeDeferrableTrigger(UmlTrigger *deferrableTrigger)
{
    UmlState::removeDeferrableTrigger(deferrableTrigger);
}

QUmlBehavior *QUmlState::doActivity() const
{
    return reinterpret_cast<QUmlBehavior *>(_doActivity);
}

void QUmlState::setDoActivity(QUmlBehavior *doActivity)
{
    UmlState::setDoActivity(doActivity);
}

QUmlBehavior *QUmlState::entry() const
{
    return reinterpret_cast<QUmlBehavior *>(_entry);
}

void QUmlState::setEntry(QUmlBehavior *entry)
{
    UmlState::setEntry(entry);
}

QUmlBehavior *QUmlState::exit() const
{
    return reinterpret_cast<QUmlBehavior *>(_exit);
}

void QUmlState::setExit(QUmlBehavior *exit)
{
    UmlState::setExit(exit);
}

bool QUmlState::isComposite() const
{
    return UmlState::isComposite();
}

bool QUmlState::isOrthogonal() const
{
    return UmlState::isOrthogonal();
}

bool QUmlState::isSimple() const
{
    return UmlState::isSimple();
}

bool QUmlState::isSubmachineState() const
{
    return UmlState::isSubmachineState();
}

QUmlState *QUmlState::redefinedState() const
{
    return reinterpret_cast<QUmlState *>(_redefinedState);
}

void QUmlState::setRedefinedState(QUmlState *redefinedState)
{
    UmlState::setRedefinedState(redefinedState);
}

QUmlClassifier *QUmlState::redefinitionContext() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlState::redefinitionContext());
}

const QSet<QUmlRegion *> QUmlState::region() const
{
    return *(reinterpret_cast<const QSet<QUmlRegion *> *>(&_region));
}

void QUmlState::addRegion(UmlRegion *region)
{
    UmlState::addRegion(region);
}

void QUmlState::removeRegion(UmlRegion *region)
{
    UmlState::removeRegion(region);
}

QUmlConstraint *QUmlState::stateInvariant() const
{
    return reinterpret_cast<QUmlConstraint *>(_stateInvariant);
}

void QUmlState::setStateInvariant(QUmlConstraint *stateInvariant)
{
    UmlState::setStateInvariant(stateInvariant);
}

QUmlStateMachine *QUmlState::submachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(_submachine);
}

void QUmlState::setSubmachine(QUmlStateMachine *submachine)
{
    UmlState::setSubmachine(submachine);
}

// Operations

QUmlStateMachine *QUmlState::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlState::containingStateMachine());
}

bool QUmlState::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlState::isConsistentWith(redefinee);
}

bool QUmlState::isRedefinitionContextValid(QUmlState *redefined) const
{
    return UmlState::isRedefinitionContextValid(redefined);
}

QT_END_NAMESPACE

