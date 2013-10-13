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
#include "qmofpropertyobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofProperty>
#include <QtMof/QMofAssociation>
#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofDataType>
#include <QtMof/QMofElement>
#include <QtMof/QMofMultiplicityElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

QMofPropertyObject::QMofPropertyObject(QMofProperty *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofPropertyObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofProperty *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPropertyObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofProperty *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofPropertyObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofPropertyObject::name() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->name();
}

QObject *QMofPropertyObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->namespace_()->asQModelingObject();
}

QString QMofPropertyObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->qualifiedName();
}

QtMof::VisibilityKind QMofPropertyObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QMofPropertyObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isLeaf();
}

const QSet<QObject *> QMofPropertyObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QMofRedefinableElement *element, qmodelingelementproperty_cast<QMofProperty *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPropertyObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofProperty *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QMofPropertyObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofProperty *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofPropertyObject::isStatic() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isStatic();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QMofPropertyObject::type() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QMofPropertyObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isOrdered();
}

bool QMofPropertyObject::isUnique() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isUnique();
}

int QMofPropertyObject::lower() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->lower();
}

QObject *QMofPropertyObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->lowerValue()->asQModelingObject();
}

int QMofPropertyObject::upper() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->upper();
}

QObject *QMofPropertyObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [Property]

QtMof::AggregationKind QMofPropertyObject::aggregation() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->aggregation();
}

QObject *QMofPropertyObject::association() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->association())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->association()->asQModelingObject();
}

QObject *QMofPropertyObject::class_() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->class_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->class_()->asQModelingObject();
}

QObject *QMofPropertyObject::datatype() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->datatype())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->datatype()->asQModelingObject();
}

QString QMofPropertyObject::default_() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->default_();
}

QObject *QMofPropertyObject::defaultValue() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->defaultValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->defaultValue()->asQModelingObject();
}

bool QMofPropertyObject::isComposite() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isComposite();
}

bool QMofPropertyObject::isDerived() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isDerived();
}

bool QMofPropertyObject::isDerivedUnion() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isDerivedUnion();
}

bool QMofPropertyObject::isID() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isID();
}

bool QMofPropertyObject::isReadOnly() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isReadOnly();
}

QObject *QMofPropertyObject::opposite() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->opposite())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->opposite()->asQModelingObject();
}

QObject *QMofPropertyObject::owningAssociation() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->owningAssociation())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->owningAssociation()->asQModelingObject();
}

const QSet<QObject *> QMofPropertyObject::redefinedProperties() const
{
    QSet<QObject *> set;
    foreach (QMofProperty *element, qmodelingelementproperty_cast<QMofProperty *>(this)->redefinedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPropertyObject::subsettedProperties() const
{
    QSet<QObject *> set;
    foreach (QMofProperty *element, qmodelingelementproperty_cast<QMofProperty *>(this)->subsettedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QMofPropertyObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofProperty *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofPropertyObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->mustBeOwned();
}

QObject *QMofPropertyObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofPropertyObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofProperty *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofProperty *>(this)->container()->asQModelingObject();
}

bool QMofPropertyObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofPropertyObject::delete_()
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofPropertyObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofProperty *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofPropertyObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofPropertyObject::separator() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QMofPropertyObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefined));
}

// OPERATIONS [MultiplicityElement]

bool QMofPropertyObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->includesCardinality(C);
}

bool QMofPropertyObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QMofMultiplicityElement *>(M));
}

bool QMofPropertyObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isMultivalued();
}

int QMofPropertyObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->lowerBound();
}

int QMofPropertyObject::upperBound() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->upperBound();
}

// OPERATIONS [Property]

bool QMofPropertyObject::isAttribute(QObject *p) const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isAttribute(qmodelingelementproperty_cast<QMofProperty *>(p));
}

bool QMofPropertyObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isConsistentWith(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinee));
}

bool QMofPropertyObject::isNavigable() const
{
    return qmodelingelementproperty_cast<QMofProperty *>(this)->isNavigable();
}

QSet<QObject *> QMofPropertyObject::subsettingContext() const
{
    QSet<QObject *> set;
    foreach (QMofType *element, qmodelingelementproperty_cast<QMofProperty *>(this)->subsettingContext())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofPropertyObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofPropertyObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofPropertyObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofPropertyObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofPropertyObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofPropertyObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setName(name);
}

void QMofPropertyObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
}

void QMofPropertyObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setQualifiedName(qualifiedName);
}

void QMofPropertyObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QMofPropertyObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setLeaf(isLeaf);
}

void QMofPropertyObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QMofPropertyObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
}

void QMofPropertyObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
}

void QMofPropertyObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
}

void QMofPropertyObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QMofPropertyObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QMofClassifier *>(featuringClassifier));
}

void QMofPropertyObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QMofClassifier *>(featuringClassifier));
}

void QMofPropertyObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setStatic(isStatic);
}

void QMofPropertyObject::unsetStatic()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QMofPropertyObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setType(qmodelingelementproperty_cast<QMofType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QMofPropertyObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setOrdered(isOrdered);
}

void QMofPropertyObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QMofPropertyObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setUnique(isUnique);
}

void QMofPropertyObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QMofPropertyObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setLower(lower);
}

void QMofPropertyObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QMofPropertyObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setLowerValue(qmodelingelementproperty_cast<QMofValueSpecification *>(lowerValue));
}

void QMofPropertyObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setUpper(upper);
}

void QMofPropertyObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QMofPropertyObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setUpperValue(qmodelingelementproperty_cast<QMofValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QMofPropertyObject::setAggregation(QtMof::AggregationKind aggregation)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setAggregation(aggregation);
}

void QMofPropertyObject::unsetAggregation()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("aggregation"));
}

void QMofPropertyObject::setAssociation(QObject *association)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setAssociation(qmodelingelementproperty_cast<QMofAssociation *>(association));
}

void QMofPropertyObject::setClass(QObject *class_)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setClass(qmodelingelementproperty_cast<QMofClass *>(class_));
}

void QMofPropertyObject::setDatatype(QObject *datatype)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setDatatype(qmodelingelementproperty_cast<QMofDataType *>(datatype));
}

void QMofPropertyObject::setDefault(QString default_)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setDefault(default_);
}

void QMofPropertyObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setDefaultValue(qmodelingelementproperty_cast<QMofValueSpecification *>(defaultValue));
}

void QMofPropertyObject::setComposite(bool isComposite)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setComposite(isComposite);
}

void QMofPropertyObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setDerived(isDerived);
}

void QMofPropertyObject::unsetDerived()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derived"));
}

void QMofPropertyObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setDerivedUnion(isDerivedUnion);
}

void QMofPropertyObject::unsetDerivedUnion()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derivedUnion"));
}

void QMofPropertyObject::setID(bool isID)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setID(isID);
}

void QMofPropertyObject::unsetID()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("iD"));
}

void QMofPropertyObject::setReadOnly(bool isReadOnly)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setReadOnly(isReadOnly);
}

void QMofPropertyObject::unsetReadOnly()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("readOnly"));
}

void QMofPropertyObject::setOpposite(QObject *opposite)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setOpposite(qmodelingelementproperty_cast<QMofProperty *>(opposite));
}

void QMofPropertyObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->setOwningAssociation(qmodelingelementproperty_cast<QMofAssociation *>(owningAssociation));
}

void QMofPropertyObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->addRedefinedProperty(qmodelingelementproperty_cast<QMofProperty *>(redefinedProperty));
}

void QMofPropertyObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->removeRedefinedProperty(qmodelingelementproperty_cast<QMofProperty *>(redefinedProperty));
}

void QMofPropertyObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->addSubsettedProperty(qmodelingelementproperty_cast<QMofProperty *>(subsettedProperty));
}

void QMofPropertyObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QMofProperty *>(this)->removeSubsettedProperty(qmodelingelementproperty_cast<QMofProperty *>(subsettedProperty));
}


void QMofPropertyObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QMofFeature");
    d->groupProperties.insert(QStringLiteral("QMofFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("featuringClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QMofFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStatic"))));

    d->propertyGroups << QStringLiteral("QMofTypedElement");
    d->groupProperties.insert(QStringLiteral("QMofTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QMofMultiplicityElement");
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lowerValue"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
    d->groupProperties.insert(QStringLiteral("QMofMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upperValue"))));

    d->propertyGroups << QStringLiteral("QMofStructuralFeature");

    d->propertyGroups << QStringLiteral("QMofProperty");
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("aggregation"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("association"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("class_"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("datatype"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("default_"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("defaultValue"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isComposite"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDerived"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDerivedUnion"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isID"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReadOnly"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("opposite"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningAssociation"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedProperties"))));
    d->groupProperties.insert(QStringLiteral("QMofProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subsettedProperties"))));
}

void QMofPropertyObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QMofRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QMofRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QMofRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, PropertyClassRole, QStringLiteral("QMofFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, DocumentationRole, QStringLiteral("The Classifiers that have this Feature as a feature."));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, OppositeEndRole, QStringLiteral("Classifier-feature"));

    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, PropertyClassRole, QStringLiteral("QMofFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, DocumentationRole, QStringLiteral("Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true)."));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, OppositeEndRole, QStringLiteral(""));

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

    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, PropertyClassRole, QStringLiteral("QMofStructuralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, DocumentationRole, QStringLiteral("States whether the feature's value may be modified by a client."));
    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofStructuralFeature, isReadOnly, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, DocumentationRole, QStringLiteral("Specifies the kind of aggregation that applies to the Property."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, aggregation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, DocumentationRole, QStringLiteral("References the association of which this property is a member, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, association, OppositeEndRole, QStringLiteral("Association-memberEnd"));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, DocumentationRole, QStringLiteral("References the Class that owns the Property."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace A_attribute_classifier-classifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, class_, OppositeEndRole, QStringLiteral("Class-ownedAttribute"));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, DocumentationRole, QStringLiteral("The DataType that owns this Property."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace A_attribute_classifier-classifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, datatype, OppositeEndRole, QStringLiteral("DataType-ownedAttribute"));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, DocumentationRole, QStringLiteral("A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, default_, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, DocumentationRole, QStringLiteral("A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, defaultValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, DocumentationRole, QStringLiteral("This is a derived value, indicating whether the aggregation of the Property is composite or not."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isComposite, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, DocumentationRole, QStringLiteral("Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerived, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, DocumentationRole, QStringLiteral("Specifies whether the property is derived as the union of all of the properties that are constrained to subset it."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isDerivedUnion, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, DocumentationRole, QStringLiteral("True indicates this property can be used to uniquely identify an instance of the containing Class."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isID, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, DocumentationRole, QStringLiteral("If true, the attribute may only be read, and not written."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, RedefinedPropertiesRole, QStringLiteral("StructuralFeature-isReadOnly"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, isReadOnly, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, DocumentationRole, QStringLiteral("In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, opposite, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, DocumentationRole, QStringLiteral("References the owning association of this property, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace Property-association Feature-featuringClassifier RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, owningAssociation, OppositeEndRole, QStringLiteral("Association-ownedEnd"));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, DocumentationRole, QStringLiteral("References the properties that are redefined by this property."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, redefinedProperties, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, PropertyClassRole, QStringLiteral("QMofProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, DocumentationRole, QStringLiteral("References the properties of which this property is constrained to be a subset."));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofProperty, subsettedProperties, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

