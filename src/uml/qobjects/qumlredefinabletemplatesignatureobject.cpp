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

QUmlRedefinableTemplateSignatureObject::QUmlRedefinableTemplateSignatureObject(QUmlRedefinableTemplateSignature *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlRedefinableTemplateSignatureObject::~QUmlRedefinableTemplateSignatureObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
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
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRedefinableTemplateSignatureObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRedefinableTemplateSignatureObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateSignature]

void QUmlRedefinableTemplateSignatureObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlRedefinableTemplateSignatureObject::addParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlRedefinableTemplateSignatureObject::removeParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlRedefinableTemplateSignatureObject::setTemplate(QObject *template_)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setTemplate(qmodelingelementproperty_cast<QUmlTemplateableElement *>(template_));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRedefinableTemplateSignatureObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRedefinableTemplateSignatureObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRedefinableTemplateSignatureObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setName(name);
}

void QUmlRedefinableTemplateSignatureObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRedefinableTemplateSignatureObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRedefinableTemplateSignatureObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setQualifiedName(qualifiedName);
}

void QUmlRedefinableTemplateSignatureObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRedefinableTemplateSignatureObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setLeaf(isLeaf);
}

void QUmlRedefinableTemplateSignatureObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlRedefinableTemplateSignatureObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRedefinableTemplateSignatureObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRedefinableTemplateSignatureObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRedefinableTemplateSignatureObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableTemplateSignature]

void QUmlRedefinableTemplateSignatureObject::setClassifier(QObject *classifier)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(classifier));
}

void QUmlRedefinableTemplateSignatureObject::addExtendedSignature(QObject *extendedSignature)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addExtendedSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(extendedSignature));
}

void QUmlRedefinableTemplateSignatureObject::removeExtendedSignature(QObject *extendedSignature)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeExtendedSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(extendedSignature));
}

void QUmlRedefinableTemplateSignatureObject::addInheritedParameter(QObject *inheritedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addInheritedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(inheritedParameter));
}

void QUmlRedefinableTemplateSignatureObject::removeInheritedParameter(QObject *inheritedParameter)
{
    qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeInheritedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(inheritedParameter));
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

