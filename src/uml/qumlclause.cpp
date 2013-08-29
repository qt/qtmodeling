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
#include "qumlclause.h"

#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlClause::QUmlClause(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlExecutableNode *> QUmlClause::body() const
{
    return *(reinterpret_cast<const QSet<QUmlExecutableNode *> *>(&_body));
}

void QUmlClause::addBody(UmlExecutableNode *body)
{
    UmlClause::addBody(body);
}

void QUmlClause::removeBody(UmlExecutableNode *body)
{
    UmlClause::removeBody(body);
}

const QList<QUmlOutputPin *> QUmlClause::bodyOutput() const
{
    return *(reinterpret_cast<const QList<QUmlOutputPin *> *>(&_bodyOutput));
}

void QUmlClause::addBodyOutput(UmlOutputPin *bodyOutput)
{
    UmlClause::addBodyOutput(bodyOutput);
}

void QUmlClause::removeBodyOutput(UmlOutputPin *bodyOutput)
{
    UmlClause::removeBodyOutput(bodyOutput);
}

QUmlOutputPin *QUmlClause::decider() const
{
    return reinterpret_cast<QUmlOutputPin *>(_decider);
}

void QUmlClause::setDecider(QUmlOutputPin *decider)
{
    UmlClause::setDecider(decider);
}

const QSet<QUmlClause *> QUmlClause::predecessorClause() const
{
    return *(reinterpret_cast<const QSet<QUmlClause *> *>(&_predecessorClause));
}

void QUmlClause::addPredecessorClause(UmlClause *predecessorClause)
{
    UmlClause::addPredecessorClause(predecessorClause);
}

void QUmlClause::removePredecessorClause(UmlClause *predecessorClause)
{
    UmlClause::removePredecessorClause(predecessorClause);
}

const QSet<QUmlClause *> QUmlClause::successorClause() const
{
    return *(reinterpret_cast<const QSet<QUmlClause *> *>(&_successorClause));
}

void QUmlClause::addSuccessorClause(UmlClause *successorClause)
{
    UmlClause::addSuccessorClause(successorClause);
}

void QUmlClause::removeSuccessorClause(UmlClause *successorClause)
{
    UmlClause::removeSuccessorClause(successorClause);
}

const QSet<QUmlExecutableNode *> QUmlClause::test() const
{
    return *(reinterpret_cast<const QSet<QUmlExecutableNode *> *>(&_test));
}

void QUmlClause::addTest(UmlExecutableNode *test)
{
    UmlClause::addTest(test);
}

void QUmlClause::removeTest(UmlExecutableNode *test)
{
    UmlClause::removeTest(test);
}

QT_END_NAMESPACE

