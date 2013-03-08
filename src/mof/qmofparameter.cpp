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

#include "qmofparameter.h"
#include "qmofparameter_p.h"

#include <QtMof/QMofValueSpecification>
#include <QtMof/QMofOperation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofParameterPrivate::QMofParameterPrivate() :
    direction(QtMof::ParameterDirectionIn),
    operation(0),
    defaultValue(0)
{
}

QMofParameterPrivate::~QMofParameterPrivate()
{
}

/*!
    \class QMofParameter

    \inmodule QtMof

    \brief A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.
 */

QMofParameter::QMofParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofParameterPrivate, wrapper, parent),
    _wrappedMofTypedElement(new QMofTypedElement(this)),
    _wrappedMofMultiplicityElement(new QMofMultiplicityElement(this))
{
    setPropertyData();
}

QMofParameter::QMofParameter(QMofParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMofTypedElement(new QMofTypedElement(this)),
    _wrappedMofMultiplicityElement(new QMofMultiplicityElement(this))
{
    setPropertyData();
}

QMofParameter::~QMofParameter()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofParameter::ownedElements() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofParameter::owner() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofParameter::ownedComments() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedComments();
}

void QMofParameter::addOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->addOwnedComment(ownedComment);
}

void QMofParameter::removeOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofParameter::name() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->name();
}

void QMofParameter::setName(QString name)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtMof::VisibilityKind QMofParameter::visibility() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->visibility();
}

void QMofParameter::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofParameter::qualifiedName() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofParameter::namespace_() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofTypedElement
// ---------------------------------------------------------------

/*!
    The type of the TypedElement.
 */
QMofType *QMofParameter::type() const
{
    return (qwrappedobject_cast<const QMofTypedElement *>(this))->type();
}

void QMofParameter::setType(QMofType *type)
{
    (qwrappedobject_cast<QMofTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QMofParameter::upper() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->upper();
}

void QMofParameter::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setUpper(upper);
}

void QMofParameter::unsetUpper()
{
    setUpper(1);
    Q_D(QMofParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QMofParameter::isUnique() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->isUnique();
}

void QMofParameter::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setUnique(isUnique);
}

void QMofParameter::unsetUnique()
{
    setUnique(true);
    Q_D(QMofParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QMofParameter::isOrdered() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->isOrdered();
}

void QMofParameter::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QMofParameter::unsetOrdered()
{
    setOrdered(false);
    Q_D(QMofParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QMofParameter::lower() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->lower();
}

void QMofParameter::setLower(qint32 lower)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QMofValueSpecification *QMofParameter::upperValue() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->upperValue();
}

void QMofParameter::setUpperValue(QMofValueSpecification *upperValue)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QMofValueSpecification *QMofParameter::lowerValue() const
{
    return (qwrappedobject_cast<const QMofMultiplicityElement *>(this))->lowerValue();
}

void QMofParameter::setLowerValue(QMofValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QMofMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofParameter
// ---------------------------------------------------------------

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QMofParameter::default_() const
{
    // This is a read-only derived attribute

    qWarning("QMofParameter::default_: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtMof::ParameterDirectionKind QMofParameter::direction() const
{
    // This is a read-write attribute

    Q_D(const QMofParameter);
    return d->direction;
}

void QMofParameter::setDirection(QtMof::ParameterDirectionKind direction)
{
    // This is a read-write attribute

    Q_D(QMofParameter);
    if (d->direction != direction) {
        d->direction = direction;
    }
    d->modifiedResettableProperties << QString::fromLatin1("direction");
}

void QMofParameter::unsetDirection()
{
    setDirection(QtMof::ParameterDirectionIn);
    Q_D(QMofParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("direction"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofParameter
// ---------------------------------------------------------------

/*!
    References the Operation owning this parameter.
 */
QMofOperation *QMofParameter::operation() const
{
    // This is a read-write association end

    Q_D(const QMofParameter);
    return d->operation;
}

void QMofParameter::setOperation(QMofOperation *operation)
{
    // This is a read-write association end

    Q_D(QMofParameter);
    if (d->operation != operation) {
        // Adjust opposite property
        if (d->operation)
            d->operation->removeOwnedParameter(this);

        d->operation = operation;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(operation));

        // Adjust opposite property
        if (operation)
            operation->addOwnedParameter(this);
    }
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QMofValueSpecification *QMofParameter::defaultValue() const
{
    // This is a read-write association end

    Q_D(const QMofParameter);
    return d->defaultValue;
}

void QMofParameter::setDefaultValue(QMofValueSpecification *defaultValue)
{
    // This is a read-write association end

    Q_D(QMofParameter);
    if (d->defaultValue != defaultValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(defaultValue));
        }
    }
}

void QMofParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("default_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("default_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("default_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a String that represents a value to be used when no argument is supplied for the Parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("default_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("default_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("default_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("direction")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("direction")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("direction")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether a parameter is being sent into or out of a behavioral element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("direction")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("direction")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("direction")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("operation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("operation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("operation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Operation owning this parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("operation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("operation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("operation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOperation::ownedParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofparameter.cpp"

