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
#include "qumlstructuralfeatureaction.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlStructuredActivityNode>

/*!
    \class QUmlStructuralFeatureAction

    \inmodule QtUml

    \brief StructuralFeatureAction is an abstract class for all structural feature actions.
 */
QUmlStructuralFeatureAction::QUmlStructuralFeatureAction() :
    _object(0),
    _structuralFeature(0)
{
    setPropertyData();
}

QUmlStructuralFeatureAction::~QUmlStructuralFeatureAction()
{
}

QModelingObject *QUmlStructuralFeatureAction::clone() const
{
    QUmlStructuralFeatureAction *c = new QUmlStructuralFeatureAction;
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
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    if (object())
        c->setObject(dynamic_cast<QUmlInputPin *>(object()->clone()));
    if (structuralFeature())
        c->setStructuralFeature(dynamic_cast<QUmlStructuralFeature *>(structuralFeature()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Gives the input pin from which the object whose structural feature is to be read or written is obtained.
 */
QUmlInputPin *QUmlStructuralFeatureAction::object() const
{
    // This is a read-write association end

    return _object;
}

void QUmlStructuralFeatureAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;
        if (object && object->asQObject() && this->asQObject())
            QObject::connect(object->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setObject()));
        object->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

/*!
    Structural feature to be read.
 */
QUmlStructuralFeature *QUmlStructuralFeatureAction::structuralFeature() const
{
    // This is a read-write association end

    return _structuralFeature;
}

void QUmlStructuralFeatureAction::setStructuralFeature(QUmlStructuralFeature *structuralFeature)
{
    // This is a read-write association end

    if (_structuralFeature != structuralFeature) {
        _structuralFeature = structuralFeature;
        if (structuralFeature && structuralFeature->asQObject() && this->asQObject())
            QObject::connect(structuralFeature->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setStructuralFeature()));
    }
}

void QUmlStructuralFeatureAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuralFeatureAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::DocumentationRole] = QStringLiteral("Gives the input pin from which the object whose structural feature is to be read or written is obtained.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("object")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuralFeatureAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::DocumentationRole] = QStringLiteral("Structural feature to be read.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeatureAction")][QStringLiteral("structuralFeature")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlStructuralFeatureAction::setClassForProperty()
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
    _classForProperty[QStringLiteral("handlers")] = QStringLiteral("QUmlExecutableNode");
    _classForProperty[QStringLiteral("context")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("inputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("isLocallyReentrant")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPostconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPreconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("outputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("object")] = QStringLiteral("QUmlStructuralFeatureAction");
    _classForProperty[QStringLiteral("structuralFeature")] = QStringLiteral("QUmlStructuralFeatureAction");
}

