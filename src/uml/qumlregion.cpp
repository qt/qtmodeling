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
#include "qumlregion.h"

#include "private/qumlregionobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlVertex>

/*!
    \class QUmlRegion

    \inmodule QtUml

    \brief A region is an orthogonal part of either a composite state or a state machine. It contains states and transitions.
 */
QUmlRegion::QUmlRegion(bool createQObject) :
    _extendedRegion(0),
    _state(0),
    _stateMachine(0)
{
    if (createQObject)
        _qObject = new QUmlRegionObject(this);
    setPropertyData();
}

QUmlRegion::~QUmlRegion()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlRegion::clone() const
{
    QUmlRegion *c = new QUmlRegion;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (extendedRegion())
        c->setExtendedRegion(dynamic_cast<QUmlRegion *>(extendedRegion()->clone()));
    if (state())
        c->setState(dynamic_cast<QUmlState *>(state()->clone()));
    if (stateMachine())
        c->setStateMachine(dynamic_cast<QUmlStateMachine *>(stateMachine()->clone()));
    foreach (QUmlVertex *element, subvertices())
        c->addSubvertex(dynamic_cast<QUmlVertex *>(element->clone()));
    foreach (QUmlTransition *element, transitions())
        c->addTransition(dynamic_cast<QUmlTransition *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The region of which this region is an extension.
 */
QUmlRegion *QUmlRegion::extendedRegion() const
{
    // This is a read-write association end

    return _extendedRegion;
}

void QUmlRegion::setExtendedRegion(QUmlRegion *extendedRegion)
{
    // This is a read-write association end

    if (_extendedRegion != extendedRegion) {
        // Adjust subsetted properties
        removeRedefinedElement(_extendedRegion);

        _extendedRegion = extendedRegion;
        if (extendedRegion && extendedRegion->asQObject() && this->asQObject())
            QObject::connect(extendedRegion->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setExtendedRegion()));

        // Adjust subsetted properties
        if (extendedRegion) {
            addRedefinedElement(extendedRegion);
        }
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlRegion::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("UmlRegion::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlRegion::setRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("UmlRegion::setRedefinitionContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(redefinitionContext);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.
 */
QUmlState *QUmlRegion::state() const
{
    // This is a read-write association end

    return _state;
}

void QUmlRegion::setState(QUmlState *state)
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
    The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.
 */
QUmlStateMachine *QUmlRegion::stateMachine() const
{
    // This is a read-write association end

    return _stateMachine;
}

void QUmlRegion::setStateMachine(QUmlStateMachine *stateMachine)
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

/*!
    The set of vertices that are owned by this region.
 */
const QSet<QUmlVertex *> QUmlRegion::subvertices() const
{
    // This is a read-write association end

    return _subvertices;
}

void QUmlRegion::addSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    if (!_subvertices.contains(subvertex)) {
        _subvertices.insert(subvertex);
        if (subvertex && subvertex->asQObject() && this->asQObject())
            QObject::connect(subvertex->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSubvertex(QObject *)));
        subvertex->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(this);
        }
    }
}

void QUmlRegion::removeSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    if (_subvertices.contains(subvertex)) {
        _subvertices.remove(subvertex);
        if (subvertex->asQObject())
            subvertex->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(0);
        }
    }
}

/*!
    The set of transitions owned by the region.
 */
const QSet<QUmlTransition *> QUmlRegion::transitions() const
{
    // This is a read-write association end

    return _transitions;
}

void QUmlRegion::addTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    if (!_transitions.contains(transition)) {
        _transitions.insert(transition);
        if (transition && transition->asQObject() && this->asQObject())
            QObject::connect(transition->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeTransition(QObject *)));
        transition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(this);
        }
    }
}

void QUmlRegion::removeTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    if (_transitions.contains(transition)) {
        _transitions.remove(transition);
        if (transition->asQObject())
            transition->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(0);
        }
    }
}

// OPERATIONS

/*!
    The operation belongsToPSM () checks if the region belongs to a protocol state machine
 */
bool QUmlRegion::belongsToPSM() const
{
    qWarning("UmlRegion::belongsToPSM(): to be implemented (operation)");

    return bool ();
}

/*!
    The operation containingStateMachine() returns the sate machine in which this Region is defined
 */
QUmlStateMachine *QUmlRegion::containingStateMachine() const
{
    qWarning("UmlRegion::containingStateMachine(): to be implemented (operation)");

    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining region is consistent with a redefined region provided that the redefining region is an extension of the redefined region, i.e. it adds vertices and transitions and it redefines states and transitions of the redefined region.
 */
bool QUmlRegion::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("UmlRegion::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a region are properly related to the redefinition contexts of the specified region to allow this element to redefine the other. The containing statemachine/state of a redefining region must redefine the containing statemachine/state of the redefined region.
 */
bool QUmlRegion::isRedefinitionContextValid(QUmlRegion *redefined) const
{
    qWarning("UmlRegion::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

void QUmlRegion::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::DocumentationRole] = QStringLiteral("The region of which this region is an extension.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("RedefinableElement-redefinedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("extendedRegion")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::DocumentationRole] = QStringLiteral("References the classifier in which context this element may be redefined.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("RedefinableElement-redefinitionContext");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("redefinitionContext")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::DocumentationRole] = QStringLiteral("The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("state")][QtModeling::OppositeEndRole] = QStringLiteral("State-region");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::DocumentationRole] = QStringLiteral("The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("stateMachine")][QtModeling::OppositeEndRole] = QStringLiteral("StateMachine-region");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::DocumentationRole] = QStringLiteral("The set of vertices that are owned by this region.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("subvertex")][QtModeling::OppositeEndRole] = QStringLiteral("Vertex-container");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRegion");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::DocumentationRole] = QStringLiteral("The set of transitions owned by the region.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRegion")][QStringLiteral("transition")][QtModeling::OppositeEndRole] = QStringLiteral("Transition-container");

}

