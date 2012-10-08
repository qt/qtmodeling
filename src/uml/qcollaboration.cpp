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

#include "qcollaboration.h"
#include "qcollaboration_p.h"
#include "qstructuredclassifier_p.h"

#include <QtUml/QConnectableElement>

QT_BEGIN_NAMESPACE_QTUML

QCollaborationPrivate::QCollaborationPrivate() :
    collaborationRoles(new QSet<QConnectableElement *>)
{
}

QCollaborationPrivate::~QCollaborationPrivate()
{
    delete collaborationRoles;
}

/*!
    \class QCollaboration

    \inmodule QtUml

    \brief A collaboration use represents the application of the pattern described by a collaboration to a specific situation involving specific classes or instances playing the roles of the collaboration.
 */

QCollaboration::QCollaboration(QObject *parent)
    : QObject(parent), d_ptr(new QCollaborationPrivate)
{
}

QCollaboration::~QCollaboration()
{
    delete d_ptr;
}

/*!
    References connectable elements (possibly owned by other classifiers) which represent roles that instances may play in this collaboration.
 */
const QSet<QConnectableElement *> *QCollaboration::collaborationRoles() const
{
    return d_ptr->collaborationRoles;
}

void QCollaboration::addCollaborationRole(const QConnectableElement *collaborationRole)
{
    d_ptr->collaborationRoles->insert(const_cast<QConnectableElement *>(collaborationRole));
    // Adjust subsetted property(ies)
    QStructuredClassifier::d_ptr->roles->insert(const_cast<QConnectableElement *>(collaborationRole));
}

void QCollaboration::removeCollaborationRole(const QConnectableElement *collaborationRole)
{
    d_ptr->collaborationRoles->remove(const_cast<QConnectableElement *>(collaborationRole));
    // Adjust subsetted property(ies)
    QStructuredClassifier::d_ptr->roles->remove(const_cast<QConnectableElement *>(collaborationRole));
}

#include "moc_qcollaboration.cpp"

QT_END_NAMESPACE_QTUML

