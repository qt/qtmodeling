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
#include "qmofliteralunlimitednaturalobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofLiteralUnlimitedNatural>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

QMofLiteralUnlimitedNaturalObject::QMofLiteralUnlimitedNaturalObject(QMofLiteralUnlimitedNatural *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofLiteralUnlimitedNaturalObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofLiteralUnlimitedNaturalObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofLiteralUnlimitedNaturalObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofLiteralUnlimitedNaturalObject::name() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->name();
}

QObject *QMofLiteralUnlimitedNaturalObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->namespace_()->asQModelingObject();
}

QString QMofLiteralUnlimitedNaturalObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtMof::VisibilityKind QMofLiteralUnlimitedNaturalObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QMofLiteralUnlimitedNaturalObject::type() const
{
    if (!qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [LiteralUnlimitedNatural]

QString QMofLiteralUnlimitedNaturalObject::value() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QMofLiteralUnlimitedNaturalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofLiteralUnlimitedNaturalObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->mustBeOwned();
}

QObject *QMofLiteralUnlimitedNaturalObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofLiteralUnlimitedNaturalObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->container()->asQModelingObject();
}

bool QMofLiteralUnlimitedNaturalObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofLiteralUnlimitedNaturalObject::delete_()
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofLiteralUnlimitedNaturalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofLiteralUnlimitedNaturalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofLiteralUnlimitedNaturalObject::separator() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->separator();
}

// OPERATIONS [ValueSpecification]

bool QMofLiteralUnlimitedNaturalObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->booleanValue();
}

int QMofLiteralUnlimitedNaturalObject::integerValue() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->integerValue();
}

bool QMofLiteralUnlimitedNaturalObject::isNull() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->isNull();
}

double QMofLiteralUnlimitedNaturalObject::realValue()
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->realValue();
}

QString QMofLiteralUnlimitedNaturalObject::stringValue() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->stringValue();
}

// OPERATIONS [LiteralUnlimitedNatural]

bool QMofLiteralUnlimitedNaturalObject::isComputable() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->isComputable();
}

QString QMofLiteralUnlimitedNaturalObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofLiteralUnlimitedNaturalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofLiteralUnlimitedNaturalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofLiteralUnlimitedNaturalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofLiteralUnlimitedNaturalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofLiteralUnlimitedNaturalObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofLiteralUnlimitedNaturalObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QMofLiteralUnlimitedNaturalObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QMofLiteralUnlimitedNaturalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QMofLiteralUnlimitedNaturalObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QMofLiteralUnlimitedNaturalObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtMof::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QMofLiteralUnlimitedNaturalObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->setType(qmodelingelementproperty_cast<QMofType *>(type));
    emit typeChanged(this->type());
}

// SLOTS FOR OWNED ATTRIBUTES [LiteralUnlimitedNatural]

void QMofLiteralUnlimitedNaturalObject::setValue(QString value)
{
    qmodelingelementproperty_cast<QMofLiteralUnlimitedNatural *>(this)->setValue(value);
    emit valueChanged(this->value());
}

void QMofLiteralUnlimitedNaturalObject::unsetValue()
{
    Q_D(QModelingObject);
    setValue(QStringLiteral(""));
    d->modifiedResettableProperties.removeAll(QStringLiteral("value"));
}


void QMofLiteralUnlimitedNaturalObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofLiteralSpecification");

    d->propertyGroups << QStringLiteral("QMofLiteralUnlimitedNatural");
    d->groupProperties.insert(QStringLiteral("QMofLiteralUnlimitedNatural"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QMofLiteralUnlimitedNaturalObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, PropertyClassRole, QStringLiteral("QMofLiteralUnlimitedNatural"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, DocumentationRole, QStringLiteral("The specified UnlimitedNatural value."));
    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLiteralUnlimitedNatural, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

