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

#include "qconnectableelement.h"
#include "qconnectableelement_p.h"

#include <QtUml/QConnectorEnd>
#include <QtUml/QConnectableElementTemplateParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QConnectableElementPrivate::QConnectableElementPrivate() :
    templateParameter(0)
{
}

QConnectableElementPrivate::~QConnectableElementPrivate()
{
}

void QConnectableElementPrivate::addEnd(QConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("QConnectableElement::addEnd: to be implemented (this is a derived associationend)");
    Q_UNUSED(end);

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QConnectableElement);
        end->setRole(q);
    }
}

void QConnectableElementPrivate::removeEnd(QConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("QConnectableElement::removeEnd: to be implemented (this is a derived associationend)");
    Q_UNUSED(end);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        end->setRole(0);
    }
}

/*!
    \class QConnectableElement

    \inmodule QtUml

    \brief ConnectableElement is an abstract metaclass representing a set of instances that play roles of a classifier. Connectable elements may be joined by attached connectors and specify configurations of linked instances to be created within an instance of the containing classifier.A connectable element may be exposed as a connectable element template parameter.
 */

QConnectableElement::QConnectableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QConnectableElementPrivate, wrapper, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
    setPropertyData();
}

QConnectableElement::QConnectableElement(QConnectableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
    setPropertyData();
}

QConnectableElement::~QConnectableElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QConnectableElement::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QConnectableElement::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QConnectableElement::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QConnectableElement::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QConnectableElement::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QConnectableElement::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QConnectableElement::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUmlNS::VisibilityKind QConnectableElement::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QConnectableElement::setVisibility(QtUmlNS::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QConnectableElement::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QConnectableElement::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QConnectableElement::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QConnectableElement::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QConnectableElement::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QConnectableElement::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QConnectableElement::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QType *QConnectableElement::type() const
{
    return (qwrappedobject_cast<const QTypedElement *>(this))->type();
}

void QConnectableElement::setType(QType *type)
{
    (qwrappedobject_cast<QTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QConnectableElement::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QConnectableElement::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
QList<QConnectorEnd *> QConnectableElement::ends() const
{
    // This is a read-only derived association end

    qWarning("QConnectableElement::ends: to be implemented (this is a derived associationend)");

    return QList<QConnectorEnd *>(); // change here to your derived return
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QConnectableElementTemplateParameter *QConnectableElement::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QConnectableElement);
    return d->templateParameter;
}

void QConnectableElement::setTemplateParameter(QConnectableElementTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QConnectableElement);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QParameterableElement *>(this))->setTemplateParameter(qwrappedobject_cast<QTemplateParameter *>(templateParameter));

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

void QConnectableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Denotes a set of connector ends that attaches to this connectable element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("ends")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QConnectorEnd::role");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ConnectableElementTemplateParameter for this ConnectableElement parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QParameterableElement::templateParameter");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QConnectableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QConnectableElementTemplateParameter::parameteredElement");

    QWrappedObject::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qconnectableelement.cpp"

