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
#include "qumlincludeobject_p.h"

#include <QtUml/QUmlInclude>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlIncludeObject::QUmlIncludeObject(QUmlInclude *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlIncludeObject::~QUmlIncludeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInclude *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlIncludeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlIncludeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlIncludeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInclude *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInclude *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlIncludeObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlIncludeObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlIncludeObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlIncludeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlIncludeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInclude *>(this)->name();
}

QObject *QUmlIncludeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInclude *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInclude *>(this)->nameExpression()->asQObject();
}

QObject *QUmlIncludeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInclude *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInclude *>(this)->namespace_()->asQObject();
}

QString QUmlIncludeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInclude *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlIncludeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInclude *>(this)->visibility();
}

// OWNED ATTRIBUTES [Include]

QObject *QUmlIncludeObject::addition() const
{
    if (!qmodelingobjectproperty_cast<QUmlInclude *>(this)->addition())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInclude *>(this)->addition()->asQObject();
}

QObject *QUmlIncludeObject::includingCase() const
{
    if (!qmodelingobjectproperty_cast<QUmlInclude *>(this)->includingCase())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInclude *>(this)->includingCase()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlIncludeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlIncludeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInclude *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlIncludeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlIncludeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInclude *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlIncludeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInclude *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlIncludeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInclude *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlIncludeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIncludeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIncludeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIncludeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIncludeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlIncludeObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlIncludeObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlIncludeObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlIncludeObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlIncludeObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlIncludeObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlIncludeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIncludeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIncludeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setName(name);
}

void QUmlIncludeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlIncludeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlIncludeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setQualifiedName(qualifiedName);
}

void QUmlIncludeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Include]

void QUmlIncludeObject::setAddition(QObject *addition)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setAddition(qmodelingobjectproperty_cast<QUmlUseCase *>(addition));
}

void QUmlIncludeObject::setIncludingCase(QObject *includingCase)
{
    qmodelingobjectproperty_cast<QUmlInclude *>(this)->setIncludingCase(qmodelingobjectproperty_cast<QUmlUseCase *>(includingCase));
}

QT_END_NAMESPACE

