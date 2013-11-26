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
#include "qumlexpansionnode.h"

#include "private/qumlexpansionnodeobject_p.h"

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
#include <QtUml/QUmlExpansionRegion>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlExpansionNode

    \inmodule QtUml

    \brief An expansion node is an object node used to indicate a flow across the boundary of an expansion region. A flow into a region contains a collection that is broken into its individual elements inside the region, which is executed once per element. A flow out of a region combines individual elements into a collection for use outside the region.
 */

/*!
    Creates a new QUmlExpansionNode. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlExpansionNode::QUmlExpansionNode(bool createQModelingObject) :
    _regionAsInput(0),
    _regionAsOutput(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlExpansionNodeObject(this));
}

/*!
    Destroys the QUmlExpansionNode.
 */
QUmlExpansionNode::~QUmlExpansionNode()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlExpansionNode.
*/
QModelingElement *QUmlExpansionNode::clone() const
{
    QUmlExpansionNode *c = new QUmlExpansionNode;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setControlType(isControlType());
    c->setOrdering(ordering());
    if (upperBound())
        c->setUpperBound(dynamic_cast<QUmlValueSpecification *>(upperBound()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The expansion region for which the node is an input.

    \b {Opposite property(ies):} QUmlExpansionRegion::inputElements().
 */
QUmlExpansionRegion *QUmlExpansionNode::regionAsInput() const
{
    // This is a read-write association end

    return _regionAsInput;
}

/*!
    Adjusts regionAsInput to \a regionAsInput.
 */
void QUmlExpansionNode::setRegionAsInput(QUmlExpansionRegion *regionAsInput)
{
    // This is a read-write association end

    if (_regionAsInput != regionAsInput) {
        _regionAsInput = regionAsInput;
        if (regionAsInput && regionAsInput->asQModelingObject() && this->asQModelingObject())
            QObject::connect(regionAsInput->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRegionAsInput()));
    }
}

/*!
    The expansion region for which the node is an output.

    \b {Opposite property(ies):} QUmlExpansionRegion::outputElements().
 */
QUmlExpansionRegion *QUmlExpansionNode::regionAsOutput() const
{
    // This is a read-write association end

    return _regionAsOutput;
}

/*!
    Adjusts regionAsOutput to \a regionAsOutput.
 */
void QUmlExpansionNode::setRegionAsOutput(QUmlExpansionRegion *regionAsOutput)
{
    // This is a read-write association end

    if (_regionAsOutput != regionAsOutput) {
        _regionAsOutput = regionAsOutput;
        if (regionAsOutput && regionAsOutput->asQModelingObject() && this->asQModelingObject())
            QObject::connect(regionAsOutput->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRegionAsOutput()));
    }
}

QT_END_NAMESPACE

