/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofnamedelement.h"
#include "qmofnamedelement_p.h"

#include "qmofnamespace_p.h"

#include <QtMof/QMofNamespace>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofNamedElementPrivate::QMofNamedElementPrivate() :
    namespace_(0)
{
}

QMofNamedElementPrivate::~QMofNamedElementPrivate()
{
}

void QMofNamedElementPrivate::setNamespace_(QMofNamespace *namespace_)
{
    // This is a read-only derived-union association end

    if (this->namespace_ != namespace_) {
        Q_Q(QMofNamedElement);
        // Adjust opposite property
        if (this->namespace_)
            (qwrappedobject_cast<QMofNamespacePrivate *>(this->namespace_->d_func()))->removeOwnedMember(q);

        this->namespace_ = namespace_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(this))->setOwner(qwrappedobject_cast<QMofElement *>(namespace_));

        // Adjust opposite property
        if (namespace_)
            (qwrappedobject_cast<QMofNamespacePrivate *>(namespace_->d_func()))->addOwnedMember(q);
    }
}

/*!
    \class QMofNamedElement

    \inmodule QtMof

    \brief A named element is an element in a model that may have a name.
 */

QMofNamedElement::QMofNamedElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(*new QMofNamedElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofNamedElement::QMofNamedElement(QMofNamedElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofNamedElement::~QMofNamedElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofNamedElement::name() const
{
    // This is a read-write attribute

    Q_D(const QMofNamedElement);
    return d->name;
}

void QMofNamedElement::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QMofNamedElement);
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
QtMof::VisibilityKind QMofNamedElement::visibility() const
{
    // This is a read-write attribute

    Q_D(const QMofNamedElement);
    return d->visibility;
}

void QMofNamedElement::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QMofNamedElement);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofNamedElement::qualifiedName() const
{
    // This is a read-only derived attribute

    Q_D(const QMofNamedElement);
    if (d->name.isEmpty()) return QString();
    QString qualifiedName_(d->name);
    QList<QMofNamespace *> allNamespaces_ = allNamespaces();
    QString separator_ = separator();
    foreach (QMofNamespace *namespace_, allNamespaces_) {
        if (namespace_->name().isEmpty())
            return QString();
        qualifiedName_.prepend(separator_).prepend(namespace_->name());
    }
    return qualifiedName_;
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofNamedElement::namespace_() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofNamedElement);
    return d->namespace_;
}

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QMofNamespace *> QMofNamedElement::allNamespaces() const
{
    Q_D(const QMofNamedElement);
    if (!d->namespace_) {
        return QList<QMofNamespace *>();
    }
    else {
        QList<QMofNamespace *> allNamespaces_;
        QMofNamespace *namespace_ = this->namespace_();
        while (namespace_) {
            allNamespaces_.append(namespace_);
            namespace_ = namespace_->namespace_();
        }
        return allNamespaces_;
    }
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QMofNamedElement::isDistinguishableFrom(const QMofNamedElement *n, const QMofNamespace *ns) const
{
    qWarning("QMofNamedElement::isDistinguishableFrom: operation to be implemented");
    Q_UNUSED(n);
    Q_UNUSED(ns);

    return bool(); // change here to your derived return
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QMofNamedElement::separator() const
{
    return QStringLiteral("::");
}

void QMofNamedElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The name of the NamedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("name")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("visibility")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("qualifiedName")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the namespace that owns the NamedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamedElement")][QString::fromLatin1("namespace_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofNamespace::ownedMember");

    QMofElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofnamedelement.cpp"

