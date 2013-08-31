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
#include "qumlprofileapplication.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlProfile>

QT_BEGIN_NAMESPACE

/*!
    \class UmlProfileApplication

    \inmodule QtUml

    \brief A profile application is used to show which profiles have been applied to a package.
 */

QUmlProfileApplication::QUmlProfileApplication(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlProfileApplication::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlProfileApplication::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlProfileApplication::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [Relationship]

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QUmlElement *> QUmlProfileApplication::relatedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_relatedElement));
}

// OWNED ATTRIBUTES [DirectedRelationship]

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlProfileApplication::source() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_source));
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlProfileApplication::target() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_target));
}

// OWNED ATTRIBUTES [ProfileApplication]

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.
 */
QUmlProfile *QUmlProfileApplication::appliedProfile() const
{
    return reinterpret_cast<QUmlProfile *>(_appliedProfile);
}

/*!
    The package that owns the profile application.
 */
QUmlPackage *QUmlProfileApplication::applyingPackage() const
{
    return reinterpret_cast<QUmlPackage *>(_applyingPackage);
}

/*!
    Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
 */
bool QUmlProfileApplication::isStrict() const
{
    return _isStrict;
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlProfileApplication::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlProfileApplication::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProfileApplication::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlProfileApplication::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

// SLOTS FOR OWNED ATTRIBUTES [ProfileApplication]

void QUmlProfileApplication::setAppliedProfile(QUmlProfile *appliedProfile)
{
    UmlProfileApplication::setAppliedProfile(appliedProfile);
}

void QUmlProfileApplication::setApplyingPackage(QUmlPackage *applyingPackage)
{
    UmlProfileApplication::setApplyingPackage(applyingPackage);
}

void QUmlProfileApplication::setStrict(bool isStrict)
{
    UmlProfileApplication::setStrict(isStrict);
}

QT_END_NAMESPACE

