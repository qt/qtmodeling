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

// Base class includes
#include <QtUml/QUmlElement>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlExecutableNode;
class QUmlOutputPin;
class QUmlClause;

class QUmlClausePrivate;

class Q_UML_EXPORT QUmlClause : public QUmlElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlClause *> successorClauses READ successorClauses)
    Q_PROPERTY(QUmlOutputPin * decider READ decider WRITE setDecider)
    Q_PROPERTY(QSet<QUmlClause *> predecessorClauses READ predecessorClauses)
    Q_PROPERTY(QList<QUmlOutputPin *> bodyOutputs READ bodyOutputs)
    Q_PROPERTY(QSet<QUmlExecutableNode *> bodies READ bodies)
    Q_PROPERTY(QSet<QUmlExecutableNode *> tests READ tests)

    Q_DISABLE_COPY(QUmlClause)
    Q_DECLARE_PRIVATE(QUmlClause)

public:
    Q_INVOKABLE explicit QUmlClause(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlClause();

    // Association ends from QUmlClause
    Q_INVOKABLE QSet<QUmlClause *> successorClauses() const;
    Q_INVOKABLE void addSuccessorClause(QUmlClause *successorClause);
    Q_INVOKABLE void removeSuccessorClause(QUmlClause *successorClause);
    Q_INVOKABLE QUmlOutputPin *decider() const;
    Q_INVOKABLE void setDecider(QUmlOutputPin *decider);
    Q_INVOKABLE QSet<QUmlClause *> predecessorClauses() const;
    Q_INVOKABLE void addPredecessorClause(QUmlClause *predecessorClause);
    Q_INVOKABLE void removePredecessorClause(QUmlClause *predecessorClause);
    Q_INVOKABLE QList<QUmlOutputPin *> bodyOutputs() const;
    Q_INVOKABLE void addBodyOutput(QUmlOutputPin *bodyOutput);
    Q_INVOKABLE void removeBodyOutput(QUmlOutputPin *bodyOutput);
    Q_INVOKABLE QSet<QUmlExecutableNode *> bodies() const;
    Q_INVOKABLE void addBody(QUmlExecutableNode *body);
    Q_INVOKABLE void removeBody(QUmlExecutableNode *body);
    Q_INVOKABLE QSet<QUmlExecutableNode *> tests() const;
    Q_INVOKABLE void addTest(QUmlExecutableNode *test);
    Q_INVOKABLE void removeTest(QUmlExecutableNode *test);

    virtual void setPropertyData();

protected:
    explicit QUmlClause(QUmlClausePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCLAUSE_H

