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
#ifndef QUMLSTATEMACHINE_H
#define QUMLSTATEMACHINE_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlBehavior>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlNamespace;
class QUmlPseudostate;
class QUmlRedefinableElement;
class QUmlRegion;
class QUmlState;

class Q_UML_EXPORT QUmlStateMachine : public QUmlBehavior
{
public:
    QUmlStateMachine();

    // Owned attributes
    const QSet<QUmlPseudostate *> connectionPoint() const;
    void addConnectionPoint(QUmlPseudostate *connectionPoint);
    void removeConnectionPoint(QUmlPseudostate *connectionPoint);
    const QSet<QUmlStateMachine *> extendedStateMachine() const;
    void addExtendedStateMachine(QUmlStateMachine *extendedStateMachine);
    void removeExtendedStateMachine(QUmlStateMachine *extendedStateMachine);
    const QSet<QUmlRegion *> region() const;
    void addRegion(QUmlRegion *region);
    void removeRegion(QUmlRegion *region);
    const QSet<QUmlState *> submachineState() const;
    void addSubmachineState(QUmlState *submachineState);
    void removeSubmachineState(QUmlState *submachineState);

    // Operations
    QUmlNamespace *LCA(QUmlState *s1, QUmlState *s2) const;
    bool ancestor(QUmlState *s1, QUmlState *s2) const;
    bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    bool isRedefinitionContextValid(QUmlStateMachine *redefined) const;

protected:
    QSet<QUmlPseudostate *> _connectionPoint;
    QSet<QUmlStateMachine *> _extendedStateMachine;
    QSet<QUmlRegion *> _region;
    QSet<QUmlState *> _submachineState;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlStateMachine *)
Q_DECLARE_METATYPE(QList<QUmlStateMachine *> *)
Q_DECLARE_METATYPE(QSet<QUmlStateMachine *> *)

QT_END_HEADER

#endif // QUMLSTATEMACHINE_H

