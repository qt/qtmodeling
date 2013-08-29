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
#ifndef UMLLOOPNODE_H
#define UMLLOOPNODE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlstructuredactivitynode_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlExecutableNode;
class UmlInputPin;
class UmlOutputPin;

class Q_UML_EXPORT UmlLoopNode : public UmlStructuredActivityNode
{
public:
    Q_DECL_HIDDEN explicit UmlLoopNode();

    // Owned attributes
    const QList<UmlOutputPin *> bodyOutput() const;
    void addBodyOutput(UmlOutputPin *bodyOutput);
    void removeBodyOutput(UmlOutputPin *bodyOutput);
    const QSet<UmlExecutableNode *> bodyPart() const;
    void addBodyPart(UmlExecutableNode *bodyPart);
    void removeBodyPart(UmlExecutableNode *bodyPart);
    UmlOutputPin *decider() const;
    void setDecider(UmlOutputPin *decider);
    bool isTestedFirst() const;
    void setTestedFirst(bool isTestedFirst);
    const QList<UmlOutputPin *> loopVariable() const;
    void addLoopVariable(UmlOutputPin *loopVariable);
    void removeLoopVariable(UmlOutputPin *loopVariable);
    const QList<UmlInputPin *> loopVariableInput() const;
    void addLoopVariableInput(UmlInputPin *loopVariableInput);
    void removeLoopVariableInput(UmlInputPin *loopVariableInput);
    const QList<UmlOutputPin *> result() const;
    void addResult(UmlOutputPin *result);
    void removeResult(UmlOutputPin *result);
    const QSet<UmlExecutableNode *> setupPart() const;
    void addSetupPart(UmlExecutableNode *setupPart);
    void removeSetupPart(UmlExecutableNode *setupPart);
    const QSet<UmlExecutableNode *> test() const;
    void addTest(UmlExecutableNode *test);
    void removeTest(UmlExecutableNode *test);

protected:
    QList<UmlOutputPin *> _bodyOutput;
    QSet<UmlExecutableNode *> _bodyPart;
    UmlOutputPin *_decider;
    bool _isTestedFirst;
    QList<UmlOutputPin *> _loopVariable;
    QList<UmlInputPin *> _loopVariableInput;
    QList<UmlOutputPin *> _result;
    QSet<UmlExecutableNode *> _setupPart;
    QSet<UmlExecutableNode *> _test;
};

#endif // UMLLOOPNODE_H

