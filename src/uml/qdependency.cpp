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

#include "qdependency.h"
#include "qdependency_p.h"

#include <QtUml/QNamedElement>

QT_BEGIN_NAMESPACE_QTUML

QDependencyPrivate::QDependencyPrivate() :
    clients(new QSet<QNamedElement *>),
    suppliers(new QSet<QNamedElement *>)
{
}

QDependencyPrivate::~QDependencyPrivate()
{
    delete clients;
    delete suppliers;
}

/*!
    \class QDependency

    \inmodule QtUml

    \brief A dependency is a relationship that signifies that a single or a set of model elements requires other model elements for their specification or implementation. This means that the complete semantics of the depending elements is either semantically or structurally dependent on the definition of the supplier element(s).
 */

QDependency::QDependency(QObject *parent) :
    QObject(*new QDependencyPrivate, parent),
    _wrappedPackageableElement(new QPackageableElement(this)),
    _wrappedDirectedRelationship(new QDirectedRelationship(this))
{
    qRegisterMetaType<QDependency *>("QDependency *");
    qRegisterMetaType<const QSet<QDependency *> *>("const QSet<QDependency *> *");
    qRegisterMetaType<const QList<QDependency *> *>("const QList<QDependency *> *");
}

QDependency::QDependency(QDependencyPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedPackageableElement(new QPackageableElement(this)),
    _wrappedDirectedRelationship(new QDirectedRelationship(this))
{
    qRegisterMetaType<QDependency *>("QDependency *");
    qRegisterMetaType<const QSet<QDependency *> *>("const QSet<QDependency *> *");
    qRegisterMetaType<const QList<QDependency *> *>("const QList<QDependency *> *");
}

QDependency::~QDependency()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QDependency::ownedElements() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QDependency::owner() const
{
    return (qtuml_object_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QDependency::ownedComments() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedComments();
}

void QDependency::addOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QDependency::removeOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QDependency::owningTemplateParameter() const
{
    return (qtuml_object_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QDependency::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qtuml_object_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QTemplateParameter *QDependency::templateParameter() const
{
    return (qtuml_object_cast<const QParameterableElement *>(this))->templateParameter();
}

void QDependency::setTemplateParameter(QTemplateParameter *templateParameter)
{
    (qtuml_object_cast<QParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QDependency::name() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->name();
}

void QDependency::setName(QString name)
{
    (qtuml_object_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QDependency::qualifiedName() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QDependency::nameExpression() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->nameExpression();
}

void QDependency::setNameExpression(QStringExpression *nameExpression)
{
    (qtuml_object_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QDependency::namespace_() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QDependency::clientDependencies() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->clientDependencies();
}

void QDependency::addClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QDependency::removeClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QDependency::visibility() const
{
    return (qtuml_object_cast<const QPackageableElement *>(this))->visibility();
}

void QDependency::setVisibility(QtUml::VisibilityKind visibility)
{
    (qtuml_object_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QElement *> *QDependency::relatedElements() const
{
    return (qtuml_object_cast<const QRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QElement *> *QDependency::sources() const
{
    return (qtuml_object_cast<const QDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QElement *> *QDependency::targets() const
{
    return (qtuml_object_cast<const QDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDependency
// ---------------------------------------------------------------

/*!
    The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.
 */
const QSet<QNamedElement *> *QDependency::clients() const
{
    // This is a read-write association end

    Q_D(const QDependency);
    return d->clients;
}

void QDependency::addClient(QNamedElement *client)
{
    // This is a read-write association end

    Q_D(QDependency);
    if (!d->clients->contains(client)) {
        d->clients->insert(client);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QDirectedRelationshipPrivate *>(d))->addSource(qtuml_object_cast<QElement *>(client));

        // Adjust opposite property
        client->addClientDependency(this);
    }
}

void QDependency::removeClient(QNamedElement *client)
{
    // This is a read-write association end

    Q_D(QDependency);
    if (d->clients->contains(client)) {
        d->clients->remove(client);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qtuml_object_cast<QElement *>(client));

        // Adjust opposite property
        if (client)
            client->removeClientDependency(this);
    }
}

/*!
    The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.
 */
const QSet<QNamedElement *> *QDependency::suppliers() const
{
    // This is a read-write association end

    Q_D(const QDependency);
    return d->suppliers;
}

void QDependency::addSupplier(QNamedElement *supplier)
{
    // This is a read-write association end

    Q_D(QDependency);
    if (!d->suppliers->contains(supplier)) {
        d->suppliers->insert(supplier);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qtuml_object_cast<QElement *>(supplier));
    }
}

void QDependency::removeSupplier(QNamedElement *supplier)
{
    // This is a read-write association end

    Q_D(QDependency);
    if (d->suppliers->contains(supplier)) {
        d->suppliers->remove(supplier);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qtuml_object_cast<QElement *>(supplier));
    }
}

#include "moc_qdependency.cpp"

QT_END_NAMESPACE_QTUML

