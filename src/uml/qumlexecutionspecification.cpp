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
#include "qumlexecutionspecification.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
/*!
    \class QUmlExecutionSpecification

    \inmodule QtUml

    \brief An execution specification is a specification of the execution of a unit of behavior or action within the lifeline. The duration of an execution specification is represented by two cccurrence specifications, the start occurrence specification and the finish occurrence specification.
 */
QUmlExecutionSpecification::QUmlExecutionSpecification() :
    _finish(0),
    _start(0)
{
    setPropertyData();
}

QUmlExecutionSpecification::~QUmlExecutionSpecification()
{
}

QModelingObject *QUmlExecutionSpecification::clone() const
{
    QUmlExecutionSpecification *c = new QUmlExecutionSpecification;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlLifeline *element, covered())
        c->addCovered(dynamic_cast<QUmlLifeline *>(element->clone()));
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrdering())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (finish())
        c->setFinish(dynamic_cast<QUmlOccurrenceSpecification *>(finish()->clone()));
    if (start())
        c->setStart(dynamic_cast<QUmlOccurrenceSpecification *>(start()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the OccurrenceSpecification that designates the finish of the Action or Behavior.
 */
QUmlOccurrenceSpecification *QUmlExecutionSpecification::finish() const
{
    // This is a read-write association end

    return _finish;
}

void QUmlExecutionSpecification::setFinish(QUmlOccurrenceSpecification *finish)
{
    // This is a read-write association end

    if (_finish != finish) {
        _finish = finish;
        if (finish && finish->asQObject() && this->asQObject())
            QObject::connect(finish->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setFinish()));
    }
}

/*!
    References the OccurrenceSpecification that designates the start of the Action or Behavior
 */
QUmlOccurrenceSpecification *QUmlExecutionSpecification::start() const
{
    // This is a read-write association end

    return _start;
}

void QUmlExecutionSpecification::setStart(QUmlOccurrenceSpecification *start)
{
    // This is a read-write association end

    if (_start != start) {
        _start = start;
        if (start && start->asQObject() && this->asQObject())
            QObject::connect(start->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setStart()));
    }
}

void QUmlExecutionSpecification::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("finish")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("finish")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("finish")][QtModeling::DocumentationRole] = QStringLiteral("References the OccurrenceSpecification that designates the finish of the Action or Behavior.");
    QModelingObject::propertyDataHash[QStringLiteral("finish")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("finish")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("finish")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("start")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("start")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("start")][QtModeling::DocumentationRole] = QStringLiteral("References the OccurrenceSpecification that designates the start of the Action or Behavior");
    QModelingObject::propertyDataHash[QStringLiteral("start")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("start")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("start")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

