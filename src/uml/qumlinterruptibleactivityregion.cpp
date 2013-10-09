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
    setGroupProperties();
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

void QUmlInterruptibleActivityRegion::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedEdges"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedNodes"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inActivity"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subgroups"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superGroup"))));
    _groupProperties.insert(QStringLiteral("QUmlInterruptibleActivityRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interruptingEdges"))));
    _groupProperties.insert(QStringLiteral("QUmlInterruptibleActivityRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nodes"))));
}

void QUmlInterruptibleActivityRegion::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterruptibleActivityRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::DocumentationRole] = QStringLiteral("The edges leaving the region that will abort other tokens flowing in the region.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("interruptingEdges")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityEdge-interrupts");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlInterruptibleActivityRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::DocumentationRole] = QStringLiteral("Nodes immediately contained in the group.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("ActivityGroup-containedNode");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlInterruptibleActivityRegion")][QStringLiteral("nodes")][QtModeling::OppositeEndRole] = QStringLiteral("ActivityNode-inInterruptibleRegion");

}

