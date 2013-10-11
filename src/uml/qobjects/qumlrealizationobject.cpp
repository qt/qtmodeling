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

QUmlRealizationObject::QUmlRealizationObject(QUmlRealization *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
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
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, DocumentationRole, QStringLiteral("The formal template parameter that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, SubsettedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-ownedParameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, PropertyClassRole, QStringLiteral("QUmlRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, DocumentationRole, QStringLiteral("Specifies the elements related by the Relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, PropertyClassRole, QStringLiteral("QUmlDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, DocumentationRole, QStringLiteral("Specifies the sources of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, PropertyClassRole, QStringLiteral("QUmlDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, DocumentationRole, QStringLiteral("Specifies the targets of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, PropertyClassRole, QStringLiteral("QUmlDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, DocumentationRole, QStringLiteral("The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, clients, OppositeEndRole, QStringLiteral("NamedElement-clientDependency"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, PropertyClassRole, QStringLiteral("QUmlDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, DocumentationRole, QStringLiteral("The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDependency, suppliers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, PropertyClassRole, QStringLiteral("QUmlAbstraction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, DocumentationRole, QStringLiteral("An composition of an Expression that states the abstraction relationship between the supplier and the client. In some cases, such as Derivation, it is usually formal and unidirectional; in other cases, such as Trace, it is usually informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship between the elements is not specified."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAbstraction, mapping, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

