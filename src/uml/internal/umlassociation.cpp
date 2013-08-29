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
#include "umlassociation_p.h"

#include "private/umlproperty_p.h"
#include "private/umltype_p.h"

/*!
    \class UmlAssociation

    \inmodule QtUml

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link.A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

UmlAssociation::UmlAssociation() :
    _isDerived(false)
{
}

// OWNED ATTRIBUTES

/*!
    References the classifiers that are used as types of the ends of the association.
 */
const QList<UmlType *> UmlAssociation::endType() const
{
    // This is a read-only derived association end

    qWarning("UmlAssociation::endType(): to be implemented (this is a derived association end)");

    return QList<UmlType *>();
}

void UmlAssociation::addEndType(UmlType *endType)
{
    // This is a read-only derived association end

    qWarning("UmlAssociation::endType(): to be implemented (this is a derived association end)");
    Q_UNUSED(endType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addRelatedElement(endType);
    }
}

void UmlAssociation::removeEndType(UmlType *endType)
{
    // This is a read-only derived association end

    qWarning("UmlAssociation::endType(): to be implemented (this is a derived association end)");
    Q_UNUSED(endType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeRelatedElement(endType);
    }
}

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool UmlAssociation::isDerived() const
{
    // This is a read-write property

    return _isDerived;
}

void UmlAssociation::setDerived(bool isDerived)
{
    // This is a read-write property

    if (_isDerived != isDerived) {
        _isDerived = isDerived;
    }
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
const QList<UmlProperty *> UmlAssociation::memberEnd() const
{
    // This is a read-write association end

    return _memberEnd;
}

void UmlAssociation::addMemberEnd(UmlProperty *memberEnd)
{
    // This is a read-write association end

    if (!_memberEnd.contains(memberEnd)) {
        _memberEnd.append(memberEnd);

        // Adjust subsetted properties
        addMember(memberEnd);

        // Adjust opposite properties
        if (memberEnd) {
            memberEnd->setAssociation(this);
        }
    }
}

void UmlAssociation::removeMemberEnd(UmlProperty *memberEnd)
{
    // This is a read-write association end

    if (_memberEnd.contains(memberEnd)) {
        _memberEnd.removeAll(memberEnd);

        // Adjust subsetted properties
        removeMember(memberEnd);

        // Adjust opposite properties
        if (memberEnd) {
            memberEnd->setAssociation(0);
        }
    }
}

/*!
    The navigable ends that are owned by the association itself.
 */
const QSet<UmlProperty *> UmlAssociation::navigableOwnedEnd() const
{
    // This is a read-write association end

    return _navigableOwnedEnd;
}

void UmlAssociation::addNavigableOwnedEnd(UmlProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    if (!_navigableOwnedEnd.contains(navigableOwnedEnd)) {
        _navigableOwnedEnd.insert(navigableOwnedEnd);

        // Adjust subsetted properties
        addOwnedEnd(navigableOwnedEnd);
    }
}

void UmlAssociation::removeNavigableOwnedEnd(UmlProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    if (_navigableOwnedEnd.contains(navigableOwnedEnd)) {
        _navigableOwnedEnd.remove(navigableOwnedEnd);

        // Adjust subsetted properties
        removeOwnedEnd(navigableOwnedEnd);
    }
}

/*!
    The ends that are owned by the association itself.
 */
const QList<UmlProperty *> UmlAssociation::ownedEnd() const
{
    // This is a read-write association end

    return _ownedEnd;
}

void UmlAssociation::addOwnedEnd(UmlProperty *ownedEnd)
{
    // This is a read-write association end

    if (!_ownedEnd.contains(ownedEnd)) {
        _ownedEnd.append(ownedEnd);

        // Adjust subsetted properties
        addMemberEnd(ownedEnd);
        addFeature(ownedEnd);
        addOwnedMember(ownedEnd);

        // Adjust opposite properties
        if (ownedEnd) {
            ownedEnd->setOwningAssociation(this);
        }
    }
}

void UmlAssociation::removeOwnedEnd(UmlProperty *ownedEnd)
{
    // This is a read-write association end

    if (_ownedEnd.contains(ownedEnd)) {
        _ownedEnd.removeAll(ownedEnd);

        // Adjust subsetted properties
        removeMemberEnd(ownedEnd);
        removeFeature(ownedEnd);
        removeOwnedMember(ownedEnd);

        // Adjust opposite properties
        if (ownedEnd) {
            ownedEnd->setOwningAssociation(0);
        }
    }
}

