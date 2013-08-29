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
#include "qumltransition.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

QUmlTransition::QUmlTransition(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlRegion *QUmlTransition::container() const
{
    return reinterpret_cast<QUmlRegion *>(_container);
}

void QUmlTransition::setContainer(QUmlRegion *container)
{
    UmlTransition::setContainer(container);
}

QUmlBehavior *QUmlTransition::effect() const
{
    return reinterpret_cast<QUmlBehavior *>(_effect);
}

void QUmlTransition::setEffect(QUmlBehavior *effect)
{
    UmlTransition::setEffect(effect);
}

QUmlConstraint *QUmlTransition::guard() const
{
    return reinterpret_cast<QUmlConstraint *>(_guard);
}

void QUmlTransition::setGuard(QUmlConstraint *guard)
{
    UmlTransition::setGuard(guard);
}

QtUml::TransitionKind QUmlTransition::kind() const
{
    return _kind;
}

void QUmlTransition::setKind(QtUml::TransitionKind kind)
{
    UmlTransition::setKind(kind);
}

QUmlTransition *QUmlTransition::redefinedTransition() const
{
    return reinterpret_cast<QUmlTransition *>(_redefinedTransition);
}

void QUmlTransition::setRedefinedTransition(QUmlTransition *redefinedTransition)
{
    UmlTransition::setRedefinedTransition(redefinedTransition);
}

QUmlClassifier *QUmlTransition::redefinitionContext() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlTransition::redefinitionContext());
}

QUmlVertex *QUmlTransition::source() const
{
    return reinterpret_cast<QUmlVertex *>(_source);
}

void QUmlTransition::setSource(QUmlVertex *source)
{
    UmlTransition::setSource(source);
}

QUmlVertex *QUmlTransition::target() const
{
    return reinterpret_cast<QUmlVertex *>(_target);
}

void QUmlTransition::setTarget(QUmlVertex *target)
{
    UmlTransition::setTarget(target);
}

const QSet<QUmlTrigger *> QUmlTransition::trigger() const
{
    return *(reinterpret_cast<const QSet<QUmlTrigger *> *>(&_trigger));
}

void QUmlTransition::addTrigger(UmlTrigger *trigger)
{
    UmlTransition::addTrigger(trigger);
}

void QUmlTransition::removeTrigger(UmlTrigger *trigger)
{
    UmlTransition::removeTrigger(trigger);
}

// Operations

QUmlStateMachine *QUmlTransition::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlTransition::containingStateMachine());
}

bool QUmlTransition::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlTransition::isConsistentWith(redefinee);
}

QT_END_NAMESPACE

