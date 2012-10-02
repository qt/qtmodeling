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
//#include "qnamedelement_p.h"

QT_BEGIN_NAMESPACE_QTUML

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
}

void QNamedElement::setName(QString name)
{
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QNamedElement::visibility() const
{
}

void QNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
}

/*!
    Indicates the dependencies that reference the client.
 */
QList<QDependency *> *QNamedElement::clientDependency()
{
}

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QNamedElement::nameExpression() const
{
}

void QNamedElement::setNameExpression(QStringExpression *nameExpression)
{
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
const QNamespace *QNamedElement::namespace_() const
{
}

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
const QList<QNamespace *> *QNamedElement::allNamespaces() const
{
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
const QList<QPackage *> *QNamedElement::allOwningPackages() const
{
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QNamedElement::isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const
{
}

/*!
    When there is a name, and all of the containing namespaces have a name, the qualified name is constructed from the names of the containing namespaces.
 */
QString QNamedElement::qualifiedName() const
{
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QNamedElement::separator() const
{
}

QT_END_NAMESPACE_QTUML

