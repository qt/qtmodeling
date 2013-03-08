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

#include "qumljoinnode.h"
#include "qumljoinnode_p.h"

#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlJoinNodePrivate::QUmlJoinNodePrivate() :
    isCombineDuplicate(true),
    joinSpec(0)
{
}

QUmlJoinNodePrivate::~QUmlJoinNodePrivate()
{
}

/*!
    \class QUmlJoinNode

    \inmodule QtUml

    \brief A join node is a control node that synchronizes multiple flows.Join nodes have a Boolean value specification using the names of the incoming edges to specify the conditions under which the join will emit a token.
 */

QUmlJoinNode::QUmlJoinNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlControlNode(*new QUmlJoinNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlJoinNode::QUmlJoinNode(QUmlJoinNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlControlNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlJoinNode::~QUmlJoinNode()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlJoinNode
// ---------------------------------------------------------------

/*!
    Tells whether tokens having objects with the same identity are combined into one by the join.
 */
bool QUmlJoinNode::isCombineDuplicate() const
{
    // This is a read-write attribute

    Q_D(const QUmlJoinNode);
    return d->isCombineDuplicate;
}

void QUmlJoinNode::setCombineDuplicate(bool isCombineDuplicate)
{
    // This is a read-write attribute

    Q_D(QUmlJoinNode);
    if (d->isCombineDuplicate != isCombineDuplicate) {
        d->isCombineDuplicate = isCombineDuplicate;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isCombineDuplicate");
}

void QUmlJoinNode::unsetCombineDuplicate()
{
    setCombineDuplicate(true);
    Q_D(QUmlJoinNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isCombineDuplicate"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlJoinNode
// ---------------------------------------------------------------

/*!
    A specification giving the conditions under which the join with emit a token. Default is "and".
 */
QUmlValueSpecification *QUmlJoinNode::joinSpec() const
{
    // This is a read-write association end

    Q_D(const QUmlJoinNode);
    return d->joinSpec;
}

void QUmlJoinNode::setJoinSpec(QUmlValueSpecification *joinSpec)
{
    // This is a read-write association end

    Q_D(QUmlJoinNode);
    if (d->joinSpec != joinSpec) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->joinSpec));

        d->joinSpec = joinSpec;

        // Adjust subsetted property(ies)
        if (joinSpec) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(joinSpec));
        }
    }
}

void QUmlJoinNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("isCombineDuplicate")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("isCombineDuplicate")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("isCombineDuplicate")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether tokens having objects with the same identity are combined into one by the join.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("isCombineDuplicate")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("isCombineDuplicate")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("isCombineDuplicate")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("joinSpec")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("joinSpec")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("joinSpec")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A specification giving the conditions under which the join with emit a token. Default is \"and\".");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("joinSpec")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("joinSpec")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlJoinNode")][QString::fromLatin1("joinSpec")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlControlNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumljoinnode.cpp"

