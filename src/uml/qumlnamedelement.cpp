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
#include "qumlnamedelement_p.h"

#include <QtUml/QUmlDependency>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlNamedElementPrivate::QUmlNamedElementPrivate() :
    nameExpression(0),
    namespace_(0)
{
}

/*!
    \class QUmlNamedElement

    \inmodule QtUml

    \brief A named element supports using a string expression to specify its name. This allows names of model elements to involve template parameters. The actual name is evaluated from the string expression only when it is sensible to do so (e.g., when a template is bound).A named element is an element in a model that may have a name.
 */

QUmlNamedElement::QUmlNamedElement(bool create_d_ptr) :
    QUmlElement(false)
{
    if (create_d_ptr) {
        qDebug() << "QUmlNamedElement::QUmlNamedElement criando";
        set_d_ptr(new QUmlNamedElementPrivate);
    }
}

// Owned attributes

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlNamedElement::clientDependency() const
{
    return QSet<QUmlDependency *>();
}

void QUmlNamedElement::addClientDependency(QSet<QUmlDependency *> clientDependency)
{
    Q_UNUSED(clientDependency);
}

void QUmlNamedElement::removeClientDependency(QSet<QUmlDependency *> clientDependency)
{
    Q_UNUSED(clientDependency);
}

/*!
    The name of the NamedElement.
 */
QString QUmlNamedElement::name() const
{
    return QString();
}

void QUmlNamedElement::setName(QString name)
{
    Q_UNUSED(name);
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlNamedElement::nameExpression() const
{
    return 0;
}

void QUmlNamedElement::setNameExpression(QUmlStringExpression *nameExpression)
{
    Q_UNUSED(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlNamedElement::namespace_() const
{
    return 0;
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlNamedElement::qualifiedName() const
{
    return QString();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlNamedElement::visibility() const
{
    return QtUml::VisibilityKind();
}

void QUmlNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
    Q_UNUSED(visibility);
}

// Operations

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

