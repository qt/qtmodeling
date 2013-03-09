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

#include "qumlnamedelement.h"
#include "qumlnamedelement_p.h"

#include "qumlnamespace_p.h"

#include <QtUml/QUmlPackage>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlStringExpression>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlNamedElementPrivate::QUmlNamedElementPrivate() :
    nameExpression(0),
    namespace_(0)
{
}

QUmlNamedElementPrivate::~QUmlNamedElementPrivate()
{
}

void QUmlNamedElementPrivate::setNamespace_(QUmlNamespace *namespace_)
{
    // This is a read-only derived-union association end

    if (this->namespace_ != namespace_) {
        Q_Q(QUmlNamedElement);
        // Adjust opposite property
        if (this->namespace_)
            (qwrappedobject_cast<QUmlNamespacePrivate *>(this->namespace_->d_func()))->removeOwnedMember(q);

        this->namespace_ = namespace_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->setOwner(qwrappedobject_cast<QUmlElement *>(namespace_));

        // Adjust opposite property
        if (namespace_)
            (qwrappedobject_cast<QUmlNamespacePrivate *>(namespace_->d_func()))->addOwnedMember(q);
    }
}

/*!
    \class QUmlNamedElement

    \inmodule QtUml

    \brief A named element supports using a string expression to specify its name. This allows names of model elements to involve template parameters. The actual name is evaluated from the string expression only when it is sensible to do so (e.g., when a template is bound).A named element is an element in a model that may have a name.
 */

QUmlNamedElement::QUmlNamedElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlNamedElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlNamedElement::QUmlNamedElement(QUmlNamedElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlNamedElement::~QUmlNamedElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlNamedElement::name() const
{
    // This is a read-write attribute

    Q_D(const QUmlNamedElement);
    return d->name;
}

void QUmlNamedElement::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QUmlNamedElement);
    if (d->name != name) {
        d->name = name;
        QWrappedObject *wrappedObject = this;
        while (wrappedObject->wrapper())
            wrappedObject = wrappedObject->wrapper();
        wrappedObject->setObjectName(name);
    }
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlNamedElement::visibility() const
{
    // This is a read-write attribute

    Q_D(const QUmlNamedElement);
    return d->visibility;
}

void QUmlNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QUmlNamedElement);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlNamedElement::qualifiedName() const
{
    // This is a read-only derived attribute

    Q_D(const QUmlNamedElement);
    if (d->name.isEmpty()) return QString();
    QString qualifiedName_(d->name);
    QList<QUmlNamespace *> allNamespaces_ = allNamespaces();
    QString separator_ = separator();
    foreach (QUmlNamespace *namespace_, allNamespaces_) {
        if (namespace_->name().isEmpty())
            return QString();
        qualifiedName_.prepend(separator_).prepend(namespace_->name());
    }
    return qualifiedName_;
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlNamedElement::nameExpression() const
{
    // This is a read-write association end

    Q_D(const QUmlNamedElement);
    return d->nameExpression;
}

void QUmlNamedElement::setNameExpression(QUmlStringExpression *nameExpression)
{
    // This is a read-write association end

    Q_D(QUmlNamedElement);
    if (d->nameExpression != nameExpression) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->nameExpression));

        d->nameExpression = nameExpression;

        // Adjust subsetted property(ies)
        if (nameExpression) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(nameExpression));
        }
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlNamedElement::namespace_() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlNamedElement);
    return d->namespace_;
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlNamedElement::clientDependencies() const
{
    // This is a read-write association end

    Q_D(const QUmlNamedElement);
    return d->clientDependencies;
}

void QUmlNamedElement::addClientDependency(QUmlDependency *clientDependency)
{
    // This is a read-write association end

    Q_D(QUmlNamedElement);
    if (!d->clientDependencies.contains(clientDependency)) {
        d->clientDependencies.insert(clientDependency);

        // Adjust opposite property
        clientDependency->addClient(this);
    }
}

void QUmlNamedElement::removeClientDependency(QUmlDependency *clientDependency)
{
    // This is a read-write association end

    Q_D(QUmlNamedElement);
    if (d->clientDependencies.contains(clientDependency)) {
        d->clientDependencies.remove(clientDependency);

        // Adjust opposite property
        if (clientDependency)
            clientDependency->removeClient(this);
    }
}

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlNamedElement::allNamespaces() const
{
    Q_D(const QUmlNamedElement);
    if (!d->namespace_) {
        return QList<QUmlNamespace *>();
    }
    else {
        QList<QUmlNamespace *> allNamespaces_;
        QUmlNamespace *namespace_ = this->namespace_();
        while (namespace_) {
            allNamespaces_.append(namespace_);
            namespace_ = namespace_->namespace_();
        }
        return allNamespaces_;
    }
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlNamedElement::allOwningPackages() const
{
    qWarning("QUmlNamedElement::allOwningPackages: operation to be implemented");

    return QSet<QUmlPackage *>(); // change here to your derived return
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlNamedElement::isDistinguishableFrom(const QUmlNamedElement *n, const QUmlNamespace *ns) const
{
    qWarning("QUmlNamedElement::isDistinguishableFrom: operation to be implemented");
    Q_UNUSED(n);
    Q_UNUSED(ns);

    return bool(); // change here to your derived return
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlNamedElement::separator() const
{
    return QStringLiteral("::");
}

void QUmlNamedElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The name of the NamedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("nameExpression")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("nameExpression")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("nameExpression")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The string expression used to define the name of this named element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("nameExpression")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("nameExpression")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("nameExpression")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the namespace that owns the NamedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlNamespace::ownedMember");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("clientDependencies")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("clientDependencies")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("clientDependencies")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates the dependencies that reference the client.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("clientDependencies")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("clientDependencies")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamedElement")][QString::fromLatin1("clientDependencies")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlDependency::client");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlnamedelement.cpp"

