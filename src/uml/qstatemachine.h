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

class QStateMachinePrivate;
class QNamespace;
class QRedefinableElement;
class QState;
class QPseudostate;
class QRegion;

class Q_UML_EXPORT QStateMachine : public QBehavior
{
    Q_OBJECT

    // From QBehavior
    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(const QSet<QParameterSet *> * ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QBehavioredClassifier * context READ context)

    // From QStateMachine
    Q_PROPERTY(const QSet<QStateMachine *> * extendedStateMachines READ extendedStateMachines)
    Q_PROPERTY(const QSet<QPseudostate *> * connectionPoints READ connectionPoints)
    Q_PROPERTY(const QSet<QState *> * submachineStates READ submachineStates)
    Q_PROPERTY(const QSet<QRegion *> * regions READ regions)

    Q_DISABLE_COPY(QStateMachine)
    QTUML_DECLARE_PRIVATE(QStateMachine)

public:
    explicit QStateMachine(QObject *parent = 0);
    virtual ~QStateMachine();

    // Association-ends
    const QSet<QStateMachine *> *extendedStateMachines() const;
    void addExtendedStateMachine(const QStateMachine *extendedStateMachine);
    void removeExtendedStateMachine(const QStateMachine *extendedStateMachine);
    const QSet<QPseudostate *> *connectionPoints() const;
    void addConnectionPoint(const QPseudostate *connectionPoint);
    void removeConnectionPoint(const QPseudostate *connectionPoint);
    const QSet<QState *> *submachineStates() const;
    void addSubmachineState(const QState *submachineState);
    void removeSubmachineState(const QState *submachineState);
    const QSet<QRegion *> *regions() const;
    void addRegion(const QRegion *region);
    void removeRegion(const QRegion *region);

    // Operations
    QNamespace *LCA(const QState *s1, const QState *s2) const;
    bool ancestor(const QState *s1, const QState *s2) const;
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    bool isRedefinitionContextValid(const QStateMachine *redefined) const;

protected:
    explicit QStateMachine(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QStateMachine) *> *)

QT_END_HEADER

#endif // QTUML_QSTATEMACHINE_H

