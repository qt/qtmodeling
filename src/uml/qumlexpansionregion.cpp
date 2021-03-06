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
#include "qumlexpansionregion.h"

#include "private/qumlexpansionregionobject_p.h"

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
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlExpansionNode>
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
    \class QUmlExpansionRegion

    \inmodule QtUml

    \brief An expansion region is a structured activity region that executes multiple times corresponding to elements of an input collection.
 */

/*!
    Creates a new QUmlExpansionRegion. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlExpansionRegion::QUmlExpansionRegion(bool createQModelingObject) :
    QUmlStructuredActivityNode(false),
    _mode(QtUml::ExpansionKindIterative)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlExpansionRegionObject(this));
}

/*!
    Destroys the QUmlExpansionRegion.
 */
QUmlExpansionRegion::~QUmlExpansionRegion()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlExpansionRegion.
*/
QModelingElement *QUmlExpansionRegion::clone() const
{
    QUmlExpansionRegion *c = new QUmlExpansionRegion;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
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
    foreach (QUmlOutputPin *element, structuredNodeOutputs())
        c->addStructuredNodeOutput(dynamic_cast<QUmlOutputPin *>(element->clone()));
    foreach (QUmlVariable *element, variables())
        c->addVariable(dynamic_cast<QUmlVariable *>(element->clone()));
    c->setMode(mode());
    return c;
}

// OWNED ATTRIBUTES

/*!
    An object node that holds a separate element of the input collection during each of the multiple executions of the region.

    \sa addInputElement(), removeInputElement()

    \b {Opposite property(ies):} QUmlExpansionNode::regionAsInput().
 */
const QSet<QUmlExpansionNode *> QUmlExpansionRegion::inputElements() const
{
    // This is a read-write association end

    return _inputElements;
}

/*!
    Adds \a inputElement to inputElements.

    \sa inputElements(), removeInputElement()
 */
void QUmlExpansionRegion::addInputElement(QUmlExpansionNode *inputElement)
{
    // This is a read-write association end

    if (!_inputElements.contains(inputElement)) {
        _inputElements.insert(inputElement);
        if (inputElement && inputElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(inputElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInputElement(QObject *)));

        // Adjust opposite properties
        if (inputElement) {
            inputElement->setRegionAsInput(this);
        }
    }
}

/*!
    Removes \a inputElement from inputElements.

    \sa inputElements(), addInputElement()
 */
void QUmlExpansionRegion::removeInputElement(QUmlExpansionNode *inputElement)
{
    // This is a read-write association end

    if (_inputElements.contains(inputElement)) {
        _inputElements.remove(inputElement);

        // Adjust opposite properties
        if (inputElement) {
            inputElement->setRegionAsInput(0);
        }
    }
}

/*!
    The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution
 */
QtUml::ExpansionKind QUmlExpansionRegion::mode() const
{
    // This is a read-write property

    return _mode;
}

/*!
    Adjusts mode to \a mode.
 */
void QUmlExpansionRegion::setMode(QtUml::ExpansionKind mode)
{
    // This is a read-write property

    if (_mode != mode) {
        _mode = mode;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("mode");
    }
}

/*!
    An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.

    \sa addOutputElement(), removeOutputElement()

    \b {Opposite property(ies):} QUmlExpansionNode::regionAsOutput().
 */
const QSet<QUmlExpansionNode *> QUmlExpansionRegion::outputElements() const
{
    // This is a read-write association end

    return _outputElements;
}

/*!
    Adds \a outputElement to outputElements.

    \sa outputElements(), removeOutputElement()
 */
void QUmlExpansionRegion::addOutputElement(QUmlExpansionNode *outputElement)
{
    // This is a read-write association end

    if (!_outputElements.contains(outputElement)) {
        _outputElements.insert(outputElement);
        if (outputElement && outputElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(outputElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOutputElement(QObject *)));

        // Adjust opposite properties
        if (outputElement) {
            outputElement->setRegionAsOutput(this);
        }
    }
}

/*!
    Removes \a outputElement from outputElements.

    \sa outputElements(), addOutputElement()
 */
void QUmlExpansionRegion::removeOutputElement(QUmlExpansionNode *outputElement)
{
    // This is a read-write association end

    if (_outputElements.contains(outputElement)) {
        _outputElements.remove(outputElement);

        // Adjust opposite properties
        if (outputElement) {
            outputElement->setRegionAsOutput(0);
        }
    }
}

QT_END_NAMESPACE

