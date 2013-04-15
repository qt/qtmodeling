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
#include "qumlsequencenode.h"
#include "qumlsequencenode_p.h"

#include <QtUml/QUmlExecutableNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlSequenceNodePrivate::QUmlSequenceNodePrivate()
{
}

QUmlSequenceNodePrivate::~QUmlSequenceNodePrivate()
{
}

/*!
    \class QUmlSequenceNode

    \inmodule QtUml

    \brief A sequence node is a structured activity node that executes its actions in order.
 */

QUmlSequenceNode::QUmlSequenceNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredActivityNode(*new QUmlSequenceNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlSequenceNode::QUmlSequenceNode(QUmlSequenceNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredActivityNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlSequenceNode::~QUmlSequenceNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlSequenceNode
// ---------------------------------------------------------------

/*!
    An ordered set of executable nodes.
 */
QList<QUmlExecutableNode *> QUmlSequenceNode::executableNodes() const
{
    // This is a read-write association end

    Q_D(const QUmlSequenceNode);
    return d->executableNodes;
}

void QUmlSequenceNode::addExecutableNode(QUmlExecutableNode *executableNode)
{
    // This is a read-write association end

    Q_D(QUmlSequenceNode);
    if (!d->executableNodes.contains(executableNode)) {
        d->executableNodes.append(executableNode);
        qTopLevelWrapper(executableNode)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredActivityNode *>(this))->addNode(qwrappedobject_cast<QUmlActivityNode *>(executableNode));
    }
}

void QUmlSequenceNode::removeExecutableNode(QUmlExecutableNode *executableNode)
{
    // This is a read-write association end

    Q_D(QUmlSequenceNode);
    if (d->executableNodes.contains(executableNode)) {
        d->executableNodes.removeAll(executableNode);
        qTopLevelWrapper(executableNode)->setParent(0);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredActivityNode *>(this))->removeNode(qwrappedobject_cast<QUmlActivityNode *>(executableNode));
    }
}

void QUmlSequenceNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An ordered set of executable nodes.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlStructuredActivityNode::nodes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlStructuredActivityNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlsequencenode.cpp"

