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
#include "qumlconditionalnode.h"

#include "private/qumlconditionalnodeobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClause>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlVariable>

/*!
    \class QUmlConditionalNode

    \inmodule QtUml

    \brief A conditional node is a structured activity node that represents an exclusive choice among some number of alternatives.
 */
QUmlConditionalNode::QUmlConditionalNode(bool createQObject) :
    QUmlStructuredActivityNode(false),
    _isAssured(false),
    _isDeterminate(false)
{
    if (createQObject)
        _qObject = new QUmlConditionalNodeObject(this);
    setPropertyData();
}

QUmlConditionalNode::~QUmlConditionalNode()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlConditionalNode::clone() const
{
    QUmlConditionalNode *c = new QUmlConditionalNode;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
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
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlActivityEdge *element, edges())
        c->addEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    c->setMustIsolate(mustIsolate());
    foreach (QUmlActivityNode *element, nodes())
        c->addNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlInputPin *element, structuredNodeInputs())
        c->addStructuredNodeInput(dynamic_cast<QUmlInputPin *>(element->clone()));
    foreach (QUmlVariable *element, variables())
        c->addVariable(dynamic_cast<QUmlVariable *>(element->clone()));
    foreach (QUmlClause *element, clauses())
        c->addClause(dynamic_cast<QUmlClause *>(element->clone()));
    c->setAssured(isAssured());
    c->setDeterminate(isDeterminate());
    foreach (QUmlOutputPin *element, results())
        c->addResult(dynamic_cast<QUmlOutputPin *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Set of clauses composing the conditional.
 */
const QSet<QUmlClause *> QUmlConditionalNode::clauses() const
{
    // This is a read-write association end

    return _clauses;
}

void QUmlConditionalNode::addClause(QUmlClause *clause)
{
    // This is a read-write association end

    if (!_clauses.contains(clause)) {
        _clauses.insert(clause);
        if (clause && clause->asQObject() && this->asQObject())
            QObject::connect(clause->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeClause(QObject *)));
        clause->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(clause);
    }
}

void QUmlConditionalNode::removeClause(QUmlClause *clause)
{
    // This is a read-write association end

    if (_clauses.contains(clause)) {
        _clauses.remove(clause);
        if (clause->asQObject())
            clause->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(clause);
    }
}

/*!
    If true, the modeler asserts that at least one test will succeed.
 */
bool QUmlConditionalNode::isAssured() const
{
    // This is a read-write property

    return _isAssured;
}

void QUmlConditionalNode::setAssured(bool isAssured)
{
    // This is a read-write property

    if (_isAssured != isAssured) {
        _isAssured = isAssured;
        _modifiedResettableProperties << QStringLiteral("isAssured");
    }
}

/*!
    If true, the modeler asserts that at most one test will succeed.
 */
bool QUmlConditionalNode::isDeterminate() const
{
    // This is a read-write property

    return _isDeterminate;
}

void QUmlConditionalNode::setDeterminate(bool isDeterminate)
{
    // This is a read-write property

    if (_isDeterminate != isDeterminate) {
        _isDeterminate = isDeterminate;
        _modifiedResettableProperties << QStringLiteral("isDeterminate");
    }
}

/*!
    A list of output pins that constitute the data flow outputs of the conditional.
 */
const QList<QUmlOutputPin *> QUmlConditionalNode::results() const
{
    // This is a read-write association end

    return _results;
}

void QUmlConditionalNode::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (!_results.contains(result)) {
        _results.append(result);
        if (result && result->asQObject() && this->asQObject())
            QObject::connect(result->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeResult(QObject *)));
        result->asQObject()->setParent(this->asQObject());
    }
}

void QUmlConditionalNode::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_results.contains(result)) {
        _results.removeAll(result);
        if (result->asQObject())
            result->asQObject()->setParent(0);
    }
}

void QUmlConditionalNode::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlConditionalNode");
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::DocumentationRole] = QStringLiteral("Set of clauses composing the conditional.");
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("clause")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlConditionalNode");
    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::DocumentationRole] = QStringLiteral("If true, the modeler asserts that at least one test will succeed.");
    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isAssured")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlConditionalNode");
    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::DocumentationRole] = QStringLiteral("If true, the modeler asserts that at most one test will succeed.");
    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isDeterminate")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlConditionalNode");
    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::DocumentationRole] = QStringLiteral("A list of output pins that constitute the data flow outputs of the conditional.");
    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("StructuredActivityNode-structuredNodeOutput");
    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("result")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

