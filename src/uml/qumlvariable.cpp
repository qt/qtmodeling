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
#include "qumlvariable.h"
#include "qumlvariable_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlAction>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlVariablePrivate::QUmlVariablePrivate() :
    scope(0),
    activityScope(0)
{
}

QUmlVariablePrivate::~QUmlVariablePrivate()
{
}

/*!
    \class QUmlVariable

    \inmodule QtUml

    \brief A variable is considered a connectable element.Variables are elements for passing data between actions indirectly. A local variable stores values shared by the actions within a structured activity group but not accessible outside it. The output of an action may be written to a variable and read for the input to a subsequent action, which is effectively an indirect data flow path. Because there is no predefined relationship between actions that read and write variables, these actions must be sequenced by control flows to prevent race conditions that may occur between actions that read or write the same variable.
 */

QUmlVariable::QUmlVariable(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlVariablePrivate, wrapper, parent),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlConnectableElement(new QUmlConnectableElement(this))
{
    setPropertyData();
}

QUmlVariable::QUmlVariable(QUmlVariablePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlConnectableElement(new QUmlConnectableElement(this))
{
    setPropertyData();
}

QUmlVariable::~QUmlVariable()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlVariable::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlVariable::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlVariable::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlVariable::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlVariable::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QUmlVariable::upper() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upper();
}

void QUmlVariable::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpper(upper);
}

void QUmlVariable::unsetUpper()
{
    setUpper(1);
    Q_D(QUmlVariable);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlVariable::isUnique() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isUnique();
}

void QUmlVariable::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUnique(isUnique);
}

void QUmlVariable::unsetUnique()
{
    setUnique(true);
    Q_D(QUmlVariable);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlVariable::isOrdered() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isOrdered();
}

void QUmlVariable::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QUmlVariable::unsetOrdered()
{
    setOrdered(false);
    Q_D(QUmlVariable);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QUmlVariable::lower() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lower();
}

void QUmlVariable::setLower(qint32 lower)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlVariable::upperValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upperValue();
}

void QUmlVariable::setUpperValue(QUmlValueSpecification *upperValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlVariable::lowerValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lowerValue();
}

void QUmlVariable::setLowerValue(QUmlValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlVariable::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlVariable::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlVariable::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlVariable::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlVariable::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlVariable::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlVariable::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlVariable::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlVariable::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlVariable::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlVariable::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlVariable::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlVariable::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlVariable::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlVariable::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
QList<QUmlConnectorEnd *> QUmlVariable::ends() const
{
    return (qwrappedobject_cast<const QUmlConnectableElement *>(this))->ends();
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QUmlConnectableElementTemplateParameter *QUmlVariable::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlConnectableElement *>(this))->templateParameter();
}

void QUmlVariable::setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlConnectableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlVariable
// ---------------------------------------------------------------

/*!
    A structured activity node that owns the variable.
 */
QUmlStructuredActivityNode *QUmlVariable::scope() const
{
    // This is a read-write association end

    Q_D(const QUmlVariable);
    return d->scope;
}

void QUmlVariable::setScope(QUmlStructuredActivityNode *scope)
{
    // This is a read-write association end

    Q_D(QUmlVariable);
    if (d->scope != scope) {
        // Adjust opposite property
        if (d->scope)
            d->scope->removeVariable(this);

        d->scope = scope;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(scope));

        // Adjust opposite property
        if (scope)
            scope->addVariable(this);
    }
}

/*!
    An activity that owns the variable.
 */
QUmlActivity *QUmlVariable::activityScope() const
{
    // This is a read-write association end

    Q_D(const QUmlVariable);
    return d->activityScope;
}

void QUmlVariable::setActivityScope(QUmlActivity *activityScope)
{
    // This is a read-write association end

    Q_D(QUmlVariable);
    if (d->activityScope != activityScope) {
        // Adjust opposite property
        if (d->activityScope)
            d->activityScope->removeVariable(this);

        d->activityScope = activityScope;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(activityScope));

        // Adjust opposite property
        if (activityScope)
            activityScope->addVariable(this);
    }
}

/*!
    The isAccessibleBy() operation is not defined in standard UML. Implementations should define it to specify which actions can access a variable.
 */
bool QUmlVariable::isAccessibleBy(const QUmlAction *a) const
{
    qWarning("QUmlVariable::isAccessibleBy: operation to be implemented");
    Q_UNUSED(a);

    return bool(); // change here to your derived return
}

void QUmlVariable::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("scope")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("scope")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("scope")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A structured activity node that owns the variable.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("scope")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("scope")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("scope")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStructuredActivityNode::variable");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("activityScope")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("activityScope")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("activityScope")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An activity that owns the variable.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("activityScope")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("activityScope")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlVariable")][QString::fromLatin1("activityScope")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivity::variable");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlvariable.cpp"

