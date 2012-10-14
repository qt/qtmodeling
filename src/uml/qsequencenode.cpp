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

QSequenceNodePrivate::QSequenceNodePrivate() :
    executableNodes(new QList<QExecutableNode *>)
{
}

QSequenceNodePrivate::~QSequenceNodePrivate()
{
    foreach (QExecutableNode *executablenode, *executableNodes)
        delete executablenode;
    delete executableNodes;
}

void QSequenceNodePrivate::addExecutableNode(QExecutableNode *executableNode)
{
    // This is a read-write association end

    this->executableNodes->append(executableNode);
}

void QSequenceNodePrivate::removeExecutableNode(QExecutableNode *executableNode)
{
    // This is a read-write association end

    this->executableNodes->removeAll(executableNode);
}

/*!
    \class QSequenceNode

    \inmodule QtUml

    \brief A sequence node is a structured activity node that executes its actions in order.
 */

QSequenceNode::QSequenceNode(QObject *parent)
    : QStructuredActivityNode(false, parent)
{
    d_umlptr = new QSequenceNodePrivate;
}

QSequenceNode::QSequenceNode(bool createPimpl, QObject *parent)
    : QStructuredActivityNode(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QSequenceNodePrivate;
}

QSequenceNode::~QSequenceNode()
{
}

/*!
    An ordered set of executable nodes.
 */
const QList<QExecutableNode *> *QSequenceNode::executableNodes() const
{
    // This is a read-write association end

    QTUML_D(const QSequenceNode);
    return d->executableNodes;
}

void QSequenceNode::addExecutableNode(QExecutableNode *executableNode)
{
    // This is a read-write association end

    QTUML_D(QSequenceNode);
    if (!d->executableNodes->contains(executableNode)) {
        d->addExecutableNode(executableNode);
    }
}

void QSequenceNode::removeExecutableNode(QExecutableNode *executableNode)
{
    // This is a read-write association end

    QTUML_D(QSequenceNode);
    if (d->executableNodes->contains(executableNode)) {
        d->removeExecutableNode(executableNode);
    }
}

#include "moc_qsequencenode.cpp"

QT_END_NAMESPACE_QTUML

