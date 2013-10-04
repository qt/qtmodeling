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
#include "qumlrealizationobject_p.h"

#include <QtUml/QUmlRealization>
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

QUmlRealizationObject::QUmlRealizationObject(QUmlRealization *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlRealizationObject::~QUmlRealizationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlRealization *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRealizationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRealizationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRealizationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlRealization *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRealization *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlRealizationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlRealization *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRealization *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlRealizationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlRealization *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRealization *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRealizationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlRealizationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->name();
}

QObject *QUmlRealizationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlRealization *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRealization *>(this)->nameExpression()->asQObject();
}

QObject *QUmlRealizationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlRealization *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRealization *>(this)->namespace_()->asQObject();
}

QString QUmlRealizationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlRealizationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlRealizationObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlRealizationObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRealizationObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlRealizationObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRealizationObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlRealizationObject::mapping() const
{
    if (!qmodelingobjectproperty_cast<QUmlRealization *>(this)->mapping())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRealization *>(this)->mapping()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRealizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRealizationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlRealizationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlRealizationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRealizationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlRealizationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlRealization *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRealizationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRealizationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlRealization *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRealizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRealizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRealizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRealizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRealizationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlRealizationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlRealizationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRealizationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRealizationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRealizationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setName(name);
}

void QUmlRealizationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRealizationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRealizationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlRealizationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlRealizationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlRealizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlRealizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlRealizationObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlRealizationObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlRealizationObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlRealizationObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlRealizationObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlRealizationObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlRealizationObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlRealizationObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlRealizationObject::setMapping(QObject *mapping)
{
    qmodelingobjectproperty_cast<QUmlRealization *>(this)->setMapping(qmodelingobjectproperty_cast<QUmlOpaqueExpression *>(mapping));
}

QT_END_NAMESPACE

