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
#include "qumlexecutionspecification.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlExecutionSpecification

    \inmodule QtUml

    \brief An execution specification is a specification of the execution of a unit of behavior or action within the lifeline. The duration of an execution specification is represented by two cccurrence specifications, the start occurrence specification and the finish occurrence specification.

    \b {QUmlExecutionSpecification is an abstract class.}
 */

/*!
    Creates a new QUmlExecutionSpecification.
*/
QUmlExecutionSpecification::QUmlExecutionSpecification() :
    _finish(0),
    _start(0)
{
}

/*!
    Destroys the QUmlExecutionSpecification.
 */
QUmlExecutionSpecification::~QUmlExecutionSpecification()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlExecutionSpecification.
*/
QModelingElement *QUmlExecutionSpecification::clone() const
{
    QUmlExecutionSpecification *c = new QUmlExecutionSpecification;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the OccurrenceSpecification that designates the finish of the Action or Behavior.
 */
QUmlOccurrenceSpecification *QUmlExecutionSpecification::finish() const
{
    // This is a read-write association end

    return _finish;
}

/*!
    Adjusts finish to \a finish.
 */
void QUmlExecutionSpecification::setFinish(QUmlOccurrenceSpecification *finish)
{
    // This is a read-write association end

    if (_finish != finish) {
        _finish = finish;
        if (finish && finish->asQModelingObject() && this->asQModelingObject())
            QObject::connect(finish->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setFinish()));
    }
}

/*!
    References the OccurrenceSpecification that designates the start of the Action or Behavior
 */
QUmlOccurrenceSpecification *QUmlExecutionSpecification::start() const
{
    // This is a read-write association end

    return _start;
}

/*!
    Adjusts start to \a start.
 */
void QUmlExecutionSpecification::setStart(QUmlOccurrenceSpecification *start)
{
    // This is a read-write association end

    if (_start != start) {
        _start = start;
        if (start && start->asQModelingObject() && this->asQModelingObject())
            QObject::connect(start->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setStart()));
    }
}

QT_END_NAMESPACE

