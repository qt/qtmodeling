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
#ifndef QUMLSTATE_H
#define QUMLSTATE_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlVertex>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlClassifier;
class QUmlConnectionPointReference;
class QUmlConstraint;
class QUmlPseudostate;
class QUmlRegion;
class QUmlStateMachine;
class QUmlTrigger;

class Q_UML_EXPORT QUmlState : public QUmlNamespace, public QUmlRedefinableElement, public QUmlVertex
{
public:
    QUmlState();

    // Owned attributes
    QSet<QUmlConnectionPointReference *> connection() const;
    void addConnection(QUmlConnectionPointReference *connection);
    void removeConnection(QUmlConnectionPointReference *connection);
    QSet<QUmlPseudostate *> connectionPoint() const;
    void addConnectionPoint(QUmlPseudostate *connectionPoint);
    void removeConnectionPoint(QUmlPseudostate *connectionPoint);
    QSet<QUmlTrigger *> deferrableTrigger() const;
    void addDeferrableTrigger(QUmlTrigger *deferrableTrigger);
    void removeDeferrableTrigger(QUmlTrigger *deferrableTrigger);
    QUmlBehavior *doActivity() const;
    void setDoActivity(QUmlBehavior *doActivity);
    QUmlBehavior *entry() const;
    void setEntry(QUmlBehavior *entry);
    QUmlBehavior *exit() const;
    void setExit(QUmlBehavior *exit);
    bool isComposite() const;
    Q_DECL_HIDDEN void setComposite(bool isComposite);
    bool isOrthogonal() const;
    Q_DECL_HIDDEN void setOrthogonal(bool isOrthogonal);
    bool isSimple() const;
    Q_DECL_HIDDEN void setSimple(bool isSimple);
    bool isSubmachineState() const;
    Q_DECL_HIDDEN void setSubmachineState(bool isSubmachineState);
    QUmlState *redefinedState() const;
    void setRedefinedState(QUmlState *redefinedState);
    QUmlClassifier *redefinitionContext() const;
    Q_DECL_HIDDEN void setRedefinitionContext(QUmlClassifier *redefinitionContext);
    QSet<QUmlRegion *> region() const;
    void addRegion(QUmlRegion *region);
    void removeRegion(QUmlRegion *region);
    QUmlConstraint *stateInvariant() const;
    void setStateInvariant(QUmlConstraint *stateInvariant);
    QUmlStateMachine *submachine() const;
    void setSubmachine(QUmlStateMachine *submachine);

    // Operations
    QUmlStateMachine *containingStateMachine() const;
    bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    bool isRedefinitionContextValid(QUmlState *redefined) const;

protected:
    QSet<QUmlConnectionPointReference *> _connection;
    QSet<QUmlPseudostate *> _connectionPoint;
    QSet<QUmlTrigger *> _deferrableTrigger;
    QUmlBehavior *_doActivity;
    QUmlBehavior *_entry;
    QUmlBehavior *_exit;
    QUmlState *_redefinedState;
    QSet<QUmlRegion *> _region;
    QUmlConstraint *_stateInvariant;
    QUmlStateMachine *_submachine;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlState *)
Q_DECLARE_METATYPE(QList<QUmlState *> *)
Q_DECLARE_METATYPE(QSet<QUmlState *> *)

QT_END_HEADER

#endif // QUMLSTATE_H

