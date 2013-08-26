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
#include "qumldestroyobjectaction.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDestroyObjectAction

    \inmodule QtUml

    \brief A destroy object action is an action that destroys objects.
 */

QUmlDestroyObjectAction::QUmlDestroyObjectAction() :
    _isDestroyLinks(false),
    _isDestroyOwnedObjects(false),
    _target(0)
{
    d_ptr->object.setProperty("isDestroyLinks", QVariant::fromValue(false));
    d_ptr->object.setProperty("isDestroyOwnedObjects", QVariant::fromValue(false));
    d_ptr->object.setProperty("target", QVariant::fromValue((QUmlInputPin *)(0)));
}

// OWNED ATTRIBUTES

/*!
    Specifies whether links in which the object participates are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyLinks() const
{
    // This is a read-write property

    return _isDestroyLinks;
}

void QUmlDestroyObjectAction::setDestroyLinks(bool isDestroyLinks)
{
    // This is a read-write property

    if (_isDestroyLinks != isDestroyLinks) {
        _isDestroyLinks = isDestroyLinks;
    }
}

/*!
    Specifies whether objects owned by the object are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyOwnedObjects() const
{
    // This is a read-write property

    return _isDestroyOwnedObjects;
}

void QUmlDestroyObjectAction::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    // This is a read-write property

    if (_isDestroyOwnedObjects != isDestroyOwnedObjects) {
        _isDestroyOwnedObjects = isDestroyOwnedObjects;
    }
}

/*!
    The input pin providing the object to be destroyed.
 */
QUmlInputPin *QUmlDestroyObjectAction::target() const
{
    // This is a read-write association end

    return _target;
}

void QUmlDestroyObjectAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    if (_target != target) {
        // Adjust subsetted properties
        removeInput(_target);

        _target = target;

        // Adjust subsetted properties
        if (target) {
            addInput(target);
        }
    }
}

QT_END_NAMESPACE

