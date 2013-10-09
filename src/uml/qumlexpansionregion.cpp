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
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlVariable>

/*!
    \class QUmlExpansionRegion

    \inmodule QtUml

    \brief An expansion region is a structured activity region that executes multiple times corresponding to elements of an input collection.
 */
QUmlExpansionRegion::QUmlExpansionRegion(bool createQObject) :
    QUmlStructuredActivityNode(false),
    _mode(QtUml::ExpansionKindIterative)
{
    if (createQObject)
        _qObject = new QUmlExpansionRegionObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlExpansionRegion::~QUmlExpansionRegion()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlExpansionRegion::clone() const
{
    QUmlExpansionRegion *c = new QUmlExpansionRegion;
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
    foreach (QUmlOutputPin *element, structuredNodeOutputs())
        c->addStructuredNodeOutput(dynamic_cast<QUmlOutputPin *>(element->clone()));
    foreach (QUmlVariable *element, variables())
        c->addVariable(dynamic_cast<QUmlVariable *>(element->clone()));
    foreach (QUmlExpansionNode *element, inputElements())
        c->addInputElement(dynamic_cast<QUmlExpansionNode *>(element->clone()));
    c->setMode(mode());
    foreach (QUmlExpansionNode *element, outputElements())
        c->addOutputElement(dynamic_cast<QUmlExpansionNode *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An object node that holds a separate element of the input collection during each of the multiple executions of the region.
 */
const QSet<QUmlExpansionNode *> QUmlExpansionRegion::inputElements() const
{
    // This is a read-write association end

    return _inputElements;
}

void QUmlExpansionRegion::addInputElement(QUmlExpansionNode *inputElement)
{
    // This is a read-write association end

    if (!_inputElements.contains(inputElement)) {
        _inputElements.insert(inputElement);
        if (inputElement && inputElement->asQObject() && this->asQObject())
            QObject::connect(inputElement->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInputElement(QObject *)));

        // Adjust opposite properties
        if (inputElement) {
            inputElement->setRegionAsInput(this);
        }
    }
}

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

void QUmlExpansionRegion::setMode(QtUml::ExpansionKind mode)
{
    // This is a read-write property

    if (_mode != mode) {
        _mode = mode;
        _modifiedResettableProperties << QStringLiteral("mode");
    }
}

/*!
    An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.
 */
const QSet<QUmlExpansionNode *> QUmlExpansionRegion::outputElements() const
{
    // This is a read-write association end

    return _outputElements;
}

void QUmlExpansionRegion::addOutputElement(QUmlExpansionNode *outputElement)
{
    // This is a read-write association end

    if (!_outputElements.contains(outputElement)) {
        _outputElements.insert(outputElement);
        if (outputElement && outputElement->asQObject() && this->asQObject())
            QObject::connect(outputElement->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOutputElement(QObject *)));

        // Adjust opposite properties
        if (outputElement) {
            outputElement->setRegionAsOutput(this);
        }
    }
}

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

void QUmlExpansionRegion::setGroupProperties()
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
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inGroups"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inInterruptibleRegions"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inPartitions"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStructuredNode"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedNodes"))));
    _groupProperties.insert(QStringLiteral("QUmlExecutableNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("handlers"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputs"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLocallyReentrant"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPostconditions"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPreconditions"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputs"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedEdges"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedNodes"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subgroups"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superGroup"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("edges"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("mustIsolate"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nodes"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuredNodeInputs"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuredNodeOutputs"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("variables"))));
    _groupProperties.insert(QStringLiteral("QUmlExpansionRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputElements"))));
    _groupProperties.insert(QStringLiteral("QUmlExpansionRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("mode"))));
    _groupProperties.insert(QStringLiteral("QUmlExpansionRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputElements"))));
}

void QUmlExpansionRegion::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExpansionRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::DocumentationRole] = QStringLiteral("An object node that holds a separate element of the input collection during each of the multiple executions of the region.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("inputElements")][QtModeling::OppositeEndRole] = QStringLiteral("ExpansionNode-regionAsInput");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExpansionRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::DocumentationRole] = QStringLiteral("The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("mode")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExpansionRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::DocumentationRole] = QStringLiteral("An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExpansionRegion")][QStringLiteral("outputElements")][QtModeling::OppositeEndRole] = QStringLiteral("ExpansionNode-regionAsOutput");

}

