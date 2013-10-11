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
#include "qumlinformationflowobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInformationFlow>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlRelationship>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlInformationFlowObject::QUmlInformationFlowObject(QUmlInformationFlow *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlInformationFlowObject::~QUmlInformationFlowObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInformationFlowObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInformationFlowObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlInformationFlowObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlInformationFlowObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInformationFlowObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlInformationFlowObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInformationFlowObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlInformationFlowObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->name();
}

QObject *QUmlInformationFlowObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlInformationFlowObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->namespace_()->asQModelingObject();
}

QString QUmlInformationFlowObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInformationFlowObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->visibility();
}

// OWNED ATTRIBUTES [InformationFlow]

const QSet<QObject *> QUmlInformationFlowObject::conveyed() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->conveyed())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::informationSources() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->informationSources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::informationTargets() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->informationTargets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realizations() const
{
    QSet<QObject *> set;
    foreach (QUmlRelationship *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->realizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realizingActivityEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->realizingActivityEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realizingConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->realizingConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realizingMessages() const
{
    QSet<QObject *> set;
    foreach (QUmlMessage *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->realizingMessages())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInformationFlowObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInformationFlowObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlInformationFlowObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInformationFlowObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInformationFlowObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInformationFlowObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInformationFlowObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInformationFlowObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInformationFlowObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInformationFlowObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInformationFlowObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInformationFlowObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInformationFlowObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlInformationFlowObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlInformationFlowObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlInformationFlowObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlInformationFlowObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlInformationFlowObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlInformationFlowObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInformationFlowObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlInformationFlowObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInformationFlowObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInformationFlowObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInformationFlowObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setName(name);
}

void QUmlInformationFlowObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInformationFlowObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInformationFlowObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInformationFlowObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->setVisibility(visibility);
}

void QUmlInformationFlowObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [InformationFlow]

void QUmlInformationFlowObject::addConveyed(QObject *conveyed)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addConveyed(qmodelingelementproperty_cast<QUmlClassifier *>(conveyed));
}

void QUmlInformationFlowObject::removeConveyed(QObject *conveyed)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeConveyed(qmodelingelementproperty_cast<QUmlClassifier *>(conveyed));
}

void QUmlInformationFlowObject::addInformationSource(QObject *informationSource)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addInformationSource(qmodelingelementproperty_cast<QUmlNamedElement *>(informationSource));
}

void QUmlInformationFlowObject::removeInformationSource(QObject *informationSource)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeInformationSource(qmodelingelementproperty_cast<QUmlNamedElement *>(informationSource));
}

void QUmlInformationFlowObject::addInformationTarget(QObject *informationTarget)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addInformationTarget(qmodelingelementproperty_cast<QUmlNamedElement *>(informationTarget));
}

void QUmlInformationFlowObject::removeInformationTarget(QObject *informationTarget)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeInformationTarget(qmodelingelementproperty_cast<QUmlNamedElement *>(informationTarget));
}

void QUmlInformationFlowObject::addRealization(QObject *realization)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addRealization(qmodelingelementproperty_cast<QUmlRelationship *>(realization));
}

void QUmlInformationFlowObject::removeRealization(QObject *realization)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeRealization(qmodelingelementproperty_cast<QUmlRelationship *>(realization));
}

void QUmlInformationFlowObject::addRealizingActivityEdge(QObject *realizingActivityEdge)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addRealizingActivityEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(realizingActivityEdge));
}

void QUmlInformationFlowObject::removeRealizingActivityEdge(QObject *realizingActivityEdge)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeRealizingActivityEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(realizingActivityEdge));
}

void QUmlInformationFlowObject::addRealizingConnector(QObject *realizingConnector)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addRealizingConnector(qmodelingelementproperty_cast<QUmlConnector *>(realizingConnector));
}

void QUmlInformationFlowObject::removeRealizingConnector(QObject *realizingConnector)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeRealizingConnector(qmodelingelementproperty_cast<QUmlConnector *>(realizingConnector));
}

void QUmlInformationFlowObject::addRealizingMessage(QObject *realizingMessage)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->addRealizingMessage(qmodelingelementproperty_cast<QUmlMessage *>(realizingMessage));
}

void QUmlInformationFlowObject::removeRealizingMessage(QObject *realizingMessage)
{
    qmodelingelementproperty_cast<QUmlInformationFlow *>(this)->removeRealizingMessage(qmodelingelementproperty_cast<QUmlMessage *>(realizingMessage));
}


void QUmlInformationFlowObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlDirectedRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));

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

    d->propertyGroups << QStringLiteral("QUmlInformationFlow");
    d->groupProperties.insert(QStringLiteral("QUmlInformationFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("conveyed"))));
    d->groupProperties.insert(QStringLiteral("QUmlInformationFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("informationSources"))));
    d->groupProperties.insert(QStringLiteral("QUmlInformationFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("informationTargets"))));
    d->groupProperties.insert(QStringLiteral("QUmlInformationFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("realizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlInformationFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("realizingActivityEdges"))));
    d->groupProperties.insert(QStringLiteral("QUmlInformationFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("realizingConnectors"))));
    d->groupProperties.insert(QStringLiteral("QUmlInformationFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("realizingMessages"))));
}

void QUmlInformationFlowObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, PropertyClassRole, QStringLiteral("QUmlInformationFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, DocumentationRole, QStringLiteral("Specifies the information items that may circulate on this information flow."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, conveyed, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, PropertyClassRole, QStringLiteral("QUmlInformationFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, DocumentationRole, QStringLiteral("Defines from which source the conveyed InformationItems are initiated."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationSources, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, PropertyClassRole, QStringLiteral("QUmlInformationFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, DocumentationRole, QStringLiteral("Defines to which target the conveyed InformationItems are directed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, informationTargets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, PropertyClassRole, QStringLiteral("QUmlInformationFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, DocumentationRole, QStringLiteral("Determines which Relationship will realize the specified flow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizations, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, PropertyClassRole, QStringLiteral("QUmlInformationFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, DocumentationRole, QStringLiteral("Determines which ActivityEdges will realize the specified flow."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingActivityEdges, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, PropertyClassRole, QStringLiteral("QUmlInformationFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, DocumentationRole, QStringLiteral("Determines which Connectors will realize the specified flow."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingConnectors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, PropertyClassRole, QStringLiteral("QUmlInformationFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, DocumentationRole, QStringLiteral("Determines which Messages will realize the specified flow."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInformationFlow, realizingMessages, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

