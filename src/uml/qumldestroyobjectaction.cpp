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
#include "qumldestroyobjectaction_p.h"

#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

QUmlDestroyObjectActionPrivate::QUmlDestroyObjectActionPrivate() :
    isDestroyLinks(false),
    isDestroyOwnedObjects(false),
    target(0)
{
}

/*!
    \class QUmlDestroyObjectAction

    \inmodule QtUml

    \brief A destroy object action is an action that destroys objects.
 */

QUmlDestroyObjectAction::QUmlDestroyObjectAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlDestroyObjectActionPrivate);
}

// Owned attributes

/*!
    Specifies whether links in which the object participates are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyLinks() const
{
    return bool();
}

void QUmlDestroyObjectAction::setDestroyLinks(bool isDestroyLinks)
{
    Q_UNUSED(isDestroyLinks);
}

/*!
    Specifies whether objects owned by the object are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyOwnedObjects() const
{
    return bool();
}

void QUmlDestroyObjectAction::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    Q_UNUSED(isDestroyOwnedObjects);
}

/*!
    The input pin providing the object to be destroyed.
 */
QUmlInputPin *QUmlDestroyObjectAction::target() const
{
    return 0;
}

void QUmlDestroyObjectAction::setTarget(QUmlInputPin *target)
{
    Q_UNUSED(target);
}

QT_END_NAMESPACE

