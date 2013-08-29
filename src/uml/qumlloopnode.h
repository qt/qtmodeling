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
#ifndef QUMLLOOPNODE_H
#define QUMLLOOPNODE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlloopnode_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlExecutableNode;
class QUmlInputPin;
class QUmlOutputPin;

class Q_UML_EXPORT QUmlLoopNode : public QObject, public UmlLoopNode
{
    Q_OBJECT
    Q_PROPERTY(QList<QUmlOutputPin *> bodyOutput READ bodyOutput)
    Q_PROPERTY(QSet<QUmlExecutableNode *> bodyPart READ bodyPart)
    Q_PROPERTY(QUmlOutputPin * decider READ decider)
    Q_PROPERTY(bool isTestedFirst READ isTestedFirst)
    Q_PROPERTY(QList<QUmlOutputPin *> loopVariable READ loopVariable)
    Q_PROPERTY(QList<QUmlInputPin *> loopVariableInput READ loopVariableInput)
    Q_PROPERTY(QList<QUmlOutputPin *> result READ result)
    Q_PROPERTY(QSet<QUmlExecutableNode *> setupPart READ setupPart)
    Q_PROPERTY(QSet<QUmlExecutableNode *> test READ test)

public:
    Q_INVOKABLE explicit QUmlLoopNode(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QList<QUmlOutputPin *> bodyOutput() const;
    Q_INVOKABLE void addBodyOutput(UmlOutputPin *bodyOutput);
    Q_INVOKABLE void removeBodyOutput(UmlOutputPin *bodyOutput);
    Q_INVOKABLE const QSet<QUmlExecutableNode *> bodyPart() const;
    Q_INVOKABLE void addBodyPart(UmlExecutableNode *bodyPart);
    Q_INVOKABLE void removeBodyPart(UmlExecutableNode *bodyPart);
    Q_INVOKABLE QUmlOutputPin *decider() const;
    Q_INVOKABLE void setDecider(QUmlOutputPin *decider);
    Q_INVOKABLE bool isTestedFirst() const;
    Q_INVOKABLE void setTestedFirst(bool isTestedFirst);
    Q_INVOKABLE const QList<QUmlOutputPin *> loopVariable() const;
    Q_INVOKABLE void addLoopVariable(UmlOutputPin *loopVariable);
    Q_INVOKABLE void removeLoopVariable(UmlOutputPin *loopVariable);
    Q_INVOKABLE const QList<QUmlInputPin *> loopVariableInput() const;
    Q_INVOKABLE void addLoopVariableInput(UmlInputPin *loopVariableInput);
    Q_INVOKABLE void removeLoopVariableInput(UmlInputPin *loopVariableInput);
    Q_INVOKABLE const QList<QUmlOutputPin *> result() const;
    Q_INVOKABLE void addResult(UmlOutputPin *result);
    Q_INVOKABLE void removeResult(UmlOutputPin *result);
    Q_INVOKABLE const QSet<QUmlExecutableNode *> setupPart() const;
    Q_INVOKABLE void addSetupPart(UmlExecutableNode *setupPart);
    Q_INVOKABLE void removeSetupPart(UmlExecutableNode *setupPart);
    Q_INVOKABLE const QSet<QUmlExecutableNode *> test() const;
    Q_INVOKABLE void addTest(UmlExecutableNode *test);
    Q_INVOKABLE void removeTest(UmlExecutableNode *test);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlLoopNode *)
Q_DECLARE_METATYPE(QList<QUmlLoopNode *> *)
Q_DECLARE_METATYPE(QSet<QUmlLoopNode *> *)

QT_END_HEADER

#endif // QUMLLOOPNODE_H

