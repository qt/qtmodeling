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
#ifndef UMLSTATEMACHINE_H
#define UMLSTATEMACHINE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlbehavior_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlNamespace;
class UmlPseudostate;
class UmlRedefinableElement;
class UmlRegion;
class UmlState;

class Q_UML_EXPORT UmlStateMachine : public UmlBehavior
{
public:
    Q_DECL_HIDDEN explicit UmlStateMachine();

    // Owned attributes
    const QSet<UmlPseudostate *> connectionPoint() const;
    void addConnectionPoint(UmlPseudostate *connectionPoint);
    void removeConnectionPoint(UmlPseudostate *connectionPoint);
    const QSet<UmlStateMachine *> extendedStateMachine() const;
    void addExtendedStateMachine(UmlStateMachine *extendedStateMachine);
    void removeExtendedStateMachine(UmlStateMachine *extendedStateMachine);
    const QSet<UmlRegion *> region() const;
    void addRegion(UmlRegion *region);
    void removeRegion(UmlRegion *region);
    const QSet<UmlState *> submachineState() const;
    void addSubmachineState(UmlState *submachineState);
    void removeSubmachineState(UmlState *submachineState);

    // Operations
    UmlNamespace *LCA(UmlState *s1, UmlState *s2) const;
    bool ancestor(UmlState *s1, UmlState *s2) const;
    bool isConsistentWith(UmlRedefinableElement *redefinee) const;
    bool isRedefinitionContextValid(UmlStateMachine *redefined) const;

protected:
    QSet<UmlPseudostate *> _connectionPoint;
    QSet<UmlStateMachine *> _extendedStateMachine;
    QSet<UmlRegion *> _region;
    QSet<UmlState *> _submachineState;
};

#endif // UMLSTATEMACHINE_H

