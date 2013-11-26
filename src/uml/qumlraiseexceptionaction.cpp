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
#include "qumlraiseexceptionaction.h"

#include "private/qumlraiseexceptionactionobject_p.h"

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

QT_BEGIN_NAMESPACE

/*!
    \class QUmlRaiseExceptionAction

    \inmodule QtUml

    \brief A raise exception action is an action that causes an exception to occur. The input value becomes the exception object.
 */

/*!
    Creates a new QUmlRaiseExceptionAction. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlRaiseExceptionAction::QUmlRaiseExceptionAction(bool createQModelingObject) :
    _exception(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlRaiseExceptionActionObject(this));
}

/*!
    Destroys the QUmlRaiseExceptionAction.
 */
QUmlRaiseExceptionAction::~QUmlRaiseExceptionAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlRaiseExceptionAction.
*/
QModelingElement *QUmlRaiseExceptionAction::clone() const
{
    QUmlRaiseExceptionAction *c = new QUmlRaiseExceptionAction;
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
    if (exception())
        c->setException(dynamic_cast<QUmlInputPin *>(exception()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An input pin whose value becomes an exception object.

    \b {Subsetted property(ies):} QUmlAction::inputs().
 */
QUmlInputPin *QUmlRaiseExceptionAction::exception() const
{
    // This is a read-write association end

    return _exception;
}

/*!
    Adjusts exception to \a exception.
 */
void QUmlRaiseExceptionAction::setException(QUmlInputPin *exception)
{
    // This is a read-write association end

    if (_exception != exception) {
        // Adjust subsetted properties
        removeInput(_exception);

        _exception = exception;
        if (exception && exception->asQModelingObject() && this->asQModelingObject())
            QObject::connect(exception->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setException()));
        exception->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (exception) {
            addInput(exception);
        }
    }
}

QT_END_NAMESPACE

