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
#include "qumlobjectflow.h"

#include "private/qumlobjectflowobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
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
    \class QUmlObjectFlow

    \inmodule QtUml

    \brief An object flow is an activity edge that can have objects or data passing along it.Object flows have support for multicast/receive, token selection from object nodes, and transformation of tokens.
 */
QUmlObjectFlow::QUmlObjectFlow(bool createQObject) :
    _isMulticast(false),
    _isMultireceive(false),
    _selection(0),
    _transformation(0)
{
    if (createQObject)
        _qObject = new QUmlObjectFlowObject(this);
    setPropertyData();
}

QUmlObjectFlow::~QUmlObjectFlow()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlObjectFlow::clone() const
{
    QUmlObjectFlow *c = new QUmlObjectFlow;
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
    if (guard())
        c->setGuard(dynamic_cast<QUmlValueSpecification *>(guard()->clone()));
    foreach (QUmlActivityPartition *element, inPartitions())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    if (interrupts())
        c->setInterrupts(dynamic_cast<QUmlInterruptibleActivityRegion *>(interrupts()->clone()));
    foreach (QUmlActivityEdge *element, redefinedEdges())
        c->addRedefinedEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    if (source())
        c->setSource(dynamic_cast<QUmlActivityNode *>(source()->clone()));
    if (target())
        c->setTarget(dynamic_cast<QUmlActivityNode *>(target()->clone()));
    if (weight())
        c->setWeight(dynamic_cast<QUmlValueSpecification *>(weight()->clone()));
    c->setMulticast(isMulticast());
    c->setMultireceive(isMultireceive());
    if (selection())
        c->setSelection(dynamic_cast<QUmlBehavior *>(selection()->clone()));
    if (transformation())
        c->setTransformation(dynamic_cast<QUmlBehavior *>(transformation()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Tells whether the objects in the flow are passed by multicasting.
 */
bool QUmlObjectFlow::isMulticast() const
{
    // This is a read-write property

    return _isMulticast;
}

void QUmlObjectFlow::setMulticast(bool isMulticast)
{
    // This is a read-write property

    if (_isMulticast != isMulticast) {
        _isMulticast = isMulticast;
        _modifiedResettableProperties << QStringLiteral("isMulticast");
    }
}

/*!
    Tells whether the objects in the flow are gathered from respondents to multicasting.
 */
bool QUmlObjectFlow::isMultireceive() const
{
    // This is a read-write property

    return _isMultireceive;
}

void QUmlObjectFlow::setMultireceive(bool isMultireceive)
{
    // This is a read-write property

    if (_isMultireceive != isMultireceive) {
        _isMultireceive = isMultireceive;
        _modifiedResettableProperties << QStringLiteral("isMultireceive");
    }
}

/*!
    Selects tokens from a source object node.
 */
QUmlBehavior *QUmlObjectFlow::selection() const
{
    // This is a read-write association end

    return _selection;
}

void QUmlObjectFlow::setSelection(QUmlBehavior *selection)
{
    // This is a read-write association end

    if (_selection != selection) {
        _selection = selection;
        if (selection && selection->asQObject() && this->asQObject())
            QObject::connect(selection->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSelection()));
    }
}

/*!
    Changes or replaces data tokens flowing along edge.
 */
QUmlBehavior *QUmlObjectFlow::transformation() const
{
    // This is a read-write association end

    return _transformation;
}

void QUmlObjectFlow::setTransformation(QUmlBehavior *transformation)
{
    // This is a read-write association end

    if (_transformation != transformation) {
        _transformation = transformation;
        if (transformation && transformation->asQObject() && this->asQObject())
            QObject::connect(transformation->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setTransformation()));
    }
}

void QUmlObjectFlow::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlObjectFlow");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::DocumentationRole] = QStringLiteral("Tells whether the objects in the flow are passed by multicasting.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMulticast")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlObjectFlow");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::DocumentationRole] = QStringLiteral("Tells whether the objects in the flow are gathered from respondents to multicasting.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("isMultireceive")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlObjectFlow");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::DocumentationRole] = QStringLiteral("Selects tokens from a source object node.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("selection")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlObjectFlow");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::DocumentationRole] = QStringLiteral("Changes or replaces data tokens flowing along edge.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlObjectFlow")][QStringLiteral("transformation")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlObjectFlow::setClassForProperty()
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
    _classForProperty[QStringLiteral("activity")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("guard")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("inGroups")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("inPartitions")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("inStructuredNode")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("interrupts")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("redefinedEdges")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("source")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("target")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("weight")] = QStringLiteral("QUmlActivityEdge");
    _classForProperty[QStringLiteral("isMulticast")] = QStringLiteral("QUmlObjectFlow");
    _classForProperty[QStringLiteral("isMultireceive")] = QStringLiteral("QUmlObjectFlow");
    _classForProperty[QStringLiteral("selection")] = QStringLiteral("QUmlObjectFlow");
    _classForProperty[QStringLiteral("transformation")] = QStringLiteral("QUmlObjectFlow");
}

