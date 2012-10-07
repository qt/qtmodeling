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

#include <QtUml/QPackage>
#include <QtUml/QNamespace>
#include <QtUml/QDependency>
#include <QtUml/QStringExpression>

QT_BEGIN_NAMESPACE_QTUML

class QNamedElementPrivate
{
public:
    explicit QNamedElementPrivate();
    virtual ~QNamedElementPrivate();

    QString name;
    QtUml::VisibilityKind visibility;
    QSet<QDependency *> *clientDependencies;
    QStringExpression *nameExpression;
    QNamespace *namespace_;
};

QNamedElementPrivate::QNamedElementPrivate() :
    clientDependencies(new QSet<QDependency *>),
    nameExpression(0),
    namespace_(0)
{
}

QNamedElementPrivate::~QNamedElementPrivate()
{
    delete clientDependencies;
}

/*!
    \class QNamedElement

    \inmodule QtUml

    \brief A named element supports using a string expression to specify its name. This allows names of model elements to involve template parameters. The actual name is evaluated from the string expression only when it is sensible to do so (e.g., when a template is bound).A named element is an element in a model that may have a name.
 */

QNamedElement::QNamedElement()
    : d_ptr(new QNamedElementPrivate)
{
}

QNamedElement::~QNamedElement()
{
    delete d_ptr;
}

/*!
    The name of the NamedElement.
 */
QString QNamedElement::name() const
{
    return d_ptr->name;
}

void QNamedElement::setName(QString name)
{
    d_ptr->name = name;
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QNamedElement::qualifiedName() const
{
    qWarning("To be implemented (this is a derived attribute)");
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QNamedElement::visibility() const
{
    return d_ptr->visibility;
}

void QNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
    d_ptr->visibility = visibility;
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QNamedElement::clientDependencies() const
{
    return d_ptr->clientDependencies;
}

void QNamedElement::addClientDependency(const QDependency *clientDependency)
{
    d_ptr->clientDependencies->insert(const_cast<QDependency *>(clientDependency));
    // Adjust subsetted property(ies)
}

void QNamedElement::removeClientDependency(const QDependency *clientDependency)
{
    d_ptr->clientDependencies->remove(const_cast<QDependency *>(clientDependency));
    // Adjust subsetted property(ies)
}

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QNamedElement::nameExpression() const
{
    return d_ptr->nameExpression;
}

void QNamedElement::setNameExpression(const QStringExpression *nameExpression)
{
    d_ptr->nameExpression = const_cast<QStringExpression *>(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QNamedElement::namespace_() const
{
    return d_ptr->namespace_;
}

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
const QList<QNamespace *> *QNamedElement::allNamespaces() const
{
    qWarning("To be implemented");
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
const QSet<QPackage *> *QNamedElement::allOwningPackages() const
{
    qWarning("To be implemented");
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QNamedElement::isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const
{
    qWarning("To be implemented");
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QNamedElement::separator() const
{
    qWarning("To be implemented");
}

QT_END_NAMESPACE_QTUML

