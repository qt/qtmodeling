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

#include <QtUml/QUmlProperty>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlAssociation::QUmlAssociation(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QList<QUmlType *> QUmlAssociation::endType() const
{
    QList<QUmlType *> r;
    foreach (UmlType *element, UmlAssociation::endType())
        r.append(reinterpret_cast<QUmlType *>(element));
    return r;
}

bool QUmlAssociation::isDerived() const
{
    return _isDerived;
}

void QUmlAssociation::setDerived(bool isDerived)
{
    UmlAssociation::setDerived(isDerived);
}

const QList<QUmlProperty *> QUmlAssociation::memberEnd() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_memberEnd));
}

void QUmlAssociation::addMemberEnd(UmlProperty *memberEnd)
{
    UmlAssociation::addMemberEnd(memberEnd);
}

void QUmlAssociation::removeMemberEnd(UmlProperty *memberEnd)
{
    UmlAssociation::removeMemberEnd(memberEnd);
}

const QSet<QUmlProperty *> QUmlAssociation::navigableOwnedEnd() const
{
    return *(reinterpret_cast<const QSet<QUmlProperty *> *>(&_navigableOwnedEnd));
}

void QUmlAssociation::addNavigableOwnedEnd(UmlProperty *navigableOwnedEnd)
{
    UmlAssociation::addNavigableOwnedEnd(navigableOwnedEnd);
}

void QUmlAssociation::removeNavigableOwnedEnd(UmlProperty *navigableOwnedEnd)
{
    UmlAssociation::removeNavigableOwnedEnd(navigableOwnedEnd);
}

const QList<QUmlProperty *> QUmlAssociation::ownedEnd() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_ownedEnd));
}

void QUmlAssociation::addOwnedEnd(UmlProperty *ownedEnd)
{
    UmlAssociation::addOwnedEnd(ownedEnd);
}

void QUmlAssociation::removeOwnedEnd(UmlProperty *ownedEnd)
{
    UmlAssociation::removeOwnedEnd(ownedEnd);
}

QT_END_NAMESPACE

