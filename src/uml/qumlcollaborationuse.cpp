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
#include "qumlcollaborationuse.h"

#include "private/qumlcollaborationuseobject_p.h"

#include <QtUml/QUmlCollaboration>
#include <QtUml/QUmlDependency>

/*!
    \class QUmlCollaborationUse

    \inmodule QtUml

    \brief A collaboration use represents one particular use of a collaboration to explain the relationships between the properties of a classifier. A collaboration use shows how the pattern described by a collaboration is applied in a given context, by binding specific entities from that context to the roles of the collaboration. Depending on the context, these entities could be structural features of a classifier, instance specifications, or even roles in some containing collaboration. There may be multiple occurrences of a given collaboration within a classifier, each involving a different set of roles and connectors. A given role or connector may be involved in multiple occurrences of the same or different collaborations. Associated dependencies map features of the collaboration type to features in the classifier. These dependencies indicate which role in the classifier plays which role in the collaboration.
 */
QUmlCollaborationUse::QUmlCollaborationUse(bool createQObject) :
    _type(0)
{
    if (createQObject)
        _qObject = new QUmlCollaborationUseObject(this);
}

QUmlCollaborationUse::~QUmlCollaborationUse()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    A mapping between features of the collaboration type and features of the owning classifier. This mapping indicates which connectable element of the classifier plays which role(s) in the collaboration. A connectable element may be bound to multiple roles in the same collaboration use (that is, it may play multiple roles).
 */
const QSet<QUmlDependency *> 
QUmlCollaborationUse::roleBinding() const
{
    // This is a read-write association end

    return _roleBinding;
}

void QUmlCollaborationUse::addRoleBinding(QUmlDependency *roleBinding)
{
    // This is a read-write association end

    if (!_roleBinding.contains(roleBinding)) {
        _roleBinding.insert(roleBinding);
        if (roleBinding->asQObject() && this->asQObject())
            QObject::connect(roleBinding->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRoleBinding(QObject *)));
        roleBinding->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(roleBinding);
    }
}

void QUmlCollaborationUse::removeRoleBinding(QUmlDependency *roleBinding)
{
    // This is a read-write association end

    if (_roleBinding.contains(roleBinding)) {
        _roleBinding.remove(roleBinding);
        if (roleBinding->asQObject())
            roleBinding->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(roleBinding);
    }
}

/*!
    The collaboration which is used in this occurrence. The collaboration defines the cooperation between its roles which are mapped to properties of the classifier owning the collaboration use.
 */
QUmlCollaboration *
QUmlCollaborationUse::type() const
{
    // This is a read-write association end

    return _type;
}

void QUmlCollaborationUse::setType(QUmlCollaboration *type)
{
    // This is a read-write association end

    if (_type != type) {
        _type = type;
        if (type->asQObject() && this->asQObject())
            QObject::connect(type->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setType()));
    }
}

