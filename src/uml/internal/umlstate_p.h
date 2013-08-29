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
#ifndef UMLSTATE_H
#define UMLSTATE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlnamespace_p.h"
#include "private/umlredefinableelement_p.h"
#include "private/umlvertex_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlBehavior;
class UmlClassifier;
class UmlConnectionPointReference;
class UmlConstraint;
class UmlPseudostate;
class UmlRegion;
class UmlStateMachine;
class UmlTrigger;

class Q_UML_EXPORT UmlState : public UmlNamespace, public UmlRedefinableElement, public UmlVertex
{
public:
    Q_DECL_HIDDEN explicit UmlState();

    // Owned attributes
    const QSet<UmlConnectionPointReference *> connection() const;
    void addConnection(UmlConnectionPointReference *connection);
    void removeConnection(UmlConnectionPointReference *connection);
    const QSet<UmlPseudostate *> connectionPoint() const;
    void addConnectionPoint(UmlPseudostate *connectionPoint);
    void removeConnectionPoint(UmlPseudostate *connectionPoint);
    const QSet<UmlTrigger *> deferrableTrigger() const;
    void addDeferrableTrigger(UmlTrigger *deferrableTrigger);
    void removeDeferrableTrigger(UmlTrigger *deferrableTrigger);
    UmlBehavior *doActivity() const;
    void setDoActivity(UmlBehavior *doActivity);
    UmlBehavior *entry() const;
    void setEntry(UmlBehavior *entry);
    UmlBehavior *exit() const;
    void setExit(UmlBehavior *exit);
    bool isComposite() const;
    Q_DECL_HIDDEN void setComposite(bool isComposite);
    bool isOrthogonal() const;
    Q_DECL_HIDDEN void setOrthogonal(bool isOrthogonal);
    bool isSimple() const;
    Q_DECL_HIDDEN void setSimple(bool isSimple);
    bool isSubmachineState() const;
    Q_DECL_HIDDEN void setSubmachineState(bool isSubmachineState);
    UmlState *redefinedState() const;
    void setRedefinedState(UmlState *redefinedState);
    UmlClassifier *redefinitionContext() const;
    Q_DECL_HIDDEN void setRedefinitionContext(UmlClassifier *redefinitionContext);
    const QSet<UmlRegion *> region() const;
    void addRegion(UmlRegion *region);
    void removeRegion(UmlRegion *region);
    UmlConstraint *stateInvariant() const;
    void setStateInvariant(UmlConstraint *stateInvariant);
    UmlStateMachine *submachine() const;
    void setSubmachine(UmlStateMachine *submachine);

    // Operations
    UmlStateMachine *containingStateMachine() const;
    bool isConsistentWith(UmlRedefinableElement *redefinee) const;
    bool isRedefinitionContextValid(UmlState *redefined) const;

protected:
    QSet<UmlConnectionPointReference *> _connection;
    QSet<UmlPseudostate *> _connectionPoint;
    QSet<UmlTrigger *> _deferrableTrigger;
    UmlBehavior *_doActivity;
    UmlBehavior *_entry;
    UmlBehavior *_exit;
    UmlState *_redefinedState;
    QSet<UmlRegion *> _region;
    UmlConstraint *_stateInvariant;
    UmlStateMachine *_submachine;
};

#endif // UMLSTATE_H

