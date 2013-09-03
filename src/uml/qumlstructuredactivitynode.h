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
#ifndef QUMLSTRUCTUREDACTIVITYNODE_H
#define QUMLSTRUCTUREDACTIVITYNODE_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlAction>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlActivityGroup>


QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivity;
class QUmlActivityEdge;
class QUmlActivityNode;
class QUmlInputPin;
class QUmlOutputPin;
class QUmlVariable;

class Q_UML_EXPORT QUmlStructuredActivityNode : public QUmlAction, public QUmlNamespace, public QUmlActivityGroup
{
public:
    explicit QUmlStructuredActivityNode(bool createQObject = true);
    virtual ~QUmlStructuredActivityNode();

    // Owned attributes
    QUmlActivity *activity() const;
    void setActivity(QUmlActivity *activity);
    const QSet<QUmlActivityEdge *> edge() const;
    void addEdge(QUmlActivityEdge *edge);
    void removeEdge(QUmlActivityEdge *edge);
    bool mustIsolate() const;
    void setMustIsolate(bool mustIsolate);
    const QSet<QUmlActivityNode *> node() const;
    void addNode(QUmlActivityNode *node);
    void removeNode(QUmlActivityNode *node);
    const QSet<QUmlInputPin *> structuredNodeInput() const;
    void addStructuredNodeInput(QUmlInputPin *structuredNodeInput);
    void removeStructuredNodeInput(QUmlInputPin *structuredNodeInput);
    const QSet<QUmlOutputPin *> structuredNodeOutput() const;
    void addStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput);
    void removeStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput);
    const QSet<QUmlVariable *> variable() const;
    void addVariable(QUmlVariable *variable);
    void removeVariable(QUmlVariable *variable);

protected:
    QUmlActivity *_activity;
    QSet<QUmlActivityEdge *> _edge;
    bool _mustIsolate;
    QSet<QUmlActivityNode *> _node;
    QSet<QUmlInputPin *> _structuredNodeInput;
    QSet<QUmlOutputPin *> _structuredNodeOutput;
    QSet<QUmlVariable *> _variable;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlStructuredActivityNode) *)

QT_END_HEADER

#endif // QUMLSTRUCTUREDACTIVITYNODE_H

