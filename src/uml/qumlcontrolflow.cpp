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
#include "qumlcontrolflow.h"

#include "private/qumlcontrolflowobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
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
    \class QUmlControlFlow

    \inmodule QtUml

    \brief A control flow is an edge that starts an activity node after the previous one is finished.
 */
QUmlControlFlow::QUmlControlFlow(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlControlFlowObject(this);
    setPropertyData();
}

QUmlControlFlow::~QUmlControlFlow()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlControlFlow::clone() const
{
    QUmlControlFlow *c = new QUmlControlFlow;
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
    return c;
}

void QUmlControlFlow::setPropertyData()
{
}

void QUmlControlFlow::setClassForProperty()
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
}

