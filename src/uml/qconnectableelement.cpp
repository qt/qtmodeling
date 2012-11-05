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

QT_BEGIN_NAMESPACE_QTUML

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

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QConnectableElement);
        end->setRole(0);
    }
}

/*!
    \class QConnectableElement

    \inmodule QtUml

    \brief ConnectableElement is an abstract metaclass representing a set of instances that play roles of a classifier. Connectable elements may be joined by attached connectors and specify configurations of linked instances to be created within an instance of the containing classifier.A connectable element may be exposed as a connectable element template parameter.
 */

QConnectableElement::QConnectableElement(QObject *parent) :
    QObject(*new QConnectableElementPrivate, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
    qRegisterMetaType<QConnectableElement *>("QConnectableElement *");
    qRegisterMetaType<const QSet<QConnectableElement *> *>("const QSet<QConnectableElement *> *");
    qRegisterMetaType<const QList<QConnectableElement *> *>("const QList<QConnectableElement *> *");
}

QConnectableElement::QConnectableElement(QConnectableElementPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
    qRegisterMetaType<QConnectableElement *>("QConnectableElement *");
    qRegisterMetaType<const QSet<QConnectableElement *> *>("const QSet<QConnectableElement *> *");
    qRegisterMetaType<const QList<QConnectableElement *> *>("const QList<QConnectableElement *> *");
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
const QSet<QElement *> *QConnectableElement::ownedElements() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QConnectableElement::owner() const
{
    return (qtuml_object_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QConnectableElement::ownedComments() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedComments();
}

void QConnectableElement::addOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QConnectableElement::removeOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QConnectableElement::name() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->name();
}

void QConnectableElement::setName(QString name)
{
    (qtuml_object_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QConnectableElement::visibility() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->visibility();
}

void QConnectableElement::setVisibility(QtUml::VisibilityKind visibility)
{
    (qtuml_object_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QConnectableElement::qualifiedName() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QConnectableElement::nameExpression() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->nameExpression();
}

void QConnectableElement::setNameExpression(QStringExpression *nameExpression)
{
    (qtuml_object_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QConnectableElement::namespace_() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QConnectableElement::clientDependencies() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->clientDependencies();
}

void QConnectableElement::addClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QConnectableElement::removeClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QType *QConnectableElement::type() const
{
    return (qtuml_object_cast<const QTypedElement *>(this))->type();
}

void QConnectableElement::setType(QType *type)
{
    (qtuml_object_cast<QTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QConnectableElement::owningTemplateParameter() const
{
    return (qtuml_object_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QConnectableElement::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qtuml_object_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QConnectableElement
// ---------------------------------------------------------------

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
const QList<QConnectorEnd *> *QConnectableElement::ends() const
{
    // This is a read-only derived association end

    qWarning("QConnectableElement::ends: to be implemented (this is a derived associationend)");

    //Q_D(const QConnectableElement);
    //return <derived-return>;
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

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

#include "moc_qconnectableelement.cpp"

QT_END_NAMESPACE_QTUML

