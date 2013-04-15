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
#include "qumlstructuralfeature.h"
#include "qumlstructuralfeature_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStructuralFeaturePrivate::QUmlStructuralFeaturePrivate() :
    isReadOnly(false)
{
}

QUmlStructuralFeaturePrivate::~QUmlStructuralFeaturePrivate()
{
}

/*!
    \class QUmlStructuralFeature

    \inmodule QtUml

    \brief A structural feature is a typed feature of a classifier that specifies the structure of instances of the classifier.By specializing multiplicity element, it supports a multiplicity that specifies valid cardinalities for the collection of values associated with an instantiation of the structural feature.
 */

QUmlStructuralFeature::QUmlStructuralFeature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlStructuralFeaturePrivate, wrapper, parent),
    _wrappedUmlTypedElement(new QUmlTypedElement(this)),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlFeature(new QUmlFeature(this))
{
    setPropertyData();
}

QUmlStructuralFeature::QUmlStructuralFeature(QUmlStructuralFeaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlTypedElement(new QUmlTypedElement(this)),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlFeature(new QUmlFeature(this))
{
    setPropertyData();
}

QUmlStructuralFeature::~QUmlStructuralFeature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlStructuralFeature::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlStructuralFeature::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlStructuralFeature::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlStructuralFeature::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlStructuralFeature::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlStructuralFeature::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlStructuralFeature::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlStructuralFeature::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlStructuralFeature::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlStructuralFeature::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlStructuralFeature::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlStructuralFeature::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlStructuralFeature::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlStructuralFeature::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlStructuralFeature::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlStructuralFeature::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlStructuralFeature::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlStructuralFeature::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QUmlStructuralFeature::upper() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upper();
}

void QUmlStructuralFeature::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpper(upper);
}

void QUmlStructuralFeature::unsetUpper()
{
    setUpper(1);
    Q_D(QUmlStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlStructuralFeature::isUnique() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isUnique();
}

void QUmlStructuralFeature::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUnique(isUnique);
}

void QUmlStructuralFeature::unsetUnique()
{
    setUnique(true);
    Q_D(QUmlStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlStructuralFeature::isOrdered() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isOrdered();
}

void QUmlStructuralFeature::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QUmlStructuralFeature::unsetOrdered()
{
    setOrdered(false);
    Q_D(QUmlStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QUmlStructuralFeature::lower() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lower();
}

void QUmlStructuralFeature::setLower(qint32 lower)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlStructuralFeature::upperValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upperValue();
}

void QUmlStructuralFeature::setUpperValue(QUmlValueSpecification *upperValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlStructuralFeature::lowerValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lowerValue();
}

void QUmlStructuralFeature::setLowerValue(QUmlValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlStructuralFeature::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlStructuralFeature::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlStructuralFeature::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlStructuralFeature::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlStructuralFeature::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlStructuralFeature::isStatic() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->isStatic();
}

void QUmlStructuralFeature::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QUmlFeature *>(this))->setStatic(isStatic);
}

void QUmlStructuralFeature::unsetStatic()
{
    setStatic(false);
    Q_D(QUmlStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QUmlClassifier *> QUmlStructuralFeature::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlStructuralFeature
// ---------------------------------------------------------------

/*!
    States whether the feature's value may be modified by a client.
 */
bool QUmlStructuralFeature::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QUmlStructuralFeature);
    return d->isReadOnly;
}

void QUmlStructuralFeature::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QUmlStructuralFeature);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReadOnly");
}

void QUmlStructuralFeature::unsetReadOnly()
{
    setReadOnly(false);
    Q_D(QUmlStructuralFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReadOnly"));
}

void QUmlStructuralFeature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("States whether the feature's value may be modified by a client.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeature")][QString::fromLatin1("isReadOnly")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstructuralfeature.cpp"

