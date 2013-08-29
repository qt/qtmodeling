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
#ifndef UMLTRANSITION_H
#define UMLTRANSITION_H

#include <QtUml/QtUmlGlobal>

#include "private/umlredefinableelement_p.h"
#include "private/umlnamespace_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

#include <QtUml/QtUmlNamespace>

class UmlBehavior;
class UmlClassifier;
class UmlConstraint;
class UmlRegion;
class UmlStateMachine;
class UmlTrigger;
class UmlVertex;

class Q_UML_EXPORT UmlTransition : public UmlRedefinableElement, public UmlNamespace
{
public:
    Q_DECL_HIDDEN explicit UmlTransition();

    // Owned attributes
    UmlRegion *container() const;
    void setContainer(UmlRegion *container);
    UmlBehavior *effect() const;
    void setEffect(UmlBehavior *effect);
    UmlConstraint *guard() const;
    void setGuard(UmlConstraint *guard);
    QtUml::TransitionKind kind() const;
    void setKind(QtUml::TransitionKind kind);
    UmlTransition *redefinedTransition() const;
    void setRedefinedTransition(UmlTransition *redefinedTransition);
    UmlClassifier *redefinitionContext() const;
    Q_DECL_HIDDEN void setRedefinitionContext(UmlClassifier *redefinitionContext);
    UmlVertex *source() const;
    void setSource(UmlVertex *source);
    UmlVertex *target() const;
    void setTarget(UmlVertex *target);
    const QSet<UmlTrigger *> trigger() const;
    void addTrigger(UmlTrigger *trigger);
    void removeTrigger(UmlTrigger *trigger);

    // Operations
    UmlStateMachine *containingStateMachine() const;
    bool isConsistentWith(UmlRedefinableElement *redefinee) const;

protected:
    UmlRegion *_container;
    UmlBehavior *_effect;
    UmlConstraint *_guard;
    QtUml::TransitionKind _kind;
    UmlTransition *_redefinedTransition;
    UmlVertex *_source;
    UmlVertex *_target;
    QSet<UmlTrigger *> _trigger;
};

#endif // UMLTRANSITION_H

