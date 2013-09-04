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
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlStringExpression>
/*!
    \class QUmlTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */
QUmlTrigger::QUmlTrigger(bool createQObject) :
    _event(0)
{
    if (createQObject)
        _qObject = new QUmlTriggerObject(this);
}

QUmlTrigger::~QUmlTrigger()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlTrigger::clone() const
{
    QUmlTrigger *c = new QUmlTrigger;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (event())
        c->setEvent(dynamic_cast<QUmlEvent *>(event()->clone()));
    foreach (QUmlPort *element, port())
        c->addPort(dynamic_cast<QUmlPort *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The event that causes the trigger.
 */
QUmlEvent *QUmlTrigger::event() const
{
    // This is a read-write association end

    return _event;
}

void QUmlTrigger::setEvent(QUmlEvent *event)
{
    // This is a read-write association end

    if (_event != event) {
        _event = event;
        if (event->asQObject() && this->asQObject())
            QObject::connect(event->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setEvent()));
    }
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
const QSet<QUmlPort *> QUmlTrigger::port() const
{
    // This is a read-write association end

    return _port;
}

void QUmlTrigger::addPort(QUmlPort *port)
{
    // This is a read-write association end

    if (!_port.contains(port)) {
        _port.insert(port);
        if (port->asQObject() && this->asQObject())
            QObject::connect(port->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePort(QObject *)));
    }
}

void QUmlTrigger::removePort(QUmlPort *port)
{
    // This is a read-write association end

    if (_port.contains(port)) {
        _port.remove(port);
    }
}

