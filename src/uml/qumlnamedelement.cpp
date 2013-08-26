/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlnamedelement.h"

#include <QtUml/QUmlDependency>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlNamedElement

    \inmodule QtUml

    \brief A named element supports using a string expression to specify its name. This allows names of model elements to involve template parameters. The actual name is evaluated from the string expression only when it is sensible to do so (e.g., when a template is bound).A named element is an element in a model that may have a name.
 */

QUmlNamedElement::QUmlNamedElement() :
    _nameExpression(0),
    _namespace_(0)
{
}

// OWNED ATTRIBUTES

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlNamedElement::clientDependency() const
{
    // This is a read-write association end

    return _clientDependency;
}

void QUmlNamedElement::addClientDependency(QUmlDependency *clientDependency)
{
    // This is a read-write association end

    if (!_clientDependency.contains(clientDependency)) {
        _clientDependency.insert(clientDependency);
    }
}

void QUmlNamedElement::removeClientDependency(QUmlDependency *clientDependency)
{
    // This is a read-write association end

    if (_clientDependency.contains(clientDependency)) {
        _clientDependency.remove(clientDependency);
    }
}

/*!
    The name of the NamedElement.
 */
QString QUmlNamedElement::name() const
{
    // This is a read-write property

    return _name;
}

void QUmlNamedElement::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
    }
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlNamedElement::nameExpression() const
{
    // This is a read-write association end

    return _nameExpression;
}

void QUmlNamedElement::setNameExpression(QUmlStringExpression *nameExpression)
{
    // This is a read-write association end

    if (_nameExpression != nameExpression) {
        _nameExpression = nameExpression;
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlNamedElement::namespace_() const
{
    // This is a read-only derived union association end

    return _namespace_;
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlNamedElement::qualifiedName() const
{
    // This is a read-only derived property

    qWarning("QUmlNamedElement::qualifiedName(): to be implemented (this is a derived property)");

    return QString();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlNamedElement::visibility() const
{
    // This is a read-write property

    return _visibility;
}

void QUmlNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write property

    if (_visibility != visibility) {
        _visibility = visibility;
    }
}

// OPERATIONS

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlNamedElement::allNamespaces() const
{
    return QList<QUmlNamespace *> ();
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlNamedElement::allOwningPackages() const
{
    return QSet<QUmlPackage *> ();
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlNamedElement::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    Q_UNUSED(n);
    Q_UNUSED(ns);
    return bool ();
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlNamedElement::separator() const
{
    return QString ();
}

QT_END_NAMESPACE

