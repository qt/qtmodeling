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

#include "qumldependency.h"
#include "qumldependency_p.h"

#include <QtUml/QUmlNamedElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDependencyPrivate::QUmlDependencyPrivate()
{
}

QUmlDependencyPrivate::~QUmlDependencyPrivate()
{
}

/*!
    \class QUmlDependency

    \inmodule QtUml

    \brief A dependency is a relationship that signifies that a single or a set of model elements requires other model elements for their specification or implementation. This means that the complete semantics of the depending elements is either semantically or structurally dependent on the definition of the supplier element(s).
 */

QUmlDependency::QUmlDependency(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlDependencyPrivate, wrapper, parent),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this)),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this))
{
    setPropertyData();
}

QUmlDependency::QUmlDependency(QUmlDependencyPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this)),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this))
{
    setPropertyData();
}

QUmlDependency::~QUmlDependency()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlDependency::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlDependency::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlDependency::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlDependency::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlDependency::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlDependency::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlDependency::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlDependency::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->templateParameter();
}

void QUmlDependency::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlDependency::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlDependency::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlDependency::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlDependency::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlDependency::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlDependency::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlDependency::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlDependency::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlDependency::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlDependency::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlDependency::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlDependency::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlDependency);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QUmlElement *> QUmlDependency::relatedElements() const
{
    return (qwrappedobject_cast<const QUmlRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlDependency::sources() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlDependency::targets() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDependency
// ---------------------------------------------------------------

/*!
    The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.
 */
QSet<QUmlNamedElement *> QUmlDependency::clients() const
{
    // This is a read-write association end

    Q_D(const QUmlDependency);
    return d->clients;
}

void QUmlDependency::addClient(QUmlNamedElement *client)
{
    // This is a read-write association end

    Q_D(QUmlDependency);
    if (!d->clients.contains(client)) {
        d->clients.insert(client);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(client));

        // Adjust opposite property
        client->addClientDependency(this);
    }
}

void QUmlDependency::removeClient(QUmlNamedElement *client)
{
    // This is a read-write association end

    Q_D(QUmlDependency);
    if (d->clients.contains(client)) {
        d->clients.remove(client);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(client));

        // Adjust opposite property
        if (client)
            client->removeClientDependency(this);
    }
}

/*!
    The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.
 */
QSet<QUmlNamedElement *> QUmlDependency::suppliers() const
{
    // This is a read-write association end

    Q_D(const QUmlDependency);
    return d->suppliers;
}

void QUmlDependency::addSupplier(QUmlNamedElement *supplier)
{
    // This is a read-write association end

    Q_D(QUmlDependency);
    if (!d->suppliers.contains(supplier)) {
        d->suppliers.insert(supplier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(supplier));
    }
}

void QUmlDependency::removeSupplier(QUmlNamedElement *supplier)
{
    // This is a read-write association end

    Q_D(QUmlDependency);
    if (d->suppliers.contains(supplier)) {
        d->suppliers.remove(supplier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(supplier));
    }
}

void QUmlDependency::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("clients")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("clients")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("clients")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("clients")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("clients")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("clients")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QNamedElement::clientDependency");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("suppliers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("suppliers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("suppliers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("suppliers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("suppliers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDependency")][QString::fromLatin1("suppliers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldependency.cpp"

