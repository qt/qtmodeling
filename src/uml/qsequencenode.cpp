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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QSequenceNodePrivate::QSequenceNodePrivate()
{
}

QSequenceNodePrivate::~QSequenceNodePrivate()
{
}

/*!
    \class QSequenceNode

    \inmodule QtUml

    \brief A sequence node is a structured activity node that executes its actions in order.
 */

QSequenceNode::QSequenceNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuredActivityNode(*new QSequenceNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QSequenceNode::QSequenceNode(QSequenceNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuredActivityNode(dd, wrapper, parent)
{
    setPropertyData();
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

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QStructuredActivityNode *>(this))->addNode(qwrappedobject_cast<QActivityNode *>(executableNode));
    }
}

void QSequenceNode::removeExecutableNode(QExecutableNode *executableNode)
{
    // This is a read-write association end

    Q_D(QSequenceNode);
    if (d->executableNodes.contains(executableNode)) {
        d->executableNodes.removeAll(executableNode);
        qTopLevelWrapper(executableNode)->setParent(0);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QStructuredActivityNode *>(this))->removeNode(qwrappedobject_cast<QActivityNode *>(executableNode));
    }
}

void QSequenceNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An ordered set of executable nodes.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QStructuredActivityNode::nodes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QSequenceNode")][QString::fromLatin1("executableNodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QStructuredActivityNode::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qsequencenode.cpp"

