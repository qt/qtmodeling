/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qcollaborationuse.h"
#include "qcollaborationuse_p.h"

#include <QtUml/QDependency>
#include <QtUml/QCollaboration>

QT_BEGIN_NAMESPACE_QTUML

QCollaborationUsePrivate::QCollaborationUsePrivate(QCollaborationUse *q_umlptr) :
    type(0),
    roleBindings(new QSet<QDependency *>)
{
    this->q_umlptr = q_umlptr;
}

QCollaborationUsePrivate::~QCollaborationUsePrivate()
{
    delete roleBindings;
}

/*!
    \class QCollaborationUse

    \inmodule QtUml

    \brief A collaboration use represents one particular use of a collaboration to explain the relationships between the properties of a classifier. A collaboration use shows how the pattern described by a collaboration is applied in a given context, by binding specific entities from that context to the roles of the collaboration. Depending on the context, these entities could be structural features of a classifier, instance specifications, or even roles in some containing collaboration. There may be multiple occurrences of a given collaboration within a classifier, each involving a different set of roles and connectors. A given role or connector may be involved in multiple occurrences of the same or different collaborations. Associated dependencies map features of the collaboration type to features in the classifier. These dependencies indicate which role in the classifier plays which role in the collaboration.
 */

QCollaborationUse::QCollaborationUse(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QCollaborationUsePrivate(this);
}

QCollaborationUse::QCollaborationUse(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QCollaborationUsePrivate;
}

QCollaborationUse::~QCollaborationUse()
{
}

/*!
    The collaboration which is used in this occurrence. The collaboration defines the cooperation between its roles which are mapped to properties of the classifier owning the collaboration use.
 */
QCollaboration *QCollaborationUse::type() const
{
    // This is a read-write association end

    QTUML_D(const QCollaborationUse);
    return d->type;
}

void QCollaborationUse::setType(QCollaboration *type)
{
    // This is a read-write association end

    QTUML_D(QCollaborationUse);
    if (d->type != type) {
        d->type = type;
    }
}

/*!
    A mapping between features of the collaboration type and features of the owning classifier. This mapping indicates which connectable element of the classifier plays which role(s) in the collaboration. A connectable element may be bound to multiple roles in the same collaboration use (that is, it may play multiple roles).
 */
const QSet<QDependency *> *QCollaborationUse::roleBindings() const
{
    // This is a read-write association end

    QTUML_D(const QCollaborationUse);
    return d->roleBindings;
}

void QCollaborationUse::addRoleBinding(QDependency *roleBinding)
{
    // This is a read-write association end

    QTUML_D(QCollaborationUse);
    if (!d->roleBindings->contains(roleBinding)) {
        d->roleBindings->insert(roleBinding);

        // Adjust subsetted property(ies)
        d->addOwnedElement(roleBinding);
    }
}

void QCollaborationUse::removeRoleBinding(QDependency *roleBinding)
{
    // This is a read-write association end

    QTUML_D(QCollaborationUse);
    if (d->roleBindings->contains(roleBinding)) {
        d->roleBindings->remove(roleBinding);

        // Adjust subsetted property(ies)
        d->removeOwnedElement(roleBinding);
    }
}

#include "moc_qcollaborationuse.cpp"

QT_END_NAMESPACE_QTUML

