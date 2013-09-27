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
#include "qumltransition.h"

#include "private/qumltransitionobject_p.h"

#include <QtUml/QUmlBehavior>
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
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>
/*!
    \class QUmlTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */
QUmlTransition::QUmlTransition(bool createQObject) :
    _container(0),
    _effect(0),
    _guard(0),
    _kind(QtUml::TransitionKindExternal),
    _redefinedTransition(0),
    _source(0),
    _target(0)
{
    if (createQObject)
        _qObject = new QUmlTransitionObject(this);
    setPropertyData();
}

QUmlTransition::~QUmlTransition()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlTransition::clone() const
{
    QUmlTransition *c = new QUmlTransition;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlElementImport *element, elementImport())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRule())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImport())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (container())
        c->setContainer(dynamic_cast<QUmlRegion *>(container()->clone()));
    if (effect())
        c->setEffect(dynamic_cast<QUmlBehavior *>(effect()->clone()));
    if (guard())
        c->setGuard(dynamic_cast<QUmlConstraint *>(guard()->clone()));
    c->setKind(kind());
    if (redefinedTransition())
        c->setRedefinedTransition(dynamic_cast<QUmlTransition *>(redefinedTransition()->clone()));
    if (source())
        c->setSource(dynamic_cast<QUmlVertex *>(source()->clone()));
    if (target())
        c->setTarget(dynamic_cast<QUmlVertex *>(target()->clone()));
    foreach (QUmlTrigger *element, trigger())
        c->addTrigger(dynamic_cast<QUmlTrigger *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Designates the region that owns this transition.
 */
QUmlRegion *QUmlTransition::container() const
{
    // This is a read-write association end

    return _container;
}

void QUmlTransition::setContainer(QUmlRegion *container)
{
    // This is a read-write association end

    if (_container != container) {
        // Adjust subsetted properties

        _container = container;
        if (container->asQObject() && this->asQObject())
            QObject::connect(container->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setContainer()));

        // Adjust subsetted properties
        setNamespace(container);
    }
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QUmlBehavior *QUmlTransition::effect() const
{
    // This is a read-write association end

    return _effect;
}

void QUmlTransition::setEffect(QUmlBehavior *effect)
{
    // This is a read-write association end

    if (_effect != effect) {
        // Adjust subsetted properties
        removeOwnedElement(_effect);

        _effect = effect;
        if (effect->asQObject() && this->asQObject())
            QObject::connect(effect->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setEffect()));
        effect->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (effect) {
            addOwnedElement(effect);
        }
    }
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QUmlConstraint *QUmlTransition::guard() const
{
    // This is a read-write association end

    return _guard;
}

void QUmlTransition::setGuard(QUmlConstraint *guard)
{
    // This is a read-write association end

    if (_guard != guard) {
        // Adjust subsetted properties
        removeOwnedRule(_guard);

        _guard = guard;
        if (guard->asQObject() && this->asQObject())
            QObject::connect(guard->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setGuard()));
        guard->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (guard) {
            addOwnedRule(guard);
        }
    }
}

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QUmlTransition::kind() const
{
    // This is a read-write property

    return _kind;
}

void QUmlTransition::setKind(QtUml::TransitionKind kind)
{
    // This is a read-write property

    if (_kind != kind) {
        _kind = kind;
    }
}

/*!
    The transition that is redefined by this transition.
 */
QUmlTransition *QUmlTransition::redefinedTransition() const
{
    // This is a read-write association end

    return _redefinedTransition;
}

void QUmlTransition::setRedefinedTransition(QUmlTransition *redefinedTransition)
{
    // This is a read-write association end

    if (_redefinedTransition != redefinedTransition) {
        // Adjust subsetted properties
        removeRedefinedElement(_redefinedTransition);

        _redefinedTransition = redefinedTransition;
        if (redefinedTransition->asQObject() && this->asQObject())
            QObject::connect(redefinedTransition->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setRedefinedTransition()));

        // Adjust subsetted properties
        if (redefinedTransition) {
            addRedefinedElement(redefinedTransition);
        }
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlTransition::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("UmlTransition::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlTransition::setRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("UmlTransition::redefinitionContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(redefinitionContext);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QUmlVertex *QUmlTransition::source() const
{
    // This is a read-write association end

    return _source;
}

void QUmlTransition::setSource(QUmlVertex *source)
{
    // This is a read-write association end

    if (_source != source) {
        _source = source;
        if (source->asQObject() && this->asQObject())
            QObject::connect(source->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSource()));
    }
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QUmlVertex *QUmlTransition::target() const
{
    // This is a read-write association end

    return _target;
}

void QUmlTransition::setTarget(QUmlVertex *target)
{
    // This is a read-write association end

    if (_target != target) {
        _target = target;
        if (target->asQObject() && this->asQObject())
            QObject::connect(target->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setTarget()));
    }
}

/*!
    Specifies the triggers that may fire the transition.
 */
const QSet<QUmlTrigger *> QUmlTransition::trigger() const
{
    // This is a read-write association end

    return _trigger;
}

void QUmlTransition::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (!_trigger.contains(trigger)) {
        _trigger.insert(trigger);
        if (trigger->asQObject() && this->asQObject())
            QObject::connect(trigger->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeTrigger(QObject *)));
        trigger->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(trigger);
    }
}

void QUmlTransition::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (_trigger.contains(trigger)) {
        _trigger.remove(trigger);
        if (trigger->asQObject())
            trigger->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(trigger);
    }
}

// OPERATIONS

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QUmlStateMachine *QUmlTransition::containingStateMachine() const
{
    qWarning("UmlTransition::containingStateMachine(): to be implemented (operation)");

    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QUmlTransition::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("UmlTransition::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

void QUmlTransition::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("container")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("container")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("container")][QtModeling::DocumentationRole] = QStringLiteral("Designates the region that owns this transition.");
    QModelingObject::propertyDataHash[QStringLiteral("container")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("container")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("container")][QtModeling::OppositeEndRole] = QStringLiteral("Region-transition");

    QModelingObject::propertyDataHash[QStringLiteral("effect")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("effect")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("effect")][QtModeling::DocumentationRole] = QStringLiteral("Specifies an optional behavior to be performed when the transition fires.");
    QModelingObject::propertyDataHash[QStringLiteral("effect")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("effect")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("effect")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::DocumentationRole] = QStringLiteral("A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.");
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedRule");
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::DocumentationRole] = QStringLiteral("Indicates the precise type of the transition.");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("kind")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("redefinedTransition")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("redefinedTransition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("redefinedTransition")][QtModeling::DocumentationRole] = QStringLiteral("The transition that is redefined by this transition.");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedTransition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedTransition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("RedefinableElement-redefinedElement");
    QModelingObject::propertyDataHash[QStringLiteral("redefinedTransition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("redefinitionContext")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("redefinitionContext")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("redefinitionContext")][QtModeling::DocumentationRole] = QStringLiteral("References the classifier in which context this element may be redefined.");
    QModelingObject::propertyDataHash[QStringLiteral("redefinitionContext")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("RedefinableElement-redefinitionContext");
    QModelingObject::propertyDataHash[QStringLiteral("redefinitionContext")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("redefinitionContext")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("source")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("source")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("source")][QtModeling::DocumentationRole] = QStringLiteral("Designates the originating vertex (state or pseudostate) of the transition.");
    QModelingObject::propertyDataHash[QStringLiteral("source")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("source")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("source")][QtModeling::OppositeEndRole] = QStringLiteral("Vertex-outgoing");

    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::DocumentationRole] = QStringLiteral("Designates the target vertex that is reached when the transition is taken.");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("target")][QtModeling::OppositeEndRole] = QStringLiteral("Vertex-incoming");

    QModelingObject::propertyDataHash[QStringLiteral("trigger")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("trigger")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("trigger")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the triggers that may fire the transition.");
    QModelingObject::propertyDataHash[QStringLiteral("trigger")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("trigger")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("trigger")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

