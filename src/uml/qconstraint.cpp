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

#include "qconstraint.h"
#include "qconstraint_p.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"

#include <QtUml/QElement>
#include <QtUml/QNamespace>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QConstraintPrivate::QConstraintPrivate() :
    context(0),
    specification(0),
    constrainedElements(new QList<QElement *>)
{
}

QConstraintPrivate::~QConstraintPrivate()
{
    delete constrainedElements;
}

void QConstraintPrivate::setContext(QNamespace *context)
{
    this->context = context;

    // Adjust subsetted property(ies)
    setNamespace_(context);
}

void QConstraintPrivate::setSpecification(QValueSpecification *specification)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->specification);

    this->specification = specification;

    // Adjust subsetted property(ies)
    addOwnedElement(specification);
}

void QConstraintPrivate::addConstrainedElement(QElement *constrainedElement)
{
    this->constrainedElements->append(constrainedElement);
}

void QConstraintPrivate::removeConstrainedElement(QElement *constrainedElement)
{
    this->constrainedElements->removeAll(constrainedElement);
}

/*!
    \class QConstraint

    \inmodule QtUml

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */

QConstraint::QConstraint(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QConstraintPrivate;
}

QConstraint::QConstraint(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QConstraintPrivate;
}

QConstraint::~QConstraint()
{
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QConstraint::context() const
{
    QTUML_D(const QConstraint);
    return d->context;
}

void QConstraint::setContext(QNamespace *context)
{
    QTUML_D(QConstraint);
    if (d->context != context) {
        d->setContext(context);

        // Adjust opposite property
        context->addOwnedRule(this);
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QValueSpecification *QConstraint::specification() const
{
    QTUML_D(const QConstraint);
    return d->specification;
}

void QConstraint::setSpecification(QValueSpecification *specification)
{
    QTUML_D(QConstraint);
    if (d->specification != specification) {
        d->setSpecification(specification);
    }
}

/*!
    The ordered set of Elements referenced by this Constraint.
 */
const QList<QElement *> *QConstraint::constrainedElements() const
{
    QTUML_D(const QConstraint);
    return d->constrainedElements;
}

void QConstraint::addConstrainedElement(QElement *constrainedElement)
{
    QTUML_D(QConstraint);
    if (!d->constrainedElements->contains(constrainedElement)) {
        d->addConstrainedElement(constrainedElement);
    }
}

void QConstraint::removeConstrainedElement(QElement *constrainedElement)
{
    QTUML_D(QConstraint);
    if (d->constrainedElements->contains(constrainedElement)) {
        d->removeConstrainedElement(constrainedElement);
    }
}

#include "moc_qconstraint.cpp"

QT_END_NAMESPACE_QTUML

