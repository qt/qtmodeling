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
#include "qumldurationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDuration>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlObservation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlDurationObject::QUmlDurationObject(QUmlDuration *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDurationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDurationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDurationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->name();
}

QObject *QUmlDurationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDurationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDurationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlDurationObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlDurationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->visibility();
}

// OWNED ATTRIBUTES [Duration]

QObject *QUmlDurationObject::expr() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->expr())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->expr()->asQModelingObject();
}

const QSet<QObject *> QUmlDurationObject::observations() const
{
    QSet<QObject *> set;
    foreach (QUmlObservation *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->observations())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDurationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlDurationObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->booleanValue();
}

int QUmlDurationObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->integerValue();
}

bool QUmlDurationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isComputable();
}

bool QUmlDurationObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isNull();
}

double QUmlDurationObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->realValue();
}

QString QUmlDurationObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->stringValue();
}

QString QUmlDurationObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlDurationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlDurationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlDurationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlDurationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlDurationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlDurationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlDurationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlDurationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlDurationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlDurationObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
    emit typeChanged(this->type());
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
    emit owningTemplateParameterChanged(this->owningTemplateParameter());
}

void QUmlDurationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
    emit templateParameterChanged(this->templateParameter());
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QUmlDurationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtUml::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Duration]

void QUmlDurationObject::setExpr(QObject *expr)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setExpr(qmodelingelementproperty_cast<QUmlValueSpecification *>(expr));
    emit exprChanged(this->expr());
}

void QUmlDurationObject::addObservation(QObject *observation)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addObservation(qmodelingelementproperty_cast<QUmlObservation *>(observation));
    emit observationsChanged(this->observations());
}

void QUmlDurationObject::removeObservation(QObject *observation)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeObservation(qmodelingelementproperty_cast<QUmlObservation *>(observation));
    emit observationsChanged(this->observations());
}


void QUmlDurationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTypedElement");
    d->groupProperties.insert(QStringLiteral("QUmlTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlValueSpecification");

    d->propertyGroups << QStringLiteral("QUmlDuration");
    d->groupProperties.insert(QStringLiteral("QUmlDuration"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("expr"))));
    d->groupProperties.insert(QStringLiteral("QUmlDuration"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("observations"))));
}

void QUmlDurationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyTypeRole, QStringLiteral("QSet<QUmlComment *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyTypeRole, QStringLiteral("QUmlElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyTypeRole, QStringLiteral("QSet<QUmlDependency *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyTypeRole, QStringLiteral("QUmlStringExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyTypeRole, QStringLiteral("QUmlNamespace *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, PropertyClassRole, QStringLiteral("QUmlTypedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, PropertyTypeRole, QStringLiteral("QUmlType *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.The type of the TypedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyTypeRole, QStringLiteral("QUmlTemplateParameter *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, DocumentationRole, QStringLiteral("The formal template parameter that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, SubsettedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-ownedParameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyTypeRole, QStringLiteral("QUmlTemplateParameter *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, PropertyClassRole, QStringLiteral("QUmlDuration"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, PropertyTypeRole, QStringLiteral("QUmlValueSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, DocumentationRole, QStringLiteral("The value of the Duration."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, PropertyClassRole, QStringLiteral("QUmlDuration"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, PropertyTypeRole, QStringLiteral("QSet<QUmlObservation *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, DocumentationRole, QStringLiteral("Refers to the time and duration observations that are involved in expr."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

