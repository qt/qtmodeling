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
#ifndef QUMLREGION_H
#define QUMLREGION_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlState;
class QUmlStateMachine;
class QUmlTransition;
class QUmlVertex;

class Q_UML_EXPORT QUmlRegion : public QUmlRedefinableElement, public QUmlNamespace
{
public:
    QUmlRegion();

    // Owned attributes
    QUmlRegion *extendedRegion() const;
    void setExtendedRegion(QUmlRegion *extendedRegion);
    QUmlClassifier *redefinitionContext() const;
    QUmlState *state() const;
    void setState(QUmlState *state);
    QUmlStateMachine *stateMachine() const;
    void setStateMachine(QUmlStateMachine *stateMachine);
    QSet<QUmlVertex *> subvertex() const;
    void addSubvertex(QUmlVertex *subvertex);
    void removeSubvertex(QUmlVertex *subvertex);
    QSet<QUmlTransition *> transition() const;
    void addTransition(QUmlTransition *transition);
    void removeTransition(QUmlTransition *transition);

    // Operations
    bool belongsToPSM() const;
    QUmlStateMachine *containingStateMachine() const;
    bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    bool isRedefinitionContextValid(QUmlRegion *redefined) const;

protected:
    QUmlRegion *_extendedRegion;
    QUmlState *_state;
    QUmlStateMachine *_stateMachine;
    QSet<QUmlVertex *> _subvertex;
    QSet<QUmlTransition *> _transition;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLREGION_H

