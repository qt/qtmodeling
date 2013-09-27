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
    setPropertyData();
}

QUmlAction::~QUmlAction()
{
}

QModelingObject *QUmlAction::clone() const
{
    QUmlAction *c = new QUmlAction;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegion())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartition())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incoming())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoing())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNode())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlExceptionHandler *element, handler())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostcondition())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPrecondition())
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

    qWarning("UmlAction::context(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
const QList<QUmlInputPin *> QUmlAction::input() const
{
    // This is a read-only derived union association end

    return _input;
}

void QUmlAction::addInput(QUmlInputPin *input)
{
    // This is a read-only derived union association end

    if (!_input.contains(input)) {
        _input.append(input);
        if (input->asQObject() && this->asQObject())
            QObject::connect(input->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInput(QObject *)));
        input->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(input);
    }
}

void QUmlAction::removeInput(QUmlInputPin *input)
{
    // This is a read-only derived union association end

    if (_input.contains(input)) {
        _input.removeAll(input);
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
    }
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
const QSet<QUmlConstraint *> QUmlAction::localPostcondition() const
{
    // This is a read-write association end

    return _localPostcondition;
}

void QUmlAction::addLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (!_localPostcondition.contains(localPostcondition)) {
        _localPostcondition.insert(localPostcondition);
        if (localPostcondition->asQObject() && this->asQObject())
            QObject::connect(localPostcondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeLocalPostcondition(QObject *)));
        localPostcondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(localPostcondition);
    }
}

void QUmlAction::removeLocalPostcondition(QUmlConstraint *localPostcondition)
{
    // This is a read-write association end

    if (_localPostcondition.contains(localPostcondition)) {
        _localPostcondition.remove(localPostcondition);
        if (localPostcondition->asQObject())
            localPostcondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(localPostcondition);
    }
}

/*!
    Constraint that must be satisfied when execution is started.
 */
const QSet<QUmlConstraint *> QUmlAction::localPrecondition() const
{
    // This is a read-write association end

    return _localPrecondition;
}

void QUmlAction::addLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (!_localPrecondition.contains(localPrecondition)) {
        _localPrecondition.insert(localPrecondition);
        if (localPrecondition->asQObject() && this->asQObject())
            QObject::connect(localPrecondition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeLocalPrecondition(QObject *)));
        localPrecondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(localPrecondition);
    }
}

void QUmlAction::removeLocalPrecondition(QUmlConstraint *localPrecondition)
{
    // This is a read-write association end

    if (_localPrecondition.contains(localPrecondition)) {
        _localPrecondition.remove(localPrecondition);
        if (localPrecondition->asQObject())
            localPrecondition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(localPrecondition);
    }
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
const QList<QUmlOutputPin *> QUmlAction::output() const
{
    // This is a read-only derived union association end

    return _output;
}

void QUmlAction::addOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (!_output.contains(output)) {
        _output.append(output);
        if (output->asQObject() && this->asQObject())
            QObject::connect(output->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOutput(QObject *)));
        output->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(output);
    }
}

void QUmlAction::removeOutput(QUmlOutputPin *output)
{
    // This is a read-only derived union association end

    if (_output.contains(output)) {
        _output.removeAll(output);
        if (output->asQObject())
            output->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(output);
    }
}

void QUmlAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("context")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("context")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("context")][QtModeling::DocumentationRole] = QStringLiteral("The classifier that owns the behavior of which this action is a part.");
    QModelingObject::propertyDataHash[QStringLiteral("context")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("context")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("context")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("input")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("input")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("input")][QtModeling::DocumentationRole] = QStringLiteral("The ordered set of input pins connected to the Action. These are among the total set of inputs.");
    QModelingObject::propertyDataHash[QStringLiteral("input")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("input")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("input")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("isLocallyReentrant")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("isLocallyReentrant")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isLocallyReentrant")][QtModeling::DocumentationRole] = QStringLiteral("If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.");
    QModelingObject::propertyDataHash[QStringLiteral("isLocallyReentrant")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isLocallyReentrant")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isLocallyReentrant")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("localPostcondition")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("localPostcondition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("localPostcondition")][QtModeling::DocumentationRole] = QStringLiteral("Constraint that must be satisfied when executed is completed.");
    QModelingObject::propertyDataHash[QStringLiteral("localPostcondition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("localPostcondition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("localPostcondition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("localPrecondition")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("localPrecondition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("localPrecondition")][QtModeling::DocumentationRole] = QStringLiteral("Constraint that must be satisfied when execution is started.");
    QModelingObject::propertyDataHash[QStringLiteral("localPrecondition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("localPrecondition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("localPrecondition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("output")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("output")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("output")][QtModeling::DocumentationRole] = QStringLiteral("The ordered set of output pins connected to the Action. The action places its results onto pins in this set.");
    QModelingObject::propertyDataHash[QStringLiteral("output")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("output")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("output")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

