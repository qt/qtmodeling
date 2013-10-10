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
#include "qumldeploymentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployedArtifact>
#include <QtUml/QUmlDeploymentSpecification>
#include <QtUml/QUmlDeploymentTarget>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlDeploymentObject::QUmlDeploymentObject(QUmlDeployment *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlDeploymentObject::~QUmlDeploymentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlDeployment *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDeploymentObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDeploymentObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDeployment *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeployment *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDeploymentObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDeployment *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeployment *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlDeploymentObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDeployment *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeployment *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDeploymentObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDeploymentObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->name();
}

QObject *QUmlDeploymentObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDeployment *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeployment *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDeploymentObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDeployment *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeployment *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDeploymentObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDeploymentObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlDeploymentObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlDeploymentObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlDeploymentObject::clients() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->clients())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::suppliers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->suppliers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Deployment]

const QSet<QObject *> QUmlDeploymentObject::configurations() const
{
    QSet<QObject *> set;
    foreach (QUmlDeploymentSpecification *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->configurations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::deployedArtifacts() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployedArtifact *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->deployedArtifacts())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDeploymentObject::location() const
{
    if (!qmodelingelementproperty_cast<QUmlDeployment *>(this)->location())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDeployment *>(this)->location()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDeploymentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlDeploymentObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDeploymentObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDeploymentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDeploymentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDeployment *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDeploymentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDeploymentObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDeployment *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDeploymentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDeploymentObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDeploymentObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDeploymentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setName(name);
}

void QUmlDeploymentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDeploymentObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDeploymentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDeploymentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setVisibility(visibility);
}

void QUmlDeploymentObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlDeploymentObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlDeploymentObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlDeploymentObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlDeploymentObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlDeploymentObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlDeploymentObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlDeploymentObject::addClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlDeploymentObject::removeClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlDeploymentObject::addSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlDeploymentObject::removeSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Deployment]

void QUmlDeploymentObject::addConfiguration(QObject *configuration)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addConfiguration(qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(configuration));
}

void QUmlDeploymentObject::removeConfiguration(QObject *configuration)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeConfiguration(qmodelingelementproperty_cast<QUmlDeploymentSpecification *>(configuration));
}

void QUmlDeploymentObject::addDeployedArtifact(QObject *deployedArtifact)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->addDeployedArtifact(qmodelingelementproperty_cast<QUmlDeployedArtifact *>(deployedArtifact));
}

void QUmlDeploymentObject::removeDeployedArtifact(QObject *deployedArtifact)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->removeDeployedArtifact(qmodelingelementproperty_cast<QUmlDeployedArtifact *>(deployedArtifact));
}

void QUmlDeploymentObject::setLocation(QObject *location)
{
    qmodelingelementproperty_cast<QUmlDeployment *>(this)->setLocation(qmodelingelementproperty_cast<QUmlDeploymentTarget *>(location));
}


void QUmlDeploymentObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDeployment");
    d->groupProperties.insert(QStringLiteral("QUmlDeployment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("configurations"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeployment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployedArtifacts"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeployment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("location"))));
}

void QUmlDeploymentObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, PropertyClassRole, QStringLiteral("QUmlDeployment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, DocumentationRole, QStringLiteral("The specification of properties that parameterize the deployment and execution of one or more Artifacts."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, configurations, OppositeEndRole, QStringLiteral("DeploymentSpecification-deployment"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, PropertyClassRole, QStringLiteral("QUmlDeployment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, DocumentationRole, QStringLiteral("The Artifacts that are deployed onto a Node. This association specializes the supplier association."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, SubsettedPropertiesRole, QStringLiteral("Dependency-supplier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, deployedArtifacts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, PropertyClassRole, QStringLiteral("QUmlDeployment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, DocumentationRole, QStringLiteral("The DeployedTarget which is the target of a Deployment."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, SubsettedPropertiesRole, QStringLiteral("Element-owner Dependency-client"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeployment, location, OppositeEndRole, QStringLiteral("DeploymentTarget-deployment"));

}

QT_END_NAMESPACE

