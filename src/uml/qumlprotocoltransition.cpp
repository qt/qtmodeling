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
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlProtocolTransition

    \inmodule QtUml

    \brief A protocol transition specifies a legal transition for an operation. Transitions of protocol state machines have the following information: a pre condition (guard), on trigger, and a post condition. Every protocol transition is associated to zero or one operation (referred BehavioralFeature) that belongs to the context classifier of the protocol state machine.
 */

/*!
    Creates a new QUmlProtocolTransition. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlProtocolTransition::QUmlProtocolTransition(bool createQModelingObject) :
    QUmlTransition(false),
    _postCondition(0),
    _preCondition(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlProtocolTransitionObject(this));
}

/*!
    Destroys the QUmlProtocolTransition.
 */
QUmlProtocolTransition::~QUmlProtocolTransition()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlProtocolTransition.
*/
QModelingElement *QUmlProtocolTransition::clone() const
{
    QUmlProtocolTransition *c = new QUmlProtocolTransition;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
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
    if (effect())
        c->setEffect(dynamic_cast<QUmlBehavior *>(effect()->clone()));
    if (guard())
        c->setGuard(dynamic_cast<QUmlConstraint *>(guard()->clone()));
    c->setKind(kind());
    foreach (QUmlTrigger *element, triggers())
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

    \b {Subsetted property(ies):} QUmlNamespace::ownedRules().
 */
QUmlConstraint *QUmlProtocolTransition::postCondition() const
{
    // This is a read-write association end

    return _postCondition;
}

/*!
    Adjusts postCondition to \a postCondition.
 */
void QUmlProtocolTransition::setPostCondition(QUmlConstraint *postCondition)
{
    // This is a read-write association end

    if (_postCondition != postCondition) {
        // Adjust subsetted properties
        removeOwnedRule(_postCondition);

        _postCondition = postCondition;
        if (postCondition && postCondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(postCondition->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setPostCondition()));
        postCondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (postCondition) {
            addOwnedRule(postCondition);
        }
    }
}

/*!
    Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.

    \b {Subsetted property(ies):} QUmlTransition::guard().
 */
QUmlConstraint *QUmlProtocolTransition::preCondition() const
{
    // This is a read-write association end

    return _preCondition;
}

/*!
    Adjusts preCondition to \a preCondition.
 */
void QUmlProtocolTransition::setPreCondition(QUmlConstraint *preCondition)
{
    // This is a read-write association end

    if (_preCondition != preCondition) {
        // Adjust subsetted properties

        _preCondition = preCondition;
        if (preCondition && preCondition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(preCondition->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setPreCondition()));
        preCondition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        setGuard(preCondition);
    }
}

/*!
    This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.

    \b {This is a read-only derived property.}
 */
const QSet<QUmlOperation *> QUmlProtocolTransition::referred() const
{
    // This is a read-only derived association end

    qWarning("QUmlProtocolTransition::referred(): to be implemented (this is a derived association end)");

    return QSet<QUmlOperation *>();
}

/*!
    Adds \a referred to referred.

    \sa referred(), removeReferred()
 */
void QUmlProtocolTransition::addReferred(QUmlOperation *referred)
{
    // This is a read-only derived association end

    qWarning("QUmlProtocolTransition::addReferred(): to be implemented (this is a derived association end)");
    Q_UNUSED(referred);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Removes \a referred from referred.

    \sa referred(), addReferred()
 */
void QUmlProtocolTransition::removeReferred(QUmlOperation *referred)
{
    // This is a read-only derived association end

    qWarning("QUmlProtocolTransition::removeReferred(): to be implemented (this is a derived association end)");
    Q_UNUSED(referred);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

QT_END_NAMESPACE

