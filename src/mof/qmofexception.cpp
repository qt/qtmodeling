/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofexception.h"

#include "private/qmofexceptionobject_p.h"

#include <QtMof/QMofElement>

/*!
    \class QMofException

    \inmodule QtMof

    \brief
 */
QMofException::QMofException(bool createQModelingObject) :
    _objectInError(0),
    _elementInError(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofExceptionObject(this));
}

QModelingElement *QMofException::clone() const
{
    QMofException *c = new QMofException;
    if (objectInError())
        c->setObjectInError(dynamic_cast<QMofElement *>(objectInError()->clone()));
    if (elementInError())
        c->setElementInError(dynamic_cast<QMofElement *>(elementInError()->clone()));
    c->setDescription(description());
    return c;
}

// OWNED ATTRIBUTES


QMofElement *QMofException::objectInError() const
{
    // This is a read-write property

    return _objectInError;
}

void QMofException::setObjectInError(QMofElement *objectInError)
{
    // This is a read-write property

    if (_objectInError != objectInError) {
        _objectInError = objectInError;
        if (objectInError && objectInError->asQModelingObject() && this->asQModelingObject())
            QObject::connect(objectInError->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setObjectInError()));
    }
}


QMofElement *QMofException::elementInError() const
{
    // This is a read-write property

    return _elementInError;
}

void QMofException::setElementInError(QMofElement *elementInError)
{
    // This is a read-write property

    if (_elementInError != elementInError) {
        _elementInError = elementInError;
        if (elementInError && elementInError->asQModelingObject() && this->asQModelingObject())
            QObject::connect(elementInError->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setElementInError()));
    }
}


QString QMofException::description() const
{
    // This is a read-write property

    return _description;
}

void QMofException::setDescription(QString description)
{
    // This is a read-write property

    if (_description != description) {
        _description = description;
    }
}

