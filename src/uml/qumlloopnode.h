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

#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlExecutableNode;
class QUmlInputPin;
class QUmlOutputPin;

class Q_UML_EXPORT QUmlLoopNode : public QUmlStructuredActivityNode
{
public:
    QUmlLoopNode();

    // Owned attributes
    QList<QUmlOutputPin *> bodyOutput() const;
    void addBodyOutput(QUmlOutputPin *bodyOutput);
    void removeBodyOutput(QUmlOutputPin *bodyOutput);
    QSet<QUmlExecutableNode *> bodyPart() const;
    void addBodyPart(QUmlExecutableNode *bodyPart);
    void removeBodyPart(QUmlExecutableNode *bodyPart);
    QUmlOutputPin *decider() const;
    void setDecider(QUmlOutputPin *decider);
    bool isTestedFirst() const;
    void setTestedFirst(bool isTestedFirst);
    QList<QUmlOutputPin *> loopVariable() const;
    void addLoopVariable(QUmlOutputPin *loopVariable);
    void removeLoopVariable(QUmlOutputPin *loopVariable);
    QList<QUmlInputPin *> loopVariableInput() const;
    void addLoopVariableInput(QUmlInputPin *loopVariableInput);
    void removeLoopVariableInput(QUmlInputPin *loopVariableInput);
    QList<QUmlOutputPin *> result() const;
    void addResult(QUmlOutputPin *result);
    void removeResult(QUmlOutputPin *result);
    QSet<QUmlExecutableNode *> setupPart() const;
    void addSetupPart(QUmlExecutableNode *setupPart);
    void removeSetupPart(QUmlExecutableNode *setupPart);
    QSet<QUmlExecutableNode *> test() const;
    void addTest(QUmlExecutableNode *test);
    void removeTest(QUmlExecutableNode *test);

protected:
    QList<QUmlOutputPin *> _bodyOutput;
    QSet<QUmlExecutableNode *> _bodyPart;
    QUmlOutputPin *_decider;
    bool _isTestedFirst;
    QList<QUmlOutputPin *> _loopVariable;
    QList<QUmlInputPin *> _loopVariableInput;
    QList<QUmlOutputPin *> _result;
    QSet<QUmlExecutableNode *> _setupPart;
    QSet<QUmlExecutableNode *> _test;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLLOOPNODE_H

