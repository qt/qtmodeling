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
#include "qumlunmarshallaction.h"

#include "private/qumlunmarshallactionobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

/*!
    \class QUmlUnmarshallAction

    \inmodule QtUml

    \brief An unmarshall action is an action that breaks an object of a known type into outputs each of which is equal to a value from a structural feature of the object.
 */
QUmlUnmarshallAction::QUmlUnmarshallAction(bool createQObject) :
    _object(0),
    _unmarshallType(0)
{
    if (createQObject)
        _qObject = new QUmlUnmarshallActionObject(this);
}

QUmlUnmarshallAction::~QUmlUnmarshallAction()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    The object to be unmarshalled.
 */
QUmlInputPin *
QUmlUnmarshallAction::object() const
{
    // This is a read-write association end

    return _object;
}

void QUmlUnmarshallAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;
        if (object->asQObject() && this->asQObject())
            QObject::connect(object->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setObject()));
        object->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

/*!
    The values of the structural features of the input object.
 */
const QSet<QUmlOutputPin *> 
QUmlUnmarshallAction::result() const
{
    // This is a read-write association end

    return _result;
}

void QUmlUnmarshallAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (!_result.contains(result)) {
        _result.insert(result);
        if (result->asQObject() && this->asQObject())
            QObject::connect(result->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeResult(QObject *)));
        result->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOutput(result);
    }
}

void QUmlUnmarshallAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_result.contains(result)) {
        _result.remove(result);
        if (result->asQObject())
            result->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOutput(result);
    }
}

/*!
    The type of the object to be unmarshalled.
 */
QUmlClassifier *
QUmlUnmarshallAction::unmarshallType() const
{
    // This is a read-write association end

    return _unmarshallType;
}

void QUmlUnmarshallAction::setUnmarshallType(QUmlClassifier *unmarshallType)
{
    // This is a read-write association end

    if (_unmarshallType != unmarshallType) {
        _unmarshallType = unmarshallType;
        if (unmarshallType->asQObject() && this->asQObject())
            QObject::connect(unmarshallType->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setUnmarshallType()));
    }
}

