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
#include "qumlconnectorobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlConnector>
#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlConnectorObject::QUmlConnectorObject(QUmlConnector *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlConnectorObject::~QUmlConnectorObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlConnector *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectorObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConnectorObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConnectorObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlConnector *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnector *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConnectorObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlConnectorObject::name() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->name();
}

QObject *QUmlConnectorObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlConnector *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnector *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlConnectorObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlConnector *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnector *>(this)->namespace_()->asQModelingObject();
}

QString QUmlConnectorObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConnectorObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlConnectorObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->isLeaf();
}

const QSet<QObject *> QUmlConnectorObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConnectorObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlConnectorObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConnectorObject::isStatic() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->isStatic();
}

// OWNED ATTRIBUTES [Connector]

const QSet<QObject *> QUmlConnectorObject::contracts() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->contracts())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlConnectorObject::ends() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->ends())
        list.append(element->asQModelingObject());
    return list;
}

QtUml::ConnectorKind QUmlConnectorObject::kind() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->kind();
}

const QSet<QObject *> QUmlConnectorObject::redefinedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->redefinedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConnectorObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlConnector *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnector *>(this)->type()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectorObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConnectorObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConnectorObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlConnectorObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlConnector *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConnectorObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConnectorObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlConnectorObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlConnectorObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlConnector *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectorObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConnectorObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectorObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectorObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setName(name);
}

void QUmlConnectorObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConnectorObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConnectorObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setQualifiedName(qualifiedName);
}

void QUmlConnectorObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlConnectorObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setLeaf(isLeaf);
}

void QUmlConnectorObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlConnectorObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConnectorObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConnectorObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlConnectorObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlConnectorObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlConnectorObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlConnectorObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setStatic(isStatic);
}

void QUmlConnectorObject::unsetStatic()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [Connector]

void QUmlConnectorObject::addContract(QObject *contract)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addContract(qmodelingelementproperty_cast<QUmlBehavior *>(contract));
}

void QUmlConnectorObject::removeContract(QObject *contract)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeContract(qmodelingelementproperty_cast<QUmlBehavior *>(contract));
}

void QUmlConnectorObject::addEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlConnectorObject::removeEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlConnectorObject::setKind(QtUml::ConnectorKind kind)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setKind(kind);
}

void QUmlConnectorObject::addRedefinedConnector(QObject *redefinedConnector)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->addRedefinedConnector(qmodelingelementproperty_cast<QUmlConnector *>(redefinedConnector));
}

void QUmlConnectorObject::removeRedefinedConnector(QObject *redefinedConnector)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->removeRedefinedConnector(qmodelingelementproperty_cast<QUmlConnector *>(redefinedConnector));
}

void QUmlConnectorObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlConnector *>(this)->setType(qmodelingelementproperty_cast<QUmlAssociation *>(type));
}


void QUmlConnectorObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlFeature");
    d->groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("featuringClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStatic"))));

    d->propertyGroups << QStringLiteral("QUmlConnector");
    d->groupProperties.insert(QStringLiteral("QUmlConnector"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("contracts"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnector"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ends"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnector"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("kind"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnector"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedConnectors"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnector"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));
}

void QUmlConnectorObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, PropertyClassRole, QStringLiteral("QUmlConnector"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, DocumentationRole, QStringLiteral("The set of Behaviors that specify the valid interaction patterns across the connector."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, contracts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, PropertyClassRole, QStringLiteral("QUmlConnector"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, DocumentationRole, QStringLiteral("A connector consists of at least two connector ends, each representing the participation of instances of the classifiers typing the connectable elements attached to this end. The set of connector ends is ordered."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, ends, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, PropertyClassRole, QStringLiteral("QUmlConnector"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, DocumentationRole, QStringLiteral("Indicates the kind of connector. This is derived: a connector with one or more ends connected to a Port which is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, kind, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, PropertyClassRole, QStringLiteral("QUmlConnector"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, DocumentationRole, QStringLiteral("A connector may be redefined when its containing classifier is specialized. The redefining connector may have a type that specializes the type of the redefined connector. The types of the connector ends of the redefining connector may specialize the types of the connector ends of the redefined connector. The properties of the connector ends of the redefining connector may be replaced."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, redefinedConnectors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, PropertyClassRole, QStringLiteral("QUmlConnector"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, DocumentationRole, QStringLiteral("An optional association that specifies the link corresponding to this connector."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnector, type, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

