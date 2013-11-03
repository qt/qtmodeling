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
#include "qumlredefinabletemplatesignatureobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlRedefinableTemplateSignatureObject::QUmlRedefinableTemplateSignatureObject(QUmlRedefinableTemplateSignature *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlRedefinableTemplateSignatureObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [TemplateSignature]

const QList<QObject *> QUmlRedefinableTemplateSignatureObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlRedefinableTemplateSignatureObject::parameters() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->parameters())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlRedefinableTemplateSignatureObject::template_() const
{
    if (!qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->template_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->template_()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlRedefinableTemplateSignatureObject::name() const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->name();
}

QObject *QUmlRedefinableTemplateSignatureObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlRedefinableTemplateSignatureObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->namespace_()->asQModelingObject();
}

QString QUmlRedefinableTemplateSignatureObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRedefinableTemplateSignatureObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRedefinableTemplateSignatureObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableTemplateSignature]

QObject *QUmlRedefinableTemplateSignatureObject::classifier() const
{
    if (!qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->classifier())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->classifier()->asQModelingObject();
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::extendedSignatures() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableTemplateSignature *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->extendedSignatures())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::inheritedParameters() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateParameter *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->inheritedParameters())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRedefinableTemplateSignatureObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRedefinableTemplateSignatureObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRedefinableTemplateSignatureObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlRedefinableTemplateSignatureObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRedefinableTemplateSignatureObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRedefinableTemplateSignatureObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlRedefinableTemplateSignatureObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [RedefinableTemplateSignature]

bool QUmlRedefinableTemplateSignatureObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRedefinableTemplateSignatureObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlRedefinableTemplateSignatureObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlRedefinableTemplateSignatureObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateSignature]

void QUmlRedefinableTemplateSignatureObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(ownedParameter));
    emit ownedParametersChanged(this->ownedParameters());
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(ownedParameter));
    emit ownedParametersChanged(this->ownedParameters());
}

void QUmlRedefinableTemplateSignatureObject::addParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(parameter));
    emit parametersChanged(this->parameters());
}

void QUmlRedefinableTemplateSignatureObject::removeParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(parameter));
    emit parametersChanged(this->parameters());
}

void QUmlRedefinableTemplateSignatureObject::setTemplate(QObject *template_)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setTemplate(qmodelingelementproperty_cast<QUmlTemplateableElement *>(template_));
    emit templateChanged(this->template_());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRedefinableTemplateSignatureObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlRedefinableTemplateSignatureObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlRedefinableTemplateSignatureObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlRedefinableTemplateSignatureObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlRedefinableTemplateSignatureObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlRedefinableTemplateSignatureObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlRedefinableTemplateSignatureObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRedefinableTemplateSignatureObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlRedefinableTemplateSignatureObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlRedefinableTemplateSignatureObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlRedefinableTemplateSignatureObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlRedefinableTemplateSignatureObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlRedefinableTemplateSignatureObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableTemplateSignature]

void QUmlRedefinableTemplateSignatureObject::setClassifier(QObject *classifier)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(classifier));
    emit classifierChanged(this->classifier());
}

void QUmlRedefinableTemplateSignatureObject::addExtendedSignature(QObject *extendedSignature)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addExtendedSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(extendedSignature));
    emit extendedSignaturesChanged(this->extendedSignatures());
}

void QUmlRedefinableTemplateSignatureObject::removeExtendedSignature(QObject *extendedSignature)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeExtendedSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(extendedSignature));
    emit extendedSignaturesChanged(this->extendedSignatures());
}

void QUmlRedefinableTemplateSignatureObject::addInheritedParameter(QObject *inheritedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addInheritedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(inheritedParameter));
    emit inheritedParametersChanged(this->inheritedParameters());
}

void QUmlRedefinableTemplateSignatureObject::removeInheritedParameter(QObject *inheritedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeInheritedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(inheritedParameter));
    emit inheritedParametersChanged(this->inheritedParameters());
}


void QUmlRedefinableTemplateSignatureObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateSignature");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("template_"))));

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

    d->propertyGroups << QStringLiteral("QUmlRedefinableTemplateSignature");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifier"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extendedSignatures"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedParameters"))));
}

void QUmlRedefinableTemplateSignatureObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, PropertyClassRole, QStringLiteral("QUmlTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, DocumentationRole, QStringLiteral("The formal template parameters that are owned by this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, SubsettedPropertiesRole, QStringLiteral("TemplateSignature-parameter Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, OppositeEndRole, QStringLiteral("TemplateParameter-signature"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, PropertyClassRole, QStringLiteral("QUmlTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, DocumentationRole, QStringLiteral("The ordered set of all formal template parameters for this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, PropertyClassRole, QStringLiteral("QUmlTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, DocumentationRole, QStringLiteral("The element that owns this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, OppositeEndRole, QStringLiteral("TemplateableElement-ownedTemplateSignature"));

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

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, PropertyClassRole, QStringLiteral("QUmlRedefinableTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, DocumentationRole, QStringLiteral("The classifier that owns this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, RedefinedPropertiesRole, QStringLiteral("TemplateSignature-template"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, classifier, OppositeEndRole, QStringLiteral("Classifier-ownedTemplateSignature"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, PropertyClassRole, QStringLiteral("QUmlRedefinableTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, DocumentationRole, QStringLiteral("The template signature that is extended by this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, extendedSignatures, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, PropertyClassRole, QStringLiteral("QUmlRedefinableTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, DocumentationRole, QStringLiteral("The formal template parameters of the extendedSignature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, SubsettedPropertiesRole, QStringLiteral("TemplateSignature-parameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableTemplateSignature, inheritedParameters, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

