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
#include "qumlexecutionoccurrencespecification.h"

#include "private/qumlexecutionoccurrencespecificationobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutionSpecification>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
/*!
    \class QUmlExecutionOccurrenceSpecification

    \inmodule QtUml

    \brief An execution occurrence specification represents moments in time at which actions or behaviors start or finish.
 */
QUmlExecutionOccurrenceSpecification::QUmlExecutionOccurrenceSpecification(bool createQObject) :
    QUmlOccurrenceSpecification(false),
    _execution(0)
{
    if (createQObject)
        _qObject = new QUmlExecutionOccurrenceSpecificationObject(this);
    setPropertyData();
}

QUmlExecutionOccurrenceSpecification::~QUmlExecutionOccurrenceSpecification()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlExecutionOccurrenceSpecification::clone() const
{
    QUmlExecutionOccurrenceSpecification *c = new QUmlExecutionOccurrenceSpecification;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrdering())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (covered())
        c->setCovered(dynamic_cast<QUmlLifeline *>(covered()->clone()));
    foreach (QUmlGeneralOrdering *element, toAfter())
        c->addToAfter(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    foreach (QUmlGeneralOrdering *element, toBefore())
        c->addToBefore(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (execution())
        c->setExecution(dynamic_cast<QUmlExecutionSpecification *>(execution()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the execution specification describing the execution that is started or finished at this execution event.
 */
QUmlExecutionSpecification *QUmlExecutionOccurrenceSpecification::execution() const
{
    // This is a read-write association end

    return _execution;
}

void QUmlExecutionOccurrenceSpecification::setExecution(QUmlExecutionSpecification *execution)
{
    // This is a read-write association end

    if (_execution != execution) {
        _execution = execution;
        if (execution->asQObject() && this->asQObject())
            QObject::connect(execution->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setExecution()));
    }
}

void QUmlExecutionOccurrenceSpecification::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("execution")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("execution")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("execution")][QtModeling::DocumentationRole] = QStringLiteral("References the execution specification describing the execution that is started or finished at this execution event.");
    QModelingObject::propertyDataHash[QStringLiteral("execution")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("execution")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("execution")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

