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
#include "qumlsignalevent.h"

#include "private/qumlsignaleventobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSignal>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
/*!
    \class QUmlSignalEvent

    \inmodule QtUml

    \brief A signal event represents the receipt of an asynchronous signal instance. A signal event may, for example, cause a state machine to trigger a transition.
 */
QUmlSignalEvent::QUmlSignalEvent(bool createQObject) :
    _signal(0)
{
    if (createQObject)
        _qObject = new QUmlSignalEventObject(this);
}

QUmlSignalEvent::~QUmlSignalEvent()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlSignalEvent::clone() const
{
    QUmlSignalEvent *c = new QUmlSignalEvent;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (signal())
        c->setSignal(dynamic_cast<QUmlSignal *>(signal()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The specific signal that is associated with this event.
 */
QUmlSignal *QUmlSignalEvent::signal() const
{
    // This is a read-write association end

    return _signal;
}

void QUmlSignalEvent::setSignal(QUmlSignal *signal)
{
    // This is a read-write association end

    if (_signal != signal) {
        _signal = signal;
        if (signal->asQObject() && this->asQObject())
            QObject::connect(signal->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSignal()));
    }
}

