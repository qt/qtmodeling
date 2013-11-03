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
#include "qmofinstancevalueobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofInstanceValue>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofInstanceSpecification>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

QMofInstanceValueObject::QMofInstanceValueObject(QMofInstanceValue *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofInstanceValueObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofInstanceValue *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofInstanceValueObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofInstanceValue *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofInstanceValueObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofInstanceValue *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofInstanceValueObject::name() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->name();
}

QObject *QMofInstanceValueObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofInstanceValue *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->namespace_()->asQModelingObject();
}

QString QMofInstanceValueObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtMof::VisibilityKind QMofInstanceValueObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QMofInstanceValueObject::type() const
{
    if (!qmodelingelementproperty_cast<QMofInstanceValue *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [InstanceValue]

QObject *QMofInstanceValueObject::instance() const
{
    if (!qmodelingelementproperty_cast<QMofInstanceValue *>(this)->instance())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->instance()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QMofInstanceValueObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofInstanceValue *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofInstanceValueObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->mustBeOwned();
}

QObject *QMofInstanceValueObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofInstanceValue *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofInstanceValueObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofInstanceValue *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->container()->asQModelingObject();
}

bool QMofInstanceValueObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofInstanceValueObject::delete_()
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofInstanceValueObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofInstanceValue *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofInstanceValueObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofInstanceValueObject::separator() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->separator();
}

// OPERATIONS [ValueSpecification]

bool QMofInstanceValueObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->booleanValue();
}

int QMofInstanceValueObject::integerValue() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->integerValue();
}

bool QMofInstanceValueObject::isComputable() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->isComputable();
}

bool QMofInstanceValueObject::isNull() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->isNull();
}

double QMofInstanceValueObject::realValue()
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->realValue();
}

QString QMofInstanceValueObject::stringValue() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->stringValue();
}

int QMofInstanceValueObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QMofInstanceValue *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofInstanceValueObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofInstanceValueObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofInstanceValueObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofInstanceValueObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofInstanceValueObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofInstanceValueObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QMofInstanceValueObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QMofInstanceValueObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QMofInstanceValueObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QMofInstanceValueObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtMof::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QMofInstanceValueObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->setType(qmodelingelementproperty_cast<QMofType *>(type));
    emit typeChanged(this->type());
}

// SLOTS FOR OWNED ATTRIBUTES [InstanceValue]

void QMofInstanceValueObject::setInstance(QObject *instance)
{
    qmodelingelementproperty_cast<QMofInstanceValue *>(this)->setInstance(qmodelingelementproperty_cast<QMofInstanceSpecification *>(instance));
    emit instanceChanged(this->instance());
}


void QMofInstanceValueObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofInstanceValue");
    d->groupProperties.insert(QStringLiteral("QMofInstanceValue"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("instance"))));
}

void QMofInstanceValueObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, PropertyClassRole, QStringLiteral("QMofInstanceValue"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, DocumentationRole, QStringLiteral("The instance that is the specified value."));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceValue, instance, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

