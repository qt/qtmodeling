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

QAssociation::QAssociation(QObject *parent) :
    QObject(*new QAssociationPrivate, parent),
    _wrappedClassifier(new QClassifier(this)),
    _wrappedRelationship(new QRelationship(this))
{
}

QAssociation::QAssociation(QAssociationPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedClassifier(new QClassifier(this)),
    _wrappedRelationship(new QRelationship(this))
{
}

QAssociation::~QAssociation()
{
}

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QAssociation::isDerived() const
{
    // This is a read-write attribute

    Q_D(const QAssociation);
    return d->isDerived;
}

void QAssociation::setDerived(bool isDerived)
{
    // This is a read-write attribute

    Q_D(QAssociation);
    if (d->isDerived != isDerived) {
        d->isDerived = isDerived;
    }
}

/*!
    References the classifiers that are used as types of the ends of the association.
 */
const QList<QType *> *QAssociation::endTypes() const
{
    // This is a read-only derived association end

    qWarning("QAssociation::endTypes: to be implemented (this is a derived associationend)");

    //Q_D(const QAssociation);
    //return <derived-return>;
}

/*!
    The navigable ends that are owned by the association itself.
 */
const QSet<QProperty *> *QAssociation::navigableOwnedEnds() const
{
    // This is a read-write association end

    Q_D(const QAssociation);
    return d->navigableOwnedEnds;
}

void QAssociation::addNavigableOwnedEnd(QProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (!d->navigableOwnedEnds->contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds->insert(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        QAssociation::addOwnedEnd(dynamic_cast<QProperty *>(navigableOwnedEnd));
    }
}

void QAssociation::removeNavigableOwnedEnd(QProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (d->navigableOwnedEnds->contains(navigableOwnedEnd)) {
        d->navigableOwnedEnds->remove(navigableOwnedEnd);

        // Adjust subsetted property(ies)
        QAssociation::removeOwnedEnd(dynamic_cast<QProperty *>(navigableOwnedEnd));
    }
}

/*!
    The ends that are owned by the association itself.
 */
const QList<QProperty *> *QAssociation::ownedEnds() const
{
    // This is a read-write association end

    Q_D(const QAssociation);
    return d->ownedEnds;
}

void QAssociation::addOwnedEnd(QProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (!d->ownedEnds->contains(ownedEnd)) {
        d->ownedEnds->append(ownedEnd);

        // Adjust subsetted property(ies)
        QAssociation::addMemberEnd(dynamic_cast<QProperty *>(ownedEnd));
        d->QClassifierPrivate::addFeature(dynamic_cast<QFeature *>(ownedEnd));
        d->QNamespacePrivate::addOwnedMember(dynamic_cast<QNamedElement *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(this);
    }
}

void QAssociation::removeOwnedEnd(QProperty *ownedEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (d->ownedEnds->contains(ownedEnd)) {
        d->ownedEnds->removeAll(ownedEnd);

        // Adjust subsetted property(ies)
        QAssociation::removeMemberEnd(dynamic_cast<QProperty *>(ownedEnd));
        d->QClassifierPrivate::removeFeature(dynamic_cast<QFeature *>(ownedEnd));
        d->QNamespacePrivate::removeOwnedMember(dynamic_cast<QNamedElement *>(ownedEnd));

        // Adjust opposite property
        ownedEnd->setOwningAssociation(0);
    }
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
const QList<QProperty *> *QAssociation::memberEnds() const
{
    // This is a read-write association end

    Q_D(const QAssociation);
    return d->memberEnds;
}

void QAssociation::addMemberEnd(QProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (!d->memberEnds->contains(memberEnd)) {
        d->memberEnds->append(memberEnd);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::addMember(dynamic_cast<QNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(this);
    }
}

void QAssociation::removeMemberEnd(QProperty *memberEnd)
{
    // This is a read-write association end

    Q_D(QAssociation);
    if (d->memberEnds->contains(memberEnd)) {
        d->memberEnds->removeAll(memberEnd);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::removeMember(dynamic_cast<QNamedElement *>(memberEnd));

        // Adjust opposite property
        memberEnd->setAssociation(0);
    }
}

#include "moc_qassociation.cpp"

QT_END_NAMESPACE_QTUML

