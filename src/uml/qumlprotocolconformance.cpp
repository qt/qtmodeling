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
#include "qumlprotocolconformance.h"

#include "private/qumlprotocolconformanceobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlProtocolStateMachine>
/*!
    \class QUmlProtocolConformance

    \inmodule QtUml

    \brief Protocol state machines can be redefined into more specific protocol state machines, or into behavioral state machines. Protocol conformance declares that the specific protocol state machine specifies a protocol that conforms to the general state machine one, or that the specific behavioral state machine abide by the protocol of the general protocol state machine.
 */
QUmlProtocolConformance::QUmlProtocolConformance(bool createQObject) :
    _generalMachine(0),
    _specificMachine(0)
{
    if (createQObject)
        _qObject = new QUmlProtocolConformanceObject(this);
}

QUmlProtocolConformance::~QUmlProtocolConformance()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlProtocolConformance::clone() const
{
    QUmlProtocolConformance *c = new QUmlProtocolConformance;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (generalMachine())
        c->setGeneralMachine(dynamic_cast<QUmlProtocolStateMachine *>(generalMachine()->clone()));
    if (specificMachine())
        c->setSpecificMachine(dynamic_cast<QUmlProtocolStateMachine *>(specificMachine()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the protocol state machine to which the specific state machine conforms.
 */
QUmlProtocolStateMachine *QUmlProtocolConformance::generalMachine() const
{
    // This is a read-write association end

    return _generalMachine;
}

void QUmlProtocolConformance::setGeneralMachine(QUmlProtocolStateMachine *generalMachine)
{
    // This is a read-write association end

    if (_generalMachine != generalMachine) {
        // Adjust subsetted properties
        removeTarget(_generalMachine);

        _generalMachine = generalMachine;
        if (generalMachine->asQObject() && this->asQObject())
            QObject::connect(generalMachine->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setGeneralMachine()));

        // Adjust subsetted properties
        if (generalMachine) {
            addTarget(generalMachine);
        }
    }
}

/*!
    Specifies the state machine which conforms to the general state machine.
 */
QUmlProtocolStateMachine *QUmlProtocolConformance::specificMachine() const
{
    // This is a read-write association end

    return _specificMachine;
}

void QUmlProtocolConformance::setSpecificMachine(QUmlProtocolStateMachine *specificMachine)
{
    // This is a read-write association end

    if (_specificMachine != specificMachine) {
        // Adjust subsetted properties
        removeSource(_specificMachine);

        _specificMachine = specificMachine;
        if (specificMachine->asQObject() && this->asQObject())
            QObject::connect(specificMachine->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSpecificMachine()));

        // Adjust subsetted properties
        setOwner(specificMachine);
        if (specificMachine) {
            addSource(specificMachine);
        }
    }
}

