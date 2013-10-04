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
#include "qumlmanifestationobject_p.h"

#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlManifestationObject::QUmlManifestationObject(QUmlManifestation *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlManifestationObject::~QUmlManifestationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlManifestation *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlManifestationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlManifestationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlManifestationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlManifestation *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlManifestationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlManifestation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlManifestationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlManifestation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlManifestationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlManifestationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->name();
}

QObject *QUmlManifestationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlManifestation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->nameExpression()->asQObject();
}

QObject *QUmlManifestationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlManifestation *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->namespace_()->asQObject();
}

QString QUmlManifestationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlManifestationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlManifestationObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlManifestationObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlManifestationObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlManifestationObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlManifestationObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlManifestationObject::mapping() const
{
    if (!qmodelingobjectproperty_cast<QUmlManifestation *>(this)->mapping())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->mapping()->asQObject();
}

// OWNED ATTRIBUTES [Manifestation]

QObject *QUmlManifestationObject::utilizedElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlManifestation *>(this)->utilizedElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->utilizedElement()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlManifestationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlManifestationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlManifestationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlManifestationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlManifestationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlManifestationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlManifestation *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlManifestationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlManifestationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlManifestation *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlManifestationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlManifestationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlManifestationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlManifestationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlManifestationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlManifestationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlManifestationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlManifestationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlManifestationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlManifestationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setName(name);
}

void QUmlManifestationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlManifestationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlManifestationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlManifestationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlManifestationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlManifestationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlManifestationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlManifestationObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlManifestationObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlManifestationObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlManifestationObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlManifestationObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlManifestationObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlManifestationObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlManifestationObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlManifestationObject::setMapping(QObject *mapping)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setMapping(qmodelingobjectproperty_cast<QUmlOpaqueExpression *>(mapping));
}

// SLOTS FOR OWNED ATTRIBUTES [Manifestation]

void QUmlManifestationObject::setUtilizedElement(QObject *utilizedElement)
{
    qmodelingobjectproperty_cast<QUmlManifestation *>(this)->setUtilizedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(utilizedElement));
}

QT_END_NAMESPACE

