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
#include "qmofparameterobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofParameter>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofMultiplicityElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofOperation>
#include <QtMof/QMofType>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

QMofParameterObject::QMofParameterObject(QMofParameter *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofParameterObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofParameter *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofParameterObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofParameter *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofParameterObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofParameterObject::name() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->name();
}

QObject *QMofParameterObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->namespace_()->asQModelingObject();
}

QString QMofParameterObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->qualifiedName();
}

QtMof::VisibilityKind QMofParameterObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QMofParameterObject::type() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QMofParameterObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->isOrdered();
}

bool QMofParameterObject::isUnique() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->isUnique();
}

int QMofParameterObject::lower() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->lower();
}

QObject *QMofParameterObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->lowerValue()->asQModelingObject();
}

int QMofParameterObject::upper() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->upper();
}

QObject *QMofParameterObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [Parameter]

QString QMofParameterObject::default_() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->default_();
}

QObject *QMofParameterObject::defaultValue() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->defaultValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->defaultValue()->asQModelingObject();
}

QtMof::ParameterDirectionKind QMofParameterObject::direction() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->direction();
}

QObject *QMofParameterObject::operation() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->operation())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->operation()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QMofParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofParameter *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofParameterObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->mustBeOwned();
}

QObject *QMofParameterObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofParameterObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofParameter *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofParameter *>(this)->container()->asQModelingObject();
}

bool QMofParameterObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofParameterObject::delete_()
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofParameterObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofParameter *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofParameterObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofParameterObject::separator() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->separator();
}

// OPERATIONS [MultiplicityElement]

bool QMofParameterObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->includesCardinality(C);
}

bool QMofParameterObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QMofMultiplicityElement *>(M));
}

bool QMofParameterObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->isMultivalued();
}

int QMofParameterObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->lowerBound();
}

int QMofParameterObject::upperBound() const
{
    return qmodelingelementproperty_cast<QMofParameter *>(this)->upperBound();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofParameterObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofParameterObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setName(name);
}

void QMofParameterObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
}

void QMofParameterObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setQualifiedName(qualifiedName);
}

void QMofParameterObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QMofParameterObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setType(qmodelingelementproperty_cast<QMofType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QMofParameterObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setOrdered(isOrdered);
}

void QMofParameterObject::unsetOrdered()
{
    Q_D(QModelingObject);
    setOrdered(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isOrdered"));
}

void QMofParameterObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setUnique(isUnique);
}

void QMofParameterObject::unsetUnique()
{
    Q_D(QModelingObject);

    setUnique(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isUnique"));
}

void QMofParameterObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setLower(lower);
}

void QMofParameterObject::unsetLower()
{
    Q_D(QModelingObject);
    setLower(1);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QMofParameterObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setLowerValue(qmodelingelementproperty_cast<QMofValueSpecification *>(lowerValue));
}

void QMofParameterObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setUpper(upper);
}

void QMofParameterObject::unsetUpper()
{
    Q_D(QModelingObject);
    setUpper(1);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QMofParameterObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setUpperValue(qmodelingelementproperty_cast<QMofValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [Parameter]

void QMofParameterObject::setDefault(QString default_)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setDefault(default_);
}

void QMofParameterObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setDefaultValue(qmodelingelementproperty_cast<QMofValueSpecification *>(defaultValue));
}

void QMofParameterObject::setDirection(QtMof::ParameterDirectionKind direction)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setDirection(direction);
}

void QMofParameterObject::unsetDirection()
{
    Q_D(QModelingObject);
    setDirection(QtMof::ParameterDirectionKindIn);
    d->modifiedResettableProperties.removeAll(QStringLiteral("direction"));
}

void QMofParameterObject::setOperation(QObject *operation)
{
    qmodelingelementproperty_cast<QMofParameter *>(this)->setOperation(qmodelingelementproperty_cast<QMofOperation *>(operation));
}


void QMofParameterObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QMofTypedElement");
    d->groupProperties.insert(QStringLiteral("QMofTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QMofMultiplicityElement");
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lowerValue"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upperValue"))));

    d->propertyGroups << QStringLiteral("QMofParameter");
    d->groupProperties.insert(QStringLiteral("QMofParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("default_"))));
    d->groupProperties.insert(QStringLiteral("QMofParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("defaultValue"))));
    d->groupProperties.insert(QStringLiteral("QMofParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("direction"))));
    d->groupProperties.insert(QStringLiteral("QMofParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("operation"))));
}

void QMofParameterObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, PropertyClassRole, QStringLiteral("QMofTypedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, DocumentationRole, QStringLiteral("The type of the TypedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTypedElement, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, PropertyClassRole, QStringLiteral("QMofMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered."));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isOrdered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, PropertyClassRole, QStringLiteral("QMofMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique."));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, isUnique, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, PropertyClassRole, QStringLiteral("QMofMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, DocumentationRole, QStringLiteral("Specifies the lower bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, PropertyClassRole, QStringLiteral("QMofMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, DocumentationRole, QStringLiteral("The specification of the lower bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, lowerValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, PropertyClassRole, QStringLiteral("QMofMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, DocumentationRole, QStringLiteral("Specifies the upper bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upper, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, PropertyClassRole, QStringLiteral("QMofMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, DocumentationRole, QStringLiteral("The specification of the upper bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofMultiplicityElement, upperValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, PropertyClassRole, QStringLiteral("QMofParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, DocumentationRole, QStringLiteral("Specifies a String that represents a value to be used when no argument is supplied for the Parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, default_, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, PropertyClassRole, QStringLiteral("QMofParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, DocumentationRole, QStringLiteral("Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, defaultValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, PropertyClassRole, QStringLiteral("QMofParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, DocumentationRole, QStringLiteral("Indicates whether a parameter is being sent into or out of a behavioral element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, direction, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, PropertyClassRole, QStringLiteral("QMofParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, DocumentationRole, QStringLiteral("References the Operation owning this parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, SubsettedPropertiesRole, QStringLiteral("A_ownedParameter_ownerFormalParam-ownerFormalParam"));
    Q_DECLARE_METAPROPERTY_INFO(QMofParameter, operation, OppositeEndRole, QStringLiteral("Operation-ownedParameter"));

}

QT_END_NAMESPACE

