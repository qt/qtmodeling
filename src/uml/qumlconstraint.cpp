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

#include "private/qumlconstraintobject_p.h"

#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlConstraint

    \inmodule QtUml

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */
QUmlConstraint::QUmlConstraint(bool createQObject) :
    _context(0),
    _specification(0)
{
    if (createQObject)
        _qObject = new QUmlConstraintObject(this);
}

QUmlConstraint::~QUmlConstraint()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    The ordered set of Elements referenced by this Constraint.
 */
const QList<QUmlElement *> 
QUmlConstraint::constrainedElement() const
{
    // This is a read-write association end

    return _constrainedElement;
}

void QUmlConstraint::addConstrainedElement(QUmlElement *constrainedElement)
{
    // This is a read-write association end

    if (!_constrainedElement.contains(constrainedElement)) {
        _constrainedElement.append(constrainedElement);
        if (constrainedElement->asQObject() && this->asQObject())
            QObject::connect(constrainedElement->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeConstrainedElement(QObject *)));
    }
}

void QUmlConstraint::removeConstrainedElement(QUmlElement *constrainedElement)
{
    // This is a read-write association end

    if (_constrainedElement.contains(constrainedElement)) {
        _constrainedElement.removeAll(constrainedElement);
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *
QUmlConstraint::context() const
{
    // This is a read-write association end

    return _context;
}

void QUmlConstraint::setContext(QUmlNamespace *context)
{
    // This is a read-write association end

    if (_context != context) {
        // Adjust subsetted properties

        _context = context;
        if (context->asQObject() && this->asQObject())
            QObject::connect(context->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setContext()));

        // Adjust subsetted properties
        setNamespace(context);
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QUmlValueSpecification *
QUmlConstraint::specification() const
{
    // This is a read-write association end

    return _specification;
}

void QUmlConstraint::setSpecification(QUmlValueSpecification *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        // Adjust subsetted properties
        removeOwnedElement(_specification);

        _specification = specification;
        if (specification->asQObject() && this->asQObject())
            QObject::connect(specification->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSpecification()));
        specification->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (specification) {
            addOwnedElement(specification);
        }
    }
}

