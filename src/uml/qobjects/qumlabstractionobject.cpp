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
#include "qumlabstractionobject_p.h"

#include <QtUml/QUmlAbstraction>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlAbstractionObject::QUmlAbstractionObject(QUmlAbstraction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlAbstractionObject::~QUmlAbstractionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAbstractionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAbstractionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAbstractionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlAbstractionObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlAbstractionObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAbstractionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlAbstractionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->name();
}

QObject *QUmlAbstractionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlAbstractionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->namespace_()->asQObject();
}

QString QUmlAbstractionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlAbstractionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlAbstractionObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlAbstractionObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAbstractionObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlAbstractionObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAbstractionObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlAbstractionObject::mapping() const
{
    if (!qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->mapping())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->mapping()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAbstractionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAbstractionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlAbstractionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlAbstractionObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAbstractionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAbstractionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAbstractionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAbstractionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAbstractionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAbstractionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAbstractionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAbstractionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAbstractionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlAbstractionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlAbstractionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAbstractionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAbstractionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAbstractionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setName(name);
}

void QUmlAbstractionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAbstractionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAbstractionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlAbstractionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setVisibility(visibility);
}

void QUmlAbstractionObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlAbstractionObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlAbstractionObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlAbstractionObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlAbstractionObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlAbstractionObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlAbstractionObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlAbstractionObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlAbstractionObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlAbstractionObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlAbstractionObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlAbstractionObject::setMapping(QObject *mapping)
{
    qmodelingobjectproperty_cast<QUmlAbstraction *>(this)->setMapping(qmodelingobjectproperty_cast<QUmlOpaqueExpression *>(mapping));
}

QT_END_NAMESPACE

