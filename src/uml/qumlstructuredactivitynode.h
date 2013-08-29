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

#include <QtCore/QObject>
#include "private/umlstructuredactivitynode_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivity;
class QUmlActivityEdge;
class QUmlActivityNode;
class QUmlInputPin;
class QUmlOutputPin;
class QUmlVariable;

class Q_UML_EXPORT QUmlStructuredActivityNode : public QObject, public UmlStructuredActivityNode
{
    Q_OBJECT
    Q_PROPERTY(QUmlActivity * activity READ activity)
    Q_PROPERTY(QSet<QUmlActivityEdge *> edge READ edge)
    Q_PROPERTY(bool mustIsolate READ mustIsolate)
    Q_PROPERTY(QSet<QUmlActivityNode *> node READ node)
    Q_PROPERTY(QSet<QUmlInputPin *> structuredNodeInput READ structuredNodeInput)
    Q_PROPERTY(QSet<QUmlOutputPin *> structuredNodeOutput READ structuredNodeOutput)
    Q_PROPERTY(QSet<QUmlVariable *> variable READ variable)

public:
    Q_INVOKABLE explicit QUmlStructuredActivityNode(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE void setActivity(QUmlActivity *activity);
    Q_INVOKABLE const QSet<QUmlActivityEdge *> edge() const;
    Q_INVOKABLE void addEdge(UmlActivityEdge *edge);
    Q_INVOKABLE void removeEdge(UmlActivityEdge *edge);
    Q_INVOKABLE bool mustIsolate() const;
    Q_INVOKABLE void setMustIsolate(bool mustIsolate);
    Q_INVOKABLE const QSet<QUmlActivityNode *> node() const;
    Q_INVOKABLE void addNode(UmlActivityNode *node);
    Q_INVOKABLE void removeNode(UmlActivityNode *node);
    Q_INVOKABLE const QSet<QUmlInputPin *> structuredNodeInput() const;
    Q_INVOKABLE void addStructuredNodeInput(UmlInputPin *structuredNodeInput);
    Q_INVOKABLE void removeStructuredNodeInput(UmlInputPin *structuredNodeInput);
    Q_INVOKABLE const QSet<QUmlOutputPin *> structuredNodeOutput() const;
    Q_INVOKABLE void addStructuredNodeOutput(UmlOutputPin *structuredNodeOutput);
    Q_INVOKABLE void removeStructuredNodeOutput(UmlOutputPin *structuredNodeOutput);
    Q_INVOKABLE const QSet<QUmlVariable *> variable() const;
    Q_INVOKABLE void addVariable(UmlVariable *variable);
    Q_INVOKABLE void removeVariable(UmlVariable *variable);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlStructuredActivityNode *)
Q_DECLARE_METATYPE(QList<QUmlStructuredActivityNode *> *)
Q_DECLARE_METATYPE(QSet<QUmlStructuredActivityNode *> *)

QT_END_HEADER

#endif // QUMLSTRUCTUREDACTIVITYNODE_H

