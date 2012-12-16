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
** rights. These rights are described in the Nokia  LGPL Exception
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
#ifndef QTUML_QSTATEMACHINE_H
#define QTUML_QSTATEMACHINE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QBehavior>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QNamespace;
class QRedefinableElement;
class QState;
class QPseudostate;
class QRegion;

class QStateMachinePrivate;

class Q_UML_EXPORT QStateMachine : public QBehavior
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QStateMachine *> * extendedStateMachines READ extendedStateMachines)
    Q_PROPERTY(const QSet<QPseudostate *> * connectionPoints READ connectionPoints)
    Q_PROPERTY(const QSet<QState *> * submachineStates READ submachineStates)
    Q_PROPERTY(const QSet<QRegion *> * regions READ regions)

    Q_DISABLE_COPY(QStateMachine)
    Q_DECLARE_PRIVATE(QStateMachine)

public:
    Q_INVOKABLE explicit QStateMachine(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QStateMachine();

    // Association ends from QStateMachine
    Q_INVOKABLE const QSet<QStateMachine *> *extendedStateMachines() const;
    Q_INVOKABLE void addExtendedStateMachine(QStateMachine *extendedStateMachine);
    Q_INVOKABLE void removeExtendedStateMachine(QStateMachine *extendedStateMachine);
    Q_INVOKABLE const QSet<QPseudostate *> *connectionPoints() const;
    Q_INVOKABLE void addConnectionPoint(QPseudostate *connectionPoint);
    Q_INVOKABLE void removeConnectionPoint(QPseudostate *connectionPoint);
    Q_INVOKABLE const QSet<QState *> *submachineStates() const;
    Q_INVOKABLE void addSubmachineState(QState *submachineState);
    Q_INVOKABLE void removeSubmachineState(QState *submachineState);
    Q_INVOKABLE const QSet<QRegion *> *regions() const;
    Q_INVOKABLE void addRegion(QRegion *region);
    Q_INVOKABLE void removeRegion(QRegion *region);

    // Operations
    Q_INVOKABLE QNamespace *LCA(const QState *s1, const QState *s2) const;
    Q_INVOKABLE bool ancestor(const QState *s1, const QState *s2) const;
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(const QStateMachine *redefined) const;
    virtual void registerMetaTypes() const;

protected:
    explicit QStateMachine(QStateMachinePrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *> *)

QT_END_HEADER

#endif // QTUML_QSTATEMACHINE_H

