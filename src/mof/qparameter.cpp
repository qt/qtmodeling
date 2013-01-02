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

#include "qparameter.h"
#include "qparameter_p.h"

#include <QtMof/QValueSpecification>
#include <QtMof/QOperation>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QParameterPrivate::QParameterPrivate() :
    direction(QtMof::ParameterDirectionIn),
    operation(0),
    defaultValue(0)
{
}

QParameterPrivate::~QParameterPrivate()
{
}

/*!
    \class QParameter

    \inmodule QtMof

    \brief A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.
 */

QParameter::QParameter(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QParameterPrivate, parent, wrapper),
    _wrappedTypedElement(new QTypedElement(this, this)),
    _wrappedMultiplicityElement(new QMultiplicityElement(this, this))
{
    setPropertyData();
}

QParameter::QParameter(QParameterPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedTypedElement(new QTypedElement(this, this)),
    _wrappedMultiplicityElement(new QMultiplicityElement(this, this))
{
    setPropertyData();
}

QParameter::~QParameter()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QParameter::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QParameter::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QParameter::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QParameter::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QParameter::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QParameter::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QParameter::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtMof::VisibilityKind QParameter::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QParameter::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QParameter::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QParameter::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    The type of the TypedElement.
 */
QType *QParameter::type() const
{
    return (qwrappedobject_cast<const QTypedElement *>(this))->type();
}

void QParameter::setType(QType *type)
{
    (qwrappedobject_cast<QTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QParameter::upper() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->upper();
}

void QParameter::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUpper(upper);
}

void QParameter::unsetUpper()
{
    setUpper(1);
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QParameter::isUnique() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->isUnique();
}

void QParameter::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUnique(isUnique);
}

void QParameter::unsetUnique()
{
    setUnique(true);
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QParameter::isOrdered() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->isOrdered();
}

void QParameter::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QParameter::unsetOrdered()
{
    setOrdered(false);
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QParameter::lower() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->lower();
}

void QParameter::setLower(qint32 lower)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QParameter::upperValue() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->upperValue();
}

void QParameter::setUpperValue(QValueSpecification *upperValue)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QParameter::lowerValue() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->lowerValue();
}

void QParameter::setLowerValue(QValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QParameter
// ---------------------------------------------------------------

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QParameter::default_() const
{
    // This is a read-only derived attribute

    qWarning("QParameter::default_: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtMof::ParameterDirectionKind QParameter::direction() const
{
    // This is a read-write attribute

    Q_D(const QParameter);
    return d->direction;
}

void QParameter::setDirection(QtMof::ParameterDirectionKind direction)
{
    // This is a read-write attribute

    Q_D(QParameter);
    if (d->direction != direction) {
        d->direction = direction;
    }
}

void QParameter::unsetDirection()
{
    setDirection(QtMof::ParameterDirectionIn);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QParameter
// ---------------------------------------------------------------

/*!
    References the Operation owning this parameter.
 */
QOperation *QParameter::operation() const
{
    // This is a read-write association end

    Q_D(const QParameter);
    return d->operation;
}

void QParameter::setOperation(QOperation *operation)
{
    // This is a read-write association end

    Q_D(QParameter);
    if (d->operation != operation) {
        // Adjust opposite property
        if (d->operation)
            d->operation->removeOwnedParameter(this);

        d->operation = operation;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(operation));

        // Adjust opposite property
        if (operation)
            operation->addOwnedParameter(this);
    }
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QValueSpecification *QParameter::defaultValue() const
{
    // This is a read-write association end

    Q_D(const QParameter);
    return d->defaultValue;
}

void QParameter::setDefaultValue(QValueSpecification *defaultValue)
{
    // This is a read-write association end

    Q_D(QParameter);
    if (d->defaultValue != defaultValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(defaultValue));
        }
    }
}

void QParameter::registerMetaTypes() const
{
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");

    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QOperation *>");
    qRegisterMetaType<QList<QOperation *>>("QList<QOperation *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a String that represents a value to be used when no argument is supplied for the Parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("default_")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("direction")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("direction")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("direction")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether a parameter is being sent into or out of a behavioral element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("direction")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("direction")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("direction")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("operation")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("operation")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("operation")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Operation owning this parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("operation")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("operation")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("operation")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOperation::ownedParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qparameter.cpp"

QT_END_NAMESPACE_QTMOF

