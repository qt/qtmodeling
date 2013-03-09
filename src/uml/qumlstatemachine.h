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
#ifndef QUMLSTATEMACHINE_H
#define QUMLSTATEMACHINE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlBehavior>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlNamespace;
class QUmlRedefinableElement;
class QUmlState;
class QUmlStateMachine;
class QUmlPseudostate;
class QUmlRegion;

class QUmlStateMachinePrivate;

class Q_UML_EXPORT QUmlStateMachine : public QUmlBehavior
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlStateMachine *> extendedStateMachines READ extendedStateMachines)
    Q_PROPERTY(QSet<QUmlPseudostate *> connectionPoints READ connectionPoints)
    Q_PROPERTY(QSet<QUmlState *> submachineStates READ submachineStates)
    Q_PROPERTY(QSet<QUmlRegion *> regions READ regions)

    Q_DISABLE_COPY(QUmlStateMachine)
    Q_DECLARE_PRIVATE(QUmlStateMachine)

public:
    Q_INVOKABLE explicit QUmlStateMachine(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlStateMachine();

    // Association ends from QUmlStateMachine
    Q_INVOKABLE QSet<QUmlStateMachine *> extendedStateMachines() const;
    Q_INVOKABLE void addExtendedStateMachine(QUmlStateMachine *extendedStateMachine);
    Q_INVOKABLE void removeExtendedStateMachine(QUmlStateMachine *extendedStateMachine);
    Q_INVOKABLE QSet<QUmlPseudostate *> connectionPoints() const;
    Q_INVOKABLE void addConnectionPoint(QUmlPseudostate *connectionPoint);
    Q_INVOKABLE void removeConnectionPoint(QUmlPseudostate *connectionPoint);
    Q_INVOKABLE QSet<QUmlState *> submachineStates() const;
    Q_INVOKABLE void addSubmachineState(QUmlState *submachineState);
    Q_INVOKABLE void removeSubmachineState(QUmlState *submachineState);
    Q_INVOKABLE QSet<QUmlRegion *> regions() const;
    Q_INVOKABLE void addRegion(QUmlRegion *region);
    Q_INVOKABLE void removeRegion(QUmlRegion *region);

    // Operations
    Q_INVOKABLE QUmlNamespace *LCA(const QUmlState *s1, const QUmlState *s2) const;
    Q_INVOKABLE bool ancestor(const QUmlState *s1, const QUmlState *s2) const;
    Q_INVOKABLE bool isConsistentWith(const QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(const QUmlStateMachine *redefined) const;

    virtual void setPropertyData();

protected:
    explicit QUmlStateMachine(QUmlStateMachinePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTATEMACHINE_H

