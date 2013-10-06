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
#include "qumllinkaction.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlLinkEndData>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

/*!
    \class QUmlLinkAction

    \inmodule QtUml

    \brief LinkAction is an abstract class for all link actions that identify their links by the objects at the ends of the links and by the qualifiers at ends of the links.
 */
QUmlLinkAction::QUmlLinkAction()
{
    setPropertyData();
}

QUmlLinkAction::~QUmlLinkAction()
{
}

QModelingObject *QUmlLinkAction::clone() const
{
    QUmlLinkAction *c = new QUmlLinkAction;
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
    foreach (QUmlLinkEndData *element, endData())
        c->addEndData(dynamic_cast<QUmlLinkEndData *>(element->clone()));
    foreach (QUmlInputPin *element, inputValues())
        c->addInputValue(dynamic_cast<QUmlInputPin *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Data identifying one end of a link by the objects on its ends and qualifiers.
 */
const QSet<QUmlLinkEndData *> QUmlLinkAction::endData() const
{
    // This is a read-write association end

    return _endData;
}

void QUmlLinkAction::addEndData(QUmlLinkEndData *endData)
{
    // This is a read-write association end

    if (!_endData.contains(endData)) {
        _endData.insert(endData);
        if (endData && endData->asQObject() && this->asQObject())
            QObject::connect(endData->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeEndData(QObject *)));
        endData->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(endData);
    }
}

void QUmlLinkAction::removeEndData(QUmlLinkEndData *endData)
{
    // This is a read-write association end

    if (_endData.contains(endData)) {
        _endData.remove(endData);
        if (endData->asQObject())
            endData->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(endData);
    }
}

/*!
    Pins taking end objects and qualifier values as input.
 */
const QSet<QUmlInputPin *> QUmlLinkAction::inputValues() const
{
    // This is a read-write association end

    return _inputValues;
}

void QUmlLinkAction::addInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    if (!_inputValues.contains(inputValue)) {
        _inputValues.insert(inputValue);
        if (inputValue && inputValue->asQObject() && this->asQObject())
            QObject::connect(inputValue->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInputValue(QObject *)));
        inputValue->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addInput(inputValue);
    }
}

void QUmlLinkAction::removeInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    if (_inputValues.contains(inputValue)) {
        _inputValues.remove(inputValue);
        if (inputValue->asQObject())
            inputValue->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeInput(inputValue);
    }
}

// OPERATIONS

/*!
    The association operates on LinkAction. It returns the association of the action.
 */
QUmlAssociation *QUmlLinkAction::association() const
{
    qWarning("UmlLinkAction::association(): to be implemented (operation)");

    return 0;
}

void QUmlLinkAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLinkAction");
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::DocumentationRole] = QStringLiteral("Data identifying one end of a link by the objects on its ends and qualifiers.");
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("endData")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLinkAction");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::DocumentationRole] = QStringLiteral("Pins taking end objects and qualifier values as input.");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("inputValue")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

