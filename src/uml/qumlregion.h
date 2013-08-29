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

#include <QtCore/QObject>
#include "private/umlregion_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlRedefinableElement;
class QUmlState;
class QUmlStateMachine;
class QUmlTransition;
class QUmlVertex;

class Q_UML_EXPORT QUmlRegion : public QObject, public UmlRegion
{
    Q_OBJECT
    Q_PROPERTY(QUmlRegion * extendedRegion READ extendedRegion)
    Q_PROPERTY(QUmlClassifier * redefinitionContext READ redefinitionContext)
    Q_PROPERTY(QUmlState * state READ state)
    Q_PROPERTY(QUmlStateMachine * stateMachine READ stateMachine)
    Q_PROPERTY(QSet<QUmlVertex *> subvertex READ subvertex)
    Q_PROPERTY(QSet<QUmlTransition *> transition READ transition)

public:
    Q_INVOKABLE explicit QUmlRegion(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlRegion *extendedRegion() const;
    Q_INVOKABLE void setExtendedRegion(QUmlRegion *extendedRegion);
    Q_INVOKABLE QUmlClassifier *redefinitionContext() const;
    Q_INVOKABLE QUmlState *state() const;
    Q_INVOKABLE void setState(QUmlState *state);
    Q_INVOKABLE QUmlStateMachine *stateMachine() const;
    Q_INVOKABLE void setStateMachine(QUmlStateMachine *stateMachine);
    Q_INVOKABLE const QSet<QUmlVertex *> subvertex() const;
    Q_INVOKABLE void addSubvertex(UmlVertex *subvertex);
    Q_INVOKABLE void removeSubvertex(UmlVertex *subvertex);
    Q_INVOKABLE const QSet<QUmlTransition *> transition() const;
    Q_INVOKABLE void addTransition(UmlTransition *transition);
    Q_INVOKABLE void removeTransition(UmlTransition *transition);

    // Operations
    Q_INVOKABLE bool belongsToPSM() const;
    Q_INVOKABLE QUmlStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QUmlRegion *redefined) const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlRegion *)
Q_DECLARE_METATYPE(QList<QUmlRegion *> *)
Q_DECLARE_METATYPE(QSet<QUmlRegion *> *)

QT_END_HEADER

#endif // QUMLREGION_H

