/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

#include "qstructuralfeature.h"
#include "qstructuralfeature_p.h"

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QStructuralFeaturePrivate::QStructuralFeaturePrivate() :
    isReadOnly(false)
{
}

QStructuralFeaturePrivate::~QStructuralFeaturePrivate()
{
}

/*!
    \class QStructuralFeature

    \inmodule QtUml

    \brief A structural feature is a typed feature of a classifier that specifies the structure of instances of the classifier.By specializing multiplicity element, it supports a multiplicity that specifies valid cardinalities for the collection of values associated with an instantiation of the structural feature.
 */

QStructuralFeature::QStructuralFeature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QStructuralFeaturePrivate, wrapper, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedMultiplicityElement(new QMultiplicityElement(this)),
    _wrappedFeature(new QFeature(this))
{
    setPropertyData();
}

QStructuralFeature::QStructuralFeature(QStructuralFeaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedMultiplicityElement(new QMultiplicityElement(this)),
    _wrappedFeature(new QFeature(this))
{
    setPropertyData();
}

QStructuralFeature::~QStructuralFeature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QStructuralFeature::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QStructuralFeature::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QStructuralFeature::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QStructuralFeature::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QStructuralFeature::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QStructuralFeature::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QStructuralFeature::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QStructuralFeature::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QStructuralFeature::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QStructuralFeature::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QStructuralFeature::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QStructuralFeature::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QStructuralFeature::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QStructuralFeature::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QStructuralFeature::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QStructuralFeature::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QType *QStructuralFeature::type() const
{
    return (qwrappedobject_cast<const QTypedElement *>(this))->type();
}

void QStructuralFeature::setType(QType *type)
{
    (qwrappedobject_cast<QTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QStructuralFeature::upper() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->upper();
}

void QStructuralFeature::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUpper(upper);
}

void QStructuralFeature::unsetUpper()
{
    setUpper(1);
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QStructuralFeature::isUnique() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->isUnique();
}

void QStructuralFeature::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUnique(isUnique);
}

void QStructuralFeature::unsetUnique()
{
    setUnique(true);
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QStructuralFeature::isOrdered() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->isOrdered();
}

void QStructuralFeature::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QStructuralFeature::unsetOrdered()
{
    setOrdered(false);
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QStructuralFeature::lower() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->lower();
}

void QStructuralFeature::setLower(qint32 lower)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QStructuralFeature::upperValue() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->upperValue();
}

void QStructuralFeature::setUpperValue(QValueSpecification *upperValue)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QStructuralFeature::lowerValue() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->lowerValue();
}

void QStructuralFeature::setLowerValue(QValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QStructuralFeature::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QStructuralFeature::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QStructuralFeature::unsetLeaf()
{
    setLeaf(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QStructuralFeature::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QStructuralFeature::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QStructuralFeature::isStatic() const
{
    return (qwrappedobject_cast<const QFeature *>(this))->isStatic();
}

void QStructuralFeature::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QFeature *>(this))->setStatic(isStatic);
}

void QStructuralFeature::unsetStatic()
{
    setStatic(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QClassifier *> QStructuralFeature::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QStructuralFeature
// ---------------------------------------------------------------

/*!
    States whether the feature's value may be modified by a client.
 */
bool QStructuralFeature::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QStructuralFeature);
    return d->isReadOnly;
}

void QStructuralFeature::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QStructuralFeature);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
}

void QStructuralFeature::unsetReadOnly()
{
    setReadOnly(false);
}

void QStructuralFeature::registerMetaTypes() const
{
    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QStructuralFeature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("States whether the feature's value may be modified by a client.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qstructuralfeature.cpp"

QT_END_NAMESPACE_QTUML

