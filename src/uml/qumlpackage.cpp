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
#include "qumlpackage.h"

#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageMerge>
#include <QtUml/QUmlProfile>
#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlPackage::QUmlPackage(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QString QUmlPackage::URI() const
{
    return _URI;
}

void QUmlPackage::setURI(QString URI)
{
    UmlPackage::setURI(URI);
}

const QSet<QUmlPackage *> QUmlPackage::nestedPackage() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlPackage::nestedPackage())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

void QUmlPackage::addNestedPackage(UmlPackage *nestedPackage)
{
    UmlPackage::addNestedPackage(nestedPackage);
}

void QUmlPackage::removeNestedPackage(UmlPackage *nestedPackage)
{
    UmlPackage::removeNestedPackage(nestedPackage);
}

QUmlPackage *QUmlPackage::nestingPackage() const
{
    return reinterpret_cast<QUmlPackage *>(_nestingPackage);
}

void QUmlPackage::setNestingPackage(QUmlPackage *nestingPackage)
{
    UmlPackage::setNestingPackage(nestingPackage);
}

const QSet<QUmlStereotype *> QUmlPackage::ownedStereotype() const
{
    QSet<QUmlStereotype *> r;
    foreach (UmlStereotype *element, UmlPackage::ownedStereotype())
        r.insert(reinterpret_cast<QUmlStereotype *>(element));
    return r;
}

const QSet<QUmlType *> QUmlPackage::ownedType() const
{
    QSet<QUmlType *> r;
    foreach (UmlType *element, UmlPackage::ownedType())
        r.insert(reinterpret_cast<QUmlType *>(element));
    return r;
}

void QUmlPackage::addOwnedType(UmlType *ownedType)
{
    UmlPackage::addOwnedType(ownedType);
}

void QUmlPackage::removeOwnedType(UmlType *ownedType)
{
    UmlPackage::removeOwnedType(ownedType);
}

const QSet<QUmlPackageMerge *> QUmlPackage::packageMerge() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageMerge *> *>(&_packageMerge));
}

void QUmlPackage::addPackageMerge(UmlPackageMerge *packageMerge)
{
    UmlPackage::addPackageMerge(packageMerge);
}

void QUmlPackage::removePackageMerge(UmlPackageMerge *packageMerge)
{
    UmlPackage::removePackageMerge(packageMerge);
}

const QSet<QUmlPackageableElement *> QUmlPackage::packagedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageableElement *> *>(&_packagedElement));
}

void QUmlPackage::addPackagedElement(UmlPackageableElement *packagedElement)
{
    UmlPackage::addPackagedElement(packagedElement);
}

void QUmlPackage::removePackagedElement(UmlPackageableElement *packagedElement)
{
    UmlPackage::removePackagedElement(packagedElement);
}

const QSet<QUmlProfileApplication *> QUmlPackage::profileApplication() const
{
    return *(reinterpret_cast<const QSet<QUmlProfileApplication *> *>(&_profileApplication));
}

void QUmlPackage::addProfileApplication(UmlProfileApplication *profileApplication)
{
    UmlPackage::addProfileApplication(profileApplication);
}

void QUmlPackage::removeProfileApplication(UmlProfileApplication *profileApplication)
{
    UmlPackage::removeProfileApplication(profileApplication);
}

// Operations

QSet<QUmlStereotype *> QUmlPackage::allApplicableStereotypes() const
{
    QSet<QUmlStereotype *> r;
    foreach (UmlStereotype *element, UmlPackage::allApplicableStereotypes())
        r.insert(reinterpret_cast<QUmlStereotype *>(element));
    return r;
}

QUmlProfile *QUmlPackage::containingProfile() const
{
    return reinterpret_cast<QUmlProfile *>(UmlPackage::containingProfile());
}

bool QUmlPackage::makesVisible(QUmlNamedElement *el) const
{
    return UmlPackage::makesVisible(el);
}

bool QUmlPackage::mustBeOwned() const
{
    return UmlPackage::mustBeOwned();
}

QSet<QUmlPackageableElement *> QUmlPackage::visibleMembers() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlPackage::visibleMembers())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

QT_END_NAMESPACE

