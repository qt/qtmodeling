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

#include "qumlparameter.h"
#include "qumlparameter_p.h"

#include <QtUml/QUmlValueSpecification>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlParameterSet>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlParameterPrivate::QUmlParameterPrivate() :
    isException(false),
    direction(QtUml::ParameterDirectionIn),
    isStream(false),
    operation(0),
    defaultValue(0)
{
}

QUmlParameterPrivate::~QUmlParameterPrivate()
{
}

/*!
    \class QUmlParameter

    \inmodule QtUml

    \brief Parameters are allowed to be treated as connectable elements.A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.Parameters have support for streaming, exceptions, and parameter sets.
 */

QUmlParameter::QUmlParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlParameterPrivate, wrapper, parent),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlConnectableElement(new QUmlConnectableElement(this))
{
    setPropertyData();
}

QUmlParameter::QUmlParameter(QUmlParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlConnectableElement(new QUmlConnectableElement(this))
{
    setPropertyData();
}

QUmlParameter::~QUmlParameter()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlParameter::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlParameter::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlParameter::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlParameter::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlParameter::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QUmlParameter::upper() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upper();
}

void QUmlParameter::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpper(upper);
}

void QUmlParameter::unsetUpper()
{
    setUpper(1);
    Q_D(QUmlParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlParameter::isUnique() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isUnique();
}

void QUmlParameter::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUnique(isUnique);
}

void QUmlParameter::unsetUnique()
{
    setUnique(true);
    Q_D(QUmlParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlParameter::isOrdered() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isOrdered();
}

void QUmlParameter::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QUmlParameter::unsetOrdered()
{
    setOrdered(false);
    Q_D(QUmlParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QUmlParameter::lower() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lower();
}

void QUmlParameter::setLower(qint32 lower)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlParameter::upperValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upperValue();
}

void QUmlParameter::setUpperValue(QUmlValueSpecification *upperValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlParameter::lowerValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lowerValue();
}

void QUmlParameter::setLowerValue(QUmlValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlParameter::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlParameter::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlParameter::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlParameter::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlParameter::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlParameter::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlParameter::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlParameter::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlParameter::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlParameter::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlParameter::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlParameter::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlParameter::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlParameter::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlParameter::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
QList<QUmlConnectorEnd *> QUmlParameter::ends() const
{
    return (qwrappedobject_cast<const QUmlConnectableElement *>(this))->ends();
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QUmlConnectableElementTemplateParameter *QUmlParameter::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlConnectableElement *>(this))->templateParameter();
}

void QUmlParameter::setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlConnectableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlParameter
// ---------------------------------------------------------------

/*!
    Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 */
bool QUmlParameter::isException() const
{
    // This is a read-write attribute

    Q_D(const QUmlParameter);
    return d->isException;
}

void QUmlParameter::setException(bool isException)
{
    // This is a read-write attribute

    Q_D(QUmlParameter);
    if (d->isException != isException) {
        d->isException = isException;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isException");
}

void QUmlParameter::unsetException()
{
    setException(false);
    Q_D(QUmlParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isException"));
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QUmlParameter::default_() const
{
    // This is a read-write derived attribute

    qWarning("QUmlParameter::default_: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

void QUmlParameter::setDefault_(QString default_)
{
    // This is a read-write derived attribute

    qWarning("QUmlParameter::setDefault_: to be implemented (this is a derived attribute)");
    Q_UNUSED(default_);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtUml::ParameterDirectionKind QUmlParameter::direction() const
{
    // This is a read-write attribute

    Q_D(const QUmlParameter);
    return d->direction;
}

void QUmlParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    // This is a read-write attribute

    Q_D(QUmlParameter);
    if (d->direction != direction) {
        d->direction = direction;
    }
    d->modifiedResettableProperties << QString::fromLatin1("direction");
}

void QUmlParameter::unsetDirection()
{
    setDirection(QtUml::ParameterDirectionIn);
    Q_D(QUmlParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("direction"));
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QUmlParameter::isStream() const
{
    // This is a read-write attribute

    Q_D(const QUmlParameter);
    return d->isStream;
}

void QUmlParameter::setStream(bool isStream)
{
    // This is a read-write attribute

    Q_D(QUmlParameter);
    if (d->isStream != isStream) {
        d->isStream = isStream;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isStream");
}

void QUmlParameter::unsetStream()
{
    setStream(false);
    Q_D(QUmlParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStream"));
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QUmlParameter::effect() const
{
    // This is a read-write attribute

    Q_D(const QUmlParameter);
    return d->effect;
}

void QUmlParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    // This is a read-write attribute

    Q_D(QUmlParameter);
    if (d->effect != effect) {
        d->effect = effect;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlParameter
// ---------------------------------------------------------------

/*!
    References the Operation owning this parameter.
 */
QUmlOperation *QUmlParameter::operation() const
{
    // This is a read-write association end

    Q_D(const QUmlParameter);
    return d->operation;
}

void QUmlParameter::setOperation(QUmlOperation *operation)
{
    // This is a read-write association end

    Q_D(QUmlParameter);
    if (d->operation != operation) {
        // Adjust opposite property
        if (d->operation)
            d->operation->removeOwnedParameter(this);

        d->operation = operation;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(operation));

        // Adjust opposite property
        if (operation)
            operation->addOwnedParameter(this);
    }
}

/*!
    Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
 */
QUmlValueSpecification *QUmlParameter::defaultValue() const
{
    // This is a read-write association end

    Q_D(const QUmlParameter);
    return d->defaultValue;
}

void QUmlParameter::setDefaultValue(QUmlValueSpecification *defaultValue)
{
    // This is a read-write association end

    Q_D(QUmlParameter);
    if (d->defaultValue != defaultValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->defaultValue));

        d->defaultValue = defaultValue;

        // Adjust subsetted property(ies)
        if (defaultValue) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(defaultValue));
        }
    }
}

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
QSet<QUmlParameterSet *> QUmlParameter::parameterSets() const
{
    // This is a read-write association end

    Q_D(const QUmlParameter);
    return d->parameterSets;
}

void QUmlParameter::addParameterSet(QUmlParameterSet *parameterSet)
{
    // This is a read-write association end

    Q_D(QUmlParameter);
    if (!d->parameterSets.contains(parameterSet)) {
        d->parameterSets.insert(parameterSet);

        // Adjust opposite property
        parameterSet->addParameter(this);
    }
}

void QUmlParameter::removeParameterSet(QUmlParameterSet *parameterSet)
{
    // This is a read-write association end

    Q_D(QUmlParameter);
    if (d->parameterSets.contains(parameterSet)) {
        d->parameterSets.remove(parameterSet);

        // Adjust opposite property
        if (parameterSet)
            parameterSet->removeParameter(this);
    }
}

void QUmlParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isException")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isException")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isException")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether an output parameter may emit a value to the exclusion of the other outputs.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isException")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isException")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isException")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("default_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("default_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("default_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a String that represents a value to be used when no argument is supplied for the Parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("default_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("default_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("default_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("direction")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("direction")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("direction")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether a parameter is being sent into or out of a behavioral element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("direction")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("direction")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("direction")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("effect")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("effect")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("effect")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("effect")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("effect")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("effect")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("operation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("operation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("operation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Operation owning this parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("operation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("operation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("operation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlOperation::ownedParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("defaultValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The parameter sets containing the parameter. See ParameterSet.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlParameterSet::parameter");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlparameter.cpp"

