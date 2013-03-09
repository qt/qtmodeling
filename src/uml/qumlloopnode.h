/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLLOOPNODE_H
#define QUMLLOOPNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlStructuredActivityNode>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlOutputPin;
class QUmlExecutableNode;
class QUmlInputPin;

class QUmlLoopNodePrivate;

class Q_UML_EXPORT QUmlLoopNode : public QUmlStructuredActivityNode
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isTestedFirst READ isTestedFirst WRITE setTestedFirst RESET unsetTestedFirst)
    Q_PROPERTY(QList<QUmlInputPin *> loopVariableInputs READ loopVariableInputs)
    Q_PROPERTY(QUmlOutputPin * decider READ decider WRITE setDecider)
    Q_PROPERTY(QList<QUmlOutputPin *> bodyOutputs READ bodyOutputs)
    Q_PROPERTY(QList<QUmlOutputPin *> loopVariables READ loopVariables)
    Q_PROPERTY(QList<QUmlOutputPin *> results READ results)
    Q_PROPERTY(QSet<QUmlExecutableNode *> setupParts READ setupParts)
    Q_PROPERTY(QSet<QUmlExecutableNode *> bodyParts READ bodyParts)
    Q_PROPERTY(QSet<QUmlExecutableNode *> tests READ tests)

    Q_DISABLE_COPY(QUmlLoopNode)
    Q_DECLARE_PRIVATE(QUmlLoopNode)

public:
    Q_INVOKABLE explicit QUmlLoopNode(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlLoopNode();

    // Attributes from QUmlLoopNode
    Q_INVOKABLE bool isTestedFirst() const;
    Q_INVOKABLE void setTestedFirst(bool isTestedFirst);
    Q_INVOKABLE void unsetTestedFirst();

    // Association ends from QUmlLoopNode
    Q_INVOKABLE QList<QUmlInputPin *> loopVariableInputs() const;
    Q_INVOKABLE void addLoopVariableInput(QUmlInputPin *loopVariableInput);
    Q_INVOKABLE void removeLoopVariableInput(QUmlInputPin *loopVariableInput);
    Q_INVOKABLE QUmlOutputPin *decider() const;
    Q_INVOKABLE void setDecider(QUmlOutputPin *decider);
    Q_INVOKABLE QList<QUmlOutputPin *> bodyOutputs() const;
    Q_INVOKABLE void addBodyOutput(QUmlOutputPin *bodyOutput);
    Q_INVOKABLE void removeBodyOutput(QUmlOutputPin *bodyOutput);
    Q_INVOKABLE QList<QUmlOutputPin *> loopVariables() const;
    Q_INVOKABLE void addLoopVariable(QUmlOutputPin *loopVariable);
    Q_INVOKABLE void removeLoopVariable(QUmlOutputPin *loopVariable);
    Q_INVOKABLE QList<QUmlOutputPin *> results() const;
    Q_INVOKABLE void addResult(QUmlOutputPin *result);
    Q_INVOKABLE void removeResult(QUmlOutputPin *result);
    Q_INVOKABLE QSet<QUmlExecutableNode *> setupParts() const;
    Q_INVOKABLE void addSetupPart(QUmlExecutableNode *setupPart);
    Q_INVOKABLE void removeSetupPart(QUmlExecutableNode *setupPart);
    Q_INVOKABLE QSet<QUmlExecutableNode *> bodyParts() const;
    Q_INVOKABLE void addBodyPart(QUmlExecutableNode *bodyPart);
    Q_INVOKABLE void removeBodyPart(QUmlExecutableNode *bodyPart);
    Q_INVOKABLE QSet<QUmlExecutableNode *> tests() const;
    Q_INVOKABLE void addTest(QUmlExecutableNode *test);
    Q_INVOKABLE void removeTest(QUmlExecutableNode *test);

    virtual void setPropertyData();

protected:
    explicit QUmlLoopNode(QUmlLoopNodePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLLOOPNODE_H

