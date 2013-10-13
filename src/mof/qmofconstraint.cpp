/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofconstraint.h"

#include "private/qmofconstraintobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofValueSpecification>

/*!
    \class QMofConstraint

    \inmodule QtMof

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */
QMofConstraint::QMofConstraint(bool createQModelingObject) :
    _context(0),
    _specification(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofConstraintObject(this));
}

QModelingElement *QMofConstraint::clone() const
{
    QMofConstraint *c = new QMofConstraint;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    foreach (QMofElement *element, constrainedElements())
        c->addConstrainedElement(dynamic_cast<QMofElement *>(element->clone()));
    if (context())
        c->setContext(dynamic_cast<QMofNamespace *>(context()->clone()));
    if (specification())
        c->setSpecification(dynamic_cast<QMofValueSpecification *>(specification()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The ordered set of Elements referenced by this Constraint.
 */
const QList<QMofElement *> QMofConstraint::constrainedElements() const
{
    // This is a read-write association end

    return _constrainedElements;
}

void QMofConstraint::addConstrainedElement(QMofElement *constrainedElement)
{
    // This is a read-write association end

    if (!_constrainedElements.contains(constrainedElement)) {
        _constrainedElements.append(constrainedElement);
        if (constrainedElement && constrainedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(constrainedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeConstrainedElement(QObject *)));
    }
}

void QMofConstraint::removeConstrainedElement(QMofElement *constrainedElement)
{
    // This is a read-write association end

    if (_constrainedElements.contains(constrainedElement)) {
        _constrainedElements.removeAll(constrainedElement);
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofConstraint::context() const
{
    // This is a read-write association end

    return _context;
}

void QMofConstraint::setContext(QMofNamespace *context)
{
    // This is a read-write association end

    if (_context != context) {
        // Adjust subsetted properties

        _context = context;
        if (context && context->asQModelingObject() && this->asQModelingObject())
            QObject::connect(context->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setContext()));

        // Adjust subsetted properties
        setNamespace(context);
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QMofValueSpecification *QMofConstraint::specification() const
{
    // This is a read-write association end

    return _specification;
}

void QMofConstraint::setSpecification(QMofValueSpecification *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        // Adjust subsetted properties
        removeOwnedElement(_specification);

        _specification = specification;
        if (specification && specification->asQModelingObject() && this->asQModelingObject())
            QObject::connect(specification->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSpecification()));
        specification->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (specification) {
            addOwnedElement(specification);
        }
    }
}

