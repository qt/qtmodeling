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
#include "qumlinterfacerealizationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlInterfaceRealizationObject::QUmlInterfaceRealizationObject(QUmlInterfaceRealization *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlInterfaceRealizationObject::~QUmlInterfaceRealizationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInterfaceRealizationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceRealizationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInterfaceRealizationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInterfaceRealizationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlInterfaceRealizationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInterfaceRealizationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlInterfaceRealizationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->name();
}

QObject *QUmlInterfaceRealizationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlInterfaceRealizationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->namespace_()->asQModelingObject();
}

QString QUmlInterfaceRealizationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInterfaceRealizationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlInterfaceRealizationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlInterfaceRealizationObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceRealizationObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlInterfaceRealizationObject::clients() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->clients())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceRealizationObject::suppliers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->suppliers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlInterfaceRealizationObject::mapping() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->mapping())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->mapping()->asQModelingObject();
}

// OWNED ATTRIBUTES [InterfaceRealization]

QObject *QUmlInterfaceRealizationObject::contract() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->contract())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->contract()->asQModelingObject();
}

QObject *QUmlInterfaceRealizationObject::implementingClassifier() const
{
    if (!qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->implementingClassifier())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->implementingClassifier()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInterfaceRealizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInterfaceRealizationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlInterfaceRealizationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInterfaceRealizationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInterfaceRealizationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInterfaceRealizationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInterfaceRealizationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInterfaceRealizationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInterfaceRealizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterfaceRealizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterfaceRealizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterfaceRealizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterfaceRealizationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInterfaceRealizationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlInterfaceRealizationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInterfaceRealizationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterfaceRealizationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterfaceRealizationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setName(name);
}

void QUmlInterfaceRealizationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInterfaceRealizationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInterfaceRealizationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInterfaceRealizationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setVisibility(visibility);
}

void QUmlInterfaceRealizationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlInterfaceRealizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlInterfaceRealizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlInterfaceRealizationObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlInterfaceRealizationObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlInterfaceRealizationObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlInterfaceRealizationObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlInterfaceRealizationObject::addClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlInterfaceRealizationObject::removeClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlInterfaceRealizationObject::addSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->addSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlInterfaceRealizationObject::removeSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->removeSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlInterfaceRealizationObject::setMapping(QObject *mapping)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setMapping(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(mapping));
}

// SLOTS FOR OWNED ATTRIBUTES [InterfaceRealization]

void QUmlInterfaceRealizationObject::setContract(QObject *contract)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setContract(qmodelingelementproperty_cast<QUmlInterface *>(contract));
}

void QUmlInterfaceRealizationObject::setImplementingClassifier(QObject *implementingClassifier)
{
    qmodelingelementproperty_cast<QUmlInterfaceRealization *>(this)->setImplementingClassifier(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(implementingClassifier));
}


void QUmlInterfaceRealizationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInterfaceRealization");
    d->groupProperties.insert(QStringLiteral("QUmlInterfaceRealization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("contract"))));
    d->groupProperties.insert(QStringLiteral("QUmlInterfaceRealization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("implementingClassifier"))));
}

void QUmlInterfaceRealizationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, PropertyClassRole, QStringLiteral("QUmlInterfaceRealization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, DocumentationRole, QStringLiteral("References the Interface specifying the conformance contract."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, SubsettedPropertiesRole, QStringLiteral("Dependency-supplier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, contract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, PropertyClassRole, QStringLiteral("QUmlInterfaceRealization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, DocumentationRole, QStringLiteral("References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, SubsettedPropertiesRole, QStringLiteral("Element-owner Dependency-client"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterfaceRealization, implementingClassifier, OppositeEndRole, QStringLiteral("BehavioredClassifier-interfaceRealization"));

}

QT_END_NAMESPACE

