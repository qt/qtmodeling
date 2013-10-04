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
#include "qumlpseudostate.h"

#include "private/qumlpseudostateobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
/*!
    \class QUmlPseudostate

    \inmodule QtUml

    \brief A pseudostate is an abstraction that encompasses different types of transient vertices in the state machine graph.
 */
QUmlPseudostate::QUmlPseudostate(bool createQObject) :
    _kind(QtUml::PseudostateKindInitial),
    _state(0),
    _stateMachine(0)
{
    if (createQObject)
        _qObject = new QUmlPseudostateObject(this);
    setPropertyData();
}

QUmlPseudostate::~QUmlPseudostate()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlPseudostate::clone() const
{
    QUmlPseudostate *c = new QUmlPseudostate;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (container())
        c->setContainer(dynamic_cast<QUmlRegion *>(container()->clone()));
    c->setKind(kind());
    if (state())
        c->setState(dynamic_cast<QUmlState *>(state()->clone()));
    if (stateMachine())
        c->setStateMachine(dynamic_cast<QUmlStateMachine *>(stateMachine()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
 */
QtUml::PseudostateKind QUmlPseudostate::kind() const
{
    // This is a read-write property

    return _kind;
}

void QUmlPseudostate::setKind(QtUml::PseudostateKind kind)
{
    // This is a read-write property

    if (_kind != kind) {
        _kind = kind;
    }
}

/*!
    The State that owns this pseudostate and in which it appears.
 */
QUmlState *QUmlPseudostate::state() const
{
    // This is a read-write association end

    return _state;
}

void QUmlPseudostate::setState(QUmlState *state)
{
    // This is a read-write association end

    if (_state != state) {
        // Adjust subsetted properties

        _state = state;
        if (state && state->asQObject() && this->asQObject())
            QObject::connect(state->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setState()));

        // Adjust subsetted properties
        setNamespace(state);
    }
}

/*!
    The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
 */
QUmlStateMachine *QUmlPseudostate::stateMachine() const
{
    // This is a read-write association end

    return _stateMachine;
}

void QUmlPseudostate::setStateMachine(QUmlStateMachine *stateMachine)
{
    // This is a read-write association end

    if (_stateMachine != stateMachine) {
        // Adjust subsetted properties

        _stateMachine = stateMachine;
        if (stateMachine && stateMachine->asQObject() && this->asQObject())
            QObject::connect(stateMachine->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setStateMachine()));

        // Adjust subsetted properties
        setNamespace(stateMachine);
    }
}

void QUmlPseudostate::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::DocumentationRole] = QStringLiteral("Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("state")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("state")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("state")][QtModeling::DocumentationRole] = QStringLiteral("The State that owns this pseudostate and in which it appears.");
    QModelingObject::propertyDataHash[QStringLiteral("state")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("state")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("state")][QtModeling::OppositeEndRole] = QStringLiteral("State-connectionPoint");

    QModelingObject::propertyDataHash[QStringLiteral("stateMachine")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("stateMachine")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("stateMachine")][QtModeling::DocumentationRole] = QStringLiteral("The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.");
    QModelingObject::propertyDataHash[QStringLiteral("stateMachine")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("stateMachine")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("stateMachine")][QtModeling::OppositeEndRole] = QStringLiteral("StateMachine-connectionPoint");

}

