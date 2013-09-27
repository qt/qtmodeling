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
#include "qumlprotocoltransition.h"

#include "private/qumlprotocoltransitionobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>
/*!
    \class QUmlProtocolTransition

    \inmodule QtUml

    \brief A protocol transition specifies a legal transition for an operation. Transitions of protocol state machines have the following information: a pre condition (guard), on trigger, and a post condition. Every protocol transition is associated to zero or one operation (referred BehavioralFeature) that belongs to the context classifier of the protocol state machine.
 */
QUmlProtocolTransition::QUmlProtocolTransition(bool createQObject) :
    QUmlTransition(false),
    _postCondition(0),
    _preCondition(0)
{
    if (createQObject)
        _qObject = new QUmlProtocolTransitionObject(this);
    setPropertyData();
}

QUmlProtocolTransition::~QUmlProtocolTransition()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlProtocolTransition::clone() const
{
    QUmlProtocolTransition *c = new QUmlProtocolTransition;
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
    if (postCondition())
        c->setPostCondition(dynamic_cast<QUmlConstraint *>(postCondition()->clone()));
    if (preCondition())
        c->setPreCondition(dynamic_cast<QUmlConstraint *>(preCondition()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.
 */
QUmlConstraint *QUmlProtocolTransition::postCondition() const
{
    // This is a read-write association end

    return _postCondition;
}

void QUmlProtocolTransition::setPostCondition(QUmlConstraint *postCondition)
{
    // This is a read-write association end

    if (_postCondition != postCondition) {
        // Adjust subsetted properties
        removeOwnedRule(_postCondition);

        _postCondition = postCondition;
        if (postCondition->asQObject() && this->asQObject())
            QObject::connect(postCondition->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setPostCondition()));
        postCondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (postCondition) {
            addOwnedRule(postCondition);
        }
    }
}

/*!
    Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.
 */
QUmlConstraint *QUmlProtocolTransition::preCondition() const
{
    // This is a read-write association end

    return _preCondition;
}

void QUmlProtocolTransition::setPreCondition(QUmlConstraint *preCondition)
{
    // This is a read-write association end

    if (_preCondition != preCondition) {
        // Adjust subsetted properties

        _preCondition = preCondition;
        if (preCondition->asQObject() && this->asQObject())
            QObject::connect(preCondition->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setPreCondition()));
        preCondition->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        setGuard(preCondition);
    }
}

/*!
    This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.
 */
const QSet<QUmlOperation *> QUmlProtocolTransition::referred() const
{
    // This is a read-only derived association end

    qWarning("UmlProtocolTransition::referred(): to be implemented (this is a derived association end)");

    return QSet<QUmlOperation *>();
}

void QUmlProtocolTransition::addReferred(QUmlOperation *referred)
{
    // This is a read-only derived association end

    qWarning("UmlProtocolTransition::referred(): to be implemented (this is a derived association end)");
    Q_UNUSED(referred);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlProtocolTransition::removeReferred(QUmlOperation *referred)
{
    // This is a read-only derived association end

    qWarning("UmlProtocolTransition::referred(): to be implemented (this is a derived association end)");
    Q_UNUSED(referred);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QUmlProtocolTransition::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("postCondition")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("postCondition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("postCondition")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.");
    QModelingObject::propertyDataHash[QStringLiteral("postCondition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("postCondition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedRule");
    QModelingObject::propertyDataHash[QStringLiteral("postCondition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("preCondition")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("preCondition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("preCondition")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.");
    QModelingObject::propertyDataHash[QStringLiteral("preCondition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("preCondition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Transition-guard");
    QModelingObject::propertyDataHash[QStringLiteral("preCondition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("referred")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("referred")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("referred")][QtModeling::DocumentationRole] = QStringLiteral("This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.");
    QModelingObject::propertyDataHash[QStringLiteral("referred")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("referred")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("referred")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

