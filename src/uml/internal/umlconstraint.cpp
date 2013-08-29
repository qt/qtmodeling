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
#include "umlconstraint_p.h"

#include "private/umlelement_p.h"
#include "private/umlnamespace_p.h"
#include "private/umlvaluespecification_p.h"

/*!
    \class UmlConstraint

    \inmodule QtUml

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */

UmlConstraint::UmlConstraint() :
    _context(0),
    _specification(0)
{
}

// OWNED ATTRIBUTES

/*!
    The ordered set of Elements referenced by this Constraint.
 */
const QList<UmlElement *> UmlConstraint::constrainedElement() const
{
    // This is a read-write association end

    return _constrainedElement;
}

void UmlConstraint::addConstrainedElement(UmlElement *constrainedElement)
{
    // This is a read-write association end

    if (!_constrainedElement.contains(constrainedElement)) {
        _constrainedElement.append(constrainedElement);
    }
}

void UmlConstraint::removeConstrainedElement(UmlElement *constrainedElement)
{
    // This is a read-write association end

    if (_constrainedElement.contains(constrainedElement)) {
        _constrainedElement.removeAll(constrainedElement);
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
UmlNamespace *UmlConstraint::context() const
{
    // This is a read-write association end

    return _context;
}

void UmlConstraint::setContext(UmlNamespace *context)
{
    // This is a read-write association end

    if (_context != context) {
        // Adjust subsetted properties

        _context = context;

        // Adjust subsetted properties
        setNamespace(context);
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
UmlValueSpecification *UmlConstraint::specification() const
{
    // This is a read-write association end

    return _specification;
}

void UmlConstraint::setSpecification(UmlValueSpecification *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        // Adjust subsetted properties
        removeOwnedElement(_specification);

        _specification = specification;

        // Adjust subsetted properties
        if (specification) {
            addOwnedElement(specification);
        }
    }
}

