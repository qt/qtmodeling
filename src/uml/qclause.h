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
#ifndef QTUML_QCLAUSE_H
#define QTUML_QCLAUSE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QElement>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QExecutableNode;
class QOutputPin;

class QClausePrivate;

class Q_UML_EXPORT QClause : public QElement
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QClause *> * successorClauses READ successorClauses)
    Q_PROPERTY(QOutputPin * decider READ decider WRITE setDecider)
    Q_PROPERTY(const QSet<QClause *> * predecessorClauses READ predecessorClauses)
    Q_PROPERTY(const QList<QOutputPin *> * bodyOutputs READ bodyOutputs)
    Q_PROPERTY(const QSet<QExecutableNode *> * bodies READ bodies)
    Q_PROPERTY(const QSet<QExecutableNode *> * tests READ tests)

    Q_DISABLE_COPY(QClause)
    Q_DECLARE_PRIVATE(QClause)

public:
    Q_INVOKABLE explicit QClause(QObject *parent = 0);
    virtual ~QClause();

    // Association ends from QClause
    Q_INVOKABLE const QSet<QClause *> *successorClauses() const;
    Q_INVOKABLE void addSuccessorClause(QClause *successorClause);
    Q_INVOKABLE void removeSuccessorClause(QClause *successorClause);
    Q_INVOKABLE QOutputPin *decider() const;
    Q_INVOKABLE void setDecider(QOutputPin *decider);
    Q_INVOKABLE const QSet<QClause *> *predecessorClauses() const;
    Q_INVOKABLE void addPredecessorClause(QClause *predecessorClause);
    Q_INVOKABLE void removePredecessorClause(QClause *predecessorClause);
    Q_INVOKABLE const QList<QOutputPin *> *bodyOutputs() const;
    Q_INVOKABLE void addBodyOutput(QOutputPin *bodyOutput);
    Q_INVOKABLE void removeBodyOutput(QOutputPin *bodyOutput);
    Q_INVOKABLE const QSet<QExecutableNode *> *bodies() const;
    Q_INVOKABLE void addBody(QExecutableNode *body);
    Q_INVOKABLE void removeBody(QExecutableNode *body);
    Q_INVOKABLE const QSet<QExecutableNode *> *tests() const;
    Q_INVOKABLE void addTest(QExecutableNode *test);
    Q_INVOKABLE void removeTest(QExecutableNode *test);

protected:
    explicit QClause(QClausePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QClause) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QClause) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QClause) *> *)

QT_END_HEADER

#endif // QTUML_QCLAUSE_H

