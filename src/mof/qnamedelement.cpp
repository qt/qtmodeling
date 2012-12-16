/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qnamedelement.h"
#include "qnamedelement_p.h"

#include "qnamespace_p.h"

#include <QtMof/QNamespace>

QT_BEGIN_NAMESPACE_QTMOF

QNamedElementPrivate::QNamedElementPrivate() :
    namespace_(0)
{
}

QNamedElementPrivate::~QNamedElementPrivate()
{
}

void QNamedElementPrivate::setNamespace_(QNamespace *namespace_)
{
    // This is a read-only derived-union association end

    if (this->namespace_ != namespace_) {
        Q_Q(QNamedElement);
        // Adjust opposite property
        if (this->namespace_)
            (qwrappedobject_cast<QNamespacePrivate *>(this->namespace_->d_func()))->removeOwnedMember(q);

        this->namespace_ = namespace_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(this))->setOwner(qwrappedobject_cast<QElement *>(namespace_));

        // Adjust opposite property
        if (namespace_)
            (qwrappedobject_cast<QNamespacePrivate *>(namespace_->d_func()))->addOwnedMember(q);
    }
}

/*!
    \class QNamedElement

    \inmodule QtMof

    \brief A named element is an element in a model that may have a name.
 */

QNamedElement::QNamedElement(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QNamedElementPrivate, parent, wrapper)
{
}

QNamedElement::QNamedElement(QNamedElementPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
}

QNamedElement::~QNamedElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QNamedElement::name() const
{
    // This is a read-write attribute

    Q_D(const QNamedElement);
    return d->name;
}

void QNamedElement::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QNamedElement);
    if (d->name != name) {
        d->name = name;
    }
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtMof::VisibilityKind QNamedElement::visibility() const
{
    // This is a read-write attribute

    Q_D(const QNamedElement);
    return d->visibility;
}

void QNamedElement::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QNamedElement);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QNamedElement::qualifiedName() const
{
    // This is a read-only derived attribute

    qWarning("QNamedElement::qualifiedName: to be implemented (this is a derived attribute)");

    return QString(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QNamedElement::namespace_() const
{
    // This is a read-only derived-union association end

    Q_D(const QNamedElement);
    return d->namespace_;
}

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
const QList<QNamespace *> *QNamedElement::allNamespaces() const
{
    qWarning("QNamedElement::allNamespaces: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QNamedElement::isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const
{
    qWarning("QNamedElement::isDistinguishableFrom: operation to be implemented");
    Q_UNUSED(n);
    Q_UNUSED(ns);

    return bool(); // change here to your derived return
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QNamedElement::separator() const
{
    qWarning("QNamedElement::separator: operation to be implemented");

    return QString(); // change here to your derived return
}

void QNamedElement::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *>("QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *> *");
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<const QSet<QNamedElement *> *>("const QSet<QNamedElement *> *");
    qRegisterMetaType<const QList<QNamedElement *> *>("const QList<QNamedElement *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *>("QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *");
    qRegisterMetaType<QNamespace *>("QNamespace *");
    qRegisterMetaType<const QSet<QNamespace *> *>("const QSet<QNamespace *> *");
    qRegisterMetaType<const QList<QNamespace *> *>("const QList<QNamespace *> *");


    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qnamedelement.cpp"

QT_END_NAMESPACE_QTMOF

