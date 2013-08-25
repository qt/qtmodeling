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
#include "qumlassociation.h"
#include "qumlassociation_p.h"

#include <QtUml/QUmlProperty>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlAssociationPrivate::QUmlAssociationPrivate() :
    isDerived(false)
{
}

/*!
    \class QUmlAssociation

    \inmodule QtUml

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link.A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

QUmlAssociation::QUmlAssociation(bool create_d_ptr) :
    QUmlClassifier(false),
    QUmlRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlAssociationPrivate);
}

// Owned attributes

/*!
    References the classifiers that are used as types of the ends of the association.
 */
QList<QUmlType *> QUmlAssociation::endType() const
{
    return QList<QUmlType *>();
}

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QUmlAssociation::isDerived() const
{
    return bool();
}

void QUmlAssociation::setDerived(bool isDerived)
{
    Q_UNUSED(isDerived);
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
QList<QUmlProperty *> QUmlAssociation::memberEnd() const
{
    return QList<QUmlProperty *>();
}

void QUmlAssociation::addMemberEnd(QList<QUmlProperty *> memberEnd)
{
    Q_UNUSED(memberEnd);
}

void QUmlAssociation::removeMemberEnd(QList<QUmlProperty *> memberEnd)
{
    Q_UNUSED(memberEnd);
}

/*!
    The navigable ends that are owned by the association itself.
 */
QSet<QUmlProperty *> QUmlAssociation::navigableOwnedEnd() const
{
    return QSet<QUmlProperty *>();
}

void QUmlAssociation::addNavigableOwnedEnd(QSet<QUmlProperty *> navigableOwnedEnd)
{
    Q_UNUSED(navigableOwnedEnd);
}

void QUmlAssociation::removeNavigableOwnedEnd(QSet<QUmlProperty *> navigableOwnedEnd)
{
    Q_UNUSED(navigableOwnedEnd);
}

/*!
    The ends that are owned by the association itself.
 */
QList<QUmlProperty *> QUmlAssociation::ownedEnd() const
{
    return QList<QUmlProperty *>();
}

void QUmlAssociation::addOwnedEnd(QList<QUmlProperty *> ownedEnd)
{
    Q_UNUSED(ownedEnd);
}

void QUmlAssociation::removeOwnedEnd(QList<QUmlProperty *> ownedEnd)
{
    Q_UNUSED(ownedEnd);
}

QT_END_NAMESPACE

