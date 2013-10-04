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
#include "qumlelementimportobject_p.h"

#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackageableElement>

QT_BEGIN_NAMESPACE

QUmlElementImportObject::QUmlElementImportObject(QUmlElementImport *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlElementImportObject::~QUmlElementImportObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlElementImport *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlElementImportObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlElementImport *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlElementImportObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlElementImport *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlElementImportObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlElementImport *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlElementImport *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlElementImportObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlElementImport *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlElementImportObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlElementImport *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlElementImportObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlElementImport *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ElementImport]

QString QUmlElementImportObject::alias() const
{
    return qmodelingobjectproperty_cast<QUmlElementImport *>(this)->alias();
}

QObject *QUmlElementImportObject::importedElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlElementImport *>(this)->importedElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlElementImport *>(this)->importedElement()->asQObject();
}

QObject *QUmlElementImportObject::importingNamespace() const
{
    if (!qmodelingobjectproperty_cast<QUmlElementImport *>(this)->importingNamespace())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlElementImport *>(this)->importingNamespace()->asQObject();
}

QtUml::VisibilityKind QUmlElementImportObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlElementImport *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlElementImportObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlElementImport *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlElementImportObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlElementImport *>(this)->mustBeOwned();
}

// OPERATIONS [ElementImport]

QString QUmlElementImportObject::getName() const
{
    return qmodelingobjectproperty_cast<QUmlElementImport *>(this)->getName();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlElementImportObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlElementImportObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlElementImportObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlElementImportObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlElementImportObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlElementImportObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlElementImportObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlElementImportObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlElementImportObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlElementImportObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlElementImportObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ElementImport]

void QUmlElementImportObject::setAlias(QString alias)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->setAlias(alias);
}

void QUmlElementImportObject::setImportedElement(QObject *importedElement)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->setImportedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedElement));
}

void QUmlElementImportObject::setImportingNamespace(QObject *importingNamespace)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->setImportingNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(importingNamespace));
}

void QUmlElementImportObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlElementImportObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlElementImport *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

QT_END_NAMESPACE

