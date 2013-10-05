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
#include "qumlpackageimportobject_p.h"

#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>

QT_BEGIN_NAMESPACE

QUmlPackageImportObject::QUmlPackageImportObject(QUmlPackageImport *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlPackageImportObject::~QUmlPackageImportObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPackageImportObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageImportObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPackageImportObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlPackageImportObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlPackageImportObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPackageImportObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [PackageImport]

QObject *QUmlPackageImportObject::importedPackage() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->importedPackage())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->importedPackage()->asQObject();
}

QObject *QUmlPackageImportObject::importingNamespace() const
{
    if (!qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->importingNamespace())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->importingNamespace()->asQObject();
}

QtUml::VisibilityKind QUmlPackageImportObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPackageImportObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPackageImportObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPackageImportObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageImportObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPackageImportObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageImportObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPackageImportObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlPackageImportObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlPackageImportObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlPackageImportObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlPackageImportObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlPackageImportObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlPackageImportObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageImport]

void QUmlPackageImportObject::setImportedPackage(QObject *importedPackage)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->setImportedPackage(qmodelingobjectproperty_cast<QUmlPackage *>(importedPackage));
}

void QUmlPackageImportObject::setImportingNamespace(QObject *importingNamespace)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->setImportingNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(importingNamespace));
}

void QUmlPackageImportObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->setVisibility(visibility);
}

void QUmlPackageImportObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlPackageImport *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

QT_END_NAMESPACE

