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
#ifndef UMLREGION_H
#define UMLREGION_H

#include <QtUml/QtUmlGlobal>

#include "private/umlredefinableelement_p.h"
#include "private/umlnamespace_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlClassifier;
class UmlState;
class UmlStateMachine;
class UmlTransition;
class UmlVertex;

class Q_UML_EXPORT UmlRegion : public UmlRedefinableElement, public UmlNamespace
{
public:
    Q_DECL_HIDDEN explicit UmlRegion();

    // Owned attributes
    UmlRegion *extendedRegion() const;
    void setExtendedRegion(UmlRegion *extendedRegion);
    UmlClassifier *redefinitionContext() const;
    Q_DECL_HIDDEN void setRedefinitionContext(UmlClassifier *redefinitionContext);
    UmlState *state() const;
    void setState(UmlState *state);
    UmlStateMachine *stateMachine() const;
    void setStateMachine(UmlStateMachine *stateMachine);
    const QSet<UmlVertex *> subvertex() const;
    void addSubvertex(UmlVertex *subvertex);
    void removeSubvertex(UmlVertex *subvertex);
    const QSet<UmlTransition *> transition() const;
    void addTransition(UmlTransition *transition);
    void removeTransition(UmlTransition *transition);

    // Operations
    bool belongsToPSM() const;
    UmlStateMachine *containingStateMachine() const;
    bool isConsistentWith(UmlRedefinableElement *redefinee) const;
    bool isRedefinitionContextValid(UmlRegion *redefined) const;

protected:
    UmlRegion *_extendedRegion;
    UmlState *_state;
    UmlStateMachine *_stateMachine;
    QSet<UmlVertex *> _subvertex;
    QSet<UmlTransition *> _transition;
};

#endif // UMLREGION_H

