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

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlProperty>

/*!
    \class QUmlReadLinkObjectEndAction

    \inmodule QtUml

    \brief A read link object end action is an action that retrieves an end object from a link object.
 */
QUmlReadLinkObjectEndAction::QUmlReadLinkObjectEndAction(bool createQObject) :
    _end(0),
    _object(0),
    _result(0)
{
    if (createQObject)
        _qObject = new QUmlReadLinkObjectEndActionObject(this);
}

QUmlReadLinkObjectEndAction::~QUmlReadLinkObjectEndAction()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    Link end to be read.
 */
QUmlProperty *
QUmlReadLinkObjectEndAction::end() const
{
    // This is a read-write association end

    return _end;
}

void QUmlReadLinkObjectEndAction::setEnd(QUmlProperty *end)
{
    // This is a read-write association end

    if (_end != end) {
        _end = end;
        if (end->asQObject() && this->asQObject())
            QObject::connect(end->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setEnd()));
    }
}

/*!
    Gives the input pin from which the link object is obtained.
 */
QUmlInputPin *
QUmlReadLinkObjectEndAction::object() const
{
    // This is a read-write association end

    return _object;
}

void QUmlReadLinkObjectEndAction::setObject(QUmlInputPin *object)
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
    Pin where the result value is placed.
 */
QUmlOutputPin *
QUmlReadLinkObjectEndAction::result() const
{
    // This is a read-write association end

    return _result;
}

void QUmlReadLinkObjectEndAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_result != result) {
        // Adjust subsetted properties
        removeOutput(_result);

        _result = result;
        if (result->asQObject() && this->asQObject())
            QObject::connect(result->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setResult()));
        result->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (result) {
            addOutput(result);
        }
    }
}

