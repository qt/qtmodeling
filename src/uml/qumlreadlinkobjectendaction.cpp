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
#include "qumlreadlinkobjectendaction.h"

#include "private/qumlreadlinkobjectendactionobject_p.h"

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
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlReadLinkObjectEndAction

    \inmodule QtUml

    \brief A read link object end action is an action that retrieves an end object from a link object.
 */

/*!
    Creates a new QUmlReadLinkObjectEndAction. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlReadLinkObjectEndAction::QUmlReadLinkObjectEndAction(bool createQModelingObject) :
    _end(0),
    _object(0),
    _result(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlReadLinkObjectEndActionObject(this));
}

/*!
    Destroys the QUmlReadLinkObjectEndAction.
 */
QUmlReadLinkObjectEndAction::~QUmlReadLinkObjectEndAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlReadLinkObjectEndAction.
*/
QModelingElement *QUmlReadLinkObjectEndAction::clone() const
{
    QUmlReadLinkObjectEndAction *c = new QUmlReadLinkObjectEndAction;
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
    if (object())
        c->setObject(dynamic_cast<QUmlInputPin *>(object()->clone()));
    if (result())
        c->setResult(dynamic_cast<QUmlOutputPin *>(result()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Link end to be read.
 */
QUmlProperty *QUmlReadLinkObjectEndAction::end() const
{
    // This is a read-write association end

    return _end;
}

/*!
    Adjusts end to \a end.
 */
void QUmlReadLinkObjectEndAction::setEnd(QUmlProperty *end)
{
    // This is a read-write association end

    if (_end != end) {
        _end = end;
        if (end && end->asQModelingObject() && this->asQModelingObject())
            QObject::connect(end->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setEnd()));
    }
}

/*!
    Gives the input pin from which the link object is obtained.

    \b {Subsetted property(ies):} QUmlAction::inputs().
 */
QUmlInputPin *QUmlReadLinkObjectEndAction::object() const
{
    // This is a read-write association end

    return _object;
}

/*!
    Adjusts object to \a object.
 */
void QUmlReadLinkObjectEndAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;
        if (object && object->asQModelingObject() && this->asQModelingObject())
            QObject::connect(object->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setObject()));
        object->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

/*!
    Pin where the result value is placed.

    \b {Subsetted property(ies):} QUmlAction::outputs().
 */
QUmlOutputPin *QUmlReadLinkObjectEndAction::result() const
{
    // This is a read-write association end

    return _result;
}

/*!
    Adjusts result to \a result.
 */
void QUmlReadLinkObjectEndAction::setResult(QUmlOutputPin *result)
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

