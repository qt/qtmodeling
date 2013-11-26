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
#include "qumlcallaction.h"

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
#include <QtUml/QUmlPort>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlCallAction

    \inmodule QtUml

    \brief CallAction is an abstract class for actions that invoke behavior and receive return values.

    \b {QUmlCallAction is an abstract class.}
 */

/*!
    Creates a new QUmlCallAction.
*/
QUmlCallAction::QUmlCallAction() :
    _isSynchronous(true)
{
}

/*!
    Destroys the QUmlCallAction.
 */
QUmlCallAction::~QUmlCallAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlCallAction.
*/
QModelingElement *QUmlCallAction::clone() const
{
    QUmlCallAction *c = new QUmlCallAction;
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
    foreach (QUmlInputPin *element, arguments())
        c->addArgument(dynamic_cast<QUmlInputPin *>(element->clone()));
    c->setSynchronous(isSynchronous());
    foreach (QUmlOutputPin *element, results())
        c->addResult(dynamic_cast<QUmlOutputPin *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    If true, the call is synchronous and the caller waits for completion of the invoked behavior. If false, the call is asynchronous and the caller proceeds immediately and does not expect a return values.
 */
bool QUmlCallAction::isSynchronous() const
{
    // This is a read-write property

    return _isSynchronous;
}

/*!
    Adjusts isSynchronous to \a isSynchronous.
 */
void QUmlCallAction::setSynchronous(bool isSynchronous)
{
    // This is a read-write property

    if (_isSynchronous != isSynchronous) {
        _isSynchronous = isSynchronous;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isSynchronous");
    }
}

/*!
    A list of output pins where the results of performing the invocation are placed.

    \sa addResult(), removeResult()

    \b {Subsetted property(ies):} QUmlAction::outputs().
 */
const QList<QUmlOutputPin *> QUmlCallAction::results() const
{
    // This is a read-write association end

    return _results;
}

/*!
    Adds \a result to results.

    \sa results(), removeResult()
 */
void QUmlCallAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (!_results.contains(result)) {
        _results.append(result);
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
void QUmlCallAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_results.contains(result)) {
        _results.removeAll(result);
        if (result->asQModelingObject())
            result->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(result);
    }
}

QT_END_NAMESPACE

