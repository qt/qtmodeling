/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmofstructuralfeature.h"
#include "qmofstructuralfeature_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofStructuralFeaturePrivate::QMofStructuralFeaturePrivate() :
    isReadOnly(false)
{
}

QMofStructuralFeaturePrivate::~QMofStructuralFeaturePrivate()
{
}

/*!
    \class QMofStructuralFeature

    \inmodule QtMof

    \brief By specializing multiplicity element, it supports a multiplicity that specifies valid cardinalities for the collection of values associated with an instantiation of the structural feature.
 */

QMofStructuralFeature::QMofStructuralFeature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofStructuralFeaturePrivate, wrapper, parent),
    _wrappedMofFeature(new QMofFeature(this)),
    _wrappedMofTypedElement(new QMofTypedElement(this)),
    _wrappedMofMultiplicityElement(new QMofMultiplicityElement(this))
{
    setPropertyData();
}

QMofStructuralFeature::QMofStructuralFeature(QMofStructuralFeaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMofFeature(new QMofFeature(this)),
    _wrappedMofTypedElement(new QMofTypedElement(this)),
    _wrappedMofMultiplicityElement(new QMofMultiplicityElement(this))
{
    setPropertyData();
}

QMofStructuralFeature::~QMofStructuralFeature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofStructuralFeature::ownedElements() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofStructuralFeature::owner() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofStructuralFeature::ownedComments() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedComments();
}

void QMofStructuralFeature::addOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->addOwnedComment(ownedComment);
}

void QMofStructuralFeature::removeOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofStructuralFeature::name() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->name();
}

void QMofStructuralFeature::setName(QString name)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtMof::VisibilityKind QMofStructuralFeature::visibility() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->visibility();
}

void QMofStructuralFeature::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofStructuralFeature::qualifiedName() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofStructuralFeature::namespace_() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QMofStructuralFeature::isLeaf() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->isLeaf();
}

void QMofStructuralFeature::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QMofRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QMofStructuralFeature::unsetLeaf()
{
    setLeaf(false);
    Q_D(QMofStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QMofRedefinableElement *> QMofStructuralFeature::redefinedElements() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QMofClassifier *> QMofStructuralFeature::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QMofRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QMofStructuralFeature::isStatic() const
{
    return (qwrappedobject_cast<const QMofFeature *>(this))->isStatic();
}

void QMofStructuralFeature::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QMofFeature *>(this))->setStatic(isStatic);
}

void QMofStructuralFeature::unsetStatic()
{
    setStatic(false);
    Q_D(QMofStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QMofClassifier *> QMofStructuralFeature::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QMofFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofTypedElement
// ---------------------------------------------------------------

/*!
    The type of the TypedElement.
 */
QMofType *QMofStructuralFeature::type() const
{
    return (qwrappedobject_cast<const QMofTypedElement *>(this))->type();
}

void QMofStructuralFeature::setType(QMofType *type)
{
    (qwrappedobject_cast<QMofTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QMofStructuralFeature::upper() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->upper();
}

void QMofStructuralFeature::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setUpper(upper);
}

void QMofStructuralFeature::unsetUpper()
{
    setUpper(1);
    Q_D(QMofStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QMofStructuralFeature::isUnique() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->isUnique();
}

void QMofStructuralFeature::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setUnique(isUnique);
}

void QMofStructuralFeature::unsetUnique()
{
    setUnique(true);
    Q_D(QMofStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QMofStructuralFeature::isOrdered() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->isOrdered();
}

void QMofStructuralFeature::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QMofStructuralFeature::unsetOrdered()
{
    setOrdered(false);
    Q_D(QMofStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QMofStructuralFeature::lower() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->lower();
}

void QMofStructuralFeature::setLower(qint32 lower)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QMofValueSpecification *QMofStructuralFeature::upperValue() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->upperValue();
}

void QMofStructuralFeature::setUpperValue(QMofValueSpecification *upperValue)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QMofValueSpecification *QMofStructuralFeature::lowerValue() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->lowerValue();
}

void QMofStructuralFeature::setLowerValue(QMofValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofStructuralFeature
// ---------------------------------------------------------------

/*!
    States whether the feature's value may be modified by a client.
 */
bool QMofStructuralFeature::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QMofStructuralFeature);
    return d->isReadOnly;
}

void QMofStructuralFeature::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QMofStructuralFeature);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReadOnly");
}

void QMofStructuralFeature::unsetReadOnly()
{
    setReadOnly(false);
    Q_D(QMofStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReadOnly"));
}

void QMofStructuralFeature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("States whether the feature's value may be modified by a client.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofstructuralfeature.cpp"

