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
#include "qumlfinalstate.h"

#include "private/qumlfinalstateobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>

/*!
    \class QUmlFinalState

    \inmodule QtUml

    \brief A special kind of state signifying that the enclosing region is completed. If the enclosing region is directly contained in a state machine and all other regions in the state machine also are completed, then it means that the entire state machine is completed.
 */
QUmlFinalState::QUmlFinalState(bool createQObject) :
    QUmlState(false)
{
    if (createQObject)
        _qObject = new QUmlFinalStateObject(this);
    setPropertyData();
}

QUmlFinalState::~QUmlFinalState()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlFinalState::clone() const
{
    QUmlFinalState *c = new QUmlFinalState;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setLeaf(isLeaf());
    if (container())
        c->setContainer(dynamic_cast<QUmlRegion *>(container()->clone()));
    foreach (QUmlConnectionPointReference *element, connections())
        c->addConnection(dynamic_cast<QUmlConnectionPointReference *>(element->clone()));
    foreach (QUmlPseudostate *element, connectionPoints())
        c->addConnectionPoint(dynamic_cast<QUmlPseudostate *>(element->clone()));
    foreach (QUmlTrigger *element, deferrableTriggers())
        c->addDeferrableTrigger(dynamic_cast<QUmlTrigger *>(element->clone()));
    if (doActivity())
        c->setDoActivity(dynamic_cast<QUmlBehavior *>(doActivity()->clone()));
    if (entry())
        c->setEntry(dynamic_cast<QUmlBehavior *>(entry()->clone()));
    if (exit())
        c->setExit(dynamic_cast<QUmlBehavior *>(exit()->clone()));
    if (redefinedState())
        c->setRedefinedState(dynamic_cast<QUmlState *>(redefinedState()->clone()));
    foreach (QUmlRegion *element, regions())
        c->addRegion(dynamic_cast<QUmlRegion *>(element->clone()));
    if (stateInvariant())
        c->setStateInvariant(dynamic_cast<QUmlConstraint *>(stateInvariant()->clone()));
    if (submachine())
        c->setSubmachine(dynamic_cast<QUmlStateMachine *>(submachine()->clone()));
    return c;
}

void QUmlFinalState::setPropertyData()
{
}

