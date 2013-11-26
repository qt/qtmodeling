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
#include "qumlreduceaction.h"

#include "private/qumlreduceactionobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
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

QT_BEGIN_NAMESPACE

/*!
    \class QUmlReduceAction

    \inmodule QtUml

    \brief A reduce action is an action that reduces a collection to a single value by combining the elements of the collection.
 */

/*!
    Creates a new QUmlReduceAction. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlReduceAction::QUmlReduceAction(bool createQModelingObject) :
    _collection(0),
    _isOrdered(false),
    _reducer(0),
    _result(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlReduceActionObject(this));
}

/*!
    Destroys the QUmlReduceAction.
 */
QUmlReduceAction::~QUmlReduceAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlReduceAction.
*/
QModelingElement *QUmlReduceAction::clone() const
{
    QUmlReduceAction *c = new QUmlReduceAction;
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
    if (collection())
        c->setCollection(dynamic_cast<QUmlInputPin *>(collection()->clone()));
    c->setOrdered(isOrdered());
    if (result())
        c->setResult(dynamic_cast<QUmlOutputPin *>(result()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The collection to be reduced.

    \b {Subsetted property(ies):} QUmlAction::inputs().
 */
QUmlInputPin *QUmlReduceAction::collection() const
{
    // This is a read-write association end

    return _collection;
}

/*!
    Adjusts collection to \a collection.
 */
void QUmlReduceAction::setCollection(QUmlInputPin *collection)
{
    // This is a read-write association end

    if (_collection != collection) {
        // Adjust subsetted properties
        removeInput(_collection);

        _collection = collection;
        if (collection && collection->asQModelingObject() && this->asQModelingObject())
            QObject::connect(collection->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setCollection()));
        collection->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (collection) {
            addInput(collection);
        }
    }
}

/*!
    Tells whether the order of the input collection should determine the order in which the behavior is applied to its elements.
 */
bool QUmlReduceAction::isOrdered() const
{
    // This is a read-write property

    return _isOrdered;
}

/*!
    Adjusts isOrdered to \a isOrdered.
 */
void QUmlReduceAction::setOrdered(bool isOrdered)
{
    // This is a read-write property

    if (_isOrdered != isOrdered) {
        _isOrdered = isOrdered;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isOrdered");
    }
}

/*!
    Behavior that is applied to two elements of the input collection to produce a value that is the same type as elements of the collection.
 */
QUmlBehavior *QUmlReduceAction::reducer() const
{
    // This is a read-write association end

    return _reducer;
}

/*!
    Adjusts reducer to \a reducer.
 */
void QUmlReduceAction::setReducer(QUmlBehavior *reducer)
{
    // This is a read-write association end

    if (_reducer != reducer) {
        _reducer = reducer;
        if (reducer && reducer->asQModelingObject() && this->asQModelingObject())
            QObject::connect(reducer->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setReducer()));
    }
}

/*!
    Gives the output pin on which the result is put.

    \b {Subsetted property(ies):} QUmlAction::outputs().
 */
QUmlOutputPin *QUmlReduceAction::result() const
{
    // This is a read-write association end

    return _result;
}

/*!
    Adjusts result to \a result.
 */
void QUmlReduceAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_result != result) {
        // Adjust subsetted properties
        removeOutput(_result);

        _result = result;
        if (result && result->asQModelingObject() && this->asQModelingObject())
            QObject::connect(result->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setResult()));
        result->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (result) {
            addOutput(result);
        }
    }
}

QT_END_NAMESPACE

