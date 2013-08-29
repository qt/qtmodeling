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
#ifndef QUMLCLAUSE_H
#define QUMLCLAUSE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlclause_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlExecutableNode;
class QUmlOutputPin;

class Q_UML_EXPORT QUmlClause : public QObject, public UmlClause
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlExecutableNode *> body READ body)
    Q_PROPERTY(QList<QUmlOutputPin *> bodyOutput READ bodyOutput)
    Q_PROPERTY(QUmlOutputPin * decider READ decider)
    Q_PROPERTY(QSet<QUmlClause *> predecessorClause READ predecessorClause)
    Q_PROPERTY(QSet<QUmlClause *> successorClause READ successorClause)
    Q_PROPERTY(QSet<QUmlExecutableNode *> test READ test)

public:
    Q_INVOKABLE explicit QUmlClause(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlExecutableNode *> body() const;
    Q_INVOKABLE void addBody(UmlExecutableNode *body);
    Q_INVOKABLE void removeBody(UmlExecutableNode *body);
    Q_INVOKABLE const QList<QUmlOutputPin *> bodyOutput() const;
    Q_INVOKABLE void addBodyOutput(UmlOutputPin *bodyOutput);
    Q_INVOKABLE void removeBodyOutput(UmlOutputPin *bodyOutput);
    Q_INVOKABLE QUmlOutputPin *decider() const;
    Q_INVOKABLE void setDecider(QUmlOutputPin *decider);
    Q_INVOKABLE const QSet<QUmlClause *> predecessorClause() const;
    Q_INVOKABLE void addPredecessorClause(UmlClause *predecessorClause);
    Q_INVOKABLE void removePredecessorClause(UmlClause *predecessorClause);
    Q_INVOKABLE const QSet<QUmlClause *> successorClause() const;
    Q_INVOKABLE void addSuccessorClause(UmlClause *successorClause);
    Q_INVOKABLE void removeSuccessorClause(UmlClause *successorClause);
    Q_INVOKABLE const QSet<QUmlExecutableNode *> test() const;
    Q_INVOKABLE void addTest(UmlExecutableNode *test);
    Q_INVOKABLE void removeTest(UmlExecutableNode *test);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlClause *)
Q_DECLARE_METATYPE(QList<QUmlClause *> *)
Q_DECLARE_METATYPE(QSet<QUmlClause *> *)

QT_END_HEADER

#endif // QUMLCLAUSE_H

