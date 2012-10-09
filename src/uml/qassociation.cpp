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

#include "qassociation.h"
#include "qassociation_p.h"
#include "qrelationship_p.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"

#include <QtUml/QType>
#include <QtUml/QProperty>

QT_BEGIN_NAMESPACE_QTUML

QAssociationPrivate::QAssociationPrivate() :
    isDerived(false),
    navigableOwnedEnds(new QSet<QProperty *>),
    ownedEnds(new QList<QProperty *>),
    memberEnds(new QList<QProperty *>)
{
}

QAssociationPrivate::~QAssociationPrivate()
{
    delete navigableOwnedEnds;
    delete ownedEnds;
    delete memberEnds;
}

/*!
    \class QAssociation

    \inmodule QtUml

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link.A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

QAssociation::QAssociation(QObject *parent)
    : QObject(parent), d_ptr(new QAssociationPrivate)
{
}

QAssociation::~QAssociation()
{
    delete d_ptr;
}

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QAssociation::isDerived() const
{
    return d_ptr->isDerived;
}

void QAssociation::setDerived(bool isDerived)
{
    d_ptr->isDerived = isDerived;
}

/*!
    References the classifiers that are used as types of the ends of the association.
 */
const QList<QType *> *QAssociation::endTypes() const
{
    qWarning("QAssociation::endTypes: to be implemented (this is a derived associationend)");
}

/*!
    The navigable ends that are owned by the association itself.
 */
const QSet<QProperty *> *QAssociation::navigableOwnedEnds() const
{
    return d_ptr->navigableOwnedEnds;
}

void QAssociation::addNavigableOwnedEnd(const QProperty *navigableOwnedEnd)
{
    d_ptr->navigableOwnedEnds->insert(const_cast<QProperty *>(navigableOwnedEnd));
}

void QAssociation::removeNavigableOwnedEnd(const QProperty *navigableOwnedEnd)
{
    d_ptr->navigableOwnedEnds->remove(const_cast<QProperty *>(navigableOwnedEnd));
}

/*!
    The ends that are owned by the association itself.
 */
const QList<QProperty *> *QAssociation::ownedEnds() const
{
    return d_ptr->ownedEnds;
}

void QAssociation::addOwnedEnd(const QProperty *ownedEnd)
{
    d_ptr->ownedEnds->append(const_cast<QProperty *>(ownedEnd));
}

void QAssociation::removeOwnedEnd(const QProperty *ownedEnd)
{
    d_ptr->ownedEnds->removeAll(const_cast<QProperty *>(ownedEnd));
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
const QList<QProperty *> *QAssociation::memberEnds() const
{
    return d_ptr->memberEnds;
}

void QAssociation::addMemberEnd(const QProperty *memberEnd)
{
    d_ptr->memberEnds->append(const_cast<QProperty *>(memberEnd));
}

void QAssociation::removeMemberEnd(const QProperty *memberEnd)
{
    d_ptr->memberEnds->removeAll(const_cast<QProperty *>(memberEnd));
}

#include "moc_qassociation.cpp"

QT_END_NAMESPACE_QTUML

