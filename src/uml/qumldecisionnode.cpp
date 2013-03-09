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

#include "qumldecisionnode.h"
#include "qumldecisionnode_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlObjectFlow>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDecisionNodePrivate::QUmlDecisionNodePrivate() :
    decisionInputFlow(0),
    decisionInput(0)
{
}

QUmlDecisionNodePrivate::~QUmlDecisionNodePrivate()
{
}

/*!
    \class QUmlDecisionNode

    \inmodule QtUml

    \brief A decision node is a control node that chooses between outgoing flows.
 */

QUmlDecisionNode::QUmlDecisionNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlControlNode(*new QUmlDecisionNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDecisionNode::QUmlDecisionNode(QUmlDecisionNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlControlNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDecisionNode::~QUmlDecisionNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDecisionNode
// ---------------------------------------------------------------

/*!
    An additional edge incoming to the decision node that provides a decision input value.
 */
QUmlObjectFlow *QUmlDecisionNode::decisionInputFlow() const
{
    // This is a read-write association end

    Q_D(const QUmlDecisionNode);
    return d->decisionInputFlow;
}

void QUmlDecisionNode::setDecisionInputFlow(QUmlObjectFlow *decisionInputFlow)
{
    // This is a read-write association end

    Q_D(QUmlDecisionNode);
    if (d->decisionInputFlow != decisionInputFlow) {
        d->decisionInputFlow = decisionInputFlow;
    }
}

/*!
    Provides input to guard specifications on edges outgoing from the decision node.
 */
QUmlBehavior *QUmlDecisionNode::decisionInput() const
{
    // This is a read-write association end

    Q_D(const QUmlDecisionNode);
    return d->decisionInput;
}

void QUmlDecisionNode::setDecisionInput(QUmlBehavior *decisionInput)
{
    // This is a read-write association end

    Q_D(QUmlDecisionNode);
    if (d->decisionInput != decisionInput) {
        d->decisionInput = decisionInput;
    }
}

void QUmlDecisionNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInputFlow")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInputFlow")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInputFlow")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An additional edge incoming to the decision node that provides a decision input value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInputFlow")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInputFlow")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInputFlow")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInput")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInput")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInput")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Provides input to guard specifications on edges outgoing from the decision node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInput")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInput")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDecisionNode")][QString::fromLatin1("decisionInput")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlControlNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldecisionnode.cpp"

