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
#include "qumlcallevent.h"

#include "private/qumlcalleventobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlCallEvent

    \inmodule QtUml

    \brief A call event models the receipt by an object of a message invoking a call of an operation.
 */

/*!
    Creates a new QUmlCallEvent. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlCallEvent::QUmlCallEvent(bool createQModelingObject) :
    _operation(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlCallEventObject(this));
}

/*!
    Destroys the QUmlCallEvent.
 */
QUmlCallEvent::~QUmlCallEvent()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlCallEvent.
*/
QModelingElement *QUmlCallEvent::clone() const
{
    QUmlCallEvent *c = new QUmlCallEvent;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Designates the operation whose invocation raised the call event.
 */
QUmlOperation *QUmlCallEvent::operation() const
{
    // This is a read-write association end

    return _operation;
}

/*!
    Adjusts operation to \a operation.
 */
void QUmlCallEvent::setOperation(QUmlOperation *operation)
{
    // This is a read-write association end

    if (_operation != operation) {
        _operation = operation;
        if (operation && operation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(operation->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOperation()));
    }
}

QT_END_NAMESPACE

