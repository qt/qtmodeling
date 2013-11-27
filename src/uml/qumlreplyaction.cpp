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
#include "qumlreplyaction.h"

#include "private/qumlreplyactionobject_p.h"

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
    \class QUmlReplyAction

    \inmodule QtUml

    \brief A reply action is an action that accepts a set of return values and a value containing return information produced by a previous accept call action. The reply action returns the values to the caller of the previous call, completing execution of the call.
 */

/*!
    Creates a new QUmlReplyAction. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlReplyAction::QUmlReplyAction(bool createQModelingObject) :
    _replyToCall(0),
    _returnInformation(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlReplyActionObject(this));
}

/*!
    Destroys the QUmlReplyAction.
 */
QUmlReplyAction::~QUmlReplyAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlReplyAction.
*/
QModelingElement *QUmlReplyAction::clone() const
{
    QUmlReplyAction *c = new QUmlReplyAction;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
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
    foreach (QUmlInputPin *element, replyValues())
        c->addReplyValue(dynamic_cast<QUmlInputPin *>(element->clone()));
    if (returnInformation())
        c->setReturnInformation(dynamic_cast<QUmlInputPin *>(returnInformation()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The trigger specifying the operation whose call is being replied to.
 */
QUmlTrigger *QUmlReplyAction::replyToCall() const
{
    // This is a read-write association end

    return _replyToCall;
}

/*!
    Adjusts replyToCall to \a replyToCall.
 */
void QUmlReplyAction::setReplyToCall(QUmlTrigger *replyToCall)
{
    // This is a read-write association end

    if (_replyToCall != replyToCall) {
        _replyToCall = replyToCall;
        if (replyToCall && replyToCall->asQModelingObject() && this->asQModelingObject())
            QObject::connect(replyToCall->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setReplyToCall()));
    }
}

/*!
    A list of pins containing the reply values of the operation. These values are returned to the caller.

    \sa addReplyValue(), removeReplyValue()

    \b {Subsetted property(ies):} QUmlAction::inputs().
 */
const QSet<QUmlInputPin *> QUmlReplyAction::replyValues() const
{
    // This is a read-write association end

    return _replyValues;
}

/*!
    Adds \a replyValue to replyValues.

    \sa replyValues(), removeReplyValue()
 */
void QUmlReplyAction::addReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    if (!_replyValues.contains(replyValue)) {
        _replyValues.insert(replyValue);
        if (replyValue && replyValue->asQModelingObject() && this->asQModelingObject())
            QObject::connect(replyValue->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeReplyValue(QObject *)));
        replyValue->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addInput(replyValue);
    }
}

/*!
    Removes \a replyValue from replyValues.

    \sa replyValues(), addReplyValue()
 */
void QUmlReplyAction::removeReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    if (_replyValues.contains(replyValue)) {
        _replyValues.remove(replyValue);
        if (replyValue->asQModelingObject())
            replyValue->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeInput(replyValue);
    }
}

/*!
    A pin containing the return information value produced by an earlier AcceptCallAction.

    \b {Subsetted property(ies):} QUmlAction::inputs().
 */
QUmlInputPin *QUmlReplyAction::returnInformation() const
{
    // This is a read-write association end

    return _returnInformation;
}

/*!
    Adjusts returnInformation to \a returnInformation.
 */
void QUmlReplyAction::setReturnInformation(QUmlInputPin *returnInformation)
{
    // This is a read-write association end

    if (_returnInformation != returnInformation) {
        // Adjust subsetted properties
        removeInput(_returnInformation);

        _returnInformation = returnInformation;
        if (returnInformation && returnInformation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(returnInformation->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setReturnInformation()));
        returnInformation->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (returnInformation) {
            addInput(returnInformation);
        }
    }
}

QT_END_NAMESPACE

