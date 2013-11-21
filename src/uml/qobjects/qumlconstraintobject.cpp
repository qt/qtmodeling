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
#include "qumlconstraintobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlConstraintObject::QUmlConstraintObject(QUmlConstraint *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConstraintObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlConstraint *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConstraintObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConstraint *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConstraintObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlConstraint *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConstraint *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlConstraintObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlConstraint *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConstraint *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlConstraintObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlConstraint *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConstraint *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConstraintObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlConstraint *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlConstraintObject::name() const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->name();
}

QObject *QUmlConstraintObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlConstraint *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConstraint *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlConstraintObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlConstraint *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConstraint *>(this)->namespace_()->asQModelingObject();
}

QString QUmlConstraintObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlConstraintObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->visibility();
}

// OWNED ATTRIBUTES [Constraint]

const QList<QObject *> QUmlConstraintObject::constrainedElements() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConstraint *>(this)->constrainedElements())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlConstraintObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlConstraint *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConstraint *>(this)->context()->asQModelingObject();
}

QObject *QUmlConstraintObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlConstraint *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConstraint *>(this)->specification()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConstraintObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConstraint *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConstraintObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlConstraintObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlConstraintObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConstraintObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlConstraint *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlConstraintObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlConstraint *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConstraintObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConstraintObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlConstraint *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConstraintObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlConstraintObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlConstraintObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlConstraintObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlConstraintObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlConstraintObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
    emit owningTemplateParameterChanged(this->owningTemplateParameter());
}

void QUmlConstraintObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
    emit templateParameterChanged(this->templateParameter());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConstraintObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlConstraintObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlConstraintObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlConstraintObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlConstraintObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlConstraintObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlConstraintObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QUmlConstraintObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtUml::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlConstraintObject::addConstrainedElement(QObject *constrainedElement)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->addConstrainedElement(qmodelingelementproperty_cast<QUmlElement *>(constrainedElement));
    emit constrainedElementsChanged(this->constrainedElements());
}

void QUmlConstraintObject::removeConstrainedElement(QObject *constrainedElement)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->removeConstrainedElement(qmodelingelementproperty_cast<QUmlElement *>(constrainedElement));
    emit constrainedElementsChanged(this->constrainedElements());
}

void QUmlConstraintObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setContext(qmodelingelementproperty_cast<QUmlNamespace *>(context));
    emit contextChanged(this->context());
}

void QUmlConstraintObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlConstraint *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlValueSpecification *>(specification));
    emit specificationChanged(this->specification());
}


void QUmlConstraintObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlConstraint");
    d->groupProperties.insert(QStringLiteral("QUmlConstraint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("constrainedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlConstraint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    d->groupProperties.insert(QStringLiteral("QUmlConstraint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));
}

void QUmlConstraintObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, PropertyClassRole, QStringLiteral("QUmlConstraint"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, PropertyTypeRole, QStringLiteral("QList<QUmlElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, DocumentationRole, QStringLiteral("The ordered set of Elements referenced by this Constraint."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, constrainedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, PropertyClassRole, QStringLiteral("QUmlConstraint"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, PropertyTypeRole, QStringLiteral("QUmlNamespace *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, context, OppositeEndRole, QStringLiteral("Namespace-ownedRule"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, PropertyClassRole, QStringLiteral("QUmlConstraint"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, PropertyTypeRole, QStringLiteral("QUmlValueSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, DocumentationRole, QStringLiteral("A condition that must be true when evaluated in order for the constraint to be satisfied."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConstraint, specification, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

