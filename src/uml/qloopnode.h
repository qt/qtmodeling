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

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QLoopNodePrivate;
class QOutputPin;
class QExecutableNode;
class QInputPin;

class Q_UML_EXPORT QLoopNode : public QStructuredActivityNode
{
    Q_OBJECT

    // From QLoopNode
    Q_PROPERTY(bool isTestedFirst READ isTestedFirst WRITE setTestedFirst)
    Q_PROPERTY(QList<QOutputPin *> * bodyOutputs READ bodyOutputs)
    Q_PROPERTY(QList<QExecutableNode *> * bodyParts READ bodyParts)
    Q_PROPERTY(QOutputPin * decider READ decider WRITE setDecider)
    Q_PROPERTY(QList<QOutputPin *> * loopVariables READ loopVariables)
    Q_PROPERTY(QList<QInputPin *> * loopVariableInputs READ loopVariableInputs)
    Q_PROPERTY(QList<QOutputPin *> * results READ results)
    Q_PROPERTY(QList<QExecutableNode *> * setupParts READ setupParts)
    Q_PROPERTY(QList<QExecutableNode *> * tests READ tests)

public:
    explicit QLoopNode(QObject *parent = 0);
    virtual ~QLoopNode();

    // Attributes (except those derived && !derivedUnion)
    bool isTestedFirst() const;
    void setTestedFirst(bool isTestedFirst);

    // Association-ends (except those derived && !derivedUnion)
    QList<QOutputPin *> *bodyOutputs();
    QList<QExecutableNode *> *bodyParts();
    QOutputPin *decider() const;
    void setDecider(QOutputPin *decider);
    QList<QOutputPin *> *loopVariables();
    QList<QInputPin *> *loopVariableInputs();
    QList<QOutputPin *> *results();
    QList<QExecutableNode *> *setupParts();
    QList<QExecutableNode *> *tests();

private:
    Q_DISABLE_COPY(QLoopNode)
    Q_DECLARE_PRIVATE(QLoopNode)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QLoopNode *>)
Q_DECLARE_METATYPE(QList<QtUml::QLoopNode *> *)

QT_END_HEADER

#endif // QTUML_QLOOPNODE_H

