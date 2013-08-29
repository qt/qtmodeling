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

#include <QtCore/QObject>
#include "private/umlstate_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlClassifier;
class QUmlConnectionPointReference;
class QUmlConstraint;
class QUmlPseudostate;
class QUmlRedefinableElement;
class QUmlRegion;
class QUmlStateMachine;
class QUmlTrigger;

class Q_UML_EXPORT QUmlState : public QObject, public UmlState
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlConnectionPointReference *> connection READ connection)
    Q_PROPERTY(QSet<QUmlPseudostate *> connectionPoint READ connectionPoint)
    Q_PROPERTY(QSet<QUmlTrigger *> deferrableTrigger READ deferrableTrigger)
    Q_PROPERTY(QUmlBehavior * doActivity READ doActivity)
    Q_PROPERTY(QUmlBehavior * entry READ entry)
    Q_PROPERTY(QUmlBehavior * exit READ exit)
    Q_PROPERTY(bool isComposite READ isComposite)
    Q_PROPERTY(bool isOrthogonal READ isOrthogonal)
    Q_PROPERTY(bool isSimple READ isSimple)
    Q_PROPERTY(bool isSubmachineState READ isSubmachineState)
    Q_PROPERTY(QUmlState * redefinedState READ redefinedState)
    Q_PROPERTY(QUmlClassifier * redefinitionContext READ redefinitionContext)
    Q_PROPERTY(QSet<QUmlRegion *> region READ region)
    Q_PROPERTY(QUmlConstraint * stateInvariant READ stateInvariant)
    Q_PROPERTY(QUmlStateMachine * submachine READ submachine)

public:
    Q_INVOKABLE explicit QUmlState(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlConnectionPointReference *> connection() const;
    Q_INVOKABLE void addConnection(UmlConnectionPointReference *connection);
    Q_INVOKABLE void removeConnection(UmlConnectionPointReference *connection);
    Q_INVOKABLE const QSet<QUmlPseudostate *> connectionPoint() const;
    Q_INVOKABLE void addConnectionPoint(UmlPseudostate *connectionPoint);
    Q_INVOKABLE void removeConnectionPoint(UmlPseudostate *connectionPoint);
    Q_INVOKABLE const QSet<QUmlTrigger *> deferrableTrigger() const;
    Q_INVOKABLE void addDeferrableTrigger(UmlTrigger *deferrableTrigger);
    Q_INVOKABLE void removeDeferrableTrigger(UmlTrigger *deferrableTrigger);
    Q_INVOKABLE QUmlBehavior *doActivity() const;
    Q_INVOKABLE void setDoActivity(QUmlBehavior *doActivity);
    Q_INVOKABLE QUmlBehavior *entry() const;
    Q_INVOKABLE void setEntry(QUmlBehavior *entry);
    Q_INVOKABLE QUmlBehavior *exit() const;
    Q_INVOKABLE void setExit(QUmlBehavior *exit);
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE bool isOrthogonal() const;
    Q_INVOKABLE bool isSimple() const;
    Q_INVOKABLE bool isSubmachineState() const;
    Q_INVOKABLE QUmlState *redefinedState() const;
    Q_INVOKABLE void setRedefinedState(QUmlState *redefinedState);
    Q_INVOKABLE QUmlClassifier *redefinitionContext() const;
    Q_INVOKABLE const QSet<QUmlRegion *> region() const;
    Q_INVOKABLE void addRegion(UmlRegion *region);
    Q_INVOKABLE void removeRegion(UmlRegion *region);
    Q_INVOKABLE QUmlConstraint *stateInvariant() const;
    Q_INVOKABLE void setStateInvariant(QUmlConstraint *stateInvariant);
    Q_INVOKABLE QUmlStateMachine *submachine() const;
    Q_INVOKABLE void setSubmachine(QUmlStateMachine *submachine);

    // Operations
    Q_INVOKABLE QUmlStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QUmlState *redefined) const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlState *)
Q_DECLARE_METATYPE(QList<QUmlState *> *)
Q_DECLARE_METATYPE(QSet<QUmlState *> *)

QT_END_HEADER

#endif // QUMLSTATE_H

