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
#ifndef QTUML_QLOOPNODE_H
#define QTUML_QLOOPNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QStructuredActivityNode>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOutputPin;
class QExecutableNode;
class QInputPin;

class QLoopNodePrivate;

class Q_UML_EXPORT QLoopNode : public QStructuredActivityNode
{
    Q_OBJECT

    Q_PROPERTY(bool isTestedFirst READ isTestedFirst WRITE setTestedFirst)
    Q_PROPERTY(const QList<QInputPin *> * loopVariableInputs READ loopVariableInputs)
    Q_PROPERTY(QOutputPin * decider READ decider WRITE setDecider)
    Q_PROPERTY(const QList<QOutputPin *> * bodyOutputs READ bodyOutputs)
    Q_PROPERTY(const QList<QOutputPin *> * loopVariables READ loopVariables)
    Q_PROPERTY(const QList<QOutputPin *> * results READ results)
    Q_PROPERTY(const QSet<QExecutableNode *> * setupParts READ setupParts)
    Q_PROPERTY(const QSet<QExecutableNode *> * bodyParts READ bodyParts)
    Q_PROPERTY(const QSet<QExecutableNode *> * tests READ tests)

    Q_DISABLE_COPY(QLoopNode)
    Q_DECLARE_PRIVATE(QLoopNode)

public:
    Q_INVOKABLE explicit QLoopNode(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QLoopNode();

    // Attributes from QLoopNode
    Q_INVOKABLE bool isTestedFirst() const;
    Q_INVOKABLE void setTestedFirst(bool isTestedFirst);

    // Association ends from QLoopNode
    Q_INVOKABLE const QList<QInputPin *> *loopVariableInputs() const;
    Q_INVOKABLE void addLoopVariableInput(QInputPin *loopVariableInput);
    Q_INVOKABLE void removeLoopVariableInput(QInputPin *loopVariableInput);
    Q_INVOKABLE QOutputPin *decider() const;
    Q_INVOKABLE void setDecider(QOutputPin *decider);
    Q_INVOKABLE const QList<QOutputPin *> *bodyOutputs() const;
    Q_INVOKABLE void addBodyOutput(QOutputPin *bodyOutput);
    Q_INVOKABLE void removeBodyOutput(QOutputPin *bodyOutput);
    Q_INVOKABLE const QList<QOutputPin *> *loopVariables() const;
    Q_INVOKABLE void addLoopVariable(QOutputPin *loopVariable);
    Q_INVOKABLE void removeLoopVariable(QOutputPin *loopVariable);
    Q_INVOKABLE const QList<QOutputPin *> *results() const;
    Q_INVOKABLE void addResult(QOutputPin *result);
    Q_INVOKABLE void removeResult(QOutputPin *result);
    Q_INVOKABLE const QSet<QExecutableNode *> *setupParts() const;
    Q_INVOKABLE void addSetupPart(QExecutableNode *setupPart);
    Q_INVOKABLE void removeSetupPart(QExecutableNode *setupPart);
    Q_INVOKABLE const QSet<QExecutableNode *> *bodyParts() const;
    Q_INVOKABLE void addBodyPart(QExecutableNode *bodyPart);
    Q_INVOKABLE void removeBodyPart(QExecutableNode *bodyPart);
    Q_INVOKABLE const QSet<QExecutableNode *> *tests() const;
    Q_INVOKABLE void addTest(QExecutableNode *test);
    Q_INVOKABLE void removeTest(QExecutableNode *test);

protected:
    explicit QLoopNode(QLoopNodePrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QLoopNode) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QLoopNode) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QLoopNode) *> *)

QT_END_HEADER

#endif // QTUML_QLOOPNODE_H

