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
#include "qumlregion.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

QUmlRegion::QUmlRegion(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlRegion *QUmlRegion::extendedRegion() const
{
    return reinterpret_cast<QUmlRegion *>(_extendedRegion);
}

void QUmlRegion::setExtendedRegion(QUmlRegion *extendedRegion)
{
    UmlRegion::setExtendedRegion(extendedRegion);
}

QUmlClassifier *QUmlRegion::redefinitionContext() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlRegion::redefinitionContext());
}

QUmlState *QUmlRegion::state() const
{
    return reinterpret_cast<QUmlState *>(_state);
}

void QUmlRegion::setState(QUmlState *state)
{
    UmlRegion::setState(state);
}

QUmlStateMachine *QUmlRegion::stateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(_stateMachine);
}

void QUmlRegion::setStateMachine(QUmlStateMachine *stateMachine)
{
    UmlRegion::setStateMachine(stateMachine);
}

const QSet<QUmlVertex *> QUmlRegion::subvertex() const
{
    return *(reinterpret_cast<const QSet<QUmlVertex *> *>(&_subvertex));
}

void QUmlRegion::addSubvertex(UmlVertex *subvertex)
{
    UmlRegion::addSubvertex(subvertex);
}

void QUmlRegion::removeSubvertex(UmlVertex *subvertex)
{
    UmlRegion::removeSubvertex(subvertex);
}

const QSet<QUmlTransition *> QUmlRegion::transition() const
{
    return *(reinterpret_cast<const QSet<QUmlTransition *> *>(&_transition));
}

void QUmlRegion::addTransition(UmlTransition *transition)
{
    UmlRegion::addTransition(transition);
}

void QUmlRegion::removeTransition(UmlTransition *transition)
{
    UmlRegion::removeTransition(transition);
}

// Operations

bool QUmlRegion::belongsToPSM() const
{
    return UmlRegion::belongsToPSM();
}

QUmlStateMachine *QUmlRegion::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlRegion::containingStateMachine());
}

bool QUmlRegion::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlRegion::isConsistentWith(redefinee);
}

bool QUmlRegion::isRedefinitionContextValid(QUmlRegion *redefined) const
{
    return UmlRegion::isRedefinitionContextValid(redefined);
}

QT_END_NAMESPACE

