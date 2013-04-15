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
#include "qumlcollaborationuse_p.h"

#include <QtUml/QUmlDependency>
#include <QtUml/QUmlCollaboration>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlCollaborationUsePrivate::QUmlCollaborationUsePrivate() :
    type(0)
{
}

QUmlCollaborationUsePrivate::~QUmlCollaborationUsePrivate()
{
}

/*!
    \class QUmlCollaborationUse

    \inmodule QtUml

    \brief A collaboration use represents one particular use of a collaboration to explain the relationships between the properties of a classifier. A collaboration use shows how the pattern described by a collaboration is applied in a given context, by binding specific entities from that context to the roles of the collaboration. Depending on the context, these entities could be structural features of a classifier, instance specifications, or even roles in some containing collaboration. There may be multiple occurrences of a given collaboration within a classifier, each involving a different set of roles and connectors. A given role or connector may be involved in multiple occurrences of the same or different collaborations. Associated dependencies map features of the collaboration type to features in the classifier. These dependencies indicate which role in the classifier plays which role in the collaboration.
 */

QUmlCollaborationUse::QUmlCollaborationUse(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlCollaborationUsePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlCollaborationUse::QUmlCollaborationUse(QUmlCollaborationUsePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlCollaborationUse::~QUmlCollaborationUse()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlCollaborationUse
// ---------------------------------------------------------------

/*!
    The collaboration which is used in this occurrence. The collaboration defines the cooperation between its roles which are mapped to properties of the classifier owning the collaboration use.
 */
QUmlCollaboration *QUmlCollaborationUse::type() const
{
    // This is a read-write association end

    Q_D(const QUmlCollaborationUse);
    return d->type;
}

void QUmlCollaborationUse::setType(QUmlCollaboration *type)
{
    // This is a read-write association end

    Q_D(QUmlCollaborationUse);
    if (d->type != type) {
        d->type = type;
    }
}

/*!
    A mapping between features of the collaboration type and features of the owning classifier. This mapping indicates which connectable element of the classifier plays which role(s) in the collaboration. A connectable element may be bound to multiple roles in the same collaboration use (that is, it may play multiple roles).
 */
QSet<QUmlDependency *> QUmlCollaborationUse::roleBindings() const
{
    // This is a read-write association end

    Q_D(const QUmlCollaborationUse);
    return d->roleBindings;
}

void QUmlCollaborationUse::addRoleBinding(QUmlDependency *roleBinding)
{
    // This is a read-write association end

    Q_D(QUmlCollaborationUse);
    if (!d->roleBindings.contains(roleBinding)) {
        d->roleBindings.insert(roleBinding);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(roleBinding));
    }
}

void QUmlCollaborationUse::removeRoleBinding(QUmlDependency *roleBinding)
{
    // This is a read-write association end

    Q_D(QUmlCollaborationUse);
    if (d->roleBindings.contains(roleBinding)) {
        d->roleBindings.remove(roleBinding);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(roleBinding));
    }
}

void QUmlCollaborationUse::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("type")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("type")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("type")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The collaboration which is used in this occurrence. The collaboration defines the cooperation between its roles which are mapped to properties of the classifier owning the collaboration use.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("type")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("type")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("type")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("roleBindings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("roleBindings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("roleBindings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A mapping between features of the collaboration type and features of the owning classifier. This mapping indicates which connectable element of the classifier plays which role(s) in the collaboration. A connectable element may be bound to multiple roles in the same collaboration use (that is, it may play multiple roles).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("roleBindings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("roleBindings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCollaborationUse")][QString::fromLatin1("roleBindings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcollaborationuse.cpp"

