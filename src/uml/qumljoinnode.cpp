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
#include "qumljoinnode.h"

#include "private/qumljoinnodeobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlJoinNode

    \inmodule QtUml

    \brief A join node is a control node that synchronizes multiple flows.Join nodes have a Boolean value specification using the names of the incoming edges to specify the conditions under which the join will emit a token.
 */
QUmlJoinNode::QUmlJoinNode(bool createQObject) :
    _isCombineDuplicate(true),
    _joinSpec(0)
{
    if (createQObject)
        _qObject = new QUmlJoinNodeObject(this);
    setPropertyData();
}

QUmlJoinNode::~QUmlJoinNode()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlJoinNode::clone() const
{
    QUmlJoinNode *c = new QUmlJoinNode;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegions())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartitions())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incomings())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoings())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNodes())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    c->setCombineDuplicate(isCombineDuplicate());
    if (joinSpec())
        c->setJoinSpec(dynamic_cast<QUmlValueSpecification *>(joinSpec()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Tells whether tokens having objects with the same identity are combined into one by the join.
 */
bool QUmlJoinNode::isCombineDuplicate() const
{
    // This is a read-write property

    return _isCombineDuplicate;
}

void QUmlJoinNode::setCombineDuplicate(bool isCombineDuplicate)
{
    // This is a read-write property

    if (_isCombineDuplicate != isCombineDuplicate) {
        _isCombineDuplicate = isCombineDuplicate;
        _modifiedResettableProperties << QStringLiteral("isCombineDuplicate");
    }
}

/*!
    A specification giving the conditions under which the join with emit a token. Default is 'and'.
 */
QUmlValueSpecification *QUmlJoinNode::joinSpec() const
{
    // This is a read-write association end

    return _joinSpec;
}

void QUmlJoinNode::setJoinSpec(QUmlValueSpecification *joinSpec)
{
    // This is a read-write association end

    if (_joinSpec != joinSpec) {
        // Adjust subsetted properties
        removeOwnedElement(_joinSpec);

        _joinSpec = joinSpec;
        if (joinSpec && joinSpec->asQObject() && this->asQObject())
            QObject::connect(joinSpec->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setJoinSpec()));
        joinSpec->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (joinSpec) {
            addOwnedElement(joinSpec);
        }
    }
}

void QUmlJoinNode::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlJoinNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::DocumentationRole] = QStringLiteral("Tells whether tokens having objects with the same identity are combined into one by the join.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("isCombineDuplicate")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlJoinNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::DocumentationRole] = QStringLiteral("A specification giving the conditions under which the join with emit a token. Default is 'and'.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlJoinNode")][QStringLiteral("joinSpec")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlJoinNode::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("activity")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inGroups")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inInterruptibleRegions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inPartitions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inStructuredNode")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("incomings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("outgoings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("redefinedNodes")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("isCombineDuplicate")] = QStringLiteral("QUmlJoinNode");
    _classForProperty[QStringLiteral("joinSpec")] = QStringLiteral("QUmlJoinNode");
}

