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
** rights. These rights are described in the Nokia Qt LGPL Exception
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

#include "qactivity.h"
//#include "qactivity_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QActivity

    \inmodule QtUml

    \brief An activity is the specification of parameterized behavior as the coordinated sequencing of subordinate units whose individual elements are actions.
 */

QActivity::QActivity(QObject *parent)
    : QBehavior(parent)
{
}

QActivity::~QActivity()
{
}

/*!
    If true, this activity must not make any changes to variables outside the activity or to objects. (This is an assertion, not an executable property. It may be used by an execution engine to optimize model execution. If the assertion is violated by the action, then the model is ill-formed.) The default is false (an activity may make nonlocal changes).
 */
bool QActivity::isReadOnly() const
{
}

void QActivity::setReadOnly(bool isReadOnly)
{
}

/*!
    If true, all invocations of the activity are handled by the same execution.
 */
bool QActivity::isSingleExecution() const
{
}

void QActivity::setSingleExecution(bool isSingleExecution)
{
}

/*!
    Edges expressing flow between nodes of the activity.
 */
QList<QActivityEdge *> *QActivity::edge()
{
}

/*!
    Top-level groups in the activity.
 */
QList<QActivityGroup *> *QActivity::group()
{
}

/*!
    Nodes coordinated by the activity.
 */
QList<QActivityNode *> *QActivity::node()
{
}

/*!
    Top-level partitions in the activity.
 */
QList<QActivityPartition *> *QActivity::partition()
{
}

/*!
    Top-level structured nodes in the activity.
 */
QList<QStructuredActivityNode *> *QActivity::structuredNode()
{
}

/*!
    Top-level variables in the activity.
 */
QList<QVariable *> *QActivity::variable()
{
}

#include "moc_qactivity.cpp"

QT_END_NAMESPACE_QTUML

