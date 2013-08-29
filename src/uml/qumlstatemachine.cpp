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
#include "qumlstatemachine.h"

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>

QT_BEGIN_NAMESPACE

QUmlStateMachine::QUmlStateMachine(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlPseudostate *> QUmlStateMachine::connectionPoint() const
{
    return *(reinterpret_cast<const QSet<QUmlPseudostate *> *>(&_connectionPoint));
}

void QUmlStateMachine::addConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlStateMachine::addConnectionPoint(connectionPoint);
}

void QUmlStateMachine::removeConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlStateMachine::removeConnectionPoint(connectionPoint);
}

const QSet<QUmlStateMachine *> QUmlStateMachine::extendedStateMachine() const
{
    return *(reinterpret_cast<const QSet<QUmlStateMachine *> *>(&_extendedStateMachine));
}

void QUmlStateMachine::addExtendedStateMachine(UmlStateMachine *extendedStateMachine)
{
    UmlStateMachine::addExtendedStateMachine(extendedStateMachine);
}

void QUmlStateMachine::removeExtendedStateMachine(UmlStateMachine *extendedStateMachine)
{
    UmlStateMachine::removeExtendedStateMachine(extendedStateMachine);
}

const QSet<QUmlRegion *> QUmlStateMachine::region() const
{
    return *(reinterpret_cast<const QSet<QUmlRegion *> *>(&_region));
}

void QUmlStateMachine::addRegion(UmlRegion *region)
{
    UmlStateMachine::addRegion(region);
}

void QUmlStateMachine::removeRegion(UmlRegion *region)
{
    UmlStateMachine::removeRegion(region);
}

const QSet<QUmlState *> QUmlStateMachine::submachineState() const
{
    return *(reinterpret_cast<const QSet<QUmlState *> *>(&_submachineState));
}

void QUmlStateMachine::addSubmachineState(UmlState *submachineState)
{
    UmlStateMachine::addSubmachineState(submachineState);
}

void QUmlStateMachine::removeSubmachineState(UmlState *submachineState)
{
    UmlStateMachine::removeSubmachineState(submachineState);
}

// Operations

QUmlNamespace *QUmlStateMachine::LCA(QUmlState *s1, QUmlState *s2) const
{
    return reinterpret_cast<QUmlNamespace *>(UmlStateMachine::LCA(s1, s2));
}

bool QUmlStateMachine::ancestor(QUmlState *s1, QUmlState *s2) const
{
    return UmlStateMachine::ancestor(s1, s2);
}

bool QUmlStateMachine::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlStateMachine::isConsistentWith(redefinee);
}

bool QUmlStateMachine::isRedefinitionContextValid(QUmlStateMachine *redefined) const
{
    return UmlStateMachine::isRedefinitionContextValid(redefined);
}

QT_END_NAMESPACE

