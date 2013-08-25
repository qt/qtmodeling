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
#include "qumlconstraint.h"
#include "qumlconstraint_p.h"

#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlConstraintPrivate::QUmlConstraintPrivate() :
    context(0),
    specification(0)
{
}

/*!
    \class QUmlConstraint

    \inmodule QtUml

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */

QUmlConstraint::QUmlConstraint(bool create_d_ptr) :
    QUmlPackageableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlConstraintPrivate);
}

// OWNED ATTRIBUTES

/*!
    The ordered set of Elements referenced by this Constraint.
 */
QList<QUmlElement *> QUmlConstraint::constrainedElement() const
{
    // This is a read-write association end

    QM_D(const QUmlConstraint);
    return d->constrainedElement;
}

void QUmlConstraint::addConstrainedElement(QUmlElement *constrainedElement)
{
    // This is a read-write association end

    QM_D(QUmlConstraint);
    if (!d->constrainedElement.contains(constrainedElement)) {
        d->constrainedElement.append(constrainedElement);
    }
}

void QUmlConstraint::removeConstrainedElement(QUmlElement *constrainedElement)
{
    // This is a read-write association end

    QM_D(QUmlConstraint);
    if (d->constrainedElement.contains(constrainedElement)) {
        d->constrainedElement.removeAll(constrainedElement);
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlConstraint::context() const
{
    // This is a read-write association end

    QM_D(const QUmlConstraint);
    return d->context;
}

void QUmlConstraint::setContext(QUmlNamespace *context)
{
    // This is a read-write association end

    QM_D(QUmlConstraint);
    if (d->context != context) {
        d->context = context;
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QUmlValueSpecification *QUmlConstraint::specification() const
{
    // This is a read-write association end

    QM_D(const QUmlConstraint);
    return d->specification;
}

void QUmlConstraint::setSpecification(QUmlValueSpecification *specification)
{
    // This is a read-write association end

    QM_D(QUmlConstraint);
    if (d->specification != specification) {
        d->specification = specification;
    }
}

QT_END_NAMESPACE

