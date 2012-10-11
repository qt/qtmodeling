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

#include "qnamedelement.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QPackage>
#include <QtUml/QNamespace>
#include <QtUml/QDependency>
#include <QtUml/QStringExpression>

QT_BEGIN_NAMESPACE_QTUML

QNamedElementPrivate::QNamedElementPrivate() :
    nameExpression(0),
    namespace_(0),
    clientDependencies(new QSet<QDependency *>)
{
}

QNamedElementPrivate::~QNamedElementPrivate()
{
    delete clientDependencies;
}

void QNamedElementPrivate::setName(QString name)
{
    this->name = name;
}

void QNamedElementPrivate::setVisibility(QtUml::VisibilityKind visibility)
{
    this->visibility = visibility;
}

void QNamedElementPrivate::setNameExpression(const QStringExpression *nameExpression)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->nameExpression);

    this->nameExpression = const_cast<QStringExpression *>(nameExpression);

    // Adjust subsetted property(ies)
    addOwnedElement(nameExpression);
}

void QNamedElementPrivate::setNamespace_(const QNamespace *namespace_)
{
    this->namespace_ = const_cast<QNamespace *>(namespace_);

    // Adjust subsetted property(ies)
    setOwner(namespace_);
}

void QNamedElementPrivate::addClientDependency(const QDependency *clientDependency)
{
    this->clientDependencies->insert(const_cast<QDependency *>(clientDependency));
}

void QNamedElementPrivate::removeClientDependency(const QDependency *clientDependency)
{
    this->clientDependencies->remove(const_cast<QDependency *>(clientDependency));
}

/*!
    \class QNamedElement

    \inmodule QtUml

    \brief A named element supports using a string expression to specify its name. This allows names of model elements to involve template parameters. The actual name is evaluated from the string expression only when it is sensible to do so (e.g., when a template is bound).A named element is an element in a model that may have a name.
 */

QNamedElement::QNamedElement()
{
}

QNamedElement::~QNamedElement()
{
}

/*!
    The name of the NamedElement.
 */
QString QNamedElement::name() const
{
    QTUML_D(const QNamedElement);
    return d->name;
}

void QNamedElement::setName(QString name)
{
    QTUML_D(QNamedElement);
    d->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QNamedElement::visibility() const
{
    QTUML_D(const QNamedElement);
    return d->visibility;
}

void QNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
    QTUML_D(QNamedElement);
    d->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QNamedElement::qualifiedName() const
{
    QTUML_D(const QNamedElement);
    if (d->name.isEmpty()) return QString();
    QString qualifiedName_(d->name);
    QScopedPointer< const QList<QNamespace *> > allNamespaces_(allNamespaces());
    QString separator_ = separator();
    foreach (QNamespace *namespace_, *allNamespaces_) {
        if (namespace_->name().isEmpty())
            return QString();
        qualifiedName_.prepend(separator_).prepend(namespace_->name());
    }
    return qualifiedName_;
}

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QNamedElement::nameExpression() const
{
    QTUML_D(const QNamedElement);
    return d->nameExpression;
}

void QNamedElement::setNameExpression(const QStringExpression *nameExpression)
{
    QTUML_D(QNamedElement);
    d->setNameExpression(const_cast<QStringExpression *>(nameExpression));
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QNamedElement::namespace_() const
{
    QTUML_D(const QNamedElement);
    return d->namespace_;
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QNamedElement::clientDependencies() const
{
    QTUML_D(const QNamedElement);
    return d->clientDependencies;
}

void QNamedElement::addClientDependency(const QDependency *clientDependency)
{
    QTUML_D(QNamedElement);
    d->addClientDependency(const_cast<QDependency *>(clientDependency));
}

void QNamedElement::removeClientDependency(const QDependency *clientDependency)
{
    QTUML_D(QNamedElement);
    d->removeClientDependency(const_cast<QDependency *>(clientDependency));
}

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
    It is the caller's responsibility to delete the returned list.
 */
const QList<QNamespace *> *QNamedElement::allNamespaces() const
{
    QTUML_D(const QNamedElement);
    if (!d->namespace_) {
        return new QList<QNamespace *>;
    }
    else {
        QList<QNamespace *> *allNamespaces_ = const_cast<QList<QNamespace *> *>(d->namespace_->allNamespaces());
        allNamespaces_->append(d->namespace_);
    }
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
const QSet<QPackage *> *QNamedElement::allOwningPackages() const
{
    qWarning("QNamedElement::allOwningPackages: operation to be implemented");
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QNamedElement::isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const
{
    qWarning("QNamedElement::isDistinguishableFrom: operation to be implemented");
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QNamedElement::separator() const
{
    return "::";
}

QT_END_NAMESPACE_QTUML

