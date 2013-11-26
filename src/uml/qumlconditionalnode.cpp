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
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlConditionalNode

    \inmodule QtUml

    \brief A conditional node is a structured activity node that represents an exclusive choice among some number of alternatives.
 */

/*!
    Creates a new QUmlConditionalNode. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlConditionalNode::QUmlConditionalNode(bool createQModelingObject) :
    QUmlStructuredActivityNode(false),
    _isAssured(false),
    _isDeterminate(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlConditionalNodeObject(this));
}

/*!
    Destroys the QUmlConditionalNode.
 */
QUmlConditionalNode::~QUmlConditionalNode()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlConditionalNode.
*/
QModelingElement *QUmlConditionalNode::clone() const
{
    QUmlConditionalNode *c = new QUmlConditionalNode;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
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

    \sa addClause(), removeClause()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlClause *> QUmlConditionalNode::clauses() const
{
    // This is a read-write association end

    return _clauses;
}

/*!
    Adds \a clause to clauses.

    \sa clauses(), removeClause()
 */
void QUmlConditionalNode::addClause(QUmlClause *clause)
{
    // This is a read-write association end

    if (!_clauses.contains(clause)) {
        _clauses.insert(clause);
        if (clause && clause->asQModelingObject() && this->asQModelingObject())
            QObject::connect(clause->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeClause(QObject *)));
        clause->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(clause);
    }
}

/*!
    Removes \a clause from clauses.

    \sa clauses(), addClause()
 */
void QUmlConditionalNode::removeClause(QUmlClause *clause)
{
    // This is a read-write association end

    if (_clauses.contains(clause)) {
        _clauses.remove(clause);
        if (clause->asQModelingObject())
            clause->asQModelingObject()->setParent(0);

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

/*!
    Adjusts isAssured to \a isAssured.
 */
void QUmlConditionalNode::setAssured(bool isAssured)
{
    // This is a read-write property

    if (_isAssured != isAssured) {
        _isAssured = isAssured;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isAssured");
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

/*!
    Adjusts isDeterminate to \a isDeterminate.
 */
void QUmlConditionalNode::setDeterminate(bool isDeterminate)
{
    // This is a read-write property

    if (_isDeterminate != isDeterminate) {
        _isDeterminate = isDeterminate;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDeterminate");
    }
}

/*!
    A list of output pins that constitute the data flow outputs of the conditional.

    \sa addResult(), removeResult()

    \b {Redefined property(ies):} QUmlStructuredActivityNode::structuredNodeOutputs().
 */
const QList<QUmlOutputPin *> QUmlConditionalNode::results() const
{
    // This is a read-write association end

    return _results;
}

/*!
    Adds \a result to results.

    \sa results(), removeResult()
 */
void QUmlConditionalNode::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (!_results.contains(result)) {
        _results.append(result);
        if (result && result->asQModelingObject() && this->asQModelingObject())
            QObject::connect(result->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeResult(QObject *)));
        result->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust redefined properties
        QUmlStructuredActivityNode::addStructuredNodeOutput(result);
    }
}

/*!
    Removes \a result from results.

    \sa results(), addResult()
 */
void QUmlConditionalNode::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_results.contains(result)) {
        _results.removeAll(result);
        if (result->asQModelingObject())
            result->asQModelingObject()->setParent(0);

        // Adjust redefined properties
        QUmlStructuredActivityNode::removeStructuredNodeOutput(result);
    }
}

QT_END_NAMESPACE

