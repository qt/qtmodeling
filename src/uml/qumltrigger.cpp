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
#include "qumltrigger.h"

#include "private/qumltriggerobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlEvent>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */

/*!
    Creates a new QUmlTrigger. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlTrigger::QUmlTrigger(bool createQModelingObject) :
    _event_(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTriggerObject(this));
}

/*!
    Destroys the QUmlTrigger.
 */
QUmlTrigger::~QUmlTrigger()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlTrigger.
*/
QModelingElement *QUmlTrigger::clone() const
{
    QUmlTrigger *c = new QUmlTrigger;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
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
    The event that causes the trigger.
 */
QUmlEvent *QUmlTrigger::event_() const
{
    // This is a read-write association end

    return _event_;
}

/*!
    Adjusts event_ to \a event_.
 */
void QUmlTrigger::setEvent(QUmlEvent *event_)
{
    // This is a read-write association end

    if (_event_ != event_) {
        _event_ = event_;
        if (event_ && event_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(event_->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setEvent()));
    }
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.

    \sa addPort(), removePort()
 */
const QSet<QUmlPort *> QUmlTrigger::ports() const
{
    // This is a read-write association end

    return _ports;
}

/*!
    Adds \a port to ports.

    \sa ports(), removePort()
 */
void QUmlTrigger::addPort(QUmlPort *port)
{
    // This is a read-write association end

    if (!_ports.contains(port)) {
        _ports.insert(port);
        if (port && port->asQModelingObject() && this->asQModelingObject())
            QObject::connect(port->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePort(QObject *)));
    }
}

/*!
    Removes \a port from ports.

    \sa ports(), addPort()
 */
void QUmlTrigger::removePort(QUmlPort *port)
{
    // This is a read-write association end

    if (_ports.contains(port)) {
        _ports.remove(port);
    }
}

QT_END_NAMESPACE

