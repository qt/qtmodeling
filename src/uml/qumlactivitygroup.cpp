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
#include "qumlactivitygroup.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.
 */

QUmlActivityGroup::QUmlActivityGroup() :
    _inActivity(0),
    _superGroup(0)
{
}

// OWNED ATTRIBUTES

/*!
    Edges immediately contained in the group.
 */
QSet<QUmlActivityEdge *> QUmlActivityGroup::containedEdge() const
{
    // This is a read-only derived union association end

    return _containedEdge;
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlActivityGroup::containedNode() const
{
    // This is a read-only derived union association end

    return _containedNode;
}

/*!
    Activity containing the group.
 */
QUmlActivity *QUmlActivityGroup::inActivity() const
{
    // This is a read-write association end

    return _inActivity;
}

void QUmlActivityGroup::setInActivity(QUmlActivity *inActivity)
{
    // This is a read-write association end

    if (_inActivity != inActivity) {
        _inActivity = inActivity;
    }
}

/*!
    Groups immediately contained in the group.
 */
QSet<QUmlActivityGroup *> QUmlActivityGroup::subgroup() const
{
    // This is a read-only derived union association end

    return _subgroup;
}

/*!
    Group immediately containing the group.
 */
QUmlActivityGroup *QUmlActivityGroup::superGroup() const
{
    // This is a read-only derived union association end

    return _superGroup;
}

QT_END_NAMESPACE

