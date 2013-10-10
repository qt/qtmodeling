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
#include "private/qmodelingobject_p.h"

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

QUmlRealizationObject::QUmlRealizationObject(QUmlRealization *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlRealizationObject::~QUmlRealizationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlRealization *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRealizationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRealizationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlRealizationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlRealization *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRealization *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlRealizationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlRealization *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRealization *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlRealizationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlRealization *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRealization *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRealizationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlRealizationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->name();
}

QObject *QUmlRealizationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlRealization *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRealization *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlRealizationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlRealization *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRealization *>(this)->namespace_()->asQModelingObject();
}

QString QUmlRealizationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlRealizationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlRealizationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlRealizationObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRealizationObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlRealizationObject::clients() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->clients())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRealizationObject::suppliers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->suppliers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlRealizationObject::mapping() const
{
    if (!qmodelingelementproperty_cast<QUmlRealization *>(this)->mapping())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRealization *>(this)->mapping()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRealizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRealizationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlRealizationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlRealizationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRealizationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlRealizationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlRealization *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRealizationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRealizationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlRealization *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRealizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRealizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRealizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRealizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRealizationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlRealizationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlRealizationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRealizationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRealizationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRealizationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setName(name);
}

void QUmlRealizationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRealizationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRealizationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlRealizationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setVisibility(visibility);
}

void QUmlRealizationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlRealizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlRealizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlRealizationObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlRealizationObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlRealizationObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlRealizationObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlRealizationObject::addClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlRealizationObject::removeClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlRealizationObject::addSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->addSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlRealizationObject::removeSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->removeSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlRealizationObject::setMapping(QObject *mapping)
{
    qmodelingelementproperty_cast<QUmlRealization *>(this)->setMapping(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(mapping));
}


void QUmlRealizationObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlDirectedRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));

    d->propertyGroups << QStringLiteral("QUmlDependency");
    d->groupProperties.insert(QStringLiteral("QUmlDependency"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clients"))));
    d->groupProperties.insert(QStringLiteral("QUmlDependency"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("suppliers"))));

    d->propertyGroups << QStringLiteral("QUmlAbstraction");
    d->groupProperties.insert(QStringLiteral("QUmlAbstraction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("mapping"))));

    d->propertyGroups << QStringLiteral("QUmlRealization");
}

void QUmlRealizationObject::setPropertyData()
{
}

QT_END_NAMESPACE

