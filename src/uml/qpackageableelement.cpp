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

#include "qpackageableelement.h"
#include "qpackageableelement_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QPackageableElementPrivate::QPackageableElementPrivate() :
    visibility(QtUml::VisibilityPublic)
{
}

QPackageableElementPrivate::~QPackageableElementPrivate()
{
}

/*!
    \class QPackageableElement

    \inmodule QtUml

    \brief Packageable elements are able to serve as a template parameter.A packageable element indicates a named element that may be owned directly by a package.
 */

QPackageableElement::QPackageableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QPackageableElementPrivate, wrapper, parent),
    _wrappedParameterableElement(new QParameterableElement(this)),
    _wrappedNamedElement(new QNamedElement(this))
{
    setPropertyData();
}

QPackageableElement::QPackageableElement(QPackageableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedParameterableElement(new QParameterableElement(this)),
    _wrappedNamedElement(new QNamedElement(this))
{
    setPropertyData();
}

QPackageableElement::~QPackageableElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QPackageableElement::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QPackageableElement::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QPackageableElement::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QPackageableElement::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QPackageableElement::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QPackageableElement::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QPackageableElement::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QTemplateParameter *QPackageableElement::templateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->templateParameter();
}

void QPackageableElement::setTemplateParameter(QTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QPackageableElement::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QPackageableElement::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QPackageableElement::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QPackageableElement::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QPackageableElement::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QPackageableElement::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QPackageableElement::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QPackageableElement::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QPackageableElement::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QPackageableElement::visibility() const
{
    // This is a read-write attribute

    Q_D(const QPackageableElement);
    return d->visibility;
}

void QPackageableElement::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QPackageableElement);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
    d->modifiedResettableProperties << QString::fromLatin1("visibility");
}

void QPackageableElement::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QPackageableElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

void QPackageableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QNamedElement::visibility");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qpackageableelement.cpp"

QT_END_NAMESPACE_QTUML

