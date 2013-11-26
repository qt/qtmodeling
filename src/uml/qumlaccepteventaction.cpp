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
#include "qumlaccepteventaction.h"

#include "private/qumlaccepteventactionobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlAcceptEventAction

    \inmodule QtUml

    \brief A accept event action is an action that waits for the occurrence of an event meeting specified conditions.
 */

/*!
    Creates a new QUmlAcceptEventAction. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlAcceptEventAction::QUmlAcceptEventAction(bool createQModelingObject) :
    _isUnmarshall(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlAcceptEventActionObject(this));
}

/*!
    Destroys the QUmlAcceptEventAction.
 */
QUmlAcceptEventAction::~QUmlAcceptEventAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlAcceptEventAction.
*/
QModelingElement *QUmlAcceptEventAction::clone() const
{
    QUmlAcceptEventAction *c = new QUmlAcceptEventAction;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    c->setUnmarshall(isUnmarshall());
    foreach (QUmlOutputPin *element, results())
        c->addResult(dynamic_cast<QUmlOutputPin *>(element->clone()));
    foreach (QUmlTrigger *element, triggers())
        c->addTrigger(dynamic_cast<QUmlTrigger *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Indicates whether there is a single output pin for the event, or multiple output pins for attributes of the event.
 */
bool QUmlAcceptEventAction::isUnmarshall() const
{
    // This is a read-write property

    return _isUnmarshall;
}

/*!
    Adjusts isUnmarshall to \a isUnmarshall.
 */
void QUmlAcceptEventAction::setUnmarshall(bool isUnmarshall)
{
    // This is a read-write property

    if (_isUnmarshall != isUnmarshall) {
        _isUnmarshall = isUnmarshall;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isUnmarshall");
    }
}

/*!
    Pins holding the received event objects or their attributes. Event objects may be copied in transmission, so identity might not be preserved.

    \sa addResult(), removeResult()

    \b {Subsetted property(ies):} QUmlAction::outputs().
 */
const QSet<QUmlOutputPin *> QUmlAcceptEventAction::results() const
{
    // This is a read-write association end

    return _results;
}

/*!
    Adds \a result to results.

    \sa results(), removeResult()
 */
void QUmlAcceptEventAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (!_results.contains(result)) {
        _results.insert(result);
        if (result && result->asQModelingObject() && this->asQModelingObject())
            QObject::connect(result->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeResult(QObject *)));
        result->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOutput(result);
    }
}

/*!
    Removes \a result from results.

    \sa results(), addResult()
 */
void QUmlAcceptEventAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_results.contains(result)) {
        _results.remove(result);
        if (result->asQModelingObject())
            result->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(result);
    }
}

/*!
    The type of events accepted by the action, as specified by triggers. For triggers with signal events, a signal of the specified type or any subtype of the specified signal type is accepted.

    \sa addTrigger(), removeTrigger()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlTrigger *> QUmlAcceptEventAction::triggers() const
{
    // This is a read-write association end

    return _triggers;
}

/*!
    Adds \a trigger to triggers.

    \sa triggers(), removeTrigger()
 */
void QUmlAcceptEventAction::addTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (!_triggers.contains(trigger)) {
        _triggers.insert(trigger);
        if (trigger && trigger->asQModelingObject() && this->asQModelingObject())
            QObject::connect(trigger->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeTrigger(QObject *)));
        trigger->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(trigger);
    }
}

/*!
    Removes \a trigger from triggers.

    \sa triggers(), addTrigger()
 */
void QUmlAcceptEventAction::removeTrigger(QUmlTrigger *trigger)
{
    // This is a read-write association end

    if (_triggers.contains(trigger)) {
        _triggers.remove(trigger);
        if (trigger->asQModelingObject())
            trigger->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(trigger);
    }
}

QT_END_NAMESPACE

