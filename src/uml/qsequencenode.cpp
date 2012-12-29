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

#include "qsequencenode.h"
#include "qsequencenode_p.h"

#include <QtUml/QExecutableNode>

QT_BEGIN_NAMESPACE_QTUML

QSequenceNodePrivate::QSequenceNodePrivate()
{
}

QSequenceNodePrivate::~QSequenceNodePrivate()
{
    qDeleteAll(executableNodes);
}

/*!
    \class QSequenceNode

    \inmodule QtUml

    \brief A sequence node is a structured activity node that executes its actions in order.
 */

QSequenceNode::QSequenceNode(QWrappedObject *parent, QWrappedObject *wrapper) :
    QStructuredActivityNode(*new QSequenceNodePrivate, parent, wrapper)
{
}

QSequenceNode::QSequenceNode(QSequenceNodePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QStructuredActivityNode(dd, parent, wrapper)
{
}

QSequenceNode::~QSequenceNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QSequenceNode
// ---------------------------------------------------------------

/*!
    An ordered set of executable nodes.
 */
QList<QExecutableNode *> QSequenceNode::executableNodes() const
{
    // This is a read-write association end

    Q_D(const QSequenceNode);
    return d->executableNodes;
}

void QSequenceNode::addExecutableNode(QExecutableNode *executableNode)
{
    // This is a read-write association end

    Q_D(QSequenceNode);
    if (!d->executableNodes.contains(executableNode)) {
        d->executableNodes.append(executableNode);
        qTopLevelWrapper(executableNode)->setParent(qTopLevelWrapper(this));
    }
}

void QSequenceNode::removeExecutableNode(QExecutableNode *executableNode)
{
    // This is a read-write association end

    Q_D(QSequenceNode);
    if (d->executableNodes.contains(executableNode)) {
        d->executableNodes.removeAll(executableNode);
        qTopLevelWrapper(executableNode)->setParent(0);
    }
}

void QSequenceNode::registerMetaTypes() const
{
    qRegisterMetaType<QExecutableNode *>("QExecutableNode *");
    qRegisterMetaType<QSet<QExecutableNode *>>("QSet<QExecutableNode *>");
    qRegisterMetaType<QList<QExecutableNode *>>("QList<QExecutableNode *>");

    QStructuredActivityNode::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qsequencenode.cpp"

QT_END_NAMESPACE_QTUML

