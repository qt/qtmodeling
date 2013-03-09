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

#include "qumlconnectableelement.h"
#include "qumlconnectableelement_p.h"

#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlConnectableElementTemplateParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlConnectableElementPrivate::QUmlConnectableElementPrivate() :
    templateParameter(0)
{
}

QUmlConnectableElementPrivate::~QUmlConnectableElementPrivate()
{
}

void QUmlConnectableElementPrivate::addEnd(QUmlConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("QUmlConnectableElement::addEnd: to be implemented (this is a derived associationend)");
    Q_UNUSED(end);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QUmlConnectableElement);
        end->setRole(q);
    }
}

void QUmlConnectableElementPrivate::removeEnd(QUmlConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("QUmlConnectableElement::removeEnd: to be implemented (this is a derived associationend)");
    Q_UNUSED(end);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        end->setRole(0);
    }
}

/*!
    \class QUmlConnectableElement

    \inmodule QtUml

    \brief ConnectableElement is an abstract metaclass representing a set of instances that play roles of a classifier. Connectable elements may be joined by attached connectors and specify configurations of linked instances to be created within an instance of the containing classifier.A connectable element may be exposed as a connectable element template parameter.
 */

QUmlConnectableElement::QUmlConnectableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlConnectableElementPrivate, wrapper, parent),
    _wrappedUmlTypedElement(new QUmlTypedElement(this)),
    _wrappedUmlParameterableElement(new QUmlParameterableElement(this))
{
    setPropertyData();
}

QUmlConnectableElement::QUmlConnectableElement(QUmlConnectableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlTypedElement(new QUmlTypedElement(this)),
    _wrappedUmlParameterableElement(new QUmlParameterableElement(this))
{
    setPropertyData();
}

QUmlConnectableElement::~QUmlConnectableElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlConnectableElement::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlConnectableElement::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlConnectableElement::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlConnectableElement::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlConnectableElement::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlConnectableElement::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlConnectableElement::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlConnectableElement::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlConnectableElement::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlConnectableElement::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlConnectableElement::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlConnectableElement::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlConnectableElement::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlConnectableElement::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlConnectableElement::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlConnectableElement::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlConnectableElement::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlConnectableElement::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlConnectableElement::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlConnectableElement::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
QList<QUmlConnectorEnd *> QUmlConnectableElement::ends() const
{
    // This is a read-only derived association end

    qWarning("QUmlConnectableElement::ends: to be implemented (this is a derived associationend)");

    return QList<QUmlConnectorEnd *>(); // change here to your derived return
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QUmlConnectableElementTemplateParameter *QUmlConnectableElement::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QUmlConnectableElement);
    return d->templateParameter;
}

void QUmlConnectableElement::setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QUmlConnectableElement);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(qwrappedobject_cast<QUmlTemplateParameter *>(templateParameter));

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

void QUmlConnectableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Denotes a set of connector ends that attaches to this connectable element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlConnectorEnd::role");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ConnectableElementTemplateParameter for this ConnectableElement parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlParameterableElement::templateParameter");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlConnectableElementTemplateParameter::parameteredElement");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlconnectableelement.cpp"

