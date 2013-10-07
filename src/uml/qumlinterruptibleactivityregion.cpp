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
#include "qumlinterruptibleactivityregion.h"

#include "private/qumlinterruptibleactivityregionobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlInterruptibleActivityRegion

    \inmodule QtUml

    \brief An interruptible activity region is an activity group that supports termination of tokens flowing in the portions of an activity.
 */
QUmlInterruptibleActivityRegion::QUmlInterruptibleActivityRegion(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlInterruptibleActivityRegionObject(this);
    setPropertyData();
}

QUmlInterruptibleActivityRegion::~QUmlInterruptibleActivityRegion()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInterruptibleActivityRegion::clone() const
{
    QUmlInterruptibleActivityRegion *c = new QUmlInterruptibleActivityRegion;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (inActivity())
        c->setInActivity(dynamic_cast<QUmlActivity *>(inActivity()->clone()));
    foreach (QUmlActivityEdge *element, interruptingEdges())
        c->addInterruptingEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, nodes())
        c->addNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The edges leaving the region that will abort other tokens flowing in the region.
 */
const QSet<QUmlActivityEdge *> QUmlInterruptibleActivityRegion::interruptingEdges() const
{
    // This is a read-write association end

    return _interruptingEdges;
}

void QUmlInterruptibleActivityRegion::addInterruptingEdge(QUmlActivityEdge *interruptingEdge)
{
    // This is a read-write association end

    if (!_interruptingEdges.contains(interruptingEdge)) {
        _interruptingEdges.insert(interruptingEdge);
        if (interruptingEdge && interruptingEdge->asQObject() && this->asQObject())
            QObject::connect(interruptingEdge->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInterruptingEdge(QObject *)));

        // Adjust opposite properties
        if (interruptingEdge) {
            interruptingEdge->setInterrupts(this);
        }
    }
}

void QUmlInterruptibleActivityRegion::removeInterruptingEdge(QUmlActivityEdge *interruptingEdge)
{
    // This is a read-write association end

    if (_interruptingEdges.contains(interruptingEdge)) {
        _interruptingEdges.remove(interruptingEdge);

        // Adjust opposite properties
        if (interruptingEdge) {
            interruptingEdge->setInterrupts(0);
        }
    }
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QUmlActivityNode *> QUmlInterruptibleActivityRegion::nodes() const
{
    // This is a read-write association end

    return _nodes;
}

void QUmlInterruptibleActivityRegion::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (!_nodes.contains(node)) {
        _nodes.insert(node);
        if (node && node->asQObject() && this->asQObject())
            QObject::connect(node->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNode(QObject *)));

        // Adjust subsetted properties
        addContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->addInInterruptibleRegion(this);
        }
    }
}

void QUmlInterruptibleActivityRegion::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    if (_nodes.contains(node)) {
        _nodes.remove(node);

        // Adjust subsetted properties
        removeContainedNode(node);

        // Adjust opposite properties
        if (node) {
            node->removeInInterruptibleRegion(this);
        }
    }
}

void QUmlInterruptibleActivityRegion::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterruptibleActivityRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::DocumentationRole] = QStringLiteral("The edges leaving the region that will abort other tokens flowing in the region.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdge")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-interrupts");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterruptibleActivityRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::DocumentationRole] = QStringLiteral("Nodes immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-containedNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("node")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityNode-inInterruptibleRegion");

}

void QUmlInterruptibleActivityRegion::setClassForProperty()
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
    _classForProperty[QStringLiteral("containedEdges")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("containedNodes")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("inActivity")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("subgroups")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("superGroup")] = QStringLiteral("QUmlActivityGroup");
    _classForProperty[QStringLiteral("interruptingEdges")] = QStringLiteral("QUmlInterruptibleActivityRegion");
    _classForProperty[QStringLiteral("nodes")] = QStringLiteral("QUmlInterruptibleActivityRegion");
}

