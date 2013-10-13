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
#include "qumlenumerationliteralobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlEnumerationLiteral>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlEnumeration>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSlot>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlEnumerationLiteralObject::QUmlEnumerationLiteralObject(QUmlEnumerationLiteral *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlEnumerationLiteralObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationLiteralObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlEnumerationLiteralObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlEnumerationLiteralObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlEnumerationLiteralObject::name() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->name();
}

QObject *QUmlEnumerationLiteralObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlEnumerationLiteralObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->namespace_()->asQModelingObject();
}

QString QUmlEnumerationLiteralObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlEnumerationLiteralObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlEnumerationLiteralObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlEnumerationLiteralObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->visibility();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlEnumerationLiteralObject::deployedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->deployedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationLiteralObject::deployments() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->deployments())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [InstanceSpecification]

const QSet<QObject *> QUmlEnumerationLiteralObject::slots_() const
{
    QSet<QObject *> set;
    foreach (QUmlSlot *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->slots_())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlEnumerationLiteralObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [EnumerationLiteral]

QObject *QUmlEnumerationLiteralObject::classifier() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->classifier())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->classifier()->asQModelingObject();
}

QObject *QUmlEnumerationLiteralObject::enumeration() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->enumeration())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->enumeration()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlEnumerationLiteralObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlEnumerationLiteralObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlEnumerationLiteralObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlEnumerationLiteralObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlEnumerationLiteralObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlEnumerationLiteralObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlEnumerationLiteralObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlEnumerationLiteralObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlEnumerationLiteralObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationLiteralObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationLiteralObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationLiteralObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationLiteralObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlEnumerationLiteralObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationLiteralObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationLiteralObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setName(name);
}

void QUmlEnumerationLiteralObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlEnumerationLiteralObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlEnumerationLiteralObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlEnumerationLiteralObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlEnumerationLiteralObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlEnumerationLiteralObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setVisibility(visibility);
}

void QUmlEnumerationLiteralObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlEnumerationLiteralObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlEnumerationLiteralObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlEnumerationLiteralObject::addDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlEnumerationLiteralObject::removeDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [InstanceSpecification]

void QUmlEnumerationLiteralObject::addSlot(QObject *slot_)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addSlot(qmodelingelementproperty_cast<QUmlSlot *>(slot_));
}

void QUmlEnumerationLiteralObject::removeSlot(QObject *slot_)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeSlot(qmodelingelementproperty_cast<QUmlSlot *>(slot_));
}

void QUmlEnumerationLiteralObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlValueSpecification *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [EnumerationLiteral]

void QUmlEnumerationLiteralObject::setClassifier(QObject *classifier)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setClassifier(qmodelingelementproperty_cast<QUmlEnumeration *>(classifier));
}

void QUmlEnumerationLiteralObject::setEnumeration(QObject *enumeration)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setEnumeration(qmodelingelementproperty_cast<QUmlEnumeration *>(enumeration));
}


void QUmlEnumerationLiteralObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QUmlDeployedArtifact");

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlDeploymentTarget");
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployments"))));

    d->propertyGroups << QStringLiteral("QUmlInstanceSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlInstanceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("slots_"))));
    d->groupProperties.insert(QStringLiteral("QUmlInstanceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));

    d->propertyGroups << QStringLiteral("QUmlEnumerationLiteral");
    d->groupProperties.insert(QStringLiteral("QUmlEnumerationLiteral"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifier"))));
    d->groupProperties.insert(QStringLiteral("QUmlEnumerationLiteral"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enumeration"))));
}

void QUmlEnumerationLiteralObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, PropertyClassRole, QStringLiteral("QUmlDeploymentTarget"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, DocumentationRole, QStringLiteral("The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, PropertyClassRole, QStringLiteral("QUmlDeploymentTarget"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, DocumentationRole, QStringLiteral("The set of Deployments for a DeploymentTarget."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, OppositeEndRole, QStringLiteral("Deployment-location"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, PropertyClassRole, QStringLiteral("QUmlInstanceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, DocumentationRole, QStringLiteral("The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, classifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, PropertyClassRole, QStringLiteral("QUmlInstanceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, DocumentationRole, QStringLiteral("A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, slots_, OppositeEndRole, QStringLiteral("Slot-owningInstance"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, PropertyClassRole, QStringLiteral("QUmlInstanceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, DocumentationRole, QStringLiteral("A specification of how to compute, derive, or construct the instance."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInstanceSpecification, specification, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, PropertyClassRole, QStringLiteral("QUmlEnumerationLiteral"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, DocumentationRole, QStringLiteral("The classifier of this EnumerationLiteral derived to be equal to its enumeration."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, RedefinedPropertiesRole, QStringLiteral("InstanceSpecification-classifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, PropertyClassRole, QStringLiteral("QUmlEnumerationLiteral"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, DocumentationRole, QStringLiteral("The Enumeration that this EnumerationLiteral is a member of."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, OppositeEndRole, QStringLiteral("Enumeration-ownedLiteral"));

}

QT_END_NAMESPACE

