/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofopaqueexpressionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofOpaqueExpression>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

QMofOpaqueExpressionObject::QMofOpaqueExpressionObject(QMofOpaqueExpression *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofOpaqueExpressionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOpaqueExpressionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofOpaqueExpressionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofOpaqueExpressionObject::name() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->name();
}

QObject *QMofOpaqueExpressionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->namespace_()->asQModelingObject();
}

QString QMofOpaqueExpressionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtMof::VisibilityKind QMofOpaqueExpressionObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QMofOpaqueExpressionObject::type() const
{
    if (!qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [OpaqueExpression]

const QList<QString> QMofOpaqueExpressionObject::bodies() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->bodies();
}

const QList<QString> QMofOpaqueExpressionObject::languages() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->languages();
}

// OPERATIONS [Element]

QSet<QObject *> QMofOpaqueExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofOpaqueExpressionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->mustBeOwned();
}

QObject *QMofOpaqueExpressionObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofOpaqueExpressionObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->container()->asQModelingObject();
}

bool QMofOpaqueExpressionObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofOpaqueExpressionObject::delete_()
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofOpaqueExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofOpaqueExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofOpaqueExpressionObject::separator() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->separator();
}

// OPERATIONS [ValueSpecification]

bool QMofOpaqueExpressionObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->booleanValue();
}

int QMofOpaqueExpressionObject::integerValue() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->integerValue();
}

bool QMofOpaqueExpressionObject::isComputable() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->isComputable();
}

bool QMofOpaqueExpressionObject::isNull() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->isNull();
}

double QMofOpaqueExpressionObject::realValue()
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->realValue();
}

QString QMofOpaqueExpressionObject::stringValue() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->stringValue();
}

int QMofOpaqueExpressionObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->unlimitedValue();
}

// OPERATIONS [OpaqueExpression]

bool QMofOpaqueExpressionObject::isIntegral() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->isIntegral();
}

bool QMofOpaqueExpressionObject::isNonNegative() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->isNonNegative();
}

bool QMofOpaqueExpressionObject::isPositive() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->isPositive();
}

int QMofOpaqueExpressionObject::value() const
{
    return qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->value();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofOpaqueExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofOpaqueExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofOpaqueExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofOpaqueExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofOpaqueExpressionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofOpaqueExpressionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QMofOpaqueExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QMofOpaqueExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QMofOpaqueExpressionObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QMofOpaqueExpressionObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtMof::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QMofOpaqueExpressionObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->setType(qmodelingelementproperty_cast<QMofType *>(type));
    emit typeChanged(this->type());
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueExpression]

void QMofOpaqueExpressionObject::addBody(QString  body)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->addBody(body);
    emit bodiesChanged(this->bodies());
}

void QMofOpaqueExpressionObject::removeBody(QString  body)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->removeBody(body);
    emit bodiesChanged(this->bodies());
}

void QMofOpaqueExpressionObject::addLanguage(QString  language)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->addLanguage(language);
    emit languagesChanged(this->languages());
}

void QMofOpaqueExpressionObject::removeLanguage(QString  language)
{
    qmodelingelementproperty_cast<QMofOpaqueExpression *>(this)->removeLanguage(language);
    emit languagesChanged(this->languages());
}


void QMofOpaqueExpressionObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofElement");
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QMofNamedElement");
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QMofPackageableElement");
    d->groupProperties.insert(QStringLiteral("QMofPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QMofTypedElement");
    d->groupProperties.insert(QStringLiteral("QMofTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QMofValueSpecification");

    d->propertyGroups << QStringLiteral("QMofOpaqueExpression");
    d->groupProperties.insert(QStringLiteral("QMofOpaqueExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodies"))));
    d->groupProperties.insert(QStringLiteral("QMofOpaqueExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("languages"))));
}

void QMofOpaqueExpressionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("Element-owner A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, PropertyClassRole, QStringLiteral("QMofPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, PropertyClassRole, QStringLiteral("QMofTypedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, DocumentationRole, QStringLiteral("The type of the TypedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, PropertyClassRole, QStringLiteral("QMofOpaqueExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, DocumentationRole, QStringLiteral("The text of the expression, possibly in multiple languages."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, bodies, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, PropertyClassRole, QStringLiteral("QMofOpaqueExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, DocumentationRole, QStringLiteral("Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOpaqueExpression, languages, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

