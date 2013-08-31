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
#include "umlnamedelement_p.h"

#include "private/umldependency_p.h"
#include "private/umlnamespace_p.h"
#include "private/umlpackage_p.h"
#include "private/umlstringexpression_p.h"

UmlNamedElement::UmlNamedElement() :
    _nameExpression(0),
    _namespace_(0)
{
}

// OWNED ATTRIBUTES

const QSet<UmlDependency *> UmlNamedElement::clientDependency() const
{
    // This is a read-write association end

    return _clientDependency;
}

void UmlNamedElement::addClientDependency(UmlDependency *clientDependency)
{
    // This is a read-write association end

    if (!_clientDependency.contains(clientDependency)) {
        _clientDependency.insert(clientDependency);

        // Adjust opposite properties
        if (clientDependency) {
            clientDependency->addClient(this);
        }
    }
}

void UmlNamedElement::removeClientDependency(UmlDependency *clientDependency)
{
    // This is a read-write association end

    if (_clientDependency.contains(clientDependency)) {
        _clientDependency.remove(clientDependency);

        // Adjust opposite properties
        if (clientDependency) {
            clientDependency->removeClient(this);
        }
    }
}

QString UmlNamedElement::name() const
{
    // This is a read-write property

    return _name;
}

void UmlNamedElement::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
    }
}

UmlStringExpression *UmlNamedElement::nameExpression() const
{
    // This is a read-write association end

    return _nameExpression;
}

void UmlNamedElement::setNameExpression(UmlStringExpression *nameExpression)
{
    // This is a read-write association end

    if (_nameExpression != nameExpression) {
        // Adjust subsetted properties
        removeOwnedElement(_nameExpression);

        _nameExpression = nameExpression;

        // Adjust subsetted properties
        if (nameExpression) {
            addOwnedElement(nameExpression);
        }
    }
}

UmlNamespace *UmlNamedElement::namespace_() const
{
    // This is a read-only derived union association end

    return _namespace_;
}

void UmlNamedElement::setNamespace(UmlNamespace *namespace_)
{
    // This is a read-only derived union association end

    if (_namespace_ != namespace_) {
        // Adjust subsetted properties

        _namespace_ = namespace_;

        // Adjust subsetted properties
        setOwner(namespace_);
    }
}

QString UmlNamedElement::qualifiedName() const
{
    // This is a read-only derived property

    qWarning("UmlNamedElement::qualifiedName(): to be implemented (this is a derived property)");

    return QString();
}

void UmlNamedElement::setQualifiedName(QString qualifiedName)
{
    // This is a read-only derived property

    qWarning("UmlNamedElement::qualifiedName(): to be implemented (this is a derived property)");
    Q_UNUSED(qualifiedName);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

QtUml::VisibilityKind UmlNamedElement::visibility() const
{
    // This is a read-write property

    return _visibility;
}

void UmlNamedElement::setVisibility(QtUml::VisibilityKind visibility)
{
    // This is a read-write property

    if (_visibility != visibility) {
        _visibility = visibility;
    }
}

// OPERATIONS

QList<UmlNamespace *> UmlNamedElement::allNamespaces(
    ) const
{
    qWarning("UmlNamedElement::allNamespaces(): to be implemented (operation)");

    return QList<UmlNamespace *> ();
}

QSet<UmlPackage *> UmlNamedElement::allOwningPackages(
    ) const
{
    qWarning("UmlNamedElement::allOwningPackages(): to be implemented (operation)");

    return QSet<UmlPackage *> ();
}

bool UmlNamedElement::isDistinguishableFrom(
    UmlNamedElement *n, UmlNamespace *ns) const
{
    qWarning("UmlNamedElement::isDistinguishableFrom(): to be implemented (operation)");

    Q_UNUSED(n);
    Q_UNUSED(ns);
    return bool ();
}

QString UmlNamedElement::separator(
    ) const
{
    qWarning("UmlNamedElement::separator(): to be implemented (operation)");

    return QString ();
}

