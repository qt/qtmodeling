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
#include "private/qmodelingobject_p.h"

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

QUmlManifestationObject::QUmlManifestationObject(QUmlManifestation *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlManifestationObject::~QUmlManifestationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlManifestation *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlManifestationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlManifestationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlManifestationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlManifestation *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlManifestation *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlManifestationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlManifestation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlManifestation *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlManifestationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlManifestation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlManifestation *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlManifestationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlManifestationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->name();
}

QObject *QUmlManifestationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlManifestation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlManifestation *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlManifestationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlManifestation *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlManifestation *>(this)->namespace_()->asQModelingObject();
}

QString QUmlManifestationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlManifestationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlManifestationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlManifestationObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlManifestationObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlManifestationObject::clients() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->clients())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlManifestationObject::suppliers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->suppliers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlManifestationObject::mapping() const
{
    if (!qmodelingelementproperty_cast<QUmlManifestation *>(this)->mapping())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlManifestation *>(this)->mapping()->asQModelingObject();
}

// OWNED ATTRIBUTES [Manifestation]

QObject *QUmlManifestationObject::utilizedElement() const
{
    if (!qmodelingelementproperty_cast<QUmlManifestation *>(this)->utilizedElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlManifestation *>(this)->utilizedElement()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlManifestationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlManifestationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlManifestationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlManifestationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlManifestationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlManifestationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlManifestation *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlManifestationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlManifestationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlManifestation *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlManifestationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlManifestationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlManifestationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlManifestationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlManifestationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlManifestationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlManifestationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlManifestationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlManifestationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlManifestationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setName(name);
}

void QUmlManifestationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlManifestationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlManifestationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlManifestationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setVisibility(visibility);
}

void QUmlManifestationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlManifestationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlManifestationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlManifestationObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlManifestationObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlManifestationObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlManifestationObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlManifestationObject::addClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlManifestationObject::removeClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlManifestationObject::addSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->addSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlManifestationObject::removeSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->removeSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlManifestationObject::setMapping(QObject *mapping)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setMapping(qmodelingelementproperty_cast<QUmlOpaqueExpression *>(mapping));
}

// SLOTS FOR OWNED ATTRIBUTES [Manifestation]

void QUmlManifestationObject::setUtilizedElement(QObject *utilizedElement)
{
    qmodelingelementproperty_cast<QUmlManifestation *>(this)->setUtilizedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(utilizedElement));
}


void QUmlManifestationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlManifestation");
    d->groupProperties.insert(QStringLiteral("QUmlManifestation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("utilizedElement"))));
}

void QUmlManifestationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, PropertyClassRole, QStringLiteral("QUmlManifestation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, DocumentationRole, QStringLiteral("The model element that is utilized in the manifestation in an Artifact."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, SubsettedPropertiesRole, QStringLiteral("Dependency-supplier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlManifestation, utilizedElement, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

