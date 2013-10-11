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
#include "qumlcomponentrealizationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlComponentRealization>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlComponent>
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

QUmlComponentRealizationObject::QUmlComponentRealizationObject(QUmlComponentRealization *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlComponentRealizationObject::~QUmlComponentRealizationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlComponentRealizationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlComponentRealizationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlComponentRealizationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlComponentRealizationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlComponentRealizationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlComponentRealizationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlComponentRealizationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->name();
}

QObject *QUmlComponentRealizationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlComponentRealizationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->namespace_()->asQModelingObject();
}

QString QUmlComponentRealizationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlComponentRealizationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlComponentRealizationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlComponentRealizationObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlComponentRealizationObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlComponentRealizationObject::clients() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->clients())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlComponentRealizationObject::suppliers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->suppliers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlComponentRealizationObject::mapping() const
{
    if (!qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->mapping())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->mapping()->asQModelingObject();
}

// OWNED ATTRIBUTES [ComponentRealization]

QObject *QUmlComponentRealizationObject::abstraction() const
{
    if (!qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->abstraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->abstraction()->asQModelingObject();
}

const QSet<QObject *> QUmlComponentRealizationObject::realizingClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->realizingClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlComponentRealizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlComponentRealizationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlComponentRealizationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlComponentRealizationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlComponentRealizationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlComponentRealizationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlComponentRealizationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlComponentRealizationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlComponentRealizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlComponentRealizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlComponentRealizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlComponentRealizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlComponentRealizationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlComponentRealizationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlComponentRealizationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlComponentRealizationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlComponentRealizationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlComponentRealizationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setName(name);
}

void QUmlComponentRealizationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlComponentRealizationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlComponentRealizationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlComponentRealizationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setVisibility(visibility);
}

void QUmlComponentRealizationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlComponentRealizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlComponentRealizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlComponentRealizationObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlComponentRealizationObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlComponentRealizationObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlComponentRealizationObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlComponentRealizationObject::addClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlComponentRealizationObject::removeClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlComponentRealizationObject::addSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlComponentRealizationObject::removeSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlComponentRealizationObject::setMapping(QObject *mapping)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setMapping(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(mapping));
}

// SLOTS FOR OWNED ATTRIBUTES [ComponentRealization]

void QUmlComponentRealizationObject::setAbstraction(QObject *abstraction)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->setAbstraction(qmodelingelementproperty_cast<QUmlComponent *>(abstraction));
}

void QUmlComponentRealizationObject::addRealizingClassifier(QObject *realizingClassifier)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->addRealizingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(realizingClassifier));
}

void QUmlComponentRealizationObject::removeRealizingClassifier(QObject *realizingClassifier)
{
    qmodelingelementproperty_cast<QUmlComponentRealization *>(this)->removeRealizingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(realizingClassifier));
}


void QUmlComponentRealizationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlComponentRealization");
    d->groupProperties.insert(QStringLiteral("QUmlComponentRealization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("abstraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlComponentRealization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("realizingClassifiers"))));
}

void QUmlComponentRealizationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, PropertyClassRole, QStringLiteral("QUmlComponentRealization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, DocumentationRole, QStringLiteral("The Component that owns this ComponentRealization and which is implemented by its realizing classifiers."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, SubsettedPropertiesRole, QStringLiteral("Dependency-supplier Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, abstraction, OppositeEndRole, QStringLiteral("Component-realization"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, PropertyClassRole, QStringLiteral("QUmlComponentRealization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, DocumentationRole, QStringLiteral("The classifiers that are involved in the implementation of the Component that owns this Realization."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, SubsettedPropertiesRole, QStringLiteral("Dependency-client"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlComponentRealization, realizingClassifiers, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

