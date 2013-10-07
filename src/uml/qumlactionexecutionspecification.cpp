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
#include "qumlactionexecutionspecification.h"

#include "private/qumlactionexecutionspecificationobject_p.h"

#include <QtUml/QUmlAction>
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
    \class QUmlActionExecutionSpecification

    \inmodule QtUml

    \brief An action execution specification is a kind of execution specification representing the execution of an action.
 */
QUmlActionExecutionSpecification::QUmlActionExecutionSpecification(bool createQObject) :
    _action(0)
{
    if (createQObject)
        _qObject = new QUmlActionExecutionSpecificationObject(this);
    setPropertyData();
}

QUmlActionExecutionSpecification::~QUmlActionExecutionSpecification()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlActionExecutionSpecification::clone() const
{
    QUmlActionExecutionSpecification *c = new QUmlActionExecutionSpecification;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
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
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (finish())
        c->setFinish(dynamic_cast<QUmlOccurrenceSpecification *>(finish()->clone()));
    if (start())
        c->setStart(dynamic_cast<QUmlOccurrenceSpecification *>(start()->clone()));
    if (action())
        c->setAction(dynamic_cast<QUmlAction *>(action()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Action whose execution is occurring.
 */
QUmlAction *QUmlActionExecutionSpecification::action() const
{
    // This is a read-write association end

    return _action;
}

void QUmlActionExecutionSpecification::setAction(QUmlAction *action)
{
    // This is a read-write association end

    if (_action != action) {
        _action = action;
        if (action && action->asQObject() && this->asQObject())
            QObject::connect(action->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setAction()));
    }
}

void QUmlActionExecutionSpecification::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlActionExecutionSpecification");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::DocumentationRole] = QStringLiteral("Action whose execution is occurring.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlActionExecutionSpecification")][QStringLiteral("action")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

