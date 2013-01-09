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

#include "qparameter.h"
#include "qparameter_p.h"

#include <QtUml/QValueSpecification>
#include <QtUml/QOperation>
#include <QtUml/QParameterSet>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QParameterPrivate::QParameterPrivate() :
    isException(false),
    direction(QtUml::ParameterDirectionIn),
    isStream(false),
    operation(0),
    defaultValue(0)
{
}

QParameterPrivate::~QParameterPrivate()
{
}

/*!
    \class QParameter

    \inmodule QtUml

    \brief Parameters are allowed to be treated as connectable elements.A parameter is a specification of an argument used to pass information into or out of an invocation of a behavioral feature.Parameters have support for streaming, exceptions, and parameter sets.
 */

QParameter::QParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QParameterPrivate, wrapper, parent),
    _wrappedMultiplicityElement(new QMultiplicityElement(this)),
    _wrappedConnectableElement(new QConnectableElement(this))
{
    setPropertyData();
}

QParameter::QParameter(QParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMultiplicityElement(new QMultiplicityElement(this)),
    _wrappedConnectableElement(new QConnectableElement(this))
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
    Q_D(QParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
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
    Q_D(QParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
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
    Q_D(QParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
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
QtUml::VisibilityKind QParameter::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QParameter::setVisibility(QtUml::VisibilityKind visibility)
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
    The string expression used to define the name of this named element.
 */
QStringExpression *QParameter::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QParameter::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QParameter::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QParameter::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QParameter::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QParameter::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
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
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QParameter::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QParameter::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
QList<QConnectorEnd *> QParameter::ends() const
{
    return (qwrappedobject_cast<const QConnectableElement *>(this))->ends();
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QConnectableElementTemplateParameter *QParameter::templateParameter() const
{
    return (qwrappedobject_cast<const QConnectableElement *>(this))->templateParameter();
}

void QParameter::setTemplateParameter(QConnectableElementTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QConnectableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QParameter
// ---------------------------------------------------------------

/*!
    Tells whether an output parameter may emit a value to the exclusion of the other outputs.
 */
bool QParameter::isException() const
{
    // This is a read-write attribute

    Q_D(const QParameter);
    return d->isException;
}

void QParameter::setException(bool isException)
{
    // This is a read-write attribute

    Q_D(QParameter);
    if (d->isException != isException) {
        d->isException = isException;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isException");
}

void QParameter::unsetException()
{
    setException(false);
    Q_D(QParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isException"));
}

/*!
    Specifies a String that represents a value to be used when no argument is supplied for the Parameter.
 */
QString QParameter::default_() const
{
    // This is a read-write derived attribute

    qWarning("QParameter::default_: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

void QParameter::setDefault_(QString default_)
{
    // This is a read-write derived attribute

    qWarning("QParameter::setDefault_: to be implemented (this is a derived attribute)");
    Q_UNUSED(default_);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

/*!
    Indicates whether a parameter is being sent into or out of a behavioral element.
 */
QtUml::ParameterDirectionKind QParameter::direction() const
{
    // This is a read-write attribute

    Q_D(const QParameter);
    return d->direction;
}

void QParameter::setDirection(QtUml::ParameterDirectionKind direction)
{
    // This is a read-write attribute

    Q_D(QParameter);
    if (d->direction != direction) {
        d->direction = direction;
    }
    d->modifiedResettableProperties << QString::fromLatin1("direction");
}

void QParameter::unsetDirection()
{
    setDirection(QtUml::ParameterDirectionIn);
    Q_D(QParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("direction"));
}

/*!
    Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.
 */
bool QParameter::isStream() const
{
    // This is a read-write attribute

    Q_D(const QParameter);
    return d->isStream;
}

void QParameter::setStream(bool isStream)
{
    // This is a read-write attribute

    Q_D(QParameter);
    if (d->isStream != isStream) {
        d->isStream = isStream;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isStream");
}

void QParameter::unsetStream()
{
    setStream(false);
    Q_D(QParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStream"));
}

/*!
    Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.
 */
QtUml::ParameterEffectKind QParameter::effect() const
{
    // This is a read-write attribute

    Q_D(const QParameter);
    return d->effect;
}

void QParameter::setEffect(QtUml::ParameterEffectKind effect)
{
    // This is a read-write attribute

    Q_D(QParameter);
    if (d->effect != effect) {
        d->effect = effect;
    }
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

/*!
    The parameter sets containing the parameter. See ParameterSet.
 */
QSet<QParameterSet *> QParameter::parameterSets() const
{
    // This is a read-write association end

    Q_D(const QParameter);
    return d->parameterSets;
}

void QParameter::addParameterSet(QParameterSet *parameterSet)
{
    // This is a read-write association end

    Q_D(QParameter);
    if (!d->parameterSets.contains(parameterSet)) {
        d->parameterSets.insert(parameterSet);

        // Adjust opposite property
        parameterSet->addParameter(this);
    }
}

void QParameter::removeParameterSet(QParameterSet *parameterSet)
{
    // This is a read-write association end

    Q_D(QParameter);
    if (d->parameterSets.contains(parameterSet)) {
        d->parameterSets.remove(parameterSet);

        // Adjust opposite property
        if (parameterSet)
            parameterSet->removeParameter(this);
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

    qRegisterMetaType<QParameterSet *>("QParameterSet *");
    qRegisterMetaType<QSet<QParameterSet *>>("QSet<QParameterSet *>");
    qRegisterMetaType<QList<QParameterSet *>>("QList<QParameterSet *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isException")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isException")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isException")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether an output parameter may emit a value to the exclusion of the other outputs.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isException")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isException")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isException")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

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

    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("isStream")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the effect that the owner of the parameter has on values passed in or out of the parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("effect")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

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

    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The parameter sets containing the parameter. See ParameterSet.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameter")][QString::fromLatin1("parameterSets")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QParameterSet::parameter");

    QWrappedObject::setPropertyData();
}

#include "moc_qparameter.cpp"

QT_END_NAMESPACE_QTUML

