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
#include "qumlaction.h"

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
#include <QtUml/QUmlStructuredActivityNode>

/*!
    \class QUmlAction

    \inmodule QtUml

    \brief An action has pre- and post-conditions.An action represents a single step within an activity, that is, one that is not further decomposed within the activity.An action is a named element that is the fundamental unit of executable functionality. The execution of an action represents some transformation or processing in the modeled system, be it a computer system or otherwise.
 */
QUmlAction::QUmlAction() :
    _isLocallyReentrant(false)
{
    setClassForProperty();
    setPropertyData();
}

QUmlAction::~QUmlAction()
{
}

QModelingObject *QUmlAction::clone() const
{
    QUmlAction *c = new QUmlAction;
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
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QUmlClassifier *QUmlAction::context() const
{
    // This is a read-only derived association end

    qWarning("UmlAction::context(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlAction::setContext(QUmlClassifier *context)
{
    // This is a read-only derived association end

    qWarning("UmlAction::setContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
const QList<QUmlInputPin *> QUmlAction::inputs() const
{
    // This is a read-only derived union association end

    return _inputs;
}

void QUmlAction::addInput(QUmlInputPin *input)
{
    // This is a read-only derived union association end

    if (!_inputs.contains(input)) {
        _inputs.append(input);
        if (input && input->asQObject() && this->asQObject())
            QObject::connect(input->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInput(QObject *)));
        input->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(input);
    }
}

void QUmlAction::removeInput(QUmlInputPin *input)
{
    // This is a read-only derived union association end

    if (_inputs.contains(input)) {
        _inputs.removeAll(input);
        if (input->asQObject())
            input->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(input);
    }
}

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool QUmlAction::isLocallyReentrant() const
{
    // This is a read-write property

    return _isLocallyReentrant;
}

void QUmlAction::setLocallyReentrant(bool isLocallyReentrant)
{
    // This is a read-write property

    if (_isLocallyReentrant != isLocallyReentrant) {
        _isLocallyReentrant = isLocallyReentrant;
        _modifiedResettableProperties << QStringLiteral("isLocallyReentrant");
    }
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
const QSet<QUmlConstraint *> QUmlAction::localPostconditions() const
{
    // This is a read-write association end

    return _localPostconditions;
}

void QUmlAction::addLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (!_localPostconditions.contains(localPostcondition)) {
        _localPostconditions.insert(localPostcondition);
        if (localPostcondition && localPostcondition->asQObject() && this->asQObject())
            QObject::connect(localPostcondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeLocalPostcondition(QObject *)));
        localPostcondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(localPostcondition);
    }
}

void QUmlAction::removeLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (_localPostconditions.contains(localPostcondition)) {
        _localPostconditions.remove(localPostcondition);
        if (localPostcondition->asQObject())
            localPostcondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(localPostcondition);
    }
}

/*!
    Constraint that must be satisfied when execution is started.
 */
const QSet<QUmlConstraint *> QUmlAction::localPreconditions() const
{
    // This is a read-write association end

    return _localPreconditions;
}

void QUmlAction::addLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (!_localPreconditions.contains(localPrecondition)) {
        _localPreconditions.insert(localPrecondition);
        if (localPrecondition && localPrecondition->asQObject() && this->asQObject())
            QObject::connect(localPrecondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeLocalPrecondition(QObject *)));
        localPrecondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(localPrecondition);
    }
}

void QUmlAction::removeLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (_localPreconditions.contains(localPrecondition)) {
        _localPreconditions.remove(localPrecondition);
        if (localPrecondition->asQObject())
            localPrecondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(localPrecondition);
    }
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
const QList<QUmlOutputPin *> QUmlAction::outputs() const
{
    // This is a read-only derived union association end

    return _outputs;
}

void QUmlAction::addOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (!_outputs.contains(output)) {
        _outputs.append(output);
        if (output && output->asQObject() && this->asQObject())
            QObject::connect(output->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOutput(QObject *)));
        output->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(output);
    }
}

void QUmlAction::removeOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (_outputs.contains(output)) {
        _outputs.removeAll(output);
        if (output->asQObject())
            output->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(output);
    }
}

void QUmlAction::setClassForProperty()
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
}

void QUmlAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::DocumentationRole] = QStringLiteral("The classifier that owns the behavior of which this action is a part.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("context")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::DocumentationRole] = QStringLiteral("The ordered set of input pins connected to the Action. These are among the total set of inputs.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("inputs")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::DocumentationRole] = QStringLiteral("If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("isLocallyReentrant")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::DocumentationRole] = QStringLiteral("Constraint that must be satisfied when executed is completed.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPostconditions")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::DocumentationRole] = QStringLiteral("Constraint that must be satisfied when execution is started.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("localPreconditions")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::DocumentationRole] = QStringLiteral("The ordered set of output pins connected to the Action. The action places its results onto pins in this set.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAction")][QStringLiteral("outputs")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

