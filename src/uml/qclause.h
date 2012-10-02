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
#include <QtCore/QObject>
#include <QtUml/QElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QClausePrivate;
class QExecutableNode;
class QOutputPin;

class Q_UML_EXPORT QClause : public QObject, public QElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QClause
    Q_PROPERTY(QList<QExecutableNode *> * body READ body)
    Q_PROPERTY(QList<QOutputPin *> * bodyOutput READ bodyOutput)
    Q_PROPERTY(QOutputPin * decider READ decider WRITE setDecider)
    Q_PROPERTY(QList<QClause *> * predecessorClause READ predecessorClause)
    Q_PROPERTY(QList<QClause *> * successorClause READ successorClause)
    Q_PROPERTY(QList<QExecutableNode *> * test READ test)

public:
    explicit QClause(QObject *parent = 0);
    virtual ~QClause();

    // Association-ends (except those derived && !derivedUnion)
    QList<QExecutableNode *> *body();
    QList<QOutputPin *> *bodyOutput();
    QOutputPin *decider() const;
    void setDecider(QOutputPin *decider);
    QList<QClause *> *predecessorClause();
    QList<QClause *> *successorClause();
    QList<QExecutableNode *> *test();

private:
    Q_DISABLE_COPY(QClause)
    Q_DECLARE_PRIVATE(QClause)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QClause *>)
Q_DECLARE_METATYPE(QList<QtUml::QClause *> *)

QT_END_HEADER

#endif // QTUML_QCLAUSE_H

